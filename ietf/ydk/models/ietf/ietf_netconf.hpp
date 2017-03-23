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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf with_defaults; //type: WithDefaultsModeEnum

        class Output; //type: GetConfigRpc::Output
        class Source; //type: GetConfigRpc::Source

        std::shared_ptr<ietf_netconf::GetConfigRpc::Output> output;
        std::shared_ptr<ietf_netconf::GetConfigRpc::Source> source;


}; // GetConfigRpc


class GetConfigRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // GetConfigRpc::Output


class GetConfigRpc::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty



}; // GetConfigRpc::Source

class EditConfigRpc : public Entity
{
    public:
        EditConfigRpc();
        ~EditConfigRpc();

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


        YLeaf default_operation; //type: DefaultOperationEnum
        YLeaf test_option; //type: TestOptionEnum
        YLeaf error_option; //type: ErrorOptionEnum
        YLeaf url; //type: string

        class Target; //type: EditConfigRpc::Target

        std::shared_ptr<ietf_netconf::EditConfigRpc::Target> target;
        class DefaultOperationEnum;
        class TestOptionEnum;
        class ErrorOptionEnum;


}; // EditConfigRpc


class EditConfigRpc::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate; //type: empty
        YLeaf running; //type: empty



}; // EditConfigRpc::Target

class CopyConfigRpc : public Entity
{
    public:
        CopyConfigRpc();
        ~CopyConfigRpc();

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


        YLeaf with_defaults; //type: WithDefaultsModeEnum

        class Target; //type: CopyConfigRpc::Target
        class Source; //type: CopyConfigRpc::Source

        std::shared_ptr<ietf_netconf::CopyConfigRpc::Source> source;
        std::shared_ptr<ietf_netconf::CopyConfigRpc::Target> target;


}; // CopyConfigRpc


class CopyConfigRpc::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty
        YLeaf url; //type: string



}; // CopyConfigRpc::Target


class CopyConfigRpc::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty
        YLeaf url; //type: string



}; // CopyConfigRpc::Source

class DeleteConfigRpc : public Entity
{
    public:
        DeleteConfigRpc();
        ~DeleteConfigRpc();

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



        class Target; //type: DeleteConfigRpc::Target

        std::shared_ptr<ietf_netconf::DeleteConfigRpc::Target> target;


}; // DeleteConfigRpc


class DeleteConfigRpc::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf startup; //type: empty
        YLeaf url; //type: string



}; // DeleteConfigRpc::Target

class LockRpc : public Entity
{
    public:
        LockRpc();
        ~LockRpc();

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



        class Target; //type: LockRpc::Target

        std::shared_ptr<ietf_netconf::LockRpc::Target> target;


}; // LockRpc


class LockRpc::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty



}; // LockRpc::Target

class UnlockRpc : public Entity
{
    public:
        UnlockRpc();
        ~UnlockRpc();

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



        class Target; //type: UnlockRpc::Target

        std::shared_ptr<ietf_netconf::UnlockRpc::Target> target;


}; // UnlockRpc


class UnlockRpc::Target : public Entity
{
    public:
        Target();
        ~Target();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty



}; // UnlockRpc::Target

class GetRpc : public Entity
{
    public:
        GetRpc();
        ~GetRpc();

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


        YLeaf with_defaults; //type: WithDefaultsModeEnum

        class Output; //type: GetRpc::Output

        std::shared_ptr<ietf_netconf::GetRpc::Output> output;


}; // GetRpc


class GetRpc::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // GetRpc::Output

class CloseSessionRpc : public Entity
{
    public:
        CloseSessionRpc();
        ~CloseSessionRpc();

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





}; // CloseSessionRpc

class KillSessionRpc : public Entity
{
    public:
        KillSessionRpc();
        ~KillSessionRpc();

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


        YLeaf session_id; //type: uint32



}; // KillSessionRpc

class CommitRpc : public Entity
{
    public:
        CommitRpc();
        ~CommitRpc();

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


        YLeaf confirmed; //type: empty
        YLeaf confirm_timeout; //type: uint32
        YLeaf persist; //type: string
        YLeaf persist_id; //type: string



}; // CommitRpc

class DiscardChangesRpc : public Entity
{
    public:
        DiscardChangesRpc();
        ~DiscardChangesRpc();

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





}; // DiscardChangesRpc

class CancelCommitRpc : public Entity
{
    public:
        CancelCommitRpc();
        ~CancelCommitRpc();

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


        YLeaf persist_id; //type: string



}; // CancelCommitRpc

class ValidateRpc : public Entity
{
    public:
        ValidateRpc();
        ~ValidateRpc();

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



        class Source; //type: ValidateRpc::Source

        std::shared_ptr<ietf_netconf::ValidateRpc::Source> source;


}; // ValidateRpc


class ValidateRpc::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate; //type: empty
        YLeaf running; //type: empty
        YLeaf startup; //type: empty
        YLeaf url; //type: string



}; // ValidateRpc::Source

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

class EditConfigRpc::DefaultOperationEnum : public Enum
{
    public:
        static const Enum::YLeaf merge;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf none;

};

class EditConfigRpc::TestOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf test_then_set;
        static const Enum::YLeaf set;
        static const Enum::YLeaf test_only;

};

class EditConfigRpc::ErrorOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf stop_on_error;
        static const Enum::YLeaf continue_on_error;
        static const Enum::YLeaf rollback_on_error;

};


}
}

#endif /* _IETF_NETCONF_ */

