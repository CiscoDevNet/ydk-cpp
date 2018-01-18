#ifndef _CISCO_IOS_XE_NATIVE_11_
#define _CISCO_IOS_XE_NATIVE_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_10.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime : public ydk::Entity
{
    public:
        StaleLifetime();
        ~StaleLifetime();

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
        ydk::YLeaf infinite; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Disable::StaleLifetime


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReachableLifetime; //type: Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime> reachable_lifetime;
        
}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable


class Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime : public ydk::Entity
{
    public:
        ReachableLifetime();
        ~ReachableLifetime();

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
        ydk::YLeaf infinite; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Tracking::Enable::ReachableLifetime


class Native::Ipv6::Nd::Inspection::Policy::Validate : public ydk::Entity
{
    public:
        Validate();
        ~Validate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_mac; //type: empty

}; // Native::Ipv6::Nd::Inspection::Policy::Validate


class Native::Ipv6::Nd::Cache : public ydk::Entity
{
    public:
        Cache();
        ~Cache();

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

        class Expire; //type: Native::Ipv6::Nd::Cache::Expire

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Cache::Expire> expire;
        
}; // Native::Ipv6::Nd::Cache


class Native::Ipv6::Nd::Cache::Expire : public ydk::Entity
{
    public:
        Expire();
        ~Expire();

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

        ydk::YLeaf time; //type: uint16
        ydk::YLeaf refresh; //type: empty

}; // Native::Ipv6::Nd::Cache::Expire


class Native::Ipv6::Nd::Raguard : public ydk::Entity
{
    public:
        Raguard();
        ~Raguard();

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

        ydk::YLeaf attach_policy; //type: string
        class Policy; //type: Native::Ipv6::Nd::Raguard::Policy

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard::Policy> > policy;
        
}; // Native::Ipv6::Nd::Raguard


class Native::Ipv6::Nd::Raguard::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        ydk::YLeaf raguard_policy_name; //type: string
        ydk::YLeaf trusted_port; //type: empty
        class DeviceRole; //type: Native::Ipv6::Nd::Raguard::Policy::DeviceRole
        class HopLimit; //type: Native::Ipv6::Nd::Raguard::Policy::HopLimit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard::Policy::DeviceRole> device_role;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::Raguard::Policy::HopLimit> hop_limit;
        
}; // Native::Ipv6::Nd::Raguard::Policy


class Native::Ipv6::Nd::Raguard::Policy::DeviceRole : public ydk::Entity
{
    public:
        DeviceRole();
        ~DeviceRole();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty
        ydk::YLeaf monitor; //type: empty
        ydk::YLeaf router; //type: empty
        ydk::YLeaf switch_; //type: empty

}; // Native::Ipv6::Nd::Raguard::Policy::DeviceRole


class Native::Ipv6::Nd::Raguard::Policy::HopLimit : public ydk::Entity
{
    public:
        HopLimit();
        ~HopLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint8
        ydk::YLeaf minimum; //type: uint8

}; // Native::Ipv6::Nd::Raguard::Policy::HopLimit


class Native::Ipv6::Nd::DefaultRoute : public ydk::Entity
{
    public:
        DefaultRoute();
        ~DefaultRoute();

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

        ydk::YLeaf limit; //type: uint8
        class Vrf; //type: Native::Ipv6::Nd::DefaultRoute::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Nd::DefaultRoute::Vrf> > vrf;
        
}; // Native::Ipv6::Nd::DefaultRoute


class Native::Ipv6::Nd::DefaultRoute::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf word; //type: string
        ydk::YLeaf limit; //type: uint8

}; // Native::Ipv6::Nd::DefaultRoute::Vrf


class Native::Ipv6::Pim : public ydk::Entity
{
    public:
        Pim();
        ~Pim();

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

        class RpAddress; //type: Native::Ipv6::Pim::RpAddress
        class Vrf; //type: Native::Ipv6::Pim::Vrf

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Pim::RpAddress> rp_address;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Pim::Vrf> > vrf;
        
}; // Native::Ipv6::Pim


class Native::Ipv6::Pim::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

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
        ydk::YLeaf access_list; //type: string
        ydk::YLeaf bidir; //type: empty

}; // Native::Ipv6::Pim::RpAddress


