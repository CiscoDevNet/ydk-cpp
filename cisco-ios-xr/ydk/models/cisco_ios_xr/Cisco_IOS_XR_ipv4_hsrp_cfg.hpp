#ifndef _CISCO_IOS_XR_IPV4_HSRP_CFG_
#define _CISCO_IOS_XR_IPV4_HSRP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_hsrp_cfg {

class Hsrp : public ydk::Entity
{
    public:
        Hsrp();
        ~Hsrp();

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

        class Interfaces; //type: Hsrp::Interfaces
        class Logging; //type: Hsrp::Logging

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Logging> logging;
        
}; // Hsrp


class Hsrp::Interfaces : public ydk::Entity
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

        class Interface; //type: Hsrp::Interfaces::Interface

        ydk::YList interface;
        
}; // Hsrp::Interfaces


class Hsrp::Interfaces::Interface : public ydk::Entity
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
        ydk::YLeaf use_bia; //type: empty
        ydk::YLeaf redirects_disable; //type: empty
        class Ipv6; //type: Hsrp::Interfaces::Interface::Ipv6
        class Bfd; //type: Hsrp::Interfaces::Interface::Bfd
        class Delay; //type: Hsrp::Interfaces::Interface::Delay
        class Ipv4; //type: Hsrp::Interfaces::Interface::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Delay> delay; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4> ipv4;
        
}; // Hsrp::Interfaces::Interface


class Hsrp::Interfaces::Interface::Ipv6 : public ydk::Entity
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

        class Version2; //type: Hsrp::Interfaces::Interface::Ipv6::Version2
        class SlaveGroups; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2> version2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups> slave_groups;
        
}; // Hsrp::Interfaces::Interface::Ipv6


class Hsrp::Interfaces::Interface::Ipv6::Version2 : public ydk::Entity
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

        class Groups; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups> groups;
        
}; // Hsrp::Interfaces::Interface::Ipv6::Version2


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group

        ydk::YList group;
        
}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf preempt; //type: uint32
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf virtual_mac_address; //type: string
        class Bfd; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd
        class TrackedInterfaces; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces
        class TrackedObjects; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects
        class Timers; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers
        class LinkLocalIpv6Address; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address
        class GlobalIpv6Addresses; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces> tracked_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects> tracked_objects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address> link_local_ipv6_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses> global_ipv6_addresses;
        
}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces : public ydk::Entity
{
    public:
        TrackedInterfaces();
        ~TrackedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrackedInterface; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface

        ydk::YList tracked_interface;
        
}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface : public ydk::Entity
{
    public:
        TrackedInterface();
        ~TrackedInterface();

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
        ydk::YLeaf priority_decrement; //type: uint32

}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects : public ydk::Entity
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

        class TrackedObject; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject

        ydk::YList tracked_object;
        
}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject : public ydk::Entity
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

}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers : public ydk::Entity
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

        ydk::YLeaf hello_msec_flag; //type: boolean
        ydk::YLeaf hello_msec; //type: uint32
        ydk::YLeaf hello_sec; //type: uint32
        ydk::YLeaf hold_msec_flag; //type: boolean
        ydk::YLeaf hold_msec; //type: uint32
        ydk::YLeaf hold_sec; //type: uint32

}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf auto_configure; //type: HsrpLinklocal

}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses : public ydk::Entity
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

        class GlobalIpv6Address; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address

        ydk::YList global_ipv6_address;
        
}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address : public ydk::Entity
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

        ydk::YLeaf address; //type: string

}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups : public ydk::Entity
{
    public:
        SlaveGroups();
        ~SlaveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SlaveGroup; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup

        ydk::YList slave_group;
        
}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup : public ydk::Entity
{
    public:
        SlaveGroup();
        ~SlaveGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slave_group_number; //type: uint32
        ydk::YLeaf follow; //type: string
        ydk::YLeaf virtual_mac_address; //type: string
        class LinkLocalIpv6Address; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address
        class GlobalIpv6Addresses; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address> link_local_ipv6_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses> global_ipv6_addresses;
        
}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf auto_configure; //type: HsrpLinklocal

}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses : public ydk::Entity
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

        class GlobalIpv6Address; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address

        ydk::YList global_ipv6_address;
        
}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address : public ydk::Entity
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

        ydk::YLeaf address; //type: string

}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address


class Hsrp::Interfaces::Interface::Bfd : public ydk::Entity
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

        ydk::YLeaf detection_multiplier; //type: uint32
        ydk::YLeaf interval; //type: uint32

}; // Hsrp::Interfaces::Interface::Bfd


class Hsrp::Interfaces::Interface::Delay : public ydk::Entity
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

        ydk::YLeaf minimum_delay; //type: uint32
        ydk::YLeaf reload_delay; //type: uint32

}; // Hsrp::Interfaces::Interface::Delay


