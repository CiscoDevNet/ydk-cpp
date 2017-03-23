#ifndef _CISCO_IOS_XR_INFRA_SERG_CFG_
#define _CISCO_IOS_XR_INFRA_SERG_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_serg_cfg {

class SessionRedundancy : public Entity
{
    public:
        SessionRedundancy();
        ~SessionRedundancy();

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


        YLeaf redundancy_disable; //type: empty
        YLeaf enable; //type: empty
        YLeaf source_interface; //type: string
        YLeaf preferred_role; //type: SessionRedundancyGroupRoleEnum
        YLeaf hold_timer; //type: uint32

        class Groups; //type: SessionRedundancy::Groups
        class RevertiveTimer; //type: SessionRedundancy::RevertiveTimer

        std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups> groups;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::RevertiveTimer> revertive_timer;


}; // SessionRedundancy


class SessionRedundancy::Groups : public Entity
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



        class Group; //type: SessionRedundancy::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group> > group;


}; // SessionRedundancy::Groups


class SessionRedundancy::Groups::Group : public Entity
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


        YLeaf group_id; //type: uint32
        YLeaf core_tracking_object; //type: string
        YLeaf disable_tracking_object; //type: empty
        YLeaf redundancy_disable; //type: empty
        YLeaf enable; //type: empty
        YLeaf description; //type: string
        YLeaf access_tracking_object; //type: string
        YLeaf preferred_role; //type: SessionRedundancyGroupRoleEnum
        YLeaf hold_timer; //type: uint32

        class Peer; //type: SessionRedundancy::Groups::Group::Peer
        class RevertiveTimer; //type: SessionRedundancy::Groups::Group::RevertiveTimer
        class InterfaceList; //type: SessionRedundancy::Groups::Group::InterfaceList

        std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::InterfaceList> interface_list;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::Peer> peer;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::RevertiveTimer> revertive_timer;


}; // SessionRedundancy::Groups::Group


class SessionRedundancy::Groups::Group::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipaddress; //type: SessionRedundancy::Groups::Group::Peer::Ipaddress

        std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::Peer::Ipaddress> ipaddress;


}; // SessionRedundancy::Groups::Group::Peer


class SessionRedundancy::Groups::Group::Peer::Ipaddress : public Entity
{
    public:
        Ipaddress();
        ~Ipaddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address_family; //type: SergAddrFamilyEnum
        YLeaf prefix_string; //type: string



}; // SessionRedundancy::Groups::Group::Peer::Ipaddress


class SessionRedundancy::Groups::Group::RevertiveTimer : public Entity
{
    public:
        RevertiveTimer();
        ~RevertiveTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_value; //type: uint32
        YLeaf value_; //type: uint32



}; // SessionRedundancy::Groups::Group::RevertiveTimer


class SessionRedundancy::Groups::Group::InterfaceList : public Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class InterfaceRanges; //type: SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges
        class Interfaces; //type: SessionRedundancy::Groups::Group::InterfaceList::Interfaces

        std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges> interface_ranges;
        std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::InterfaceList::Interfaces> interfaces;


}; // SessionRedundancy::Groups::Group::InterfaceList


class SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges : public Entity
{
    public:
        InterfaceRanges();
        ~InterfaceRanges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceRange; //type: SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange> > interface_range;


}; // SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges


class SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange : public Entity
{
    public:
        InterfaceRange();
        ~InterfaceRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf sub_interface_range_start; //type: uint32
        YLeaf sub_interface_range_end; //type: uint32
        YLeaf interface_id_range_start; //type: uint32
        YLeaf interface_id_range_end; //type: uint32



}; // SessionRedundancy::Groups::Group::InterfaceList::InterfaceRanges::InterfaceRange


class SessionRedundancy::Groups::Group::InterfaceList::Interfaces : public Entity
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



        class Interface; //type: SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_infra_serg_cfg::SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface> > interface;


}; // SessionRedundancy::Groups::Group::InterfaceList::Interfaces


class SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface : public Entity
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
        YLeaf interface_id; //type: uint32



}; // SessionRedundancy::Groups::Group::InterfaceList::Interfaces::Interface


class SessionRedundancy::RevertiveTimer : public Entity
{
    public:
        RevertiveTimer();
        ~RevertiveTimer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_value; //type: uint32
        YLeaf value_; //type: uint32



}; // SessionRedundancy::RevertiveTimer

class SergAddrFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class SessionRedundancyGroupRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SERG_CFG_ */