class Native::Ipv6::Pim::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf id; //type: string
        class RpAddress; //type: Native::Ipv6::Pim::Vrf::RpAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Pim::Vrf::RpAddress> rp_address;
        
}; // Native::Ipv6::Pim::Vrf


class Native::Ipv6::Pim::Vrf::RpAddress : public ydk::Entity
{
    public:
        RpAddress();
        ~RpAddress();

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
        ydk::YLeaf access_list; //type: string
        ydk::YLeaf bidir; //type: empty

}; // Native::Ipv6::Pim::Vrf::RpAddress


class Native::Ipv6::Route : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Ipv6RouteList; //type: Native::Ipv6::Route::Ipv6RouteList
        class Vrf; //type: Native::Ipv6::Route::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Ipv6RouteList> > ipv6_route_list;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Vrf> > vrf;
        
}; // Native::Ipv6::Route


class Native::Ipv6::Route::Ipv6RouteList : public ydk::Entity
{
    public:
        Ipv6RouteList();
        ~Ipv6RouteList();

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

        ydk::YLeaf prefix; //type: string
        class Ipv6FwdList; //type: Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList> > ipv6_fwd_list;
        
}; // Native::Ipv6::Route::Ipv6RouteList


class Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList : public ydk::Entity
{
    public:
        Ipv6FwdList();
        ~Ipv6FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwd; //type: one of string, enumeration
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint32
        ydk::YLeaf name; //type: string
        class InterfaceNextHop; //type: Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop> > interface_next_hop;
                class Fwd;

}; // Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList


class Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop : public ydk::Entity
{
    public:
        InterfaceNextHop();
        ~InterfaceNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop


class Native::Ipv6::Route::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        class Ipv6RouteList; //type: Native::Ipv6::Route::Vrf::Ipv6RouteList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Vrf::Ipv6RouteList> > ipv6_route_list;
        
}; // Native::Ipv6::Route::Vrf


class Native::Ipv6::Route::Vrf::Ipv6RouteList : public ydk::Entity
{
    public:
        Ipv6RouteList();
        ~Ipv6RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: string
        class Ipv6FwdList; //type: Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList> > ipv6_fwd_list;
        
}; // Native::Ipv6::Route::Vrf::Ipv6RouteList


class Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList : public ydk::Entity
{
    public:
        Ipv6FwdList();
        ~Ipv6FwdList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwd; //type: one of string, enumeration
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint32
        ydk::YLeaf name; //type: string
        class InterfaceNextHop; //type: Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop> > interface_next_hop;
                class Fwd;

}; // Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList


class Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop : public ydk::Entity
{
    public:
        InterfaceNextHop();
        ~InterfaceNextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty
        ydk::YLeaf tag; //type: uint32
        ydk::YLeaf track; //type: uint32
        ydk::YLeaf name; //type: string

}; // Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::InterfaceNextHop


class Native::Ipv6::Router : public ydk::Entity
{
    public:
        Router();
        ~Router();

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

        class Eigrp; //type: Native::Ipv6::Router::Eigrp
        class Ospf; //type: Native::Ipv6::Router::Ospf
        class Rip; //type: Native::Ipv6::Router::Rip

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp> > eigrp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Ospf> > ospf;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip> > rip;
        
}; // Native::Ipv6::Router


class Native::Ipv6::Router::Eigrp : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint16
        class DefaultMetric; //type: Native::Ipv6::Router::Eigrp::DefaultMetric
        class Distance; //type: Native::Ipv6::Router::Eigrp::Distance
        class DistributeList; //type: Native::Ipv6::Router::Eigrp::DistributeList
        class Eigrp_; //type: Native::Ipv6::Router::Eigrp::Eigrp_
        class PassiveInterface; //type: Native::Ipv6::Router::Eigrp::PassiveInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::DefaultMetric> default_metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::Distance> distance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::Eigrp_> eigrp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::PassiveInterface> > passive_interface;
        
}; // Native::Ipv6::Router::Eigrp


class Native::Ipv6::Router::Eigrp::DefaultMetric : public ydk::Entity
{
    public:
        DefaultMetric();
        ~DefaultMetric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dm_rdr; //type: uint32
        ydk::YLeaf dm_rdr0; //type: uint32
        ydk::YLeaf dm_rdr_pct; //type: uint8
        ydk::YLeaf effective_bandwith_metric; //type: uint8
        ydk::YLeaf mtu; //type: uint16

}; // Native::Ipv6::Router::Eigrp::DefaultMetric


