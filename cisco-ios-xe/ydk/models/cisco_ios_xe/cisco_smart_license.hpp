#ifndef _CISCO_SMART_LICENSE_
#define _CISCO_SMART_LICENSE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_smart_license {

class RegisterIdToken : public ydk::Entity
{
    public:
        RegisterIdToken();
        ~RegisterIdToken();

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

        class Input; //type: RegisterIdToken::Input
        class Output; //type: RegisterIdToken::Output

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::RegisterIdToken::Input> input;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::RegisterIdToken::Output> output;
        
}; // RegisterIdToken


class RegisterIdToken::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf id_token; //type: string
        ydk::YLeaf force; //type: boolean

}; // RegisterIdToken::Input


class RegisterIdToken::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf return_code; //type: ErrorEnum

}; // RegisterIdToken::Output

class DeRegister : public ydk::Entity
{
    public:
        DeRegister();
        ~DeRegister();

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

        class Output; //type: DeRegister::Output

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::DeRegister::Output> output;
        
}; // DeRegister


class DeRegister::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf return_code; //type: ErrorEnum

}; // DeRegister::Output

class RenewId : public ydk::Entity
{
    public:
        RenewId();
        ~RenewId();

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

        class Output; //type: RenewId::Output

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::RenewId::Output> output;
        
}; // RenewId


class RenewId::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf return_code; //type: ErrorEnum

}; // RenewId::Output

class RenewAuth : public ydk::Entity
{
    public:
        RenewAuth();
        ~RenewAuth();

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

        class Output; //type: RenewAuth::Output

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::RenewAuth::Output> output;
        
}; // RenewAuth


class RenewAuth::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        ydk::YLeaf return_code; //type: ErrorEnum

}; // RenewAuth::Output

class Licensing : public ydk::Entity
{
    public:
        Licensing();
        ~Licensing();

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

        class Config; //type: Licensing::Config
        class State; //type: Licensing::State

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::Config> config;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State> state;
        
}; // Licensing


class Licensing::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf custom_id; //type: string
        class Privacy; //type: Licensing::Config::Privacy
        class Utility; //type: Licensing::Config::Utility
        class Transport; //type: Licensing::Config::Transport

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::Config::Privacy> privacy;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::Config::Utility> utility;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::Config::Transport> transport;
        
}; // Licensing::Config


class Licensing::Config::Privacy : public ydk::Entity
{
    public:
        Privacy();
        ~Privacy();

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

        ydk::YLeaf hostname; //type: boolean
        ydk::YLeaf version; //type: boolean

}; // Licensing::Config::Privacy


class Licensing::Config::Utility : public ydk::Entity
{
    public:
        Utility();
        ~Utility();

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

        ydk::YLeaf utility_enable; //type: boolean
        class CustomerInfo; //type: Licensing::Config::Utility::CustomerInfo

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::Config::Utility::CustomerInfo> customer_info;
        
}; // Licensing::Config::Utility


class Licensing::Config::Utility::CustomerInfo : public ydk::Entity
{
    public:
        CustomerInfo();
        ~CustomerInfo();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf street; //type: string
        ydk::YLeaf city; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf country; //type: string
        ydk::YLeaf postal_code; //type: string

}; // Licensing::Config::Utility::CustomerInfo


class Licensing::Config::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

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

        ydk::YLeaf transport_type; //type: TransportTypeEnum
        class TransportSmart; //type: Licensing::Config::Transport::TransportSmart

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::Config::Transport::TransportSmart> transport_smart;
        
}; // Licensing::Config::Transport


class Licensing::Config::Transport::TransportSmart : public ydk::Entity
{
    public:
        TransportSmart();
        ~TransportSmart();

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

        ydk::YLeaf url_default; //type: boolean
        class Urls; //type: Licensing::Config::Transport::TransportSmart::Urls

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::Config::Transport::TransportSmart::Urls> urls;
        
}; // Licensing::Config::Transport::TransportSmart


class Licensing::Config::Transport::TransportSmart::Urls : public ydk::Entity
{
    public:
        Urls();
        ~Urls();

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

        ydk::YLeaf url_registration; //type: string
        ydk::YLeaf url_utility; //type: string

}; // Licensing::Config::Transport::TransportSmart::Urls


class Licensing::State : public ydk::Entity
{
    public:
        State();
        ~State();

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

        ydk::YLeaf always_enabled; //type: boolean
        ydk::YLeaf smart_enabled; //type: boolean
        ydk::YLeaf version; //type: string
        class StateInfo; //type: Licensing::State::StateInfo

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo> state_info;
        
}; // Licensing::State


