#ifndef _CISCO_IOS_XR_AAA_LOCALD_OPER_
#define _CISCO_IOS_XR_AAA_LOCALD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_locald_oper {

class Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

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

        class AllTasks; //type: Aaa::AllTasks
        class CurrentuserDetail; //type: Aaa::CurrentuserDetail
        class TaskMap; //type: Aaa::TaskMap
        class Taskgroups; //type: Aaa::Taskgroups
        class Users; //type: Aaa::Users
        class PasswordPolicies; //type: Aaa::PasswordPolicies
        class Usergroups; //type: Aaa::Usergroups
        class AuthenMethod; //type: Aaa::AuthenMethod
        class CurrentUsergroup; //type: Aaa::CurrentUsergroup
        class Radius; //type: Aaa::Radius
        class Tacacs; //type: Aaa::Tacacs
        class Diameter; //type: Aaa::Diameter

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::AllTasks> all_tasks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::CurrentuserDetail> currentuser_detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::TaskMap> task_map;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups> taskgroups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Users> users;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::PasswordPolicies> password_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups> usergroups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::AuthenMethod> authen_method;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::CurrentUsergroup> current_usergroup;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius> radius;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter> diameter;
        
}; // Aaa


class Aaa::AllTasks : public ydk::Entity
{
    public:
        AllTasks();
        ~AllTasks();

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

        ydk::YLeafList task_id; //type: list of  string

}; // Aaa::AllTasks


class Aaa::CurrentuserDetail : public ydk::Entity
{
    public:
        CurrentuserDetail();
        ~CurrentuserDetail();

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
        ydk::YLeaf authenmethod; //type: int32
        ydk::YLeafList usergroup; //type: list of  string
        ydk::YLeafList taskmap; //type: list of  string

}; // Aaa::CurrentuserDetail


class Aaa::TaskMap : public ydk::Entity
{
    public:
        TaskMap();
        ~TaskMap();

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
        ydk::YLeaf authenmethod; //type: int32
        ydk::YLeafList usergroup; //type: list of  string
        ydk::YLeafList taskmap; //type: list of  string

}; // Aaa::TaskMap


class Aaa::Taskgroups : public ydk::Entity
{
    public:
        Taskgroups();
        ~Taskgroups();

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

        class Taskgroup; //type: Aaa::Taskgroups::Taskgroup

        ydk::YList taskgroup;
        
}; // Aaa::Taskgroups


class Aaa::Taskgroups::Taskgroup : public ydk::Entity
{
    public:
        Taskgroup();
        ~Taskgroup();

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
        class IncludedTaskIds; //type: Aaa::Taskgroups::Taskgroup::IncludedTaskIds
        class TaskMap; //type: Aaa::Taskgroups::Taskgroup::TaskMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::IncludedTaskIds> included_task_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::TaskMap> task_map;
        
}; // Aaa::Taskgroups::Taskgroup


class Aaa::Taskgroups::Taskgroup::IncludedTaskIds : public ydk::Entity
{
    public:
        IncludedTaskIds();
        ~IncludedTaskIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tasks; //type: Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks

        ydk::YList tasks;
        
}; // Aaa::Taskgroups::Taskgroup::IncludedTaskIds


class Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks : public ydk::Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf task_id; //type: string
        ydk::YLeaf read; //type: boolean
        ydk::YLeaf write; //type: boolean
        ydk::YLeaf execute; //type: boolean
        ydk::YLeaf debug; //type: boolean

}; // Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks


class Aaa::Taskgroups::Taskgroup::TaskMap : public ydk::Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tasks; //type: Aaa::Taskgroups::Taskgroup::TaskMap::Tasks

        ydk::YList tasks;
        
}; // Aaa::Taskgroups::Taskgroup::TaskMap


class Aaa::Taskgroups::Taskgroup::TaskMap::Tasks : public ydk::Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf task_id; //type: string
        ydk::YLeaf read; //type: boolean
        ydk::YLeaf write; //type: boolean
        ydk::YLeaf execute; //type: boolean
        ydk::YLeaf debug; //type: boolean

}; // Aaa::Taskgroups::Taskgroup::TaskMap::Tasks


class Aaa::Users : public ydk::Entity
{
    public:
        Users();
        ~Users();

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

        class User; //type: Aaa::Users::User

        ydk::YList user;
        
}; // Aaa::Users


class Aaa::Users::User : public ydk::Entity
{
    public:
        User();
        ~User();

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
        ydk::YLeaf admin_user; //type: boolean
        ydk::YLeaf first_user; //type: boolean
        ydk::YLeafList usergroup; //type: list of  string
        class TaskMap; //type: Aaa::Users::User::TaskMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Users::User::TaskMap> task_map;
        
}; // Aaa::Users::User


class Aaa::Users::User::TaskMap : public ydk::Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tasks; //type: Aaa::Users::User::TaskMap::Tasks

        ydk::YList tasks;
        
}; // Aaa::Users::User::TaskMap


class Aaa::Users::User::TaskMap::Tasks : public ydk::Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf task_id; //type: string
        ydk::YLeaf read; //type: boolean
        ydk::YLeaf write; //type: boolean
        ydk::YLeaf execute; //type: boolean
        ydk::YLeaf debug; //type: boolean

}; // Aaa::Users::User::TaskMap::Tasks