class Native::Ipv6::Router::Eigrp::Distance : public ydk::Entity
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

        class Eigrp_; //type: Native::Ipv6::Router::Eigrp::Distance::Eigrp_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::Distance::Eigrp_> eigrp;
        
}; // Native::Ipv6::Router::Eigrp::Distance


class Native::Ipv6::Router::Eigrp::Distance::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf internal_route; //type: uint8
        ydk::YLeaf external_route; //type: uint8

}; // Native::Ipv6::Router::Eigrp::Distance::Eigrp_


class Native::Ipv6::Router::Eigrp::DistributeList : public ydk::Entity
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

        class PrefixList; //type: Native::Ipv6::Router::Eigrp::DistributeList::PrefixList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Eigrp::DistributeList::PrefixList> > prefix_list;
        
}; // Native::Ipv6::Router::Eigrp::DistributeList


class Native::Ipv6::Router::Eigrp::DistributeList::PrefixList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Ipv6::Router::Eigrp::DistributeList::PrefixList


class Native::Ipv6::Router::Eigrp::Eigrp_ : public ydk::Entity
{
    public:
        Eigrp_();
        ~Eigrp_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string

}; // Native::Ipv6::Router::Eigrp::Eigrp_


class Native::Ipv6::Router::Eigrp::PassiveInterface : public ydk::Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: one of string, enumeration
        class Name;

}; // Native::Ipv6::Router::Eigrp::PassiveInterface


class Native::Ipv6::Router::Ospf : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint16

}; // Native::Ipv6::Router::Ospf


class Native::Ipv6::Router::Rip : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf poison_reverse; //type: empty
        ydk::YLeaf split_horizon; //type: empty
        class AddressFamily; //type: Native::Ipv6::Router::Rip::AddressFamily
        class DistributeList; //type: Native::Ipv6::Router::Rip::DistributeList
        class Redistribute; //type: Native::Ipv6::Router::Rip::Redistribute
        class Timers; //type: Native::Ipv6::Router::Rip::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily> address_family;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Timers> timers;
        
}; // Native::Ipv6::Router::Rip


class Native::Ipv6::Router::Rip::AddressFamily : public ydk::Entity
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

        class Ipv6_; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_> ipv6;
        
}; // Native::Ipv6::Router::Rip::AddressFamily


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_ : public ydk::Entity
{
    public:
        Ipv6_();
        ~Ipv6_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf> > vrf;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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
        ydk::YLeaf distance; //type: uint8
        ydk::YLeaf maximum_paths; //type: uint32
        ydk::YLeaf poison_reverse; //type: empty
        ydk::YLeaf split_horizon; //type: empty
        class DistributeList; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList
        class Redistribute; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute
        class Timers; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList> distribute_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers> timers;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList : public ydk::Entity
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

        class PrefixList; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList> > prefix_list;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::DistributeList::PrefixList


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute : public ydk::Entity
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

        class Application; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application
        class Lisp; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp
        class Nd; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd
        class Connected; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected
        class Bgp; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp
        class Eigrp; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp
        class Isis; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis
        class IsoIgrp; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp
        class Mobile; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile
        class Odr; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr
        class Ospf; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf
        class Static_; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_
        class Rip_; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp> > bgp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_> static_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_> rip; // presence node
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application : public ydk::Entity
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

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: one of string, uint32
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: uint16
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis : public ydk::Entity
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

        class IsisArea; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea : public ydk::Entity
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
        class RipIsisRedist; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist : public ydk::Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist : public ydk::Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp : public ydk::Entity
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

        class IsoigrpList; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList : public ydk::Entity
{
    public:
        IsoigrpList();
        ~IsoigrpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iso_area_tag; //type: string
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf process_id; //type: uint16
        class Vrf_; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_
        class Match; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_ : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal : public ydk::Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External : public ydk::Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_routes; //type: RedistOspfExternalType
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nssa_external_routes; //type: RedistOspfExternalType
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_ : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_ : public ydk::Entity
{
    public:
        Rip_();
        ~Rip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers : public ydk::Entity
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

        ydk::YLeaf update; //type: uint16
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf garbage_collection; //type: uint16

}; // Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers


class Native::Ipv6::Router::Rip::DistributeList : public ydk::Entity
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

        class PrefixList; //type: Native::Ipv6::Router::Rip::DistributeList::PrefixList

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::DistributeList::PrefixList> > prefix_list;
        
}; // Native::Ipv6::Router::Rip::DistributeList


class Native::Ipv6::Router::Rip::DistributeList::PrefixList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf in; //type: empty
        ydk::YLeaf out; //type: empty

}; // Native::Ipv6::Router::Rip::DistributeList::PrefixList


