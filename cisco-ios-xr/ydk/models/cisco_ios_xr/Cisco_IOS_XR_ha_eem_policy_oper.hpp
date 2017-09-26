#ifndef _CISCO_IOS_XR_HA_EEM_POLICY_OPER_
#define _CISCO_IOS_XR_HA_EEM_POLICY_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ha_eem_policy_oper {

class Eem : public ydk::Entity
{
    public:
        Eem();
        ~Eem();

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

        class DirUser; //type: Eem::DirUser
        class EnvVariables; //type: Eem::EnvVariables
        class RefreshTime; //type: Eem::RefreshTime
        class RegPolicies; //type: Eem::RegPolicies
        class AvlPolicies; //type: Eem::AvlPolicies

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::AvlPolicies> avl_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser> dir_user;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::EnvVariables> env_variables;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::RefreshTime> refresh_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::RegPolicies> reg_policies;
        
}; // Eem


class Eem::AvlPolicies : public ydk::Entity
{
    public:
        AvlPolicies();
        ~AvlPolicies();

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

        class AvlPolicy; //type: Eem::AvlPolicies::AvlPolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::AvlPolicies::AvlPolicy> > avl_policy;
        
}; // Eem::AvlPolicies


class Eem::AvlPolicies::AvlPolicy : public ydk::Entity
{
    public:
        AvlPolicy();
        ~AvlPolicy();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf time_created; //type: string
        ydk::YLeaf policy_name; //type: string

}; // Eem::AvlPolicies::AvlPolicy


class Eem::DirUser : public ydk::Entity
{
    public:
        DirUser();
        ~DirUser();

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

        class Library; //type: Eem::DirUser::Library
        class Policy; //type: Eem::DirUser::Policy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser::Library> library;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::DirUser::Policy> policy;
        
}; // Eem::DirUser


class Eem::DirUser::Library : public ydk::Entity
{
    public:
        Library();
        ~Library();

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

        ydk::YLeaf policy; //type: string
        ydk::YLeaf library; //type: string

}; // Eem::DirUser::Library


class Eem::DirUser::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

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

        ydk::YLeaf policy; //type: string
        ydk::YLeaf library; //type: string

}; // Eem::DirUser::Policy


class Eem::EnvVariables : public ydk::Entity
{
    public:
        EnvVariables();
        ~EnvVariables();

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

        class EnvVariable; //type: Eem::EnvVariables::EnvVariable

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::EnvVariables::EnvVariable> > env_variable;
        
}; // Eem::EnvVariables


class Eem::EnvVariables::EnvVariable : public ydk::Entity
{
    public:
        EnvVariable();
        ~EnvVariable();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf name_xr; //type: string
        ydk::YLeaf value_; //type: string

}; // Eem::EnvVariables::EnvVariable


class Eem::RefreshTime : public ydk::Entity
{
    public:
        RefreshTime();
        ~RefreshTime();

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

        ydk::YLeaf refreshtime; //type: uint32

}; // Eem::RefreshTime


class Eem::RegPolicies : public ydk::Entity
{
    public:
        RegPolicies();
        ~RegPolicies();

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

        class RegPolicy; //type: Eem::RegPolicies::RegPolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ha_eem_policy_oper::Eem::RegPolicies::RegPolicy> > reg_policy;
        
}; // Eem::RegPolicies


class Eem::RegPolicies::RegPolicy : public ydk::Entity
{
    public:
        RegPolicy();
        ~RegPolicy();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf time_created; //type: string
        ydk::YLeaf policy_name; //type: string
        ydk::YLeaf class_; //type: string
        ydk::YLeaf event_type; //type: string
        ydk::YLeaf trap; //type: string
        ydk::YLeaf persist_time; //type: uint32
        ydk::YLeaf username; //type: string
        ydk::YLeaf description; //type: string

}; // Eem::RegPolicies::RegPolicy


}
}

#endif /* _CISCO_IOS_XR_HA_EEM_POLICY_OPER_ */