class Aaa::PasswordPolicies : public ydk::Entity
{
    public:
        PasswordPolicies();
        ~PasswordPolicies();

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

        class PasswordPolicy; //type: Aaa::PasswordPolicies::PasswordPolicy

        ydk::YList password_policy;
        
}; // Aaa::PasswordPolicies


class Aaa::PasswordPolicies::PasswordPolicy : public ydk::Entity
{
    public:
        PasswordPolicy();
        ~PasswordPolicy();

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
        ydk::YLeaf min_len; //type: uint8
        ydk::YLeaf max_len; //type: uint8
        ydk::YLeaf spl_char; //type: uint8
        ydk::YLeaf upper_case; //type: uint8
        ydk::YLeaf lower_case; //type: uint8
        ydk::YLeaf numeric; //type: uint8
        ydk::YLeaf min_char_change; //type: uint8
        ydk::YLeaf num_of_users; //type: uint8
        ydk::YLeaf max_fail_attempts; //type: uint32
        ydk::YLeaf usr_count; //type: uint8
        ydk::YLeaf err_count; //type: uint8
        ydk::YLeaf lock_out_count; //type: uint8
        class LifeTime; //type: Aaa::PasswordPolicies::PasswordPolicy::LifeTime
        class LockOutTime; //type: Aaa::PasswordPolicies::PasswordPolicy::LockOutTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::PasswordPolicies::PasswordPolicy::LifeTime> life_time;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::PasswordPolicies::PasswordPolicy::LockOutTime> lock_out_time;
        
}; // Aaa::PasswordPolicies::PasswordPolicy


class Aaa::PasswordPolicies::PasswordPolicy::LifeTime : public ydk::Entity
{
    public:
        LifeTime();
        ~LifeTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf years; //type: uint8
        ydk::YLeaf months; //type: uint8
        ydk::YLeaf days; //type: uint8
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf mins; //type: uint8
        ydk::YLeaf secs; //type: uint8

}; // Aaa::PasswordPolicies::PasswordPolicy::LifeTime


class Aaa::PasswordPolicies::PasswordPolicy::LockOutTime : public ydk::Entity
{
    public:
        LockOutTime();
        ~LockOutTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf years; //type: uint8
        ydk::YLeaf months; //type: uint8
        ydk::YLeaf days; //type: uint8
        ydk::YLeaf hours; //type: uint8
        ydk::YLeaf mins; //type: uint8
        ydk::YLeaf secs; //type: uint8

}; // Aaa::PasswordPolicies::PasswordPolicy::LockOutTime


class Aaa::Usergroups : public ydk::Entity
{
    public:
        Usergroups();
        ~Usergroups();

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

        class Usergroup; //type: Aaa::Usergroups::Usergroup

        ydk::YList usergroup;
        
}; // Aaa::Usergroups


class Aaa::Usergroups::Usergroup : public ydk::Entity
{
    public:
        Usergroup();
        ~Usergroup();

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
        class TaskMap; //type: Aaa::Usergroups::Usergroup::TaskMap
        class Taskgroup; //type: Aaa::Usergroups::Usergroup::Taskgroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::TaskMap> task_map;
        ydk::YList taskgroup;
        
}; // Aaa::Usergroups::Usergroup


class Aaa::Usergroups::Usergroup::TaskMap : public ydk::Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tasks; //type: Aaa::Usergroups::Usergroup::TaskMap::Tasks

        ydk::YList tasks;
        
}; // Aaa::Usergroups::Usergroup::TaskMap


class Aaa::Usergroups::Usergroup::TaskMap::Tasks : public ydk::Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf task_id; //type: string
        ydk::YLeaf read; //type: boolean
        ydk::YLeaf write; //type: boolean
        ydk::YLeaf execute; //type: boolean
        ydk::YLeaf debug; //type: boolean

}; // Aaa::Usergroups::Usergroup::TaskMap::Tasks


class Aaa::Usergroups::Usergroup::Taskgroup : public ydk::Entity
{
    public:
        Taskgroup();
        ~Taskgroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name_xr; //type: string
        class IncludedTaskIds; //type: Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds
        class TaskMap; //type: Aaa::Usergroups::Usergroup::Taskgroup::TaskMap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds> included_task_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::TaskMap> task_map;
        
}; // Aaa::Usergroups::Usergroup::Taskgroup


class Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds : public ydk::Entity
{
    public:
        IncludedTaskIds();
        ~IncludedTaskIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tasks; //type: Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks

        ydk::YList tasks;
        
}; // Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds


class Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks : public ydk::Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf task_id; //type: string
        ydk::YLeaf read; //type: boolean
        ydk::YLeaf write; //type: boolean
        ydk::YLeaf execute; //type: boolean
        ydk::YLeaf debug; //type: boolean

}; // Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks


class Aaa::Usergroups::Usergroup::Taskgroup::TaskMap : public ydk::Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tasks; //type: Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks

        ydk::YList tasks;
        
}; // Aaa::Usergroups::Usergroup::Taskgroup::TaskMap


class Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks : public ydk::Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf task_id; //type: string
        ydk::YLeaf read; //type: boolean
        ydk::YLeaf write; //type: boolean
        ydk::YLeaf execute; //type: boolean
        ydk::YLeaf debug; //type: boolean

}; // Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks


class Aaa::AuthenMethod : public ydk::Entity
{
    public:
        AuthenMethod();
        ~AuthenMethod();

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
        ydk::YLeaf authenmethod; //type: int32
        ydk::YLeafList usergroup; //type: list of  string
        ydk::YLeafList taskmap; //type: list of  string

}; // Aaa::AuthenMethod


class Aaa::CurrentUsergroup : public ydk::Entity
{
    public:
        CurrentUsergroup();
        ~CurrentUsergroup();

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
        ydk::YLeaf authenmethod; //type: int32
        ydk::YLeafList usergroup; //type: list of  string
        ydk::YLeafList taskmap; //type: list of  string

}; // Aaa::CurrentUsergroup


class Aaa::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

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

        class Servers; //type: Aaa::Radius::Servers
        class RadiusSourceInterface; //type: Aaa::Radius::RadiusSourceInterface
        class Global; //type: Aaa::Radius::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::Servers> servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::RadiusSourceInterface> radius_source_interface;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::Global> global;
        
}; // Aaa::Radius


class Aaa::Radius::Servers : public ydk::Entity
{
    public:
        Servers();
        ~Servers();

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

        class Server; //type: Aaa::Radius::Servers::Server

        ydk::YList server;
        
}; // Aaa::Radius::Servers


class Aaa::Radius::Servers::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf auth_port_number; //type: uint32
        ydk::YLeaf acct_port_number; //type: uint32
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf timeout_xr; //type: uint32
        ydk::YLeaf retransmit; //type: uint32
        ydk::YLeaf dead_time; //type: uint32
        ydk::YLeaf dead_detect_time; //type: uint32
        ydk::YLeaf dead_detect_tries; //type: uint32
        ydk::YLeaf authentication_port; //type: uint32
        ydk::YLeaf accounting_port; //type: uint32
        ydk::YLeaf state; //type: string
        ydk::YLeaf current_state_duration; //type: uint32
        ydk::YLeaf previous_state_duration; //type: uint32
        ydk::YLeaf packets_in; //type: uint32
        ydk::YLeaf packets_out; //type: uint32
        ydk::YLeaf timeouts; //type: uint32
        ydk::YLeaf aborts; //type: uint32
        ydk::YLeaf replies_expected; //type: uint32
        ydk::YLeaf redirected_requests; //type: uint32
        ydk::YLeaf authentication_rtt; //type: uint32
        ydk::YLeaf access_requests; //type: uint32
        ydk::YLeaf access_request_retransmits; //type: uint32
        ydk::YLeaf access_accepts; //type: uint32
        ydk::YLeaf access_rejects; //type: uint32
        ydk::YLeaf access_challenges; //type: uint32
        ydk::YLeaf bad_access_responses; //type: uint32
        ydk::YLeaf bad_access_authenticators; //type: uint32
        ydk::YLeaf pending_access_requests; //type: uint32
        ydk::YLeaf access_timeouts; //type: uint32
        ydk::YLeaf unknown_access_types; //type: uint32
        ydk::YLeaf dropped_access_responses; //type: uint32
        ydk::YLeaf throttled_access_reqs; //type: uint32
        ydk::YLeaf throttled_timed_out_reqs; //type: uint32
        ydk::YLeaf throttled_dropped_reqs; //type: uint32
        ydk::YLeaf max_throttled_access_reqs; //type: uint32
        ydk::YLeaf currently_throttled_access_reqs; //type: uint32
        ydk::YLeaf authen_response_time; //type: uint32
        ydk::YLeaf authen_transaction_successess; //type: uint32
        ydk::YLeaf authen_transaction_failure; //type: uint32
        ydk::YLeaf authen_unexpected_responses; //type: uint32
        ydk::YLeaf authen_server_error_responses; //type: uint32
        ydk::YLeaf authen_incorrect_responses; //type: uint32
        ydk::YLeaf author_requests; //type: uint32
        ydk::YLeaf author_request_timeouts; //type: uint32
        ydk::YLeaf author_response_time; //type: uint32
        ydk::YLeaf author_transaction_successess; //type: uint32
        ydk::YLeaf author_transaction_failure; //type: uint32
        ydk::YLeaf author_unexpected_responses; //type: uint32
        ydk::YLeaf author_server_error_responses; //type: uint32
        ydk::YLeaf author_incorrect_responses; //type: uint32
        ydk::YLeaf accounting_rtt; //type: uint32
        ydk::YLeaf accounting_requests; //type: uint32
        ydk::YLeaf accounting_retransmits; //type: uint32
        ydk::YLeaf accounting_responses; //type: uint32
        ydk::YLeaf bad_accounting_responses; //type: uint32
        ydk::YLeaf bad_accounting_authenticators; //type: uint32
        ydk::YLeaf pending_accounting_requets; //type: uint32
        ydk::YLeaf accounting_timeouts; //type: uint32
        ydk::YLeaf unknown_accounting_types; //type: uint32
        ydk::YLeaf dropped_accounting_responses; //type: uint32
        ydk::YLeaf is_a_private_server; //type: boolean
        ydk::YLeaf total_test_auth_reqs; //type: uint32
        ydk::YLeaf total_test_auth_timeouts; //type: uint32
        ydk::YLeaf total_test_auth_response; //type: uint32
        ydk::YLeaf total_test_auth_pending; //type: uint32
        ydk::YLeaf total_test_acct_reqs; //type: uint32
        ydk::YLeaf total_test_acct_timeouts; //type: uint32
        ydk::YLeaf total_test_acct_response; //type: uint32
        ydk::YLeaf total_test_acct_pending; //type: uint32
        ydk::YLeaf throttled_acct_transactions; //type: uint32
        ydk::YLeaf throttled_acct_timed_out_stats; //type: uint32
        ydk::YLeaf throttled_acct_failures_stats; //type: uint32
        ydk::YLeaf max_acct_throttled; //type: uint32
        ydk::YLeaf throttleda_acct_transactions; //type: uint32
        ydk::YLeaf acct_unexpected_responses; //type: uint32
        ydk::YLeaf acct_server_error_responses; //type: uint32
        ydk::YLeaf acct_incorrect_responses; //type: uint32
        ydk::YLeaf acct_response_time; //type: uint32
        ydk::YLeaf acct_transaction_successess; //type: uint32
        ydk::YLeaf acct_transaction_failure; //type: uint32
        ydk::YLeaf total_deadtime; //type: uint32
        ydk::YLeaf last_deadtime; //type: uint32
        ydk::YLeaf is_quarantined; //type: boolean
        ydk::YLeaf group_name; //type: string
        ydk::YLeaf ip_address_xr; //type: string
        ydk::YLeaf family; //type: string

}; // Aaa::Radius::Servers::Server


