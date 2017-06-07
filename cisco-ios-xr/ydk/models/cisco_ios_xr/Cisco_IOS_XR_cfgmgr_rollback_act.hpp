#ifndef _CISCO_IOS_XR_CFGMGR_ROLLBACK_ACT_
#define _CISCO_IOS_XR_CFGMGR_ROLLBACK_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_cfgmgr_rollback_act {

class RollBackConfigurationLastRpc : public Entity
{
    public:
        RollBackConfigurationLastRpc();
        ~RollBackConfigurationLastRpc();

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

        class Input; //type: RollBackConfigurationLastRpc::Input

        std::shared_ptr<Cisco_IOS_XR_cfgmgr_rollback_act::RollBackConfigurationLastRpc::Input> input;
        
}; // RollBackConfigurationLastRpc


class RollBackConfigurationLastRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf count; //type: int32
        YLeaf force; //type: boolean
        YLeaf best_effort; //type: boolean
        YLeaf label; //type: string
        YLeaf comment; //type: string

}; // RollBackConfigurationLastRpc::Input

class RollBackConfigurationToRpc : public Entity
{
    public:
        RollBackConfigurationToRpc();
        ~RollBackConfigurationToRpc();

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

        class Input; //type: RollBackConfigurationToRpc::Input

        std::shared_ptr<Cisco_IOS_XR_cfgmgr_rollback_act::RollBackConfigurationToRpc::Input> input;
        
}; // RollBackConfigurationToRpc


class RollBackConfigurationToRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf commit_id; //type: string
        YLeaf force; //type: boolean
        YLeaf best_effort; //type: boolean
        YLeaf label; //type: string
        YLeaf comment; //type: string

}; // RollBackConfigurationToRpc::Input

class RollBackConfigurationToExcludeRpc : public Entity
{
    public:
        RollBackConfigurationToExcludeRpc();
        ~RollBackConfigurationToExcludeRpc();

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

        class Input; //type: RollBackConfigurationToExcludeRpc::Input

        std::shared_ptr<Cisco_IOS_XR_cfgmgr_rollback_act::RollBackConfigurationToExcludeRpc::Input> input;
        
}; // RollBackConfigurationToExcludeRpc


class RollBackConfigurationToExcludeRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf commit_id; //type: string
        YLeaf force; //type: boolean
        YLeaf best_effort; //type: boolean
        YLeaf label; //type: string
        YLeaf comment; //type: string

}; // RollBackConfigurationToExcludeRpc::Input

class RollBackConfigurationRpc : public Entity
{
    public:
        RollBackConfigurationRpc();
        ~RollBackConfigurationRpc();

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

        class Input; //type: RollBackConfigurationRpc::Input

        std::shared_ptr<Cisco_IOS_XR_cfgmgr_rollback_act::RollBackConfigurationRpc::Input> input;
        
}; // RollBackConfigurationRpc


class RollBackConfigurationRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf commit_id; //type: string
        YLeaf force; //type: boolean
        YLeaf best_effort; //type: boolean
        YLeaf label; //type: string
        YLeaf comment; //type: string

}; // RollBackConfigurationRpc::Input


}
}

#endif /* _CISCO_IOS_XR_CFGMGR_ROLLBACK_ACT_ */

