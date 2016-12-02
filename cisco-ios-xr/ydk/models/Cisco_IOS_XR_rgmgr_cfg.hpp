#ifndef _CISCO_IOS_XR_RGMGR_CFG_
#define _CISCO_IOS_XR_RGMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_rgmgr_cfg {

class RedundancyGroupManager : public Entity
{
    public:
        RedundancyGroupManager();
        ~RedundancyGroupManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value enable; //type: empty


    class Aps : public Entity
    {
        public:
            Aps();
            ~Aps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class DefaultRedundancyGroup : public Entity
        {
            public:
                DefaultRedundancyGroup();
                ~DefaultRedundancyGroup();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value next_hop_address; //type: string
                Value backup_interface_name; //type: string




        }; // RedundancyGroupManager::Aps::DefaultRedundancyGroup


        class Groups : public Entity
        {
            public:
                Groups();
                ~Groups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Group : public Entity
            {
                public:
                    Group();
                    ~Group();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value group_id; //type: uint32


                class Controllers : public Entity
                {
                    public:
                        Controllers();
                        ~Controllers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Controller : public Entity
                    {
                        public:
                            Controller();
                            ~Controller();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value controller_name; //type: string
                            Value next_hop_address; //type: string
                            Value backup_interface_name; //type: string




                    }; // RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller


                        std::vector<std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups::Group::Controllers::Controller> > controller;


                }; // RedundancyGroupManager::Aps::Groups::Group::Controllers


                    std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups::Group::Controllers> controllers;


            }; // RedundancyGroupManager::Aps::Groups::Group


                std::vector<std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups::Group> > group;


        }; // RedundancyGroupManager::Aps::Groups


            std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::DefaultRedundancyGroup> default_redundancy_group;
            std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps::Groups> groups;


    }; // RedundancyGroupManager::Aps


    class Iccp : public Entity
    {
        public:
            Iccp();
            ~Iccp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class IccpGroups : public Entity
        {
            public:
                IccpGroups();
                ~IccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class IccpGroup : public Entity
            {
                public:
                    IccpGroup();
                    ~IccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value group_number; //type: uint32
                    Value isolation_recovery_delay; //type: uint32
                    Value mode; //type: IccpModeEnum


                class Backbones : public Entity
                {
                    public:
                        Backbones();
                        ~Backbones();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Backbone : public Entity
                    {
                        public:
                            Backbone();
                            ~Backbone();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value backbone_name; //type: string




                    }; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone


                        std::vector<std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones::Backbone> > backbone;


                }; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones


                class Members : public Entity
                {
                    public:
                        Members();
                        ~Members();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Member : public Entity
                    {
                        public:
                            Member();
                            ~Member();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value neighbor_address; //type: string




                    }; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member


                        std::vector<std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members::Member> > member;


                }; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members


                class NvSatellite : public Entity
                {
                    public:
                        NvSatellite();
                        ~NvSatellite();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value system_mac; //type: string




                }; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite


                    std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Backbones> backbones;
                    std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::Members> members;
                    std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup::NvSatellite> nv_satellite;
                    class IccpModeEnum;


            }; // RedundancyGroupManager::Iccp::IccpGroups::IccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups::IccpGroup> > iccp_group;


        }; // RedundancyGroupManager::Iccp::IccpGroups


            std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp::IccpGroups> iccp_groups;


    }; // RedundancyGroupManager::Iccp


        std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Aps> aps;
        std::unique_ptr<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager::Iccp> iccp;


}; // RedundancyGroupManager


class IccpModeEnum : public Enum
{
    public:
        static const Enum::Value singleton;

};


}
}

#endif /* _CISCO_IOS_XR_RGMGR_CFG_ */

