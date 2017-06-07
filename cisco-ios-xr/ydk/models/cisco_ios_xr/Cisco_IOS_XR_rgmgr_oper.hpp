#ifndef _CISCO_IOS_XR_RGMGR_OPER_
#define _CISCO_IOS_XR_RGMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_rgmgr_oper {

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

        class Controllers; //type: RedundancyGroupManager::Controllers

        std::shared_ptr<Cisco_IOS_XR_rgmgr_oper::RedundancyGroupManager::Controllers> controllers;
        
}; // RedundancyGroupManager


class RedundancyGroupManager::Controllers : public Entity
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

        class Controller; //type: RedundancyGroupManager::Controllers::Controller

        std::vector<std::shared_ptr<Cisco_IOS_XR_rgmgr_oper::RedundancyGroupManager::Controllers::Controller> > controller;
        
}; // RedundancyGroupManager::Controllers


class RedundancyGroupManager::Controllers::Controller : public Entity
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
        YLeaf multi_router_aps_group_number; //type: string
        YLeaf controller_name_xr; //type: string
        YLeaf controller_handle; //type: string
        YLeaf backup_interface_name; //type: string
        YLeaf backup_interface_handle; //type: string
        YLeaf backup_interface_next_hop_ip_address; //type: string
        YLeaf inter_chassis_group_state; //type: string

}; // RedundancyGroupManager::Controllers::Controller


}
}

#endif /* _CISCO_IOS_XR_RGMGR_OPER_ */

