#ifndef _IETF_NETCONF_
#define _IETF_NETCONF_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace ietf_netconf {

class GetConfigRpc : public Entity
{
    public:
        GetConfigRpc();
        ~GetConfigRpc();

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

        class Input; //type: GetConfigRpc::Input
        class Output; //type: GetConfigRpc::Output

        std::shared_ptr<ietf_netconf::GetConfigRpc::Input> input;
        std::shared_ptr<ietf_netconf::GetConfigRpc::Output> output;
        
}; // GetConfigRpc


class GetConfigRpc::Input : public Entity
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

        YLeaf filter; //type: string
        YLeaf with_defaults; //type: WithDefaultsModeEnum
        class Source; //type: GetConfigRpc::Input::Source

        std::shared_ptr<ietf_netconf::GetConfigRpc::Input::Source> source;
        
}; // GetConfigRpc::Input


class GetConfigRpc::Input::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty

}; // GetConfigRpc::Input::Source


class GetConfigRpc::Output : public Entity
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

        YLeaf data; //type: string

}; // GetConfigRpc::Output

class EditConfigRpc : public Entity
{
    public:
        EditConfigRpc();
        ~EditConfigRpc();

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

        class Input; //type: EditConfigRpc::Input

        std::shared_ptr<ietf_netconf::EditConfigRpc::Input> input;
        
}; // EditConfigRpc


class EditConfigRpc::Input : public Entity
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

        YLeaf default_operation; //type: DefaultOperationEnum
        YLeaf test_option; //type: TestOptionEnum
        YLeaf error_option; //type: ErrorOptionEnum
        YLeaf config; //type: string
        YLeaf url; //type: string
        class Target; //type: EditConfigRpc::Input::Target

        std::shared_ptr<ietf_netconf::EditConfigRpc::Input::Target> target;
                class DefaultOperationEnum;
        class TestOptionEnum;
        class ErrorOptionEnum;

}; // EditConfigRpc::Input


class EditConfigRpc::Input::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate; //type: empty
        YLeaf running; //type: empty

}; // EditConfigRpc::Input::Target

class CopyConfigRpc : public Entity
{
    public:
        CopyConfigRpc();
        ~CopyConfigRpc();

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

        class Input; //type: CopyConfigRpc::Input

        std::shared_ptr<ietf_netconf::CopyConfigRpc::Input> input;
        
}; // CopyConfigRpc


class CopyConfigRpc::Input : public Entity
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

        YLeaf with_defaults; //type: WithDefaultsModeEnum
        class Target; //type: CopyConfigRpc::Input::Target
        class Source; //type: CopyConfigRpc::Input::Source

        std::shared_ptr<ietf_netconf::CopyConfigRpc::Input::Source> source;
        std::shared_ptr<ietf_netconf::CopyConfigRpc::Input::Target> target;
        
}; // CopyConfigRpc::Input


class CopyConfigRpc::Input::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty
        YLeaf url; //type: string

}; // CopyConfigRpc::Input::Target


class CopyConfigRpc::Input::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty
        YLeaf url; //type: string
        YLeaf config; //type: string

}; // CopyConfigRpc::Input::Source

class DeleteConfigRpc : public Entity
{
    public:
        DeleteConfigRpc();
        ~DeleteConfigRpc();

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

        class Input; //type: DeleteConfigRpc::Input

        std::shared_ptr<ietf_netconf::DeleteConfigRpc::Input> input;
        
}; // DeleteConfigRpc


class DeleteConfigRpc::Input : public Entity
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

        class Target; //type: DeleteConfigRpc::Input::Target

        std::shared_ptr<ietf_netconf::DeleteConfigRpc::Input::Target> target;
        
}; // DeleteConfigRpc::Input


class DeleteConfigRpc::Input::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf startup; //type: empty
        YLeaf url; //type: string

}; // DeleteConfigRpc::Input::Target

class LockRpc : public Entity
{
    public:
        LockRpc();
        ~LockRpc();

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

        class Input; //type: LockRpc::Input

        std::shared_ptr<ietf_netconf::LockRpc::Input> input;
        
}; // LockRpc


class LockRpc::Input : public Entity
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

        class Target; //type: LockRpc::Input::Target

        std::shared_ptr<ietf_netconf::LockRpc::Input::Target> target;
        
}; // LockRpc::Input


class LockRpc::Input::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty

}; // LockRpc::Input::Target

class UnlockRpc : public Entity
{
    public:
        UnlockRpc();
        ~UnlockRpc();

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

        class Input; //type: UnlockRpc::Input

        std::shared_ptr<ietf_netconf::UnlockRpc::Input> input;
        
}; // UnlockRpc


class UnlockRpc::Input : public Entity
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

        class Target; //type: UnlockRpc::Input::Target

        std::shared_ptr<ietf_netconf::UnlockRpc::Input::Target> target;
        
}; // UnlockRpc::Input