class Aaa::Radius::RadiusSourceInterface : public ydk::Entity
{
    public:
        RadiusSourceInterface();
        ~RadiusSourceInterface();

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

        class ListOfSourceInterface; //type: Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface

        ydk::YList list_of_source_interface;
        
}; // Aaa::Radius::RadiusSourceInterface


class Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface : public ydk::Entity
{
    public:
        ListOfSourceInterface();
        ~ListOfSourceInterface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf ipaddrv4; //type: string
        ydk::YLeaf ipaddrv6; //type: string
        ydk::YLeaf vrfid; //type: uint32

}; // Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface


class Aaa::Radius::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf unknown_authentication_response; //type: uint32
        ydk::YLeaf authentication_nas_id; //type: string
        ydk::YLeaf unknown_accounting_response; //type: uint32
        ydk::YLeaf accounting_nas_id; //type: string

}; // Aaa::Radius::Global


class Aaa::Tacacs : public ydk::Entity
{
    public:
        Tacacs();
        ~Tacacs();

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

        class Requests; //type: Aaa::Tacacs::Requests
        class Servers; //type: Aaa::Tacacs::Servers
        class ServerGroups; //type: Aaa::Tacacs::ServerGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Requests> requests;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Servers> servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::ServerGroups> server_groups;
        
}; // Aaa::Tacacs


class Aaa::Tacacs::Requests : public ydk::Entity
{
    public:
        Requests();
        ~Requests();

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

        class Request; //type: Aaa::Tacacs::Requests::Request

        ydk::YList request;
        
}; // Aaa::Tacacs::Requests


class Aaa::Tacacs::Requests::Request : public ydk::Entity
{
    public:
        Request();
        ~Request();

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

        class TacacsRequestbag; //type: Aaa::Tacacs::Requests::Request::TacacsRequestbag

        ydk::YList tacacs_requestbag;
        
}; // Aaa::Tacacs::Requests::Request


class Aaa::Tacacs::Requests::Request::TacacsRequestbag : public ydk::Entity
{
    public:
        TacacsRequestbag();
        ~TacacsRequestbag();

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

        ydk::YLeaf time_remaining; //type: uint32
        ydk::YLeaf bytes_out; //type: uint32
        ydk::YLeaf out_pak_size; //type: uint32
        ydk::YLeaf bytes_in; //type: uint32
        ydk::YLeaf in_pak_size; //type: uint32
        ydk::YLeaf pak_type; //type: string
        ydk::YLeaf session_id; //type: int32
        ydk::YLeaf sock; //type: int32

}; // Aaa::Tacacs::Requests::Request::TacacsRequestbag


class Aaa::Tacacs::Servers : public ydk::Entity
{
    public:
        Servers();
        ~Servers();

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

        class Server; //type: Aaa::Tacacs::Servers::Server

        ydk::YList server;
        
}; // Aaa::Tacacs::Servers


class Aaa::Tacacs::Servers::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf bytes_in; //type: uint32
        ydk::YLeaf bytes_out; //type: uint32
        ydk::YLeaf closes; //type: uint32
        ydk::YLeaf opens; //type: uint32
        ydk::YLeaf errors; //type: uint32
        ydk::YLeaf aborts; //type: uint32
        ydk::YLeaf paks_in; //type: uint32
        ydk::YLeaf paks_out; //type: uint32
        ydk::YLeaf replies_expected; //type: uint32
        ydk::YLeaf up; //type: boolean
        ydk::YLeaf conn_up; //type: boolean
        ydk::YLeaf single_connect; //type: boolean
        ydk::YLeaf is_private; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf addr_buf; //type: string
        ydk::YLeaf family; //type: string

}; // Aaa::Tacacs::Servers::Server