class Hsrp::Interfaces::Interface::Ipv4 : public ydk::Entity
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

        class SlaveGroups; //type: Hsrp::Interfaces::Interface::Ipv4::SlaveGroups
        class Version1; //type: Hsrp::Interfaces::Interface::Ipv4::Version1
        class Version2; //type: Hsrp::Interfaces::Interface::Ipv4::Version2

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups> slave_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1> version1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2> version2;
        
}; // Hsrp::Interfaces::Interface::Ipv4


class Hsrp::Interfaces::Interface::Ipv4::SlaveGroups : public ydk::Entity
{
    public:
        SlaveGroups();
        ~SlaveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SlaveGroup; //type: Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup

        ydk::YList slave_group;
        
}; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups


class Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup : public ydk::Entity
{
    public:
        SlaveGroup();
        ~SlaveGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slave_group_number; //type: uint32
        ydk::YLeaf follow; //type: string
        ydk::YLeaf virtual_mac_address; //type: string
        ydk::YLeaf primary_ipv4_address; //type: string
        class SecondaryIpv4Addresses; //type: Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses> secondary_ipv4_addresses;
        
}; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup


class Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses : public ydk::Entity
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

        class SecondaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address

        ydk::YList secondary_ipv4_address;
        
}; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses


class Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address : public ydk::Entity
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

        ydk::YLeaf address; //type: string

}; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version1 : public ydk::Entity
{
    public:
        Version1();
        ~Version1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Groups; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups> groups;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version1


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group

        ydk::YList group;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint32
        ydk::YLeaf authentication; //type: string
        ydk::YLeaf session_name; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf preempt; //type: uint32
        ydk::YLeaf virtual_mac_address; //type: string
        class TrackedInterfaces; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces
        class Bfd; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd
        class TrackedObjects; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects
        class Timers; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers
        class PrimaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address
        class SecondaryIpv4Addresses; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces> tracked_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects> tracked_objects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address> primary_ipv4_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses> secondary_ipv4_addresses;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces : public ydk::Entity
{
    public:
        TrackedInterfaces();
        ~TrackedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrackedInterface; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface

        ydk::YList tracked_interface;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface : public ydk::Entity
{
    public:
        TrackedInterface();
        ~TrackedInterface();

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
        ydk::YLeaf priority_decrement; //type: uint32

}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects : public ydk::Entity
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

        class TrackedObject; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject

        ydk::YList tracked_object;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject : public ydk::Entity
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

}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers : public ydk::Entity
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

        ydk::YLeaf hello_msec_flag; //type: boolean
        ydk::YLeaf hello_msec; //type: uint32
        ydk::YLeaf hello_sec; //type: uint32
        ydk::YLeaf hold_msec_flag; //type: boolean
        ydk::YLeaf hold_msec; //type: uint32
        ydk::YLeaf hold_sec; //type: uint32

}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address : public ydk::Entity
{
    public:
        PrimaryIpv4Address();
        ~PrimaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_ip_learn; //type: boolean
        ydk::YLeaf address; //type: string

}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses : public ydk::Entity
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

        class SecondaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address

        ydk::YList secondary_ipv4_address;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address : public ydk::Entity
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

        ydk::YLeaf address; //type: string

}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version2 : public ydk::Entity
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

        class Groups; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups> groups;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version2


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Group; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group

        ydk::YList group;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group_number; //type: uint32
        ydk::YLeaf preempt; //type: uint32
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf virtual_mac_address; //type: string
        ydk::YLeaf session_name; //type: string
        class SecondaryIpv4Addresses; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses
        class Bfd; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd
        class PrimaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address
        class TrackedObjects; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects
        class TrackedInterfaces; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces
        class Timers; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses> secondary_ipv4_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address> primary_ipv4_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects> tracked_objects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces> tracked_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers> timers;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses : public ydk::Entity
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

        class SecondaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address

        ydk::YList secondary_ipv4_address;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address : public ydk::Entity
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

        ydk::YLeaf address; //type: string

}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd : public ydk::Entity
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

        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string

}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address : public ydk::Entity
{
    public:
        PrimaryIpv4Address();
        ~PrimaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtual_ip_learn; //type: boolean
        ydk::YLeaf address; //type: string

}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects : public ydk::Entity
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

        class TrackedObject; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject

        ydk::YList tracked_object;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject : public ydk::Entity
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

}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces : public ydk::Entity
{
    public:
        TrackedInterfaces();
        ~TrackedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TrackedInterface; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface

        ydk::YList tracked_interface;
        
}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface : public ydk::Entity
{
    public:
        TrackedInterface();
        ~TrackedInterface();

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
        ydk::YLeaf priority_decrement; //type: uint32

}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers : public ydk::Entity
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

        ydk::YLeaf hello_msec_flag; //type: boolean
        ydk::YLeaf hello_msec; //type: uint32
        ydk::YLeaf hello_sec; //type: uint32
        ydk::YLeaf hold_msec_flag; //type: boolean
        ydk::YLeaf hold_msec; //type: uint32
        ydk::YLeaf hold_sec; //type: uint32

}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers


class Hsrp::Logging : public ydk::Entity
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

}; // Hsrp::Logging

class HsrpLinklocal : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf legacy;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_HSRP_CFG_ */