class UnlockRpc::Input::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty

}; // UnlockRpc::Input::Target

class GetRpc : public Entity
{
    public:
        GetRpc();
        ~GetRpc();

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

        class Input; //type: GetRpc::Input
        class Output; //type: GetRpc::Output

        std::shared_ptr<ietf_netconf::GetRpc::Input> input;
        std::shared_ptr<ietf_netconf::GetRpc::Output> output;
        
}; // GetRpc


class GetRpc::Input : public Entity
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

        YLeaf filter; //type: string
        YLeaf with_defaults; //type: WithDefaultsModeEnum

}; // GetRpc::Input


class GetRpc::Output : public Entity
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

        YLeaf data; //type: string

}; // GetRpc::Output

class CloseSessionRpc : public Entity
{
    public:
        CloseSessionRpc();
        ~CloseSessionRpc();

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


}; // CloseSessionRpc

class KillSessionRpc : public Entity
{
    public:
        KillSessionRpc();
        ~KillSessionRpc();

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

        class Input; //type: KillSessionRpc::Input

        std::shared_ptr<ietf_netconf::KillSessionRpc::Input> input;
        
}; // KillSessionRpc


class KillSessionRpc::Input : public Entity
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

        YLeaf session_id; //type: uint32

}; // KillSessionRpc::Input

class CommitRpc : public Entity
{
    public:
        CommitRpc();
        ~CommitRpc();

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

        class Input; //type: CommitRpc::Input

        std::shared_ptr<ietf_netconf::CommitRpc::Input> input;
        
}; // CommitRpc


class CommitRpc::Input : public Entity
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

        YLeaf confirmed; //type: empty
        YLeaf confirm_timeout; //type: uint32
        YLeaf persist; //type: string
        YLeaf persist_id; //type: string

}; // CommitRpc::Input

class DiscardChangesRpc : public Entity
{
    public:
        DiscardChangesRpc();
        ~DiscardChangesRpc();

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


}; // DiscardChangesRpc

class CancelCommitRpc : public Entity
{
    public:
        CancelCommitRpc();
        ~CancelCommitRpc();

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

        class Input; //type: CancelCommitRpc::Input

        std::shared_ptr<ietf_netconf::CancelCommitRpc::Input> input;
        
}; // CancelCommitRpc


class CancelCommitRpc::Input : public Entity
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

        YLeaf persist_id; //type: string

}; // CancelCommitRpc::Input

class ValidateRpc : public Entity
{
    public:
        ValidateRpc();
        ~ValidateRpc();

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

        class Input; //type: ValidateRpc::Input

        std::shared_ptr<ietf_netconf::ValidateRpc::Input> input;
        
}; // ValidateRpc


class ValidateRpc::Input : public Entity
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

        class Source; //type: ValidateRpc::Input::Source

        std::shared_ptr<ietf_netconf::ValidateRpc::Input::Source> source;
        
}; // ValidateRpc::Input


class ValidateRpc::Input::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty
        YLeaf url; //type: string
        YLeaf config; //type: string

}; // ValidateRpc::Input::Source

class ErrorSeverityTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf error;
        static const Enum::YLeaf warning;

};

class ErrorTagTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf in_use;
        static const Enum::YLeaf invalid_value;
        static const Enum::YLeaf too_big;
        static const Enum::YLeaf missing_attribute;
        static const Enum::YLeaf bad_attribute;
        static const Enum::YLeaf unknown_attribute;
        static const Enum::YLeaf missing_element;
        static const Enum::YLeaf bad_element;
        static const Enum::YLeaf unknown_element;
        static const Enum::YLeaf unknown_namespace;
        static const Enum::YLeaf access_denied;
        static const Enum::YLeaf lock_denied;
        static const Enum::YLeaf resource_denied;
        static const Enum::YLeaf rollback_failed;
        static const Enum::YLeaf data_exists;
        static const Enum::YLeaf data_missing;
        static const Enum::YLeaf operation_not_supported;
        static const Enum::YLeaf operation_failed;
        static const Enum::YLeaf partial_operation;
        static const Enum::YLeaf malformed_message;

};

class EditOperationTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf merge;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf create;
        static const Enum::YLeaf delete_;
        static const Enum::YLeaf remove;

};

class EditConfigRpc::Input::DefaultOperationEnum : public Enum
{
    public:
        static const Enum::YLeaf merge;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf none;

};

class EditConfigRpc::Input::TestOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf test_then_set;
        static const Enum::YLeaf set;
        static const Enum::YLeaf test_only;

};

class EditConfigRpc::Input::ErrorOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf stop_on_error;
        static const Enum::YLeaf continue_on_error;
        static const Enum::YLeaf rollback_on_error;

};


}
}

#endif /* _IETF_NETCONF_ */