class Aaa::Tacacs::ServerGroups : public ydk::Entity
{
    public:
        ServerGroups();
        ~ServerGroups();

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

        class ServerGroup; //type: Aaa::Tacacs::ServerGroups::ServerGroup

        ydk::YList server_group;
        
}; // Aaa::Tacacs::ServerGroups


class Aaa::Tacacs::ServerGroups::ServerGroup : public ydk::Entity
{
    public:
        ServerGroup();
        ~ServerGroup();

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

        ydk::YLeaf group_name; //type: string
        ydk::YLeaf sg_map_num; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        class Server; //type: Aaa::Tacacs::ServerGroups::ServerGroup::Server

        ydk::YList server;
        
}; // Aaa::Tacacs::ServerGroups::ServerGroup


class Aaa::Tacacs::ServerGroups::ServerGroup::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

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

        ydk::YLeaf addr; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf bytes_in; //type: uint32
        ydk::YLeaf bytes_out; //type: uint32
        ydk::YLeaf closes; //type: uint32
        ydk::YLeaf opens; //type: uint32
        ydk::YLeaf errors; //type: uint32
        ydk::YLeaf aborts; //type: uint32
        ydk::YLeaf paks_in; //type: uint32
        ydk::YLeaf paks_out; //type: uint32
        ydk::YLeaf replies_expected; //type: uint32
        ydk::YLeaf up; //type: boolean
        ydk::YLeaf conn_up; //type: boolean
        ydk::YLeaf single_connect; //type: boolean
        ydk::YLeaf is_private; //type: boolean
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf addr_buf; //type: string
        ydk::YLeaf family; //type: string

}; // Aaa::Tacacs::ServerGroups::ServerGroup::Server


class Aaa::Diameter : public ydk::Entity
{
    public:
        Diameter();
        ~Diameter();

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

        class Gy; //type: Aaa::Diameter::Gy
        class GxStatistics; //type: Aaa::Diameter::GxStatistics
        class Gx; //type: Aaa::Diameter::Gx
        class Peers; //type: Aaa::Diameter::Peers
        class Nas; //type: Aaa::Diameter::Nas
        class NasSummary; //type: Aaa::Diameter::NasSummary
        class GySessionIds; //type: Aaa::Diameter::GySessionIds
        class GyStatistics; //type: Aaa::Diameter::GyStatistics
        class GxSessionIds; //type: Aaa::Diameter::GxSessionIds
        class NasSession; //type: Aaa::Diameter::NasSession

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Gy> gy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GxStatistics> gx_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Gx> gx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Peers> peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Nas> nas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::NasSummary> nas_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GySessionIds> gy_session_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GyStatistics> gy_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GxSessionIds> gx_session_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::NasSession> nas_session;
        
}; // Aaa::Diameter


class Aaa::Diameter::Gy : public ydk::Entity
{
    public:
        Gy();
        ~Gy();

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

        ydk::YLeaf is_enabled; //type: boolean
        ydk::YLeaf tx_timer; //type: uint32
        ydk::YLeaf retransmits; //type: uint32

}; // Aaa::Diameter::Gy


class Aaa::Diameter::GxStatistics : public ydk::Entity
{
    public:
        GxStatistics();
        ~GxStatistics();

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

        ydk::YLeaf ccr_init_messages; //type: uint32
        ydk::YLeaf ccr_init_failed_messages; //type: uint32
        ydk::YLeaf ccr_init_timed_out_messages; //type: uint32
        ydk::YLeaf ccr_init_retry_messages; //type: uint32
        ydk::YLeaf ccr_update_messages; //type: uint32
        ydk::YLeaf ccr_update_failed_messages; //type: uint32
        ydk::YLeaf ccr_update_timed_out_messages; //type: uint32
        ydk::YLeaf ccr_update_retry_messages; //type: uint32
        ydk::YLeaf ccr_final_messages; //type: uint32
        ydk::YLeaf ccr_final_failed_messages; //type: uint32
        ydk::YLeaf ccr_final_timed_out_messages; //type: uint32
        ydk::YLeaf ccr_final_retry_messages; //type: uint32
        ydk::YLeaf cca_init_messages; //type: uint32
        ydk::YLeaf cca_init_error_messages; //type: uint32
        ydk::YLeaf cca_update_messages; //type: uint32
        ydk::YLeaf cca_update_error_messages; //type: uint32
        ydk::YLeaf cca_final_messages; //type: uint32
        ydk::YLeaf cca_final_error_messages; //type: uint32
        ydk::YLeaf rar_received_messages; //type: uint32
        ydk::YLeaf rar_received_error_messages; //type: uint32
        ydk::YLeaf raa_sent_messages; //type: uint32
        ydk::YLeaf raa_sent_error_messages; //type: uint32
        ydk::YLeaf asr_received_messages; //type: uint32
        ydk::YLeaf asr_received_error_messages; //type: uint32
        ydk::YLeaf asa_sent_messsages; //type: uint32
        ydk::YLeaf asa_sent_error_messages; //type: uint32
        ydk::YLeaf session_termination_messages; //type: uint32
        ydk::YLeaf unknown_request_messages; //type: uint32
        ydk::YLeaf restore_sessions; //type: uint32
        ydk::YLeaf open_sessions; //type: uint32
        ydk::YLeaf close_sessions; //type: uint32
        ydk::YLeaf active_sessions; //type: uint32

}; // Aaa::Diameter::GxStatistics