class Licensing::State::StateInfo : public ydk::Entity
{
    public:
        StateInfo();
        ~StateInfo();

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

        ydk::YLeaf custom_id; //type: string
        class Registration; //type: Licensing::State::StateInfo::Registration
        class Authorization; //type: Licensing::State::StateInfo::Authorization
        class Utility; //type: Licensing::State::StateInfo::Utility
        class Transport; //type: Licensing::State::StateInfo::Transport
        class Privacy; //type: Licensing::State::StateInfo::Privacy
        class Evaluation; //type: Licensing::State::StateInfo::Evaluation
        class Udi; //type: Licensing::State::StateInfo::Udi
        class Usage; //type: Licensing::State::StateInfo::Usage

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Registration> registration;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Authorization> authorization;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Utility> utility;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Transport> transport;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Privacy> privacy;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Evaluation> evaluation;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Udi> udi;
        ydk::YList usage;
        
}; // Licensing::State::StateInfo


class Licensing::State::StateInfo::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

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

        ydk::YLeaf registration_state; //type: RegistrationStateEnum
        ydk::YLeaf export_control_allowed; //type: boolean
        class RegistrationInProgress; //type: Licensing::State::StateInfo::Registration::RegistrationInProgress
        class RegistrationFailed; //type: Licensing::State::StateInfo::Registration::RegistrationFailed
        class RegistrationRetry; //type: Licensing::State::StateInfo::Registration::RegistrationRetry
        class RegistrationComplete; //type: Licensing::State::StateInfo::Registration::RegistrationComplete

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Registration::RegistrationInProgress> registration_in_progress;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Registration::RegistrationFailed> registration_failed;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Registration::RegistrationRetry> registration_retry;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Registration::RegistrationComplete> registration_complete;
        
}; // Licensing::State::StateInfo::Registration


class Licensing::State::StateInfo::Registration::RegistrationInProgress : public ydk::Entity
{
    public:
        RegistrationInProgress();
        ~RegistrationInProgress();

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

        ydk::YLeaf start_time; //type: string

}; // Licensing::State::StateInfo::Registration::RegistrationInProgress


class Licensing::State::StateInfo::Registration::RegistrationFailed : public ydk::Entity
{
    public:
        RegistrationFailed();
        ~RegistrationFailed();

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

        ydk::YLeaf fail_time; //type: string
        ydk::YLeaf fail_message; //type: string

}; // Licensing::State::StateInfo::Registration::RegistrationFailed


class Licensing::State::StateInfo::Registration::RegistrationRetry : public ydk::Entity
{
    public:
        RegistrationRetry();
        ~RegistrationRetry();

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

        ydk::YLeaf retry_next_time; //type: string
        ydk::YLeaf fail_time; //type: string
        ydk::YLeaf fail_message; //type: string

}; // Licensing::State::StateInfo::Registration::RegistrationRetry


class Licensing::State::StateInfo::Registration::RegistrationComplete : public ydk::Entity
{
    public:
        RegistrationComplete();
        ~RegistrationComplete();

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

        ydk::YLeaf complete_time; //type: string
        ydk::YLeaf last_renew_time; //type: string
        ydk::YLeaf next_renew_time; //type: string
        ydk::YLeaf expire_time; //type: string
        ydk::YLeaf last_renew_success; //type: boolean
        ydk::YLeaf fail_message; //type: string
        ydk::YLeaf smart_account; //type: string
        ydk::YLeaf virtual_account; //type: string

}; // Licensing::State::StateInfo::Registration::RegistrationComplete


class Licensing::State::StateInfo::Authorization : public ydk::Entity
{
    public:
        Authorization();
        ~Authorization();

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

        ydk::YLeaf authorization_state; //type: AuthorizationStateEnum
        class AuthorizationNone; //type: Licensing::State::StateInfo::Authorization::AuthorizationNone
        class AuthorizationEval; //type: Licensing::State::StateInfo::Authorization::AuthorizationEval
        class AuthorizationEvalExpired; //type: Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired
        class AuthorizationAuthorized; //type: Licensing::State::StateInfo::Authorization::AuthorizationAuthorized
        class AuthorizationAuthorizedReservation; //type: Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation
        class AuthorizationOutOfCompliance; //type: Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance
        class AuthorizationAuthorizationExpired; //type: Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Authorization::AuthorizationNone> authorization_none;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Authorization::AuthorizationEval> authorization_eval;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired> authorization_eval_expired;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Authorization::AuthorizationAuthorized> authorization_authorized;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation> authorization_authorized_reservation;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance> authorization_out_of_compliance;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired> authorization_authorization_expired;
        
}; // Licensing::State::StateInfo::Authorization


