#ifndef _CISCO_IA_
#define _CISCO_IA_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace cisco_ia {

class SyncFromRpc : public Entity
{
    public:
        SyncFromRpc();
        ~SyncFromRpc();

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

        class Input; //type: SyncFromRpc::Input
        class Output; //type: SyncFromRpc::Output

        std::shared_ptr<cisco_ia::SyncFromRpc::Input> input;
        std::shared_ptr<cisco_ia::SyncFromRpc::Output> output;
        
}; // SyncFromRpc


class SyncFromRpc::Input : public Entity
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

        YLeaf sync_defaults; //type: empty

}; // SyncFromRpc::Input


class SyncFromRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf result; //type: string

}; // SyncFromRpc::Output

class SaveConfigRpc : public Entity
{
    public:
        SaveConfigRpc();
        ~SaveConfigRpc();

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

        class Output; //type: SaveConfigRpc::Output

        std::shared_ptr<cisco_ia::SaveConfigRpc::Output> output;
        
}; // SaveConfigRpc


class SaveConfigRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf result; //type: string

}; // SaveConfigRpc::Output

class CheckpointRpc : public Entity
{
    public:
        CheckpointRpc();
        ~CheckpointRpc();

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

        class Output; //type: CheckpointRpc::Output

        std::shared_ptr<cisco_ia::CheckpointRpc::Output> output;
        
}; // CheckpointRpc


class CheckpointRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf result; //type: string

}; // CheckpointRpc::Output

class RevertRpc : public Entity
{
    public:
        RevertRpc();
        ~RevertRpc();

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

        class Input; //type: RevertRpc::Input
        class Output; //type: RevertRpc::Output

        std::shared_ptr<cisco_ia::RevertRpc::Input> input;
        std::shared_ptr<cisco_ia::RevertRpc::Output> output;
        
}; // RevertRpc


class RevertRpc::Input : public Entity
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

        YLeaf now; //type: empty
        YLeaf timer; //type: int16
        YLeaf idle; //type: int16

}; // RevertRpc::Input


class RevertRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf result; //type: string

}; // RevertRpc::Output

class RollbackRpc : public Entity
{
    public:
        RollbackRpc();
        ~RollbackRpc();

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

        class Input; //type: RollbackRpc::Input
        class Output; //type: RollbackRpc::Output

        std::shared_ptr<cisco_ia::RollbackRpc::Input> input;
        std::shared_ptr<cisco_ia::RollbackRpc::Output> output;
        
}; // RollbackRpc


class RollbackRpc::Input : public Entity
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

        YLeaf target_url; //type: string
        YLeaf verbose; //type: boolean
        YLeaf nolock; //type: boolean
        YLeaf revert_on_error; //type: empty
        YLeaf revert_timer; //type: int16

}; // RollbackRpc::Input


class RollbackRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf result; //type: string

}; // RollbackRpc::Output

class CiaLogLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf information;
        static const Enum::YLeaf debug;

};

class CiaSyncTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf without_defaults;
        static const Enum::YLeaf include_defaults;

};

class SyslogSeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf emergency;
        static const Enum::YLeaf alert;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf notice;
        static const Enum::YLeaf info;
        static const Enum::YLeaf debug;

};

class OnepLogLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf fatal;
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;
        static const Enum::YLeaf information;
        static const Enum::YLeaf debug;
        static const Enum::YLeaf trace;

};


}
}

#endif /* _CISCO_IA_ */