class Native::Ipv6::Router::Rip::Redistribute : public ydk::Entity
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

        class Application; //type: Native::Ipv6::Router::Rip::Redistribute::Application
        class Lisp; //type: Native::Ipv6::Router::Rip::Redistribute::Lisp
        class Nd; //type: Native::Ipv6::Router::Rip::Redistribute::Nd
        class Connected; //type: Native::Ipv6::Router::Rip::Redistribute::Connected
        class Bgp; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp
        class Eigrp; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp
        class Isis; //type: Native::Ipv6::Router::Rip::Redistribute::Isis
        class IsoIgrp; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp
        class Mobile; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile
        class Odr; //type: Native::Ipv6::Router::Rip::Redistribute::Odr
        class Ospf; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf
        class Static_; //type: Native::Ipv6::Router::Rip::Redistribute::Static_
        class Rip_; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Nd> nd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp> > bgp;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis> isis; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf> > ospf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_> static_; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_> rip; // presence node
        
}; // Native::Ipv6::Router::Rip::Redistribute


class Native::Ipv6::Router::Rip::Redistribute::Application : public ydk::Entity
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

        ydk::YLeaf include_connected; //type: empty
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf route_map; //type: string

}; // Native::Ipv6::Router::Rip::Redistribute::Application


class Native::Ipv6::Router::Rip::Redistribute::Lisp : public ydk::Entity
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

}; // Native::Ipv6::Router::Rip::Redistribute::Lisp


class Native::Ipv6::Router::Rip::Redistribute::Nd : public ydk::Entity
{
    public:
        Nd();
        ~Nd();

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

}; // Native::Ipv6::Router::Rip::Redistribute::Nd


class Native::Ipv6::Router::Rip::Redistribute::Connected : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Connected


class Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as_number; //type: one of string, uint32
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Bgp


class Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Eigrp : public ydk::Entity
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

        ydk::YLeaf as_number; //type: uint16
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp


class Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Isis : public ydk::Entity
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

        class IsisArea; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea : public ydk::Entity
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
        class RipIsisRedist; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist : public ydk::Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist : public ydk::Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isis_level_routes; //type: IsisLevelRoutes
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutes;

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp : public ydk::Entity
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

        class IsoigrpList; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList : public ydk::Entity
{
    public:
        IsoigrpList();
        ~IsoigrpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iso_area_tag; //type: string
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Mobile : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Mobile


class Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Odr : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Odr


class Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf : public ydk::Entity
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

        ydk::YLeaf process_id; //type: uint16
        class Vrf; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf
        class Match; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf> > vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match> match;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match : public ydk::Entity
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

        class Internal; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal : public ydk::Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External : public ydk::Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf external_routes; //type: RedistOspfExternalType
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal : public ydk::Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nssa_external_routes; //type: RedistOspfExternalType
        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Static_ : public ydk::Entity
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

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Static_


class Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Redistribute::Rip_ : public ydk::Entity
{
    public:
        Rip_();
        ~Rip_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RipMetricRouteMap; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Rip_


class Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap : public ydk::Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

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
        class Metric; //type: Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap


class Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_value; //type: uint32
        ydk::YLeaf transparent; //type: empty

}; // Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Ipv6::Router::Rip::Timers : public ydk::Entity
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

        ydk::YLeaf update; //type: uint16
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf holddown; //type: uint16
        ydk::YLeaf garbage_collection; //type: uint16

}; // Native::Ipv6::Router::Rip::Timers

class Native::Ipv6::Route::Ipv6RouteList::Ipv6FwdList::Fwd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

};

class Native::Ipv6::Route::Vrf::Ipv6RouteList::Ipv6FwdList::Fwd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Null0;

};

class Native::Ipv6::Router::Eigrp::PassiveInterface::Name : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_;

};

class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};

class Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;
        static const ydk::Enum::YLeaf level_1_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_11_ */

