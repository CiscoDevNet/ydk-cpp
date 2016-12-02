#ifndef _CISCO_IOS_XR_HA_EEM_POLICY_OPER_
#define _CISCO_IOS_XR_HA_EEM_POLICY_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ha_eem_policy_oper {

class Eem : public Entity
{
    public:
        Eem();
        ~Eem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class DirUser : public Entity
    {
        public:
            DirUser();
            ~DirUser();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Library : public Entity
        {
            public:
                Library();
                ~Library();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value policy; //type: string
                Value library; //type: string




        }; // Eem::DirUser::Library


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
                Value policy; //type: string
                Value library; //type: string




        }; // Eem::DirUser::Policy


            std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser::Library> library;
            std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser::Policy> policy;


    }; // Eem::DirUser


    class EnvVariables : public Entity
    {
        public:
            EnvVariables();
            ~EnvVariables();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EnvVariable : public Entity
        {
            public:
                EnvVariable();
                ~EnvVariable();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value name_xr; //type: string
                Value value_; //type: string




        }; // Eem::EnvVariables::EnvVariable


            std::vector<std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::EnvVariables::EnvVariable> > env_variable;


    }; // Eem::EnvVariables


    class RefreshTime : public Entity
    {
        public:
            RefreshTime();
            ~RefreshTime();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value refreshtime; //type: uint32




    }; // Eem::RefreshTime


    class RegPolicies : public Entity
    {
        public:
            RegPolicies();
            ~RegPolicies();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class RegPolicy : public Entity
        {
            public:
                RegPolicy();
                ~RegPolicy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value type; //type: string
                Value time_created; //type: string
                Value policy_name; //type: string
                Value class_; //type: string
                Value event_type; //type: string
                Value trap; //type: string
                Value persist_time; //type: uint32
                Value username; //type: string
                Value description; //type: string




        }; // Eem::RegPolicies::RegPolicy


            std::vector<std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::RegPolicies::RegPolicy> > reg_policy;


    }; // Eem::RegPolicies


    class AvlPolicies : public Entity
    {
        public:
            AvlPolicies();
            ~AvlPolicies();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class AvlPolicy : public Entity
        {
            public:
                AvlPolicy();
                ~AvlPolicy();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value type; //type: string
                Value time_created; //type: string
                Value policy_name; //type: string




        }; // Eem::AvlPolicies::AvlPolicy


            std::vector<std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::AvlPolicies::AvlPolicy> > avl_policy;


    }; // Eem::AvlPolicies


        std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::AvlPolicies> avl_policies;
        std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser> dir_user;
        std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::EnvVariables> env_variables;
        std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::RefreshTime> refresh_time;
        std::unique_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::RegPolicies> reg_policies;


}; // Eem



}
}

#endif /* _CISCO_IOS_XR_HA_EEM_POLICY_OPER_ */

