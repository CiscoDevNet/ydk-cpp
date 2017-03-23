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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf count; //type: int32
        YLeaf force; //type: boolean
        YLeaf best_effort; //type: boolean
        YLeaf label; //type: string
        YLeaf comment; //type: string



}; // RollBackConfigurationLastRpc

class RollBackConfigurationToRpc : public Entity
{
    public:
        RollBackConfigurationToRpc();
        ~RollBackConfigurationToRpc();

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


        YLeaf commit_id; //type: string
        YLeaf force; //type: boolean
        YLeaf best_effort; //type: boolean
        YLeaf label; //type: string
        YLeaf comment; //type: string



}; // RollBackConfigurationToRpc

class RollBackConfigurationToExcludeRpc : public Entity
{
    public:
        RollBackConfigurationToExcludeRpc();
        ~RollBackConfigurationToExcludeRpc();

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


        YLeaf commit_id; //type: string
        YLeaf force; //type: boolean
        YLeaf best_effort; //type: boolean
        YLeaf label; //type: string
        YLeaf comment; //type: string



}; // RollBackConfigurationToExcludeRpc

class RollBackConfigurationRpc : public Entity
{
    public:
        RollBackConfigurationRpc();
        ~RollBackConfigurationRpc();

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


        YLeaf commit_id; //type: string
        YLeaf force; //type: boolean
        YLeaf best_effort; //type: boolean
        YLeaf label; //type: string
        YLeaf comment; //type: string



}; // RollBackConfigurationRpc


}
}

#endif /* _CISCO_IOS_XR_CFGMGR_ROLLBACK_ACT_ */