class Aaa::Diameter::Gx : public ydk::Entity
{
    public:
        Gx();
        ~Gx();

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

        ydk::YLeaf is_enabled; //type: boolean
        ydk::YLeaf tx_timer; //type: uint32
        ydk::YLeaf retransmits; //type: uint32

}; // Aaa::Diameter::Gx


class Aaa::Diameter::Peers : public ydk::Entity
{
    public:
        Peers();
        ~Peers();

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

        ydk::YLeaf origin_host; //type: string
        ydk::YLeaf origin_realm; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf tls_trustpoint; //type: string
        ydk::YLeaf conn_retry_timer; //type: uint32
        ydk::YLeaf watchdog_timer; //type: uint32
        ydk::YLeaf transaction_timer; //type: uint32
        ydk::YLeaf trans_total; //type: uint32
        ydk::YLeaf trans_max; //type: uint32
        class Peer; //type: Aaa::Diameter::Peers::Peer

        ydk::YList peer;
        
}; // Aaa::Diameter::Peers


class Aaa::Diameter::Peers::Peer : public ydk::Entity
{
    public:
        Peer();
        ~Peer();

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

        ydk::YLeaf peer_name; //type: string
        ydk::YLeaf peer_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf port_connect; //type: uint32
        ydk::YLeaf protocol_type; //type: ProtocolTypeValue
        ydk::YLeaf security_type; //type: SecurityTypeValue
        ydk::YLeaf conn_retry_timer; //type: uint32
        ydk::YLeaf watchdog_timer; //type: uint32
        ydk::YLeaf transaction_timer; //type: uint32
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf destination_host; //type: string
        ydk::YLeaf destination_realm; //type: string
        ydk::YLeaf peer_type; //type: Peer
        ydk::YLeaf firmware_revision; //type: uint32
        ydk::YLeaf state_duration; //type: uint32
        ydk::YLeaf last_disconnect_cause; //type: DisconnectCause
        ydk::YLeaf who_init_disconnect; //type: WhoInitiatedDisconnect
        ydk::YLeaf in_as_rs; //type: uint32
        ydk::YLeaf out_as_rs; //type: uint32
        ydk::YLeaf in_as_as; //type: uint32
        ydk::YLeaf out_as_as; //type: uint32
        ydk::YLeaf in_ac_rs; //type: uint32
        ydk::YLeaf out_ac_rs; //type: uint32
        ydk::YLeaf in_ac_as; //type: uint32
        ydk::YLeaf out_ac_as; //type: uint32
        ydk::YLeaf in_ce_rs; //type: uint32
        ydk::YLeaf out_ce_rs; //type: uint32
        ydk::YLeaf in_ce_as; //type: uint32
        ydk::YLeaf out_ce_as; //type: uint32
        ydk::YLeaf in_dw_rs; //type: uint32
        ydk::YLeaf out_dw_rs; //type: uint32
        ydk::YLeaf in_dw_as; //type: uint32
        ydk::YLeaf out_dw_as; //type: uint32
        ydk::YLeaf in_dp_rs; //type: uint32
        ydk::YLeaf out_dp_rs; //type: uint32
        ydk::YLeaf in_dp_as; //type: uint32
        ydk::YLeaf out_dp_as; //type: uint32
        ydk::YLeaf in_ra_rs; //type: uint32
        ydk::YLeaf out_ra_rs; //type: uint32
        ydk::YLeaf in_ra_as; //type: uint32
        ydk::YLeaf out_ra_as; //type: uint32
        ydk::YLeaf in_st_rs; //type: uint32
        ydk::YLeaf out_st_rs; //type: uint32
        ydk::YLeaf in_st_as; //type: uint32
        ydk::YLeaf out_st_as; //type: uint32
        ydk::YLeaf in_cc_rs; //type: uint32
        ydk::YLeaf out_cc_rs; //type: uint32
        ydk::YLeaf in_cc_as; //type: uint32
        ydk::YLeaf out_cc_as; //type: uint32
        ydk::YLeaf out_aa_rs; //type: uint32
        ydk::YLeaf in_aa_as; //type: uint32
        ydk::YLeaf malformed_requests; //type: uint32
        ydk::YLeaf received_proto_errors; //type: uint32
        ydk::YLeaf sent_proto_errors; //type: uint32
        ydk::YLeaf received_transient_fails; //type: uint32
        ydk::YLeaf sent_transient_fails; //type: uint32
        ydk::YLeaf received_permanent_fails; //type: uint32
        ydk::YLeaf sent_permanent_fails; //type: uint32
        ydk::YLeaf transport_down; //type: uint32
        ydk::YLeaf state; //type: PeerStateValue

}; // Aaa::Diameter::Peers::Peer


