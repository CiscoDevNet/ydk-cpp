#ifndef _CISCO_IOS_XR_IPV4_VRRP_CFG_
#define _CISCO_IOS_XR_IPV4_VRRP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_vrrp_cfg {

class Vrrp : public ydk::Entity
{
    public:
        Vrrp();
        ~Vrrp();

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

        class Logging; //type: Vrrp::Logging
        class Interfaces; //type: Vrrp::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces> interfaces;
        
}; // Vrrp


class Vrrp::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

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

        ydk::YLeaf state_change_disable; //type: empty

}; // Vrrp::Logging


class Vrrp::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: Vrrp::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface> > interface;
        
}; // Vrrp::Interfaces


class Vrrp::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf mac_refresh; //type: uint32
        class Ipv6; //type: Vrrp::Interfaces::Interface::Ipv6
        class Delay; //type: Vrrp::Interfaces::Interface::Delay
        class Ipv4; //type: Vrrp::Interfaces::Interface::Ipv4
        class Bfd; //type: Vrrp::Interfaces::Interface::Bfd

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Bfd> bfd;
        
}; // Vrrp::Interfaces::Interface


class Vrrp::Interfaces::Interface::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Version3; //type: Vrrp::Interfaces::Interface::Ipv6::Version3
        class SlaveVirtualRouters; //type: Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3> version3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters> slave_virtual_routers;
        
}; // Vrrp::Interfaces::Interface::Ipv6


class Vrrp::Interfaces::Interface::Ipv6::Version3 : public ydk::Entity
{
    public:
        Version3();
        ~Version3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualRouters; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters> virtual_routers;
        
}; // Vrrp::Interfaces::Interface::Ipv6::Version3


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters : public ydk::Entity
{
    public:
        VirtualRouters();
        ~VirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualRouter; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter> > virtual_router;
        
}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter : public ydk::Entity
{
    public:
        VirtualRouter();
        ~VirtualRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vr_id; //type: uint32
        ydk::YLeaf bfd; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf accept_mode_disable; //type: empty
        ydk::YLeaf preempt; //type: uint32
        ydk::YLeaf session_name; //type: string
        class GlobalIpv6Addresses; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses
        class Tracks; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks
        class Timer; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer
        class TrackedObjects; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects
        class LinkLocalIpv6Address; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses> global_ipv6_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks> tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer> timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects> tracked_objects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address> link_local_ipv6_address;
        
}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses : public ydk::Entity
{
    public:
        GlobalIpv6Addresses();
        ~GlobalIpv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GlobalIpv6Address; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address> > global_ipv6_address;
        
}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address : public ydk::Entity
{
    public:
        GlobalIpv6Address();
        ~GlobalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string

}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks : public ydk::Entity
{
    public:
        Tracks();
        ~Tracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Track; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track> > track;
        
}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

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
        ydk::YLeaf priority; //type: uint32

}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Tracks::Track


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_msec; //type: boolean
        ydk::YLeaf advertisement_time_in_msec; //type: uint32
        ydk::YLeaf advertisement_time_in_sec; //type: uint32
        ydk::YLeaf forced; //type: boolean

}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::Timer


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects : public ydk::Entity
{
    public:
        TrackedObjects();
        ~TrackedObjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrackedObject; //type: Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject> > tracked_object;
        
}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject : public ydk::Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf priority_decrement; //type: uint32

}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject


class Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address : public ydk::Entity
{
    public:
        LinkLocalIpv6Address();
        ~LinkLocalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf auto_configure; //type: boolean

}; // Vrrp::Interfaces::Interface::Ipv6::Version3::VirtualRouters::VirtualRouter::LinkLocalIpv6Address


class Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters : public ydk::Entity
{
    public:
        SlaveVirtualRouters();
        ~SlaveVirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SlaveVirtualRouter; //type: Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter> > slave_virtual_router;
        
}; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters


class Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter : public ydk::Entity
{
    public:
        SlaveVirtualRouter();
        ~SlaveVirtualRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slave_virtual_router_id; //type: uint32
        ydk::YLeaf follow; //type: string
        ydk::YLeaf accept_mode_disable; //type: empty
        class LinkLocalIpv6Address; //type: Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address
        class GlobalIpv6Addresses; //type: Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address> link_local_ipv6_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses> global_ipv6_addresses;
        
}; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter


class Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address : public ydk::Entity
{
    public:
        LinkLocalIpv6Address();
        ~LinkLocalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf auto_configure; //type: boolean

}; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::LinkLocalIpv6Address


class Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses : public ydk::Entity
{
    public:
        GlobalIpv6Addresses();
        ~GlobalIpv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GlobalIpv6Address; //type: Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address> > global_ipv6_address;
        
}; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses


class Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address : public ydk::Entity
{
    public:
        GlobalIpv6Address();
        ~GlobalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string

}; // Vrrp::Interfaces::Interface::Ipv6::SlaveVirtualRouters::SlaveVirtualRouter::GlobalIpv6Addresses::GlobalIpv6Address


class Vrrp::Interfaces::Interface::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_delay; //type: uint32
        ydk::YLeaf reload_delay; //type: uint32

}; // Vrrp::Interfaces::Interface::Delay


class Vrrp::Interfaces::Interface::Ipv4 : public ydk::Entity
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

        class Version3; //type: Vrrp::Interfaces::Interface::Ipv4::Version3
        class SlaveVirtualRouters; //type: Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters
        class Version2; //type: Vrrp::Interfaces::Interface::Ipv4::Version2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3> version3;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters> slave_virtual_routers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2> version2;
        
}; // Vrrp::Interfaces::Interface::Ipv4


