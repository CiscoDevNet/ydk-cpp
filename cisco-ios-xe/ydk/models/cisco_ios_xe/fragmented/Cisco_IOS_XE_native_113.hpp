#ifndef _CISCO_IOS_XE_NATIVE_113_
#define _CISCO_IOS_XE_NATIVE_113_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_106.hpp"
#include "Cisco_IOS_XE_native_112.hpp"
#include "Cisco_IOS_XE_native_87.hpp"
#include "Cisco_IOS_XE_native_98.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode : public ydk::Entity
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

        class Sso; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso : public ydk::Entity
{
    public:
        Sso();
        ~Sso();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefer; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::HaMode::Sso


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap : public ydk::Entity
{
    public:
        InjectMap();
        ~InjectMap();

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
        ydk::YLeaf exist_map; //type: string
        ydk::YLeaf copy_attributes; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::InjectMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::RouteMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer : public ydk::Entity
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

        class Detection; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::Detection


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup : public ydk::Entity
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

        class Dynamic; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup : public ydk::Entity
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

        class Split; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split> split;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::UpdateGroup::Split


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop : public ydk::Entity
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
        class Trigger; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger> trigger;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Nexthop::Trigger


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp : public ydk::Entity
{
    public:
        Regexp();
        ~Regexp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deterministic; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Regexp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_mtu_discovery; //type: boolean

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Bgp_::Transport


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DefaultInformation


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bgp_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_
        class AdmDistance; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_> bgp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance> > adm_distance;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_ : public ydk::Entity
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

        ydk::YLeaf extern_as; //type: uint16
        ydk::YLeaf internal_as; //type: uint16
        ydk::YLeaf local; //type: uint16

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::Bgp_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance : public ydk::Entity
{
    public:
        AdmDistance();
        ~AdmDistance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf distance; //type: uint16
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf wildbits; //type: string
        ydk::YLeaf acl; //type: one of uint16, string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Distance::AdmDistance


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList : public ydk::Entity
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

        ydk::YLeaf id; //type: one of uint16, string
        class In; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In
        class Out; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In> in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out> out; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In : public ydk::Entity
{
    public:
        In();
        ~In();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::In


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::DistributeList::Out


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths : public ydk::Entity
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

        ydk::YLeaf eibgp; //type: uint16
        class MaxPath; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath
        class ExternalRtfilter; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter
        class Ibgp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath> max_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter> external_rtfilter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp> ibgp;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath : public ydk::Entity
{
    public:
        MaxPath();
        ~MaxPath();

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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::MaxPath


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::ExternalRtfilter


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::MaximumPaths::Ibgp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor : public ydk::Entity
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
        ydk::YLeaf remote_as; //type: one of string, uint32
        ydk::YLeaf activate; //type: empty
        ydk::YLeaf allow_policy; //type: empty
        ydk::YLeaf advertisement_interval; //type: uint16
        ydk::YLeaf cluster_id; //type: one of string, uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf disable_connected_check; //type: empty
        ydk::YLeaf dmzlink_bw; //type: empty
        ydk::YLeaf next_hop_self; //type: empty
        ydk::YLeaf next_hop_unchanged; //type: empty
        ydk::YLeaf remove_private_as; //type: empty
        ydk::YLeaf route_reflector_client; //type: empty
        ydk::YLeaf route_reflector_cluster_id; //type: one of string, uint32
        ydk::YLeaf soo; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf soft_reconfiguration; //type: SoftReconfiguration
        ydk::YLeaf unsuppress_map; //type: string
        ydk::YLeaf version; //type: uint16
        ydk::YLeaf weight; //type: uint16
        class PeerGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup
        class LocalAs; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths
        class Advertise; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise
        class AdvertiseMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap
        class Aigp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp
        class Announce; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce
        class AllowasIn; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn
        class AsOverride; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride
        class Capability; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability
        class DefaultOriginate; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate
        class DistributeList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList
        class EbgpMultihop; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop
        class FallOver; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver
        class FilterList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList
        class Inherit; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit
        class LogNeighborChanges; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges
        class MaximumPrefix; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix
        class Password; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password
        class PrefixList; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList
        class PathAttribute; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute
        class RouteMap; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap
        class SendCommunity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity
        class SendLabel; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel
        class SlowPeer; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer
        class Timers; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers
        class TranslateUpdate; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate
        class Transport; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport
        class TtlSecurity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity
        class UpdateSource; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource
        class HaMode; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup> peer_group; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs> local_as; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap> advertise_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp> aigp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce> announce;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn> allowas_in; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride> as_override; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability> capability;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate> default_originate; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList> > distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop> ebgp_multihop; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver> fall_over;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList> > filter_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit> inherit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges> log_neighbor_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix> maximum_prefix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password> password;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList> > prefix_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute> path_attribute;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap> > route_map;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity> send_community; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel> send_label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer> slow_peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers> timers;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate> translate_update;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport> transport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity> ttl_security;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource> update_source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode> ha_mode;
                class SoftReconfiguration;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PeerGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs : public ydk::Entity
{
    public:
        LocalAs();
        ~LocalAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: one of string, uint32
        ydk::YLeaf no_prepend; //type: empty
        ydk::YLeaf replace_as; //type: empty
        ydk::YLeaf dual_as; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LocalAs


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths : public ydk::Entity
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
        class Send; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send> send; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdditionalPaths::Send


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise : public ydk::Entity
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
        class AdditionalPaths; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths
        class DiversePath; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths> additional_paths;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath> diverse_path;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths : public ydk::Entity
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

        class All; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All
        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All> all; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All : public ydk::Entity
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

        class Best; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best> best;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best : public ydk::Entity
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

        class BestRange; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange> > best_range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::All::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best : public ydk::Entity
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

        class BestRange; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange> > best_range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange : public ydk::Entity
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
        class GroupBest; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest> group_best; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::AdditionalPaths::GroupBest


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath : public ydk::Entity
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
        class Backup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup> backup; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Advertise::DiversePath::Backup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap : public ydk::Entity
{
    public:
        AdvertiseMap();
        ~AdvertiseMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name> > name;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf exist_map; //type: string
        ydk::YLeaf non_exist_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AdvertiseMap::Name


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp : public ydk::Entity
{
    public:
        Aigp();
        ~Aigp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Send; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send> send;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send : public ydk::Entity
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

        ydk::YLeaf med; //type: empty
        class CostCommunity; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity> cost_community;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity : public ydk::Entity
{
    public:
        CostCommunity();
        ~CostCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CcRange; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange> > cc_range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange : public ydk::Entity
{
    public:
        CcRange();
        ~CcRange();

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
        class Poi; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi> poi;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi : public ydk::Entity
{
    public:
        Poi();
        ~Poi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IgpCost; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost
        class PreBestpath; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost> igp_cost; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath> pre_bestpath; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost : public ydk::Entity
{
    public:
        IgpCost();
        ~IgpCost();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transitive; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::IgpCost


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath : public ydk::Entity
{
    public:
        PreBestpath();
        ~PreBestpath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transitive; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Aigp::Send::CostCommunity::CcRange::Poi::PreBestpath


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce : public ydk::Entity
{
    public:
        Announce();
        ~Announce();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rpki; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki> rpki;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki : public ydk::Entity
{
    public:
        Rpki();
        ~Rpki();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Announce::Rpki


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AllowasIn


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride : public ydk::Entity
{
    public:
        AsOverride();
        ~AsOverride();

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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::AsOverride


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability : public ydk::Entity
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

        class Orf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf> orf;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DefaultOriginate


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop : public ydk::Entity
{
    public:
        EbgpMultihop();
        ~EbgpMultihop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_hop; //type: uint8

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::EbgpMultihop


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver : public ydk::Entity
{
    public:
        FallOver();
        ~FallOver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Bfd; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd> bfd; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FallOver::Bfd


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Inherit


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges : public ydk::Entity
{
    public:
        LogNeighborChanges();
        ~LogNeighborChanges();

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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::LogNeighborChanges


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::MaximumPrefix


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Password


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute : public ydk::Entity
{
    public:
        PathAttribute();
        ~PathAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discard; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard
        class TreatAsWithdraw; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard> discard;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw> treat_as_withdraw;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard : public ydk::Entity
{
    public:
        Discard();
        ~Discard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttibuteType; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::AttibuteType
        class Range; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::AttibuteType> attibute_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range> range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::AttibuteType : public ydk::Entity
{
    public:
        AttibuteType();
        ~AttibuteType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::AttibuteType


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range : public ydk::Entity
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

        ydk::YLeaf start_value; //type: uint8
        ydk::YLeaf end_value; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::Discard::Range


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw : public ydk::Entity
{
    public:
        TreatAsWithdraw();
        ~TreatAsWithdraw();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttibuteType; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType
        class Range; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType> attibute_type;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range> range;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType : public ydk::Entity
{
    public:
        AttibuteType();
        ~AttibuteType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range : public ydk::Entity
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

        ydk::YLeaf start_value; //type: uint8
        ydk::YLeaf end_value; //type: uint8
        ydk::YLeaf in; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PathAttribute::TreatAsWithdraw::Range


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel : public ydk::Entity
{
    public:
        SendLabel();
        ~SendLabel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf send_label_explicit; //type: SendLabelExplicit
        class SendLabelExplicit;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer : public ydk::Entity
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

        class Detection; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection
        class SplitUpdateGroup; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection> detection; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup> split_update_group;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::Detection


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup : public ydk::Entity
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

        class Dynamic; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic> dynamic; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers : public ydk::Entity
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

        ydk::YLeaf keepalive_interval; //type: uint16
        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf minimum_neighbor_hold; //type: uint16

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Timers


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate : public ydk::Entity
{
    public:
        TranslateUpdate();
        ~TranslateUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4> ipv4;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4 : public ydk::Entity
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

        class Multicast; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast> multicast; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast : public ydk::Entity
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

        ydk::YLeaf unicast; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TranslateUpdate::Ipv4::Multicast


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connection_mode; //type: ConnectionMode
        ydk::YLeaf multi_session; //type: empty
        class PathMtuDiscovery; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery> path_mtu_discovery; // presence node
                class ConnectionMode;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery : public ydk::Entity
{
    public:
        PathMtuDiscovery();
        ~PathMtuDiscovery();

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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::PathMtuDiscovery


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity : public ydk::Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hops; //type: uint8

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::TtlSecurity


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource : public ydk::Entity
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
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
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
        class ATMSubinterface; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::ATMSubinterface : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::ATMSubinterface


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::ATMACRsubinterface : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::ATMACRsubinterface


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LISPSubinterface : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::LISPSubinterface


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::UpdateSource::PortChannelSubinterface


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode : public ydk::Entity
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

        class GracefulRestart; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart
        class Sso; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso> sso; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::GracefulRestart


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso : public ydk::Entity
{
    public:
        Sso();
        ~Sso();

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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::HaMode::Sso


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network : public ydk::Entity
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
        ydk::YLeaf backdoor; //type: empty
        ydk::YLeaf mask; //type: string
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Network


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Application; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application
        class Bgp_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_
        class Connected; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected
        class Dvmrp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp
        class Eigrp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp
        class Isis; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis
        class Lisp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp
        class IsoIgrp; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile
        class Odr; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr
        class Ospf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf
        class Rip; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip
        class Static_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application> application; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected> connected; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp> dvmrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp> eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp> lisp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp> iso_igrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip> rip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name> > name;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

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
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Application::Name


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_ : public ydk::Entity
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

        ydk::YLeaf as_no; //type: one of string, uint32
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Bgp_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected : public ydk::Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Connected


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp : public ydk::Entity
{
    public:
        Dvmrp();
        ~Dvmrp();

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
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Dvmrp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp : public ydk::Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_no; //type: uint16
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Eigrp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsisArea; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea
        class Default_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_> default_;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea : public ydk::Entity
{
    public:
        IsisArea();
        ~IsisArea();

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
        ydk::YLeaf ip; //type: empty
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf routes; //type: Routes
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Routes;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: empty
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf routes; //type: Routes
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Routes;

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp : public ydk::Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Lisp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp : public ydk::Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IsoIgrpArea; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea
        class Default_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea> > iso_igrp_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_> default_;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea : public ydk::Entity
{
    public:
        IsoIgrpArea();
        ~IsoIgrpArea();

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
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::IsoIgrpArea


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_ : public ydk::Entity
{
    public:
        Default_();
        ~Default_();

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
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::IsoIgrp::Default_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Mobile


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr : public ydk::Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Odr


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf : public ydk::Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        class Vrf_; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_
        class NonVrf; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf> non_vrf;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_ : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match> match;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::Vrf_::Match


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf : public ydk::Entity
{
    public:
        NonVrf();
        ~NonVrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Match; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match> match;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match : public ydk::Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal; //type: empty
        ydk::YLeaf external; //type: RedistOspfExternalType
        ydk::YLeaf external2; //type: RedistOspfExternalType
        ydk::YLeaf nssa_external; //type: RedistOspfExternalType
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Ospf::NonVrf::Match


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip : public ydk::Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        ydk::YLeaf name; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Rip


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string
        class Clns; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns
        class Ip; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns> clns; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip> ip; // presence node
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns : public ydk::Entity
{
    public:
        Clns();
        ~Clns();

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
        ydk::YLeaf metric; //type: uint32

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Clns


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Static_::Ip


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap : public ydk::Entity
{
    public:
        TableMap();
        ~TableMap();

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
        ydk::YLeaf filter; //type: empty

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::TableMap


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp : public ydk::Entity
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

        class Context; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context> context;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context : public ydk::Entity
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

        class ContextWord; //type: Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::ContextWord

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::ContextWord> > context_word;
        
}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context


class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::ContextWord : public ydk::Entity
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

}; // Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Snmp::Context::ContextWord


class Native::Router::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

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

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf help; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf ignore_lsp_errors; //type: empty
        ydk::YLeaf is_type; //type: IsType
        ydk::YLeaf lsp_mtu; //type: uint32
        ydk::YLeaf lsp_refresh_interval; //type: uint32
        ydk::YLeaf max_area_addresses; //type: uint32
        ydk::YLeaf max_lsp_lifetime; //type: uint32
        ydk::YLeaf update_queue_depth; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf adjacency_check; //type: empty
        ydk::YLeaf router_id; //type: string
        class MetricStyle; //type: Native::Router::Isis::MetricStyle
        class AddressFamily; //type: Native::Router::Isis::AddressFamily
        class Distance; //type: Native::Router::Isis::Distance
        class Ip; //type: Native::Router::Isis::Ip
        class Redistribute; //type: Native::Router::Isis::Redistribute
        class SetAttachedBit; //type: Native::Router::Isis::SetAttachedBit
        class Snmp; //type: Native::Router::Isis::Snmp
        class SummaryAddress; //type: Native::Router::Isis::SummaryAddress
        class TrafficShare; //type: Native::Router::Isis::TrafficShare
        class Advertise; //type: Native::Router::Isis::Advertise
        class DefaultInformation; //type: Native::Router::Isis::DefaultInformation
        class Metric; //type: Native::Router::Isis::Metric
        class PrcInterval; //type: Native::Router::Isis::PrcInterval
        class SetOverloadBit; //type: Native::Router::Isis::SetOverloadBit
        class SpfInterval; //type: Native::Router::Isis::SpfInterval
        class AreaPassword; //type: Native::Router::Isis::AreaPassword
        class Authentication; //type: Native::Router::Isis::Authentication
        class DistributeList; //type: Native::Router::Isis::DistributeList
        class DomainPassword; //type: Native::Router::Isis::DomainPassword
        class FastFlood; //type: Native::Router::Isis::FastFlood
        class FastReroute; //type: Native::Router::Isis::FastReroute
        class TiLfa; //type: Native::Router::Isis::TiLfa
        class Hello; //type: Native::Router::Isis::Hello
        class Hostname; //type: Native::Router::Isis::Hostname
        class Ispf; //type: Native::Router::Isis::Ispf
        class LogAdjacencyChanges; //type: Native::Router::Isis::LogAdjacencyChanges
        class LspFull; //type: Native::Router::Isis::LspFull
        class LspGenInterval; //type: Native::Router::Isis::LspGenInterval
        class Microloop; //type: Native::Router::Isis::Microloop
        class Mpls; //type: Native::Router::Isis::Mpls
        class Net; //type: Native::Router::Isis::Net
        class Nsf; //type: Native::Router::Isis::Nsf
        class Partition; //type: Native::Router::Isis::Partition
        class PassiveInterface; //type: Native::Router::Isis::PassiveInterface
        class Disable; //type: Native::Router::Isis::Disable
        class Protocol; //type: Native::Router::Isis::Protocol
        class SegmentRouting; //type: Native::Router::Isis::SegmentRouting
        class Skeptical; //type: Native::Router::Isis::Skeptical
        class Use; //type: Native::Router::Isis::Use
        class Bfd; //type: Native::Router::Isis::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle> metric_style;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily> address_family;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Distance> > distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SetAttachedBit> set_attached_bit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Snmp> snmp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SummaryAddress> > summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::PrcInterval> prc_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SpfInterval> spf_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AreaPassword> area_password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::DomainPassword> domain_password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastFlood> fast_flood; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::FastReroute> fast_reroute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::TiLfa> ti_lfa;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Hostname> hostname;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Ispf> ispf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspFull> lsp_full;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::LspGenInterval> lsp_gen_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Microloop> microloop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Mpls> mpls;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Net> > net;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Nsf> nsf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Partition> partition;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::PassiveInterface> passive_interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Disable> disable;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Protocol> protocol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::SegmentRouting> segment_routing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Skeptical> skeptical;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Use> use;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::Bfd> bfd;
                class IsType;

}; // Native::Router::Isis


class Native::Router::Isis::MetricStyle : public ydk::Entity
{
    public:
        MetricStyle();
        ~MetricStyle();

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

        class Narrow; //type: Native::Router::Isis::MetricStyle::Narrow
        class Transition; //type: Native::Router::Isis::MetricStyle::Transition
        class Wide; //type: Native::Router::Isis::MetricStyle::Wide

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Narrow> narrow; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Transition> transition; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::MetricStyle::Wide> wide; // presence node
        
}; // Native::Router::Isis::MetricStyle


class Native::Router::Isis::MetricStyle::Narrow : public ydk::Entity
{
    public:
        Narrow();
        ~Narrow();

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

        ydk::YLeaf narrow_wide; //type: IsisLevelType
        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::Isis::MetricStyle::Narrow


class Native::Router::Isis::MetricStyle::Transition : public ydk::Entity
{
    public:
        Transition();
        ~Transition();

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

        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::Isis::MetricStyle::Transition


class Native::Router::Isis::MetricStyle::Wide : public ydk::Entity
{
    public:
        Wide();
        ~Wide();

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

        ydk::YLeaf narrow_wide; //type: IsisLevelType
        ydk::YLeaf transition; //type: IsisLevelType

}; // Native::Router::Isis::MetricStyle::Wide


class Native::Router::Isis::AddressFamily : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv4; //type: Native::Router::Isis::AddressFamily::Ipv4
        class Ipv6; //type: Native::Router::Isis::AddressFamily::Ipv6

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv6> ipv6;
        
}; // Native::Router::Isis::AddressFamily


class Native::Router::Isis::AddressFamily::Ipv4 : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf unicast_multicast; //type: UnicastMulticast
        ydk::YLeaf help; //type: empty
        class Snmp; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp
        class Topology; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp> snmp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology> > topology;
                class UnicastMulticast;

}; // Native::Router::Isis::AddressFamily::Ipv4


class Native::Router::Isis::AddressFamily::Ipv4::Snmp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Context; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context> > context;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        class Community; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community
        class User; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community> community;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User> user;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community : public ydk::Entity
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

        ydk::YLeaf community_string; //type: string
        class Access; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf standard_acl; //type: uint32
        ydk::YLeaf expanded_acl; //type: uint32
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf ipv6; //type: string
        ydk::YLeaf ro; //type: empty
        ydk::YLeaf rw; //type: empty

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::Community::Access


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User : public ydk::Entity
{
    public:
        User();
        ~User();

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
        class Permisssion; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion : public ydk::Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf credential; //type: empty
        ydk::YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf standard_acl; //type: uint32
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Access


class Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth : public ydk::Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf md5; //type: string
        ydk::YLeaf sha; //type: string

}; // Native::Router::Isis::AddressFamily::Ipv4::Snmp::Context::User::Permisssion::Auth


class Native::Router::Isis::AddressFamily::Ipv4::Topology : public ydk::Entity
{
    public:
        Topology();
        ~Topology();

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
        ydk::YLeaf tid; //type: uint32
        ydk::YLeaf ignore_attached_bit; //type: empty
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf help; //type: empty
        ydk::YLeaf maximum_paths; //type: uint32
        class Distance; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance
        class Ip; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip
        class Redistribute; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute
        class SetAttachedBit; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit
        class Snmp; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp
        class SummaryAddress; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress
        class TrafficShare; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare
        class Advertise; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise
        class DefaultInformation; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation
        class Metric; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric
        class PrcInterval; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval
        class SetOverloadBit; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit
        class SpfInterval; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance> > distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit> set_attached_bit;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp> snmp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress> > summary_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare> traffic_share;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation> default_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval> prc_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit> set_overload_bit; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval> spf_interval;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint8
        ydk::YLeaf clns; //type: empty
        ydk::YLeaf ip; //type: empty
        class IpList; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList> > ip_list;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: string
        class WildcardBits; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits> > wildcard_bits;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits : public ydk::Entity
{
    public:
        WildcardBits();
        ~WildcardBits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf w_bits; //type: string
        ydk::YLeaf access_list; //type: one of uint16, uint8

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Distance::IpList::WildcardBits


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Route; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route> route;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route : public ydk::Entity
{
    public:
        Route();
        ~Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Priority; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority> priority;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class High; //type: Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High> high;
        
}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority


class Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High : public ydk::Entity
{
    public:
        High();
        ~High();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint32

}; // Native::Router::Isis::AddressFamily::Ipv4::Topology::Ip::Route::Priority::High

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SoftReconfiguration : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Capability::Orf::PrefixList : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf send;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::DistributeList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::FilterList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::PrefixList::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::RouteMap::Inout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendCommunity::SendCommunityWhere : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf standard;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::SendLabel::SendLabelExplicit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_null;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Neighbor::Transport::ConnectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::IsisArea::Routes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Bgp::Scope::Vrf::AddressFamily::NoVrf::Rtfilter::Redistribute::Isis::Default_::Routes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Router::Isis::IsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2_only;

};

class Native::Router::Isis::AddressFamily::Ipv4::UnicastMulticast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_113_ */

