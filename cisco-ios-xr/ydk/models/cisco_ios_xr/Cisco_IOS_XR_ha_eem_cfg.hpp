#ifndef _CISCO_IOS_XR_HA_EEM_CFG_
#define _CISCO_IOS_XR_HA_EEM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ha_eem_cfg {

class EventManager : public ydk::Entity
{
    public:
        EventManager();
        ~EventManager();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        ydk::YLeaf refresh_time; //type: uint32
        ydk::YLeaf schedule_suspend; //type: boolean
        ydk::YLeaf directory_user_policy; //type: string
        ydk::YLeaf directory_user_library; //type: string
        class Policies; //type: EventManager::Policies
        class SchedulerScript; //type: EventManager::SchedulerScript
        class Environments; //type: EventManager::Environments

        std::shared_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::Environments> environments;
        std::shared_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::Policies> policies;
        std::shared_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::SchedulerScript> scheduler_script;
        
}; // EventManager


class EventManager::Policies : public ydk::Entity
{
    public:
        Policies();
        ~Policies();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: EventManager::Policies::Policy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::Policies::Policy> > policy;
        
}; // EventManager::Policies


class EventManager::Policies::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf persist_time; //type: uint32
        ydk::YLeaf policy_type; //type: EventManagerPolicy
        ydk::YLeaf checksum_type; //type: EventManagerChecksum
        ydk::YLeaf check_sum_value; //type: string
        ydk::YLeaf policy_security_mode; //type: EventManagerPolicyMode
        ydk::YLeaf policy_security_level; //type: EventManagerPolicySec

}; // EventManager::Policies::Policy


class EventManager::SchedulerScript : public ydk::Entity
{
    public:
        SchedulerScript();
        ~SchedulerScript();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreadClasses; //type: EventManager::SchedulerScript::ThreadClasses

        std::shared_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::SchedulerScript::ThreadClasses> thread_classes;
        
}; // EventManager::SchedulerScript


class EventManager::SchedulerScript::ThreadClasses : public ydk::Entity
{
    public:
        ThreadClasses();
        ~ThreadClasses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ThreadClass; //type: EventManager::SchedulerScript::ThreadClasses::ThreadClass

        std::vector<std::shared_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::SchedulerScript::ThreadClasses::ThreadClass> > thread_class;
        
}; // EventManager::SchedulerScript::ThreadClasses


class EventManager::SchedulerScript::ThreadClasses::ThreadClass : public ydk::Entity
{
    public:
        ThreadClass();
        ~ThreadClass();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf thread_class_name; //type: string
        ydk::YLeaf num_threads; //type: uint32

}; // EventManager::SchedulerScript::ThreadClasses::ThreadClass


class EventManager::Environments : public ydk::Entity
{
    public:
        Environments();
        ~Environments();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Environment; //type: EventManager::Environments::Environment

        std::vector<std::shared_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::Environments::Environment> > environment;
        
}; // EventManager::Environments


class EventManager::Environments::Environment : public ydk::Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf environment_name; //type: string
        ydk::YLeaf environment_value; //type: string

}; // EventManager::Environments::Environment

class EventManagerPolicyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf trust;

};

class EventManagerPolicySec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rsa_2048;
        static const ydk::Enum::YLeaf trust;

};

class EventManagerPolicy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf system;
        static const ydk::Enum::YLeaf user;

};

class EventManagerChecksum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sha_1;
        static const ydk::Enum::YLeaf md5;

};


}
}

#endif /* _CISCO_IOS_XR_HA_EEM_CFG_ */

