#ifndef _CISCO_IOS_XR_IPV4_HSRP_CFG_
#define _CISCO_IOS_XR_IPV4_HSRP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_hsrp_cfg {

class Hsrp : public Entity
{
    public:
        Hsrp();
        ~Hsrp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Interfaces; //type: Hsrp::Interfaces
        class Logging; //type: Hsrp::Logging

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Logging> logging;


}; // Hsrp


class Hsrp::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Hsrp::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface> > interface;


}; // Hsrp::Interfaces


class Hsrp::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf mac_refresh; //type: uint32
        YLeaf use_bia; //type: empty
        YLeaf redirects_disable; //type: empty

        class Ipv6; //type: Hsrp::Interfaces::Interface::Ipv6
        class Bfd; //type: Hsrp::Interfaces::Interface::Bfd
        class Delay; //type: Hsrp::Interfaces::Interface::Delay
        class Ipv4; //type: Hsrp::Interfaces::Interface::Ipv4

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Delay> delay;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6> ipv6;


}; // Hsrp::Interfaces::Interface


class Hsrp::Interfaces::Interface::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Version2; //type: Hsrp::Interfaces::Interface::Ipv6::Version2
        class SlaveGroups; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups> slave_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2> version2;


}; // Hsrp::Interfaces::Interface::Ipv6


class Hsrp::Interfaces::Interface::Ipv6::Version2 : public Entity
{
    public:
        Version2();
        ~Version2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Groups; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups> groups;


}; // Hsrp::Interfaces::Interface::Ipv6::Version2


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Group; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group> > group;


}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_number; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf preempt; //type: int32
        YLeaf session_name; //type: string
        YLeaf virtual_mac_address; //type: string

        class Bfd; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd
        class TrackedInterfaces; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces
        class TrackedObjects; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects
        class Timers; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers
        class LinkLocalIpv6Address; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address
        class GlobalIpv6Addresses; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses> global_ipv6_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address> link_local_ipv6_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces> tracked_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects> tracked_objects;


}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface_name; //type: string



}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Bfd


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces : public Entity
{
    public:
        TrackedInterfaces();
        ~TrackedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackedInterface; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface> > tracked_interface;


}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface : public Entity
{
    public:
        TrackedInterface();
        ~TrackedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf priority_decrement; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedInterfaces::TrackedInterface


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects : public Entity
{
    public:
        TrackedObjects();
        ~TrackedObjects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackedObject; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject> > tracked_object;


}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject : public Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_name; //type: string
        YLeaf priority_decrement; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::TrackedObjects::TrackedObject


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hello_msec_flag; //type: boolean
        YLeaf hello_msec; //type: uint32
        YLeaf hello_sec; //type: uint32
        YLeaf hold_msec_flag; //type: boolean
        YLeaf hold_msec; //type: uint32
        YLeaf hold_sec; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::Timers


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address : public Entity
{
    public:
        LinkLocalIpv6Address();
        ~LinkLocalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf auto_configure; //type: HsrpLinklocalEnum



}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::LinkLocalIpv6Address


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses : public Entity
{
    public:
        GlobalIpv6Addresses();
        ~GlobalIpv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalIpv6Address; //type: Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address> > global_ipv6_address;


}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses


class Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address : public Entity
{
    public:
        GlobalIpv6Address();
        ~GlobalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // Hsrp::Interfaces::Interface::Ipv6::Version2::Groups::Group::GlobalIpv6Addresses::GlobalIpv6Address


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups : public Entity
{
    public:
        SlaveGroups();
        ~SlaveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SlaveGroup; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup> > slave_group;


}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup : public Entity
{
    public:
        SlaveGroup();
        ~SlaveGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slave_group_number; //type: uint32
        YLeaf follow; //type: string
        YLeaf virtual_mac_address; //type: string

        class LinkLocalIpv6Address; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address
        class GlobalIpv6Addresses; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses> global_ipv6_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address> link_local_ipv6_address;


}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address : public Entity
{
    public:
        LinkLocalIpv6Address();
        ~LinkLocalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf auto_configure; //type: HsrpLinklocalEnum



}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::LinkLocalIpv6Address


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses : public Entity
{
    public:
        GlobalIpv6Addresses();
        ~GlobalIpv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalIpv6Address; //type: Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address> > global_ipv6_address;


}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses


class Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address : public Entity
{
    public:
        GlobalIpv6Address();
        ~GlobalIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // Hsrp::Interfaces::Interface::Ipv6::SlaveGroups::SlaveGroup::GlobalIpv6Addresses::GlobalIpv6Address


class Hsrp::Interfaces::Interface::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf detection_multiplier; //type: uint32
        YLeaf interval; //type: uint32



}; // Hsrp::Interfaces::Interface::Bfd


class Hsrp::Interfaces::Interface::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum_delay; //type: uint32
        YLeaf reload_delay; //type: uint32



}; // Hsrp::Interfaces::Interface::Delay


class Hsrp::Interfaces::Interface::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SlaveGroups; //type: Hsrp::Interfaces::Interface::Ipv4::SlaveGroups
        class Version1; //type: Hsrp::Interfaces::Interface::Ipv4::Version1
        class Version2; //type: Hsrp::Interfaces::Interface::Ipv4::Version2

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups> slave_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1> version1;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2> version2;


}; // Hsrp::Interfaces::Interface::Ipv4