class Aaa::Diameter::Nas : public ydk::Entity
{
    public:
        Nas();
        ~Nas();

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

        ydk::YLeaf aaanas_id; //type: string
        class ListOfNas; //type: Aaa::Diameter::Nas::ListOfNas

        ydk::YList list_of_nas;
        
}; // Aaa::Diameter::Nas


class Aaa::Diameter::Nas::ListOfNas : public ydk::Entity
{
    public:
        ListOfNas();
        ~ListOfNas();

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

        ydk::YLeaf aaa_session_id; //type: string
        ydk::YLeaf diameter_session_id; //type: string
        ydk::YLeaf authentication_status; //type: uint32
        ydk::YLeaf authorization_status; //type: uint32
        ydk::YLeaf accounting_status; //type: uint32
        ydk::YLeaf accounting_status_stop; //type: uint32
        ydk::YLeaf disconnect_status; //type: uint32
        ydk::YLeaf accounting_intrim_in_packets; //type: uint32
        ydk::YLeaf accounting_intrim_out_packets; //type: uint32
        ydk::YLeaf method_list; //type: string
        ydk::YLeaf server_used_list; //type: string

}; // Aaa::Diameter::Nas::ListOfNas


class Aaa::Diameter::NasSummary : public ydk::Entity
{
    public:
        NasSummary();
        ~NasSummary();

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

        ydk::YLeaf authen_response_in_packets; //type: uint32
        ydk::YLeaf authen_request_out_packets; //type: uint32
        ydk::YLeaf authen_request_in_packets; //type: uint32
        ydk::YLeaf authen_response_out_packets; //type: uint32
        ydk::YLeaf authen_success_packets; //type: uint32
        ydk::YLeaf authen_response_fail_packets; //type: uint32
        ydk::YLeaf authorization_in_packets; //type: uint32
        ydk::YLeaf authorization_out_packets; //type: uint32
        ydk::YLeaf authorization_request_in_packets; //type: uint32
        ydk::YLeaf authorization_response_out_packets; //type: uint32
        ydk::YLeaf authorization_response_success_packets; //type: uint32
        ydk::YLeaf authorization_response_fail_packets; //type: uint32
        ydk::YLeaf accounting_response_in_packets; //type: uint32
        ydk::YLeaf accounting_request_out_packets; //type: uint32
        ydk::YLeaf accounting_start_request_packets; //type: uint32
        ydk::YLeaf accounting_start_response_packets; //type: uint32
        ydk::YLeaf accounting_start_success_packets; //type: uint32
        ydk::YLeaf accounting_start_failed_packets; //type: uint32
        ydk::YLeaf accounting_stop_response_in_packets; //type: uint32
        ydk::YLeaf accounting_stop_request_out_packets; //type: uint32
        ydk::YLeaf accounting_stop_request_in_packets; //type: uint32
        ydk::YLeaf accounting_stop_response_out_packets; //type: uint32
        ydk::YLeaf accounting_stop_success_response_packets; //type: uint32
        ydk::YLeaf accounting_stop_failed_packets; //type: uint32
        ydk::YLeaf accounting_intrim_response_in_packets; //type: uint32
        ydk::YLeaf accounting_interim_request_out_packets; //type: uint32
        ydk::YLeaf accounting_interim_request_in_packets; //type: uint32
        ydk::YLeaf accounting_interim_response_out_packets; //type: uint32
        ydk::YLeaf accounting_interim_success_packets; //type: uint32
        ydk::YLeaf accounting_interim_failed_packets; //type: uint32
        ydk::YLeaf disconnect_response_in_packets; //type: uint32
        ydk::YLeaf disconnect_request_out_packets; //type: uint32
        ydk::YLeaf disconnect_request_in_packets; //type: uint32
        ydk::YLeaf disconnect_response_out_packets; //type: uint32
        ydk::YLeaf disconnect_success_response_packets; //type: uint32
        ydk::YLeaf disconnect_failed_response_packets; //type: uint32
        ydk::YLeaf coa_request_in_packets; //type: uint32
        ydk::YLeaf coa_response_out_packets; //type: uint32
        ydk::YLeaf coa_request_packets; //type: uint32
        ydk::YLeaf coa_response_packets; //type: uint32
        ydk::YLeaf coa_success_packets; //type: uint32
        ydk::YLeaf coa_failed_packets; //type: uint32
        ydk::YLeaf pod_in_packets; //type: uint32
        ydk::YLeaf pod_out_packets; //type: uint32
        ydk::YLeaf pod_request_in_packets; //type: uint32
        ydk::YLeaf pod_response_out_packets; //type: uint32
        ydk::YLeaf pod_success_packets; //type: uint32
        ydk::YLeaf pod_failed_packets; //type: uint32

}; // Aaa::Diameter::NasSummary


class Aaa::Diameter::GySessionIds : public ydk::Entity
{
    public:
        GySessionIds();
        ~GySessionIds();

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

        class GySessionId; //type: Aaa::Diameter::GySessionIds::GySessionId

        ydk::YList gy_session_id;
        
}; // Aaa::Diameter::GySessionIds


