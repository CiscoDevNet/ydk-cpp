#ifndef _CISCO_IOS_XR_SUBSCRIBER_SRG_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_SRG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_subscriber_srg_cfg {

class SubscriberRedundancy : public Entity
{
    public:
        SubscriberRedundancy();
        ~SubscriberRedundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf enable; //type: empty
        YLeaf virtual_mac_prefix; //type: string
        YLeaf preferred_role; //type: SubscriberRedundancyGroupRoleEnum
        YLeaf source_interface; //type: string
        YLeaf slave_mode; //type: SubscriberRedundancyGroupSlaveModeEnum
        YLeaf hold_timer; //type: uint32
        YLeaf redundancy_disable; //type: empty
        class Groups; //type: SubscriberRedundancy::Groups
        class RevertiveTimer; //type: SubscriberRedundancy::RevertiveTimer

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::RevertiveTimer> revertive_timer;
        
}; // SubscriberRedundancy


class SubscriberRedundancy::Groups : public Entity
{
    public:
        Groups();
        ~Groups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: SubscriberRedundancy::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group> > group;
        
}; // SubscriberRedundancy::Groups


class SubscriberRedundancy::Groups::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_id; //type: uint32
        YLeaf disable_tracking_object; //type: empty
        YLeaf core_tracking_object; //type: string
        YLeaf enable; //type: empty
        YLeaf preferred_role; //type: SubscriberRedundancyGroupRoleEnum
        YLeaf description; //type: string
        YLeaf l2tp_source_ip_address; //type: string
        YLeaf slave_mode; //type: SubscriberRedundancyGroupSlaveModeEnum
        YLeaf hold_timer; //type: uint32
        YLeaf access_tracking_object; //type: string
        YLeaf enable_fast_switchover; //type: empty
        YLeaf redundancy_disable; //type: empty
        class InterfaceList; //type: SubscriberRedundancy::Groups::Group::InterfaceList
        class Peer; //type: SubscriberRedundancy::Groups::Group::Peer
        class RevertiveTimer; //type: SubscriberRedundancy::Groups::Group::RevertiveTimer
        class VirtualMac; //type: SubscriberRedundancy::Groups::Group::VirtualMac
        class StateControlRoute; //type: SubscriberRedundancy::Groups::Group::StateControlRoute

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::InterfaceList> interface_list;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::Peer> peer;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::RevertiveTimer> revertive_timer;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute> state_control_route;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::VirtualMac> virtual_mac;
        
}; // SubscriberRedundancy::Groups::Group


class SubscriberRedundancy::Groups::Group::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty
        class Interfaces; //type: SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces
        class InterfaceRanges; //type: SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges> interface_ranges;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces> interfaces;
        
}; // SubscriberRedundancy::Groups::Group::InterfaceList


class SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface> > interface;
        
}; // SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces


class SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_id; //type: uint32

}; // SubscriberRedundancy::Groups::Group::InterfaceList::Interfaces::Interface


class SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges : public Entity
{
    public:
        InterfaceRanges();
        ~InterfaceRanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceRange; //type: SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange> > interface_range;
        
}; // SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges


class SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange : public Entity
{
    public:
        InterfaceRange();
        ~InterfaceRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf sub_interface_range_start; //type: uint32
        YLeaf sub_interface_range_end; //type: uint32
        YLeaf interface_id_range_start; //type: uint32
        YLeaf interface_id_range_end; //type: uint32

}; // SubscriberRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange


class SubscriberRedundancy::Groups::Group::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_add_disable; //type: empty
        class Ipaddress; //type: SubscriberRedundancy::Groups::Group::Peer::Ipaddress

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::Peer::Ipaddress> ipaddress;
        
}; // SubscriberRedundancy::Groups::Group::Peer


class SubscriberRedundancy::Groups::Group::Peer::Ipaddress : public Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address_family; //type: SrgAddrFamilyEnum
        YLeaf prefix_string; //type: string

}; // SubscriberRedundancy::Groups::Group::Peer::Ipaddress


class SubscriberRedundancy::Groups::Group::RevertiveTimer : public Entity
{
    public:
        RevertiveTimer();
        ~RevertiveTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_value; //type: uint32
        YLeaf value_; //type: uint32

}; // SubscriberRedundancy::Groups::Group::RevertiveTimer


class SubscriberRedundancy::Groups::Group::VirtualMac : public Entity
{
    public:
        VirtualMac();
        ~VirtualMac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf disable; //type: empty

}; // SubscriberRedundancy::Groups::Group::VirtualMac


class SubscriberRedundancy::Groups::Group::StateControlRoute : public Entity
{
    public:
        StateControlRoute();
        ~StateControlRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Route; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route
        class Ipv6Route; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route> ipv4_route;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route> ipv6_route;
        
}; // SubscriberRedundancy::Groups::Group::StateControlRoute


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route : public Entity
{
    public:
        Ipv4Route();
        ~Ipv4Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: int32
        YLeaf prefix_length; //type: int32
        YLeaf address_family; //type: SrgAddrFamilyEnum
        YLeaf prefix_string; //type: string

}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv4Route


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route : public Entity
{
    public:
        Ipv6Route();
        ~Ipv6Route();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6NaRoute; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute
        class Ipv6PdRoute; //type: SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute

        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute> ipv6na_route;
        std::shared_ptr<Cisco_IOS_XR_subscriber_srg_cfg::SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute> ipv6pd_route;
        
}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute : public Entity
{
    public:
        Ipv6NaRoute();
        ~Ipv6NaRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: int32
        YLeaf prefix_length; //type: int32
        YLeaf address_family; //type: SrgAddrFamilyEnum
        YLeaf prefix_string; //type: string

}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6NaRoute


class SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute : public Entity
{
    public:
        Ipv6PdRoute();
        ~Ipv6PdRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: int32
        YLeaf prefix_length; //type: int32
        YLeaf address_family; //type: SrgAddrFamilyEnum
        YLeaf prefix_string; //type: string

}; // SubscriberRedundancy::Groups::Group::StateControlRoute::Ipv6Route::Ipv6PdRoute


class SubscriberRedundancy::RevertiveTimer : public Entity
{
    public:
        RevertiveTimer();
        ~RevertiveTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_value; //type: uint32
        YLeaf value_; //type: uint32

}; // SubscriberRedundancy::RevertiveTimer

class SubscriberRedundancyGroupSlaveModeEnum : public Enum
{
    public:
        static const Enum::YLeaf warm;
        static const Enum::YLeaf hot;

};

class SrgAddrFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class SubscriberRedundancyGroupRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_SRG_CFG_ */

