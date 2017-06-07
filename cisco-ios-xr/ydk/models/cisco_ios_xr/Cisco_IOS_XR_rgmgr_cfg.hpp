#ifndef _CISCO_IOS_XR_RGMGR_CFG_
#define _CISCO_IOS_XR_RGMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_rgmgr_cfg {

class RedundancyGroupManager : public Entity
{
    public:
        RedundancyGroupManager();
        ~RedundancyGroupManager();

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
        class Aps; //type: RedundancyGroupManager::Aps
        class Iccp; //type: RedundancyGroupManager::Iccp

        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps> aps;
        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp> iccp;
        
}; // RedundancyGroupManager


class RedundancyGroupManager::Aps : public Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DefaultRedundancyGroup; //type: RedundancyGroupManager::Aps::DefaultRedundancyGroup
        class Groups; //type: RedundancyGroupManager::Aps::Groups

        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::DefaultRedundancyGroup> default_redundancy_group;
        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups> groups;
        
}; // RedundancyGroupManager::Aps


class RedundancyGroupManager::Aps::DefaultRedundancyGroup : public Entity
{
    public:
        DefaultRedundancyGroup();
        ~DefaultRedundancyGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_address; //type: string
        YLeaf backup_interface_name; //type: string

}; // RedundancyGroupManager::Aps::DefaultRedundancyGroup


class RedundancyGroupManager::Aps::Groups : public Entity
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

        class Group; //type: RedundancyGroupManager::Aps::Groups::Group

        std::vector<std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups::Group> > group;
        
}; // RedundancyGroupManager::Aps::Groups


class RedundancyGroupManager::Aps::Groups::Group : public Entity
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
        class Controllers; //type: RedundancyGroupManager::Aps::Groups::Group::Controllers

        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups::Group::Controllers> controllers;
        
}; // RedundancyGroupManager::Aps::Groups::Group


class RedundancyGroupManager::Aps::Groups::Group::Controllers : public Entity
{
    public:
        Controllers();
        ~Controllers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Controller; //type: RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller

        std::vector<std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller> > controller;
        
}; // RedundancyGroupManager::Aps::Groups::Group::Controllers


class RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller : public Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf controller_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf backup_interface_name; //type: string

}; // RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller


class RedundancyGroupManager::Iccp : public Entity
{
    public:
        Iccp();
        ~Iccp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroups; //type: RedundancyGroupManager::Iccp::IccpGroups

        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups> iccp_groups;
        
}; // RedundancyGroupManager::Iccp


class RedundancyGroupManager::Iccp::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroup; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup> > iccp_group;
        
}; // RedundancyGroupManager::Iccp::IccpGroups


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_number; //type: uint32
        YLeaf isolation_recovery_delay; //type: uint32
        YLeaf mode; //type: IccpModeEnum
        class Backbones; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones
        class Members; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members
        class Mlacp; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp
        class NvSatellite; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite

        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones> backbones;
        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members> members;
        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp> mlacp;
        std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite> nv_satellite;
        
}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones : public Entity
{
    public:
        Backbones();
        ~Backbones();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Backbone; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone

        std::vector<std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone> > backbone;
        
}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone : public Entity
{
    public:
        Backbone();
        ~Backbone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf backbone_name; //type: string

}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Member; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member> > member;
        
}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_address; //type: string

}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp : public Entity
{
    public:
        Mlacp();
        ~Mlacp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf connect_timeout; //type: uint32
        YLeaf system_mac; //type: string
        YLeaf node; //type: uint32
        YLeaf system_priority; //type: uint32

}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite : public Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_mac; //type: string

}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite

class IccpModeEnum : public Enum
{
    public:
        static const Enum::YLeaf singleton;

};


}
}

#endif /* _CISCO_IOS_XR_RGMGR_CFG_ */

