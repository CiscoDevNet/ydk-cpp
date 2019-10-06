#ifndef _CISCO_IOS_XR_RGMGR_CFG_
#define _CISCO_IOS_XR_RGMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_rgmgr_cfg {

class RedundancyGroupManager : public ydk::Entity
{
    public:
        RedundancyGroupManager();
        ~RedundancyGroupManager();

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
        class Aps; //type: RedundancyGroupManager::Aps
        class Iccp; //type: RedundancyGroupManager::Iccp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps> aps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp> iccp;
        
}; // RedundancyGroupManager


class RedundancyGroupManager::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

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

        class DefaultRedundancyGroup; //type: RedundancyGroupManager::Aps::DefaultRedundancyGroup
        class Groups; //type: RedundancyGroupManager::Aps::Groups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::DefaultRedundancyGroup> default_redundancy_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups> groups;
        
}; // RedundancyGroupManager::Aps


class RedundancyGroupManager::Aps::DefaultRedundancyGroup : public ydk::Entity
{
    public:
        DefaultRedundancyGroup();
        ~DefaultRedundancyGroup();

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

        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf backup_interface_name; //type: string

}; // RedundancyGroupManager::Aps::DefaultRedundancyGroup


class RedundancyGroupManager::Aps::Groups : public ydk::Entity
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

        class Group; //type: RedundancyGroupManager::Aps::Groups::Group

        ydk::YList group;
        
}; // RedundancyGroupManager::Aps::Groups


class RedundancyGroupManager::Aps::Groups::Group : public ydk::Entity
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
        class Controllers; //type: RedundancyGroupManager::Aps::Groups::Group::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups::Group::Controllers> controllers;
        
}; // RedundancyGroupManager::Aps::Groups::Group


class RedundancyGroupManager::Aps::Groups::Group::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Controller; //type: RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller

        ydk::YList controller;
        
}; // RedundancyGroupManager::Aps::Groups::Group::Controllers


class RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf controller_name; //type: string
        ydk::YLeaf next_hop_address; //type: string
        ydk::YLeaf backup_interface_name; //type: string

}; // RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller


class RedundancyGroupManager::Iccp : public ydk::Entity
{
    public:
        Iccp();
        ~Iccp();

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

        class IccpGroups; //type: RedundancyGroupManager::Iccp::IccpGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups> iccp_groups;
        
}; // RedundancyGroupManager::Iccp


class RedundancyGroupManager::Iccp::IccpGroups : public ydk::Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

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

        class IccpGroup; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup

        ydk::YList iccp_group;
        
}; // RedundancyGroupManager::Iccp::IccpGroups


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup : public ydk::Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

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

        ydk::YLeaf group_number; //type: uint32
        ydk::YLeaf isolation_recovery_delay; //type: uint32
        ydk::YLeaf mode; //type: IccpMode
        class Backbones; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones
        class Members; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members
        class NvSatellite; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite
        class Mlacp; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones> backbones;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members> members;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite> nv_satellite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp> mlacp;
        
}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones : public ydk::Entity
{
    public:
        Backbones();
        ~Backbones();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Backbone; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone

        ydk::YList backbone;
        
}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone : public ydk::Entity
{
    public:
        Backbone();
        ~Backbone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf backbone_name; //type: string

}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members : public ydk::Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Member; //type: RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member

        ydk::YList member;
        
}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_address; //type: string

}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite : public ydk::Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_mac; //type: string

}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite


class RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp : public ydk::Entity
{
    public:
        Mlacp();
        ~Mlacp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_timeout; //type: uint32
        ydk::YLeaf system_mac; //type: string
        ydk::YLeaf node; //type: uint32
        ydk::YLeaf system_priority; //type: uint32

}; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Mlacp

class IccpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf singleton;

        static int get_enum_value(const std::string & name) {
            if (name == "singleton") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_RGMGR_CFG_ */