class Hsrp::Interfaces::Interface::Ipv4::SlaveGroups : public Entity
{
    public:
        SlaveGroups();
        ~SlaveGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SlaveGroup; //type: Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup> > slave_group;


}; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups


class Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup : public Entity
{
    public:
        SlaveGroup();
        ~SlaveGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slave_group_number; //type: uint32
        YLeaf follow; //type: string
        YLeaf virtual_mac_address; //type: string
        YLeaf primary_ipv4_address; //type: string

        class SecondaryIpv4Addresses; //type: Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses> secondary_ipv4_addresses;


}; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup


class Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses : public Entity
{
    public:
        SecondaryIpv4Addresses();
        ~SecondaryIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SecondaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


}; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses


class Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address : public Entity
{
    public:
        SecondaryIpv4Address();
        ~SecondaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // Hsrp::Interfaces::Interface::Ipv4::SlaveGroups::SlaveGroup::SecondaryIpv4Addresses::SecondaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version1 : public Entity
{
    public:
        Version1();
        ~Version1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Groups; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups> groups;


}; // Hsrp::Interfaces::Interface::Ipv4::Version1


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Group; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group> > group;


}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_number; //type: uint32
        YLeaf authentication; //type: string
        YLeaf session_name; //type: string
        YLeaf priority; //type: uint32
        YLeaf preempt; //type: int32
        YLeaf virtual_mac_address; //type: string

        class TrackedInterfaces; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces
        class Bfd; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd
        class TrackedObjects; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects
        class Timers; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers
        class PrimaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address
        class SecondaryIpv4Addresses; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address> primary_ipv4_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses> secondary_ipv4_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces> tracked_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects> tracked_objects;


}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces : public Entity
{
    public:
        TrackedInterfaces();
        ~TrackedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackedInterface; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface> > tracked_interface;


}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface : public Entity
{
    public:
        TrackedInterface();
        ~TrackedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf priority_decrement; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedInterfaces::TrackedInterface


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface_name; //type: string



}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Bfd


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects : public Entity
{
    public:
        TrackedObjects();
        ~TrackedObjects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackedObject; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject> > tracked_object;


}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject : public Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_name; //type: string
        YLeaf priority_decrement; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::TrackedObjects::TrackedObject


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hello_msec_flag; //type: boolean
        YLeaf hello_msec; //type: uint32
        YLeaf hello_sec; //type: uint32
        YLeaf hold_msec_flag; //type: boolean
        YLeaf hold_msec; //type: uint32
        YLeaf hold_sec; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::Timers


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address : public Entity
{
    public:
        PrimaryIpv4Address();
        ~PrimaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf virtual_ip_learn; //type: boolean
        YLeaf address; //type: string



}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::PrimaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses : public Entity
{
    public:
        SecondaryIpv4Addresses();
        ~SecondaryIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SecondaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses


class Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address : public Entity
{
    public:
        SecondaryIpv4Address();
        ~SecondaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // Hsrp::Interfaces::Interface::Ipv4::Version1::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version2 : public Entity
{
    public:
        Version2();
        ~Version2();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Groups; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups> groups;


}; // Hsrp::Interfaces::Interface::Ipv4::Version2


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Group; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group> > group;


}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_number; //type: uint32
        YLeaf preempt; //type: int32
        YLeaf priority; //type: uint32
        YLeaf virtual_mac_address; //type: string
        YLeaf session_name; //type: string

        class SecondaryIpv4Addresses; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses
        class Bfd; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd
        class PrimaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address
        class TrackedObjects; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects
        class TrackedInterfaces; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces
        class Timers; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers

        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address> primary_ipv4_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses> secondary_ipv4_addresses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers> timers;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces> tracked_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects> tracked_objects;


}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses : public Entity
{
    public:
        SecondaryIpv4Addresses();
        ~SecondaryIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SecondaryIpv4Address; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address> > secondary_ipv4_address;


}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address : public Entity
{
    public:
        SecondaryIpv4Address();
        ~SecondaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::SecondaryIpv4Addresses::SecondaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf interface_name; //type: string



}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Bfd


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address : public Entity
{
    public:
        PrimaryIpv4Address();
        ~PrimaryIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf virtual_ip_learn; //type: boolean
        YLeaf address; //type: string



}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::PrimaryIpv4Address


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects : public Entity
{
    public:
        TrackedObjects();
        ~TrackedObjects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackedObject; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject> > tracked_object;


}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject : public Entity
{
    public:
        TrackedObject();
        ~TrackedObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_name; //type: string
        YLeaf priority_decrement; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedObjects::TrackedObject


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces : public Entity
{
    public:
        TrackedInterfaces();
        ~TrackedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TrackedInterface; //type: Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface> > tracked_interface;


}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface : public Entity
{
    public:
        TrackedInterface();
        ~TrackedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf priority_decrement; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::TrackedInterfaces::TrackedInterface


class Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf hello_msec_flag; //type: boolean
        YLeaf hello_msec; //type: uint32
        YLeaf hello_sec; //type: uint32
        YLeaf hold_msec_flag; //type: boolean
        YLeaf hold_msec; //type: uint32
        YLeaf hold_sec; //type: uint32



}; // Hsrp::Interfaces::Interface::Ipv4::Version2::Groups::Group::Timers


class Hsrp::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf state_change_disable; //type: empty



}; // Hsrp::Logging

class HsrpLinklocalEnum : public Enum
{
    public:
        static const Enum::YLeaf manual;
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf legacy;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_HSRP_CFG_ */

