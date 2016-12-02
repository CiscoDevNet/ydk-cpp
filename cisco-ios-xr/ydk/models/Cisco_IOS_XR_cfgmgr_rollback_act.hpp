#ifndef _CISCO_IOS_XR_CFGMGR_ROLLBACK_ACT_
#define _CISCO_IOS_XR_CFGMGR_ROLLBACK_ACT_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value count; //type: int32
        Value force; //type: boolean
        Value best_effort; //type: boolean
        Value label; //type: string
        Value comment; //type: string




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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value commit_id; //type: string
        Value force; //type: boolean
        Value best_effort; //type: boolean
        Value label; //type: string
        Value comment; //type: string




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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value commit_id; //type: string
        Value force; //type: boolean
        Value best_effort; //type: boolean
        Value label; //type: string
        Value comment; //type: string




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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value commit_id; //type: string
        Value force; //type: boolean
        Value best_effort; //type: boolean
        Value label; //type: string
        Value comment; //type: string




}; // RollBackConfigurationRpc



}
}

#endif /* _CISCO_IOS_XR_CFGMGR_ROLLBACK_ACT_ */