class Licensing::State::StateInfo::Authorization::AuthorizationNone : public ydk::Entity
{
    public:
        AuthorizationNone();
        ~AuthorizationNone();

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


}; // Licensing::State::StateInfo::Authorization::AuthorizationNone


class Licensing::State::StateInfo::Authorization::AuthorizationEval : public ydk::Entity
{
    public:
        AuthorizationEval();
        ~AuthorizationEval();

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

        ydk::YLeaf seconds_left; //type: uint64

}; // Licensing::State::StateInfo::Authorization::AuthorizationEval


class Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired : public ydk::Entity
{
    public:
        AuthorizationEvalExpired();
        ~AuthorizationEvalExpired();

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

        ydk::YLeaf expire_time; //type: string

}; // Licensing::State::StateInfo::Authorization::AuthorizationEvalExpired


class Licensing::State::StateInfo::Authorization::AuthorizationAuthorized : public ydk::Entity
{
    public:
        AuthorizationAuthorized();
        ~AuthorizationAuthorized();

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

        ydk::YLeaf last_comm_status_success; //type: boolean
        ydk::YLeaf fail_message; //type: string
        ydk::YLeaf last_comm_time; //type: string
        ydk::YLeaf next_comm_time; //type: string
        ydk::YLeaf comm_deadline_time; //type: string

}; // Licensing::State::StateInfo::Authorization::AuthorizationAuthorized


class Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation : public ydk::Entity
{
    public:
        AuthorizationAuthorizedReservation();
        ~AuthorizationAuthorizedReservation();

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

        ydk::YLeaf reservation_time; //type: string

}; // Licensing::State::StateInfo::Authorization::AuthorizationAuthorizedReservation


class Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance : public ydk::Entity
{
    public:
        AuthorizationOutOfCompliance();
        ~AuthorizationOutOfCompliance();

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

        ydk::YLeaf last_comm_status_success; //type: boolean
        ydk::YLeaf fail_message; //type: string
        ydk::YLeaf last_comm_time; //type: string
        ydk::YLeaf next_comm_time; //type: string
        ydk::YLeaf comm_deadline_time; //type: string
        ydk::YLeaf ooc_time; //type: string

}; // Licensing::State::StateInfo::Authorization::AuthorizationOutOfCompliance


class Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired : public ydk::Entity
{
    public:
        AuthorizationAuthorizationExpired();
        ~AuthorizationAuthorizationExpired();

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

        ydk::YLeaf last_comm_status_success; //type: boolean
        ydk::YLeaf fail_message; //type: string
        ydk::YLeaf last_comm_time; //type: string
        ydk::YLeaf next_comm_time; //type: string
        ydk::YLeaf comm_deadline_time; //type: string

}; // Licensing::State::StateInfo::Authorization::AuthorizationAuthorizationExpired


class Licensing::State::StateInfo::Utility : public ydk::Entity
{
    public:
        Utility();
        ~Utility();

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

        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf reporting; //type: UtilityReportingTypeEnum
        class ReportingTimes; //type: Licensing::State::StateInfo::Utility::ReportingTimes
        class CustomerInfo; //type: Licensing::State::StateInfo::Utility::CustomerInfo

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Utility::ReportingTimes> reporting_times;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Utility::CustomerInfo> customer_info;
        
}; // Licensing::State::StateInfo::Utility


class Licensing::State::StateInfo::Utility::ReportingTimes : public ydk::Entity
{
    public:
        ReportingTimes();
        ~ReportingTimes();

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

        ydk::YLeaf last_report_time; //type: string
        ydk::YLeaf last_report_success; //type: boolean
        ydk::YLeaf fail_message; //type: string
        ydk::YLeaf next_report_time; //type: string

}; // Licensing::State::StateInfo::Utility::ReportingTimes


class Licensing::State::StateInfo::Utility::CustomerInfo : public ydk::Entity
{
    public:
        CustomerInfo();
        ~CustomerInfo();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf street; //type: string
        ydk::YLeaf city; //type: string
        ydk::YLeaf state; //type: string
        ydk::YLeaf country; //type: string
        ydk::YLeaf postal_code; //type: string

}; // Licensing::State::StateInfo::Utility::CustomerInfo


class Licensing::State::StateInfo::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

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

        ydk::YLeaf transport_type; //type: TransportTypeEnum
        class UrlSettings; //type: Licensing::State::StateInfo::Transport::UrlSettings

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Transport::UrlSettings> url_settings;
        
}; // Licensing::State::StateInfo::Transport


