#ifndef _CISCO_IOS_XR_SUBSCRIBER_SRG_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_SRG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_srg_cfg {

class SubscriberRedundancy : public ydk::Entity
{
    public:
        SubscriberRedundancy();
        ~SubscriberRedundancy();

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

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf virtual_mac_prefix; //type: string
        ydk::YLeaf preferred_role; //type: SubscriberRedundancyGroupRole
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf slave_mode; //type: SubscriberRedundancyGroupSlaveMode
        ydk::YLeaf hold_timer; //type: uint32
        ydk::YLeaf sync_timer; //type: uint32
        ydk::YLeaf redundancy_disable; //type: empty
        class Groups; //type: SubscriberRedundancy::Groups
        class RevertiveTimer; //type: SubscriberRedundancy::RevertiveTimer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::RevertiveTimer> revertive_timer;
        
}; // SubscriberRedundancy


class SubscriberRedundancy::Groups : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Group; //type: SubscriberRedundancy::Groups::Group

        ydk::YList group;
        
}; // SubscriberRedundancy::Groups


class SubscriberRedundancy::Groups::Group : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf group_id; //type: uint32
        ydk::YLeaf disable_tracking_object; //type: empty
        ydk::YLeaf core_tracking_object; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf preferred_role; //type: SubscriberRedundancyGroupRole
        ydk::YLeaf description; //type: string
        ydk::YLeaf l2tp_source_ip_address; //type: string
        ydk::YLeaf slave_mode; //type: SubscriberRedundancyGroupSlaveMode
        ydk::YLeaf hold_timer; //type: uint32
        ydk::YLeaf access_tracking_object; //type: string
        ydk::YLeaf enable_fast_switchover; //type: empty
        ydk::YLeaf redundancy_disable; //type: empty
        class InterfaceList; //type: SubscriberRedundancy::Groups::Group::InterfaceList
        class Peer; //type: SubscriberRedundancy::Groups::Group::Peer
        class RevertiveTimer; //type: SubscriberRedundancy::Groups::Group::RevertiveTimer
        class VirtualMac; //type: SubscriberRedundancy::Groups::Group::VirtualMac
        class StateControlRoute; //type: SubscriberRedundancy::Groups::Group::StateControlRoute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::InterfaceList> interface_list; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::Peer> peer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::RevertiveTimer> revertive_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::VirtualMac> virtual_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute> state_control_route;
        
}; // SubscriberRedundancy::Groups::Group


class SubscriberRedundancy::Groups::Group::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Interfaces; //type: SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces
        class InterfaceRanges; //type: SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges> interface_ranges;
        
}; // SubscriberRedundancy::Groups::Group::InterfaceList


class SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces : public ydk::Entity
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

        class Interface; //type: SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface

        ydk::YList interface;
        
}; // SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces


class SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_id; //type: uint32

}; // SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface


class SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges : public ydk::Entity
{
    public:
        InterfaceRanges();
        ~InterfaceRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterfaceRange; //type: SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange

        ydk::YList interface_range;
        
}; // SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges


class SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange : public ydk::Entity
{
    public:
        InterfaceRange();
        ~InterfaceRange();

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
        ydk::YLeaf sub_interface_range_start; //type: uint32
        ydk::YLeaf sub_interface_range_end; //type: uint32
        ydk::YLeaf interface_id_range_start; //type: uint32
        ydk::YLeaf interface_id_range_end; //type: uint32

}; // SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange


class SubscriberRedundancy::Groups::Group::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route_add_disable; //type: empty
        class Ipaddress; //type: SubscriberRedundancy::Groups::Group::Peer::Ipaddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::Peer::Ipaddress> ipaddress;
        
}; // SubscriberRedundancy::Groups::Group::Peer


class SubscriberRedundancy::Groups::Group::Peer::Ipaddress : public ydk::Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address_family; //type: SrgAddrFamily
        ydk::YLeaf prefix_string; //type: string

}; // SubscriberRedundancy::Groups::Group::Peer::Ipaddress


class SubscriberRedundancy::Groups::Group::RevertiveTimer : public ydk::Entity
{
    public:
        RevertiveTimer();
        ~RevertiveTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_value; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // SubscriberRedundancy::Groups::Group::RevertiveTimer


class SubscriberRedundancy::Groups::Group::VirtualMac : public ydk::Entity
{
    public:
        VirtualMac();
        ~VirtualMac();

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
        ydk::YLeaf disable; //type: empty

}; // SubscriberRedundancy::Groups::Group::VirtualMac


class SubscriberRedundancy::Groups::Group::StateControlRoute : public ydk::Entity
{
    public:
        StateControlRoute();
        ~StateControlRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Routes; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes
        class Ipv6Route; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes> ipv4_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route> ipv6_route;
        
}; // SubscriberRedundancy::Groups::Group::StateControlRoute


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes : public ydk::Entity
{
    public:
        Ipv4Routes();
        ~Ipv4Routes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Route; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route

        ydk::YList ipv4_route;
        
}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route : public ydk::Entity
{
    public:
        Ipv4Route();
        ~Ipv4Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf prefix_string; //type: string
        ydk::YLeaf tagvalue; //type: uint32

}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Routes::Ipv4Route


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route : public ydk::Entity
{
    public:
        Ipv6Route();
        ~Ipv6Route();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6naRoutes; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes
        class Ipv6pdRoutes; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes> ipv6na_routes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes> ipv6pd_routes;
        
}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes : public ydk::Entity
{
    public:
        Ipv6naRoutes();
        ~Ipv6naRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6naRoute; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute

        ydk::YList ipv6na_route;
        
}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute : public ydk::Entity
{
    public:
        Ipv6naRoute();
        ~Ipv6naRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf prefix_string; //type: string
        ydk::YLeaf tagvalue; //type: uint32

}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6naRoutes::Ipv6naRoute


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes : public ydk::Entity
{
    public:
        Ipv6pdRoutes();
        ~Ipv6pdRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6pdRoute; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute

        ydk::YList ipv6pd_route;
        
}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute : public ydk::Entity
{
    public:
        Ipv6pdRoute();
        ~Ipv6pdRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf prefix_string; //type: string
        ydk::YLeaf tagvalue; //type: uint32

}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6pdRoutes::Ipv6pdRoute


class SubscriberRedundancy::RevertiveTimer : public ydk::Entity
{
    public:
        RevertiveTimer();
        ~RevertiveTimer();

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

        ydk::YLeaf max_value; //type: uint32
        ydk::YLeaf value_; //type: uint32

}; // SubscriberRedundancy::RevertiveTimer

class SubscriberRedundancyGroupSlaveMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf warm;
        static const ydk::Enum::YLeaf hot;

};

class SrgAddrFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class SubscriberRedundancyGroupRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf master;
        static const ydk::Enum::YLeaf slave;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_SRG_CFG_ */

