#ifndef _CISCO_IOS_XR_HA_EEM_POLICY_OPER_
#define _CISCO_IOS_XR_HA_EEM_POLICY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class DirUser; //type: Eem::DirUser
        class EnvVariables; //type: Eem::EnvVariables
        class RefreshTime; //type: Eem::RefreshTime
        class RegPolicies; //type: Eem::RegPolicies
        class AvlPolicies; //type: Eem::AvlPolicies

        std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::AvlPolicies> avl_policies;
        std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser> dir_user;
        std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::EnvVariables> env_variables;
        std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::RefreshTime> refresh_time;
        std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::RegPolicies> reg_policies;


}; // Eem


class Eem::DirUser : public Entity
{
    public:
        DirUser();
        ~DirUser();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Library; //type: Eem::DirUser::Library
        class Policy; //type: Eem::DirUser::Policy

        std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser::Library> library;
        std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser::Policy> policy;


}; // Eem::DirUser


class Eem::DirUser::Library : public Entity
{
    public:
        Library();
        ~Library();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy; //type: string
        YLeaf library; //type: string



}; // Eem::DirUser::Library


class Eem::DirUser::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy; //type: string
        YLeaf library; //type: string



}; // Eem::DirUser::Policy


class Eem::EnvVariables : public Entity
{
    public:
        EnvVariables();
        ~EnvVariables();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EnvVariable; //type: Eem::EnvVariables::EnvVariable

        std::vector<std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::EnvVariables::EnvVariable> > env_variable;


}; // Eem::EnvVariables


class Eem::EnvVariables::EnvVariable : public Entity
{
    public:
        EnvVariable();
        ~EnvVariable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf name_xr; //type: string
        YLeaf value_; //type: string



}; // Eem::EnvVariables::EnvVariable


class Eem::RefreshTime : public Entity
{
    public:
        RefreshTime();
        ~RefreshTime();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf refreshtime; //type: uint32



}; // Eem::RefreshTime


class Eem::RegPolicies : public Entity
{
    public:
        RegPolicies();
        ~RegPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RegPolicy; //type: Eem::RegPolicies::RegPolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::RegPolicies::RegPolicy> > reg_policy;


}; // Eem::RegPolicies


class Eem::RegPolicies::RegPolicy : public Entity
{
    public:
        RegPolicy();
        ~RegPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf type; //type: string
        YLeaf time_created; //type: string
        YLeaf policy_name; //type: string
        YLeaf class_; //type: string
        YLeaf event_type; //type: string
        YLeaf trap; //type: string
        YLeaf persist_time; //type: uint32
        YLeaf username; //type: string
        YLeaf description; //type: string



}; // Eem::RegPolicies::RegPolicy


class Eem::AvlPolicies : public Entity
{
    public:
        AvlPolicies();
        ~AvlPolicies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AvlPolicy; //type: Eem::AvlPolicies::AvlPolicy

        std::vector<std::shared_ptr<Cisco_IOS_XR_ha_eem_policy_oper::Eem::AvlPolicies::AvlPolicy> > avl_policy;


}; // Eem::AvlPolicies


class Eem::AvlPolicies::AvlPolicy : public Entity
{
    public:
        AvlPolicy();
        ~AvlPolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf type; //type: string
        YLeaf time_created; //type: string
        YLeaf policy_name; //type: string



}; // Eem::AvlPolicies::AvlPolicy


}
}

#endif /* _CISCO_IOS_XR_HA_EEM_POLICY_OPER_ */