class Licensing::State::StateInfo::Transport::UrlSettings : public ydk::Entity
{
    public:
        UrlSettings();
        ~UrlSettings();

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

        ydk::YLeaf url_registration; //type: string
        ydk::YLeaf url_utility; //type: string

}; // Licensing::State::StateInfo::Transport::UrlSettings


class Licensing::State::StateInfo::Privacy : public ydk::Entity
{
    public:
        Privacy();
        ~Privacy();

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

        ydk::YLeaf hostname; //type: boolean
        ydk::YLeaf version; //type: boolean

}; // Licensing::State::StateInfo::Privacy


class Licensing::State::StateInfo::Evaluation : public ydk::Entity
{
    public:
        Evaluation();
        ~Evaluation();

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

        ydk::YLeaf eval_in_use; //type: boolean
        ydk::YLeaf eval_expired; //type: boolean
        class EvalPeriodLeft; //type: Licensing::State::StateInfo::Evaluation::EvalPeriodLeft
        class EvalExpireTime; //type: Licensing::State::StateInfo::Evaluation::EvalExpireTime

        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Evaluation::EvalPeriodLeft> eval_period_left;
        std::shared_ptr<cisco_ios_xe::cisco_smart_license::Licensing::State::StateInfo::Evaluation::EvalExpireTime> eval_expire_time;
        
}; // Licensing::State::StateInfo::Evaluation


class Licensing::State::StateInfo::Evaluation::EvalPeriodLeft : public ydk::Entity
{
    public:
        EvalPeriodLeft();
        ~EvalPeriodLeft();

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

        ydk::YLeaf time_left; //type: uint32

}; // Licensing::State::StateInfo::Evaluation::EvalPeriodLeft


class Licensing::State::StateInfo::Evaluation::EvalExpireTime : public ydk::Entity
{
    public:
        EvalExpireTime();
        ~EvalExpireTime();

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

        ydk::YLeaf expire_time; //type: string

}; // Licensing::State::StateInfo::Evaluation::EvalExpireTime


class Licensing::State::StateInfo::Udi : public ydk::Entity
{
    public:
        Udi();
        ~Udi();

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

        ydk::YLeaf pid; //type: string
        ydk::YLeaf sn; //type: string
        ydk::YLeaf vid; //type: string
        ydk::YLeaf uuid; //type: string
        ydk::YLeaf suvi; //type: string
        ydk::YLeaf host_identifier; //type: string
        ydk::YLeaf mac_address; //type: string

}; // Licensing::State::StateInfo::Udi


class Licensing::State::StateInfo::Usage : public ydk::Entity
{
    public:
        Usage();
        ~Usage();

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

        ydk::YLeaf entitlement_tag; //type: string
        ydk::YLeaf short_name; //type: string
        ydk::YLeaf license_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf enforcement_mode; //type: EnforcementModeEnum
        ydk::YLeaf post_paid; //type: boolean
        ydk::YLeaf subscription_id; //type: string

}; // Licensing::State::StateInfo::Usage

class TransportTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf transport_type_callhome;
        static const ydk::Enum::YLeaf transport_type_smart;

        static int get_enum_value(const std::string & name) {
            if (name == "transport-type-callhome") return 0;
            if (name == "transport-type-smart") return 1;
            return -1;
        }
};

class ErrorEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf malloc;
        static const ydk::Enum::YLeaf nullpointer;
        static const ydk::Enum::YLeaf error3;
        static const ydk::Enum::YLeaf error4;
        static const ydk::Enum::YLeaf error5;
        static const ydk::Enum::YLeaf BadInputParams;
        static const ydk::Enum::YLeaf error7;
        static const ydk::Enum::YLeaf badhandle;
        static const ydk::Enum::YLeaf notfound;
        static const ydk::Enum::YLeaf notsupported;
        static const ydk::Enum::YLeaf alreadyinit;
        static const ydk::Enum::YLeaf notinit;
        static const ydk::Enum::YLeaf smfailtocreate;
        static const ydk::Enum::YLeaf smfailtorun;
        static const ydk::Enum::YLeaf smfailtoinit;
        static const ydk::Enum::YLeaf smfailtodestroy;
        static const ydk::Enum::YLeaf msgparse;
        static const ydk::Enum::YLeaf msgbuild;
        static const ydk::Enum::YLeaf notenabled;
        static const ydk::Enum::YLeaf invalidrequest;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf failtosetstate;
        static const ydk::Enum::YLeaf unsupportedresponse;
        static const ydk::Enum::YLeaf invalidresponse;
        static const ydk::Enum::YLeaf storagefailtostore;
        static const ydk::Enum::YLeaf storagefailtoretrieve;
        static const ydk::Enum::YLeaf nullccoidtoken;
        static const ydk::Enum::YLeaf matchidentifier;
        static const ydk::Enum::YLeaf matchvendor;
        static const ydk::Enum::YLeaf matchnonce;
        static const ydk::Enum::YLeaf commdisabled;
        static const ydk::Enum::YLeaf commsend;
        static const ydk::Enum::YLeaf commresponse;
        static const ydk::Enum::YLeaf communkown;
        static const ydk::Enum::YLeaf smpostnotallow;
        static const ydk::Enum::YLeaf reqmsgmissingmandatoryfield;
        static const ydk::Enum::YLeaf responsefailed;
        static const ydk::Enum::YLeaf pinotinit;
        static const ydk::Enum::YLeaf alreadyenabled;
        static const ydk::Enum::YLeaf alreadyregistered;
        static const ydk::Enum::YLeaf certinvalid;
        static const ydk::Enum::YLeaf certexpired;
        static const ydk::Enum::YLeaf notregistered;
        static const ydk::Enum::YLeaf csrgenerationfailed;
        static const ydk::Enum::YLeaf verifysignaturefailed;
        static const ydk::Enum::YLeaf generatesignaturefailed;
        static const ydk::Enum::YLeaf signcertverificationfailed;
        static const ydk::Enum::YLeaf nodecertverificationfailed;
        static const ydk::Enum::YLeaf parsecertificatefailed;
        static const ydk::Enum::YLeaf cryptorootcaimportfailed;
        static const ydk::Enum::YLeaf taginvalid;
        static const ydk::Enum::YLeaf standby;
        static const ydk::Enum::YLeaf registrationinprogress;
        static const ydk::Enum::YLeaf commretry;
        static const ydk::Enum::YLeaf authrenewinprogress;
        static const ydk::Enum::YLeaf idcertrenewinprogress;
        static const ydk::Enum::YLeaf noudichange;
        static const ydk::Enum::YLeaf callhomeserviceoff;
        static const ydk::Enum::YLeaf msgexecinprogress;
        static const ydk::Enum::YLeaf msgexecinproglocked;
        static const ydk::Enum::YLeaf certmatchessubsetudis;
        static const ydk::Enum::YLeaf storagegroupchangeincomplete;
        static const ydk::Enum::YLeaf storagemgmtnotinit;
        static const ydk::Enum::YLeaf tspathnotchanged;
        static const ydk::Enum::YLeaf cryptoinitnotcompleted;
        static const ydk::Enum::YLeaf notinunidentified;
        static const ydk::Enum::YLeaf platformpathinvalid;
        static const ydk::Enum::YLeaf platformudiinvalid;
        static const ydk::Enum::YLeaf storageobjfailtocreate;
        static const ydk::Enum::YLeaf storageobjfailtoerase;
        static const ydk::Enum::YLeaf storageobjdoesnotexist;
        static const ydk::Enum::YLeaf messageeventexceedspeer;
        static const ydk::Enum::YLeaf codevalidationfailed;
        static const ydk::Enum::YLeaf reserved;
        static const ydk::Enum::YLeaf noreservationinprogress;
        static const ydk::Enum::YLeaf noauthorizationinstalled;
        static const ydk::Enum::YLeaf reservationmismatch;
        static const ydk::Enum::YLeaf notreservationmode;
        static const ydk::Enum::YLeaf reservationerror;
        static const ydk::Enum::YLeaf sysmgrinit;
        static const ydk::Enum::YLeaf alreadyexists;
        static const ydk::Enum::YLeaf listinsertfailed;
        static const ydk::Enum::YLeaf sessionmgmtnotinit;
        static const ydk::Enum::YLeaf listinitfailed;
        static const ydk::Enum::YLeaf listbusy;
        static const ydk::Enum::YLeaf noclients;
        static const ydk::Enum::YLeaf ipc;
        static const ydk::Enum::YLeaf ipcopen;
        static const ydk::Enum::YLeaf ipcinit;
        static const ydk::Enum::YLeaf ipcconnect;
        static const ydk::Enum::YLeaf ipcevents;
        static const ydk::Enum::YLeaf ipcmgmt;
        static const ydk::Enum::YLeaf ipcsend;
        static const ydk::Enum::YLeaf ipcreceive;
        static const ydk::Enum::YLeaf ipctimeout;
        static const ydk::Enum::YLeaf enqueuefailed;
        static const ydk::Enum::YLeaf dequeuefailed;
        static const ydk::Enum::YLeaf shuttingdown;
        static const ydk::Enum::YLeaf couldnotvalidatetrustchain;
        static const ydk::Enum::YLeaf reservationalreadyinstalled;
        static const ydk::Enum::YLeaf reservationinstallparsefail;
        static const ydk::Enum::YLeaf base64encoding;
        static const ydk::Enum::YLeaf base64decoding;
        static const ydk::Enum::YLeaf invalidsoftwareidtag;
        static const ydk::Enum::YLeaf certificatemismatch;
        static const ydk::Enum::YLeaf noreservation;
        static const ydk::Enum::YLeaf agentunreachable;
        static const ydk::Enum::YLeaf ignoreevent;
        static const ydk::Enum::YLeaf b58overflow;
        static const ydk::Enum::YLeaf b58decode;
        static const ydk::Enum::YLeaf b58badlen;
        static const ydk::Enum::YLeaf b58invdigit;
        static const ydk::Enum::YLeaf b58decodeoverflow;
        static const ydk::Enum::YLeaf reservationversionoutofbound;
        static const ydk::Enum::YLeaf base58encode;
        static const ydk::Enum::YLeaf duplicatedentry;
        static const ydk::Enum::YLeaf missingentry;
        static const ydk::Enum::YLeaf badpeerinfoformat;
        static const ydk::Enum::YLeaf badapplicationhaattributedataset;
        static const ydk::Enum::YLeaf reservationinprogress;
        static const ydk::Enum::YLeaf xdmcreatehandle;
        static const ydk::Enum::YLeaf versionmismatchinentitlementrsp;
        static const ydk::Enum::YLeaf harolenotsupported;
        static const ydk::Enum::YLeaf apphainvalidcharacter;
        static const ydk::Enum::YLeaf apphaaddpeerfromsamedevice;
        static const ydk::Enum::YLeaf apphaappduplicatedinstance;
        static const ydk::Enum::YLeaf versionmismatchinregresponse;
        static const ydk::Enum::YLeaf conversionnocb;
        static const ydk::Enum::YLeaf conversionnotallowed;
        static const ydk::Enum::YLeaf conversioninprogress;
        static const ydk::Enum::YLeaf conversionalreadystarted;
        static const ydk::Enum::YLeaf conversionnotenabled;
        static const ydk::Enum::YLeaf versionconversionnotsupported;
        static const ydk::Enum::YLeaf noconversioninprogress;
        static const ydk::Enum::YLeaf cryptoversionmismatch;
        static const ydk::Enum::YLeaf conversionstoppedpartially;
        static const ydk::Enum::YLeaf utilityenabled;
        static const ydk::Enum::YLeaf utilitynotenabled;
        static const ydk::Enum::YLeaf transportnotavailable;
        static const ydk::Enum::YLeaf fqdn;
        static const ydk::Enum::YLeaf thirdparty;
        static const ydk::Enum::YLeaf transporttype;
        static const ydk::Enum::YLeaf max;

        static int get_enum_value(const std::string & name) {
            if (name == "success") return 0;
            if (name == "malloc") return 1;
            if (name == "nullpointer") return 2;
            if (name == "error3") return 3;
            if (name == "error4") return 4;
            if (name == "error5") return 5;
            if (name == "BadInputParams") return 6;
            if (name == "error7") return 7;
            if (name == "badhandle") return 8;
            if (name == "notfound") return 9;
            if (name == "notsupported") return 10;
            if (name == "alreadyinit") return 11;
            if (name == "notinit") return 12;
            if (name == "smfailtocreate") return 13;
            if (name == "smfailtorun") return 14;
            if (name == "smfailtoinit") return 15;
            if (name == "smfailtodestroy") return 16;
            if (name == "msgparse") return 17;
            if (name == "msgbuild") return 18;
            if (name == "notenabled") return 19;
            if (name == "invalidrequest") return 20;
            if (name == "init") return 21;
            if (name == "failtosetstate") return 22;
            if (name == "unsupportedresponse") return 23;
            if (name == "invalidresponse") return 24;
            if (name == "storagefailtostore") return 25;
            if (name == "storagefailtoretrieve") return 26;
            if (name == "nullccoidtoken") return 27;
            if (name == "matchidentifier") return 28;
            if (name == "matchvendor") return 29;
            if (name == "matchnonce") return 30;
            if (name == "commdisabled") return 31;
            if (name == "commsend") return 32;
            if (name == "commresponse") return 33;
            if (name == "communkown") return 34;
            if (name == "smpostnotallow") return 35;
            if (name == "reqmsgmissingmandatoryfield") return 36;
            if (name == "responsefailed") return 37;
            if (name == "pinotinit") return 38;
            if (name == "alreadyenabled") return 39;
            if (name == "alreadyregistered") return 40;
            if (name == "certinvalid") return 41;
            if (name == "certexpired") return 42;
            if (name == "notregistered") return 43;
            if (name == "csrgenerationfailed") return 44;
            if (name == "verifysignaturefailed") return 45;
            if (name == "generatesignaturefailed") return 46;
            if (name == "signcertverificationfailed") return 47;
            if (name == "nodecertverificationfailed") return 48;
            if (name == "parsecertificatefailed") return 49;
            if (name == "cryptorootcaimportfailed") return 50;
            if (name == "taginvalid") return 51;
            if (name == "standby") return 52;
            if (name == "registrationinprogress") return 53;
            if (name == "commretry") return 54;
            if (name == "authrenewinprogress") return 55;
            if (name == "idcertrenewinprogress") return 56;
            if (name == "noudichange") return 57;
            if (name == "callhomeserviceoff") return 58;
            if (name == "msgexecinprogress") return 59;
            if (name == "msgexecinproglocked") return 60;
            if (name == "certmatchessubsetudis") return 61;
            if (name == "storagegroupchangeincomplete") return 62;
            if (name == "storagemgmtnotinit") return 63;
            if (name == "tspathnotchanged") return 64;
            if (name == "cryptoinitnotcompleted") return 65;
            if (name == "notinunidentified") return 66;
            if (name == "platformpathinvalid") return 67;
            if (name == "platformudiinvalid") return 68;
            if (name == "storageobjfailtocreate") return 69;
            if (name == "storageobjfailtoerase") return 70;
            if (name == "storageobjdoesnotexist") return 71;
            if (name == "messageeventexceedspeer") return 72;
            if (name == "codevalidationfailed") return 73;
            if (name == "reserved") return 74;
            if (name == "noreservationinprogress") return 75;
            if (name == "noauthorizationinstalled") return 76;
            if (name == "reservationmismatch") return 77;
            if (name == "notreservationmode") return 78;
            if (name == "reservationerror") return 79;
            if (name == "sysmgrinit") return 80;
            if (name == "alreadyexists") return 81;
            if (name == "listinsertfailed") return 82;
            if (name == "sessionmgmtnotinit") return 83;
            if (name == "listinitfailed") return 84;
            if (name == "listbusy") return 85;
            if (name == "noclients") return 86;
            if (name == "ipc") return 87;
            if (name == "ipcopen") return 88;
            if (name == "ipcinit") return 89;
            if (name == "ipcconnect") return 90;
            if (name == "ipcevents") return 91;
            if (name == "ipcmgmt") return 92;
            if (name == "ipcsend") return 93;
            if (name == "ipcreceive") return 94;
            if (name == "ipctimeout") return 95;
            if (name == "enqueuefailed") return 96;
            if (name == "dequeuefailed") return 97;
            if (name == "shuttingdown") return 98;
            if (name == "couldnotvalidatetrustchain") return 99;
            if (name == "reservationalreadyinstalled") return 100;
            if (name == "reservationinstallparsefail") return 101;
            if (name == "base64encoding") return 102;
            if (name == "base64decoding") return 103;
            if (name == "invalidsoftwareidtag") return 104;
            if (name == "certificatemismatch") return 105;
            if (name == "noreservation") return 106;
            if (name == "agentunreachable") return 107;
            if (name == "ignoreevent") return 108;
            if (name == "b58overflow") return 109;
            if (name == "b58decode") return 110;
            if (name == "b58badlen") return 111;
            if (name == "b58invdigit") return 112;
            if (name == "b58decodeoverflow") return 113;
            if (name == "reservationversionoutofbound") return 114;
            if (name == "base58encode") return 115;
            if (name == "duplicatedentry") return 116;
            if (name == "missingentry") return 117;
            if (name == "badpeerinfoformat") return 118;
            if (name == "badapplicationhaattributedataset") return 119;
            if (name == "reservationinprogress") return 120;
            if (name == "xdmcreatehandle") return 121;
            if (name == "versionmismatchinentitlementrsp") return 122;
            if (name == "harolenotsupported") return 123;
            if (name == "apphainvalidcharacter") return 124;
            if (name == "apphaaddpeerfromsamedevice") return 125;
            if (name == "apphaappduplicatedinstance") return 126;
            if (name == "versionmismatchinregresponse") return 127;
            if (name == "conversionnocb") return 128;
            if (name == "conversionnotallowed") return 129;
            if (name == "conversioninprogress") return 130;
            if (name == "conversionalreadystarted") return 131;
            if (name == "conversionnotenabled") return 132;
            if (name == "versionconversionnotsupported") return 133;
            if (name == "noconversioninprogress") return 134;
            if (name == "cryptoversionmismatch") return 135;
            if (name == "conversionstoppedpartially") return 136;
            if (name == "utilityenabled") return 137;
            if (name == "utilitynotenabled") return 138;
            if (name == "transportnotavailable") return 139;
            if (name == "fqdn") return 140;
            if (name == "thirdparty") return 141;
            if (name == "transporttype") return 142;
            if (name == "max") return 143;
            return -1;
        }
};

class UtilityReportingTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf utility_reporting_type_none;
        static const ydk::Enum::YLeaf utility_reporting_type_subscription;
        static const ydk::Enum::YLeaf utility_reporting_type_certificate;

        static int get_enum_value(const std::string & name) {
            if (name == "utility-reporting-type-none") return 0;
            if (name == "utility-reporting-type-subscription") return 1;
            if (name == "utility-reporting-type-certificate") return 2;
            return -1;
        }
};

class EnforcementModeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enforcement_waiting;
        static const ydk::Enum::YLeaf enforcement_in_compliance;
        static const ydk::Enum::YLeaf enforcement_out_of_compliance;
        static const ydk::Enum::YLeaf enforcement_overage;
        static const ydk::Enum::YLeaf enforcement_evaluation;
        static const ydk::Enum::YLeaf enforcement_evaluation_expired;
        static const ydk::Enum::YLeaf enforcement_authorization_expired;
        static const ydk::Enum::YLeaf enforcement_reservation_in_compliance;
        static const ydk::Enum::YLeaf enforcement_invalid_tag;
        static const ydk::Enum::YLeaf enforcement_disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "enforcement-waiting") return 0;
            if (name == "enforcement-in-compliance") return 1;
            if (name == "enforcement-out-of-compliance") return 2;
            if (name == "enforcement-overage") return 3;
            if (name == "enforcement-evaluation") return 4;
            if (name == "enforcement-evaluation-expired") return 5;
            if (name == "enforcement-authorization-expired") return 6;
            if (name == "enforcement-reservation-in-compliance") return 7;
            if (name == "enforcement-invalid-tag") return 8;
            if (name == "enforcement-disabled") return 9;
            return -1;
        }
};

class AuthorizationStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auth_state_none;
        static const ydk::Enum::YLeaf auth_state_eval;
        static const ydk::Enum::YLeaf auth_state_eval_expired;
        static const ydk::Enum::YLeaf auth_state_authorized;
        static const ydk::Enum::YLeaf auth_state_authorized_reservation;
        static const ydk::Enum::YLeaf auth_state_out_of_compliance;
        static const ydk::Enum::YLeaf auth_state_authorization_expired;

        static int get_enum_value(const std::string & name) {
            if (name == "auth-state-none") return 0;
            if (name == "auth-state-eval") return 1;
            if (name == "auth-state-eval-expired") return 2;
            if (name == "auth-state-authorized") return 3;
            if (name == "auth-state-authorized-reservation") return 4;
            if (name == "auth-state-out-of-compliance") return 5;
            if (name == "auth-state-authorization-expired") return 6;
            return -1;
        }
};

class RegistrationStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reg_state_not_registered;
        static const ydk::Enum::YLeaf reg_state_complete;
        static const ydk::Enum::YLeaf reg_state_in_progress;
        static const ydk::Enum::YLeaf reg_state_retry;
        static const ydk::Enum::YLeaf reg_state_failed;

        static int get_enum_value(const std::string & name) {
            if (name == "reg-state-not-registered") return 0;
            if (name == "reg-state-complete") return 1;
            if (name == "reg-state-in-progress") return 2;
            if (name == "reg-state-retry") return 3;
            if (name == "reg-state-failed") return 4;
            return -1;
        }
};

class NotifRegisterFailureEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf general_failure;
        static const ydk::Enum::YLeaf already_registered_failure;
        static const ydk::Enum::YLeaf de_register_failure;

        static int get_enum_value(const std::string & name) {
            if (name == "general-failure") return 0;
            if (name == "already-registered-failure") return 1;
            if (name == "de-register-failure") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_SMART_LICENSE_ */