class Vrrp::Interfaces::Interface::Ipv4::Version3 : public ydk::Entity
{
    public:
        Version3();
        ~Version3();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualRouters; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters> virtual_routers;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version3


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters : public ydk::Entity
{
    public:
        VirtualRouters();
        ~VirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualRouter; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter> > virtual_router;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter : public ydk::Entity
{
    public:
        VirtualRouter();
        ~VirtualRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vr_id; //type: uint32
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf bfd; //type: string
        ydk::YLeaf primary_ipv4_address; //type: string
        ydk::YLeaf preempt; //type: uint32
        ydk::YLeaf accept_mode_disable; //type: empty
        ydk::YLeaf priority; //type: uint32
        class Timer; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer
        class SecondaryIpv4Addresses; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses
        class TrackedObjects; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects
        class Tracks; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer> timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses> secondary_ipv4_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects> tracked_objects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks> tracks;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_msec; //type: boolean
        ydk::YLeaf advertisement_time_in_msec; //type: uint32
        ydk::YLeaf advertisement_time_in_sec; //type: uint32
        ydk::YLeaf forced; //type: boolean

}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Timer


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses : public ydk::Entity
{
    public:
        SecondaryIpv4Addresses();
        ~SecondaryIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecondaryIpv4Address; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address : public ydk::Entity
{
    public:
        SecondaryIpv4Address();
        ~SecondaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string

}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects : public ydk::Entity
{
    public:
        TrackedObjects();
        ~TrackedObjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrackedObject; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject> > tracked_object;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject : public ydk::Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf priority_decrement; //type: uint32

}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks : public ydk::Entity
{
    public:
        Tracks();
        ~Tracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Track; //type: Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track> > track;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks


class Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

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
        ydk::YLeaf priority; //type: uint32

}; // Vrrp::Interfaces::Interface::Ipv4::Version3::VirtualRouters::VirtualRouter::Tracks::Track


class Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters : public ydk::Entity
{
    public:
        SlaveVirtualRouters();
        ~SlaveVirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SlaveVirtualRouter; //type: Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter> > slave_virtual_router;
        
}; // Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters


class Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter : public ydk::Entity
{
    public:
        SlaveVirtualRouter();
        ~SlaveVirtualRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slave_virtual_router_id; //type: uint32
        ydk::YLeaf follow; //type: string
        ydk::YLeaf accept_mode_disable; //type: empty
        ydk::YLeaf primary_ipv4_address; //type: string
        class SecondaryIpv4Addresses; //type: Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses> secondary_ipv4_addresses;
        
}; // Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter


class Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses : public ydk::Entity
{
    public:
        SecondaryIpv4Addresses();
        ~SecondaryIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecondaryIpv4Address; //type: Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;
        
}; // Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses


class Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address : public ydk::Entity
{
    public:
        SecondaryIpv4Address();
        ~SecondaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string

}; // Vrrp::Interfaces::Interface::Ipv4::SlaveVirtualRouters::SlaveVirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address


class Vrrp::Interfaces::Interface::Ipv4::Version2 : public ydk::Entity
{
    public:
        Version2();
        ~Version2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualRouters; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters> virtual_routers;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version2


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters : public ydk::Entity
{
    public:
        VirtualRouters();
        ~VirtualRouters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VirtualRouter; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter> > virtual_router;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter : public ydk::Entity
{
    public:
        VirtualRouter();
        ~VirtualRouter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vr_id; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf primary_ipv4_address; //type: string
        ydk::YLeaf preempt; //type: uint32
        ydk::YLeaf text_password; //type: string
        ydk::YLeaf bfd; //type: string
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf accept_mode_disable; //type: empty
        class Timer; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer
        class SecondaryIpv4Addresses; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses
        class Tracks; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks
        class TrackedObjects; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer> timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses> secondary_ipv4_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks> tracks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects> tracked_objects;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in_msec; //type: boolean
        ydk::YLeaf advertisement_time_in_msec; //type: uint32
        ydk::YLeaf advertisement_time_in_sec; //type: uint32
        ydk::YLeaf forced; //type: boolean

}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Timer


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses : public ydk::Entity
{
    public:
        SecondaryIpv4Addresses();
        ~SecondaryIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecondaryIpv4Address; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address : public ydk::Entity
{
    public:
        SecondaryIpv4Address();
        ~SecondaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string

}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::SecondaryIpv4Addresses::SecondaryIpv4Address


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks : public ydk::Entity
{
    public:
        Tracks();
        ~Tracks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Track; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track> > track;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track : public ydk::Entity
{
    public:
        Track();
        ~Track();

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
        ydk::YLeaf priority; //type: uint32

}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::Tracks::Track


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects : public ydk::Entity
{
    public:
        TrackedObjects();
        ~TrackedObjects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrackedObject; //type: Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject> > tracked_object;
        
}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects


class Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject : public ydk::Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf object_name; //type: string
        ydk::YLeaf priority_decrement; //type: uint32

}; // Vrrp::Interfaces::Interface::Ipv4::Version2::VirtualRouters::VirtualRouter::TrackedObjects::TrackedObject


class Vrrp::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf detection_multiplier; //type: uint32

}; // Vrrp::Interfaces::Interface::Bfd


}
}

#endif /* _CISCO_IOS_XR_IPV4_VRRP_CFG_ */