class Aaa::Diameter::GySessionIds::GySessionId : public ydk::Entity
{
    public:
        GySessionId();
        ~GySessionId();

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

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf aaa_session_id; //type: uint32
        ydk::YLeaf parent_aaa_session_id; //type: uint32
        ydk::YLeaf diameter_session_id; //type: string
        ydk::YLeaf request_number; //type: uint32
        ydk::YLeaf session_state; //type: string
        ydk::YLeaf request_type; //type: string
        ydk::YLeaf retry_count; //type: uint32

}; // Aaa::Diameter::GySessionIds::GySessionId


class Aaa::Diameter::GyStatistics : public ydk::Entity
{
    public:
        GyStatistics();
        ~GyStatistics();

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

        ydk::YLeaf ccr_init_messages; //type: uint32
        ydk::YLeaf ccr_init_failed_messages; //type: uint32
        ydk::YLeaf ccr_init_timed_out_messages; //type: uint32
        ydk::YLeaf ccr_init_retry_messages; //type: uint32
        ydk::YLeaf ccr_update_messages; //type: uint32
        ydk::YLeaf ccr_update_failed_messages; //type: uint32
        ydk::YLeaf ccr_update_timed_out_messages; //type: uint32
        ydk::YLeaf ccr_update_retry_messages; //type: uint32
        ydk::YLeaf ccr_final_messages; //type: uint32
        ydk::YLeaf ccr_final_failed_messages; //type: uint32
        ydk::YLeaf ccr_final_timed_out_messages; //type: uint32
        ydk::YLeaf ccr_final_retry_messages; //type: uint32
        ydk::YLeaf cca_init_messages; //type: uint32
        ydk::YLeaf cca_init_error_messages; //type: uint32
        ydk::YLeaf cca_update_messages; //type: uint32
        ydk::YLeaf cca_update_error_messages; //type: uint32
        ydk::YLeaf cca_final_messages; //type: uint32
        ydk::YLeaf cca_final_error_messages; //type: uint32
        ydk::YLeaf rar_received_messages; //type: uint32
        ydk::YLeaf rar_received_error_messages; //type: uint32
        ydk::YLeaf raa_sent_messages; //type: uint32
        ydk::YLeaf raa_sent_error_messages; //type: uint32
        ydk::YLeaf asr_received_messages; //type: uint32
        ydk::YLeaf asr_received_error_messages; //type: uint32
        ydk::YLeaf asa_sent_messages; //type: uint32
        ydk::YLeaf asa_sent_error_messages; //type: uint32
        ydk::YLeaf unknown_request_messages; //type: uint32
        ydk::YLeaf restore_sessions; //type: uint32
        ydk::YLeaf open_sessions; //type: uint32
        ydk::YLeaf close_sessions; //type: uint32
        ydk::YLeaf active_sessions; //type: uint32

}; // Aaa::Diameter::GyStatistics


class Aaa::Diameter::GxSessionIds : public ydk::Entity
{
    public:
        GxSessionIds();
        ~GxSessionIds();

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

        class GxSessionId; //type: Aaa::Diameter::GxSessionIds::GxSessionId

        ydk::YList gx_session_id;
        
}; // Aaa::Diameter::GxSessionIds


class Aaa::Diameter::GxSessionIds::GxSessionId : public ydk::Entity
{
    public:
        GxSessionId();
        ~GxSessionId();

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

        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf aaa_session_id; //type: uint32
        ydk::YLeaf diameter_session_id; //type: string
        ydk::YLeaf request_number; //type: uint32
        ydk::YLeaf session_state; //type: string
        ydk::YLeaf request_type; //type: string
        ydk::YLeaf retry_count; //type: uint32
        ydk::YLeaf service_count; //type: uint32
        ydk::YLeaf gx_plus_services; //type: string
        ydk::YLeaf reavalidation_time; //type: string

}; // Aaa::Diameter::GxSessionIds::GxSessionId


class Aaa::Diameter::NasSession : public ydk::Entity
{
    public:
        NasSession();
        ~NasSession();

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

        ydk::YLeaf aaanas_id; //type: string
        class ListOfNas; //type: Aaa::Diameter::NasSession::ListOfNas

        ydk::YList list_of_nas;
        
}; // Aaa::Diameter::NasSession


class Aaa::Diameter::NasSession::ListOfNas : public ydk::Entity
{
    public:
        ListOfNas();
        ~ListOfNas();

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

        ydk::YLeaf aaa_session_id; //type: string
        ydk::YLeaf diameter_session_id; //type: string
        ydk::YLeaf authentication_status; //type: uint32
        ydk::YLeaf authorization_status; //type: uint32
        ydk::YLeaf accounting_status; //type: uint32
        ydk::YLeaf accounting_status_stop; //type: uint32
        ydk::YLeaf disconnect_status; //type: uint32
        ydk::YLeaf accounting_intrim_in_packets; //type: uint32
        ydk::YLeaf accounting_intrim_out_packets; //type: uint32
        ydk::YLeaf method_list; //type: string
        ydk::YLeaf server_used_list; //type: string

}; // Aaa::Diameter::NasSession::ListOfNas


}
}

#endif /* _CISCO_IOS_XR_AAA_LOCALD_OPER_ */

