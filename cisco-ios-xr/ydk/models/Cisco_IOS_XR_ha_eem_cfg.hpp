#ifndef _CISCO_IOS_XR_HA_EEM_CFG_
#define _CISCO_IOS_XR_HA_EEM_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ha_eem_cfg {

class EventManager : public Entity
{
    public:
        EventManager();
        ~EventManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value refresh_time; //type: uint32
        Value schedule_suspend; //type: boolean
        Value directory_user_policy; //type: string
        Value directory_user_library; //type: string


    class Policies : public Entity
    {
        public:
            Policies();
            ~Policies();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Policy : public Entity
        {
            public:
                Policy();
                ~Policy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value policy_name; //type: string
                Value username; //type: string
                Value persist_time; //type: uint32
                Value policy_type; //type: EventManagerPolicyEnum
                Value checksum_type; //type: EventManagerChecksumEnum
                Value check_sum_value; //type: string
                Value policy_security_mode; //type: EventManagerPolicyModeEnum
                Value policy_security_level; //type: EventManagerPolicySecEnum


                class EventManagerChecksumEnum;
                class EventManagerPolicySecEnum;
                class EventManagerPolicyModeEnum;
                class EventManagerPolicyEnum;


        }; // EventManager::Policies::Policy


            std::vector<std::unique_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::Policies::Policy> > policy;


    }; // EventManager::Policies


    class SchedulerScript : public Entity
    {
        public:
            SchedulerScript();
            ~SchedulerScript();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ThreadClasses : public Entity
        {
            public:
                ThreadClasses();
                ~ThreadClasses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ThreadClass : public Entity
            {
                public:
                    ThreadClass();
                    ~ThreadClass();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value thread_class_name; //type: string
                    Value num_threads; //type: uint32




            }; // EventManager::SchedulerScript::ThreadClasses::ThreadClass


                std::vector<std::unique_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::SchedulerScript::ThreadClasses::ThreadClass> > thread_class;


        }; // EventManager::SchedulerScript::ThreadClasses


            std::unique_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::SchedulerScript::ThreadClasses> thread_classes;


    }; // EventManager::SchedulerScript


    class Environments : public Entity
    {
        public:
            Environments();
            ~Environments();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Environment : public Entity
        {
            public:
                Environment();
                ~Environment();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value environment_name; //type: string
                Value environment_value; //type: string




        }; // EventManager::Environments::Environment


            std::vector<std::unique_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::Environments::Environment> > environment;


    }; // EventManager::Environments


        std::unique_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::Environments> environments;
        std::unique_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::Policies> policies;
        std::unique_ptr<Cisco_IOS_XR_ha_eem_cfg::EventManager::SchedulerScript> scheduler_script;


}; // EventManager


class EventManagerPolicySecEnum : public Enum
{
    public:
        static const Enum::Value rsa_2048;
        static const Enum::Value trust;

};

class EventManagerPolicyModeEnum : public Enum
{
    public:
        static const Enum::Value cisco;
        static const Enum::Value trust;

};

class EventManagerChecksumEnum : public Enum
{
    public:
        static const Enum::Value sha_1;
        static const Enum::Value md5;

};

class EventManagerPolicyEnum : public Enum
{
    public:
        static const Enum::Value system;
        static const Enum::Value user;

};


}
}

#endif /* _CISCO_IOS_XR_HA_EEM_CFG_ */

