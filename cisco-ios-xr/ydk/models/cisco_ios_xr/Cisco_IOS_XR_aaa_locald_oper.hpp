#ifndef _CISCO_IOS_XR_AAA_LOCALD_OPER_
#define _CISCO_IOS_XR_AAA_LOCALD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_aaa_locald_oper {

class Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

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



        class AllTasks; //type: Aaa::AllTasks
        class CurrentuserDetail; //type: Aaa::CurrentuserDetail
        class TaskMap; //type: Aaa::TaskMap
        class Taskgroups; //type: Aaa::Taskgroups
        class Users; //type: Aaa::Users
        class Usergroups; //type: Aaa::Usergroups
        class AuthenMethod; //type: Aaa::AuthenMethod
        class CurrentUsergroup; //type: Aaa::CurrentUsergroup
        class Tacacs; //type: Aaa::Tacacs
        class Diameter; //type: Aaa::Diameter
        class Radius; //type: Aaa::Radius

        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::AllTasks> all_tasks;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::AuthenMethod> authen_method;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::CurrentUsergroup> current_usergroup;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::CurrentuserDetail> currentuser_detail;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter> diameter;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius> radius;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs> tacacs;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::TaskMap> task_map;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups> taskgroups;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups> usergroups;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Users> users;


}; // Aaa


class Aaa::AllTasks : public Entity
{
    public:
        AllTasks();
        ~AllTasks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeafList task_id; //type: list of  string



}; // Aaa::AllTasks


class Aaa::CurrentuserDetail : public Entity
{
    public:
        CurrentuserDetail();
        ~CurrentuserDetail();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf authenmethod; //type: int32
        YLeafList usergroup; //type: list of  string
        YLeafList taskmap; //type: list of  string



}; // Aaa::CurrentuserDetail


class Aaa::TaskMap : public Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf authenmethod; //type: int32
        YLeafList usergroup; //type: list of  string
        YLeafList taskmap; //type: list of  string



}; // Aaa::TaskMap


class Aaa::Taskgroups : public Entity
{
    public:
        Taskgroups();
        ~Taskgroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Taskgroup; //type: Aaa::Taskgroups::Taskgroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup> > taskgroup;


}; // Aaa::Taskgroups


class Aaa::Taskgroups::Taskgroup : public Entity
{
    public:
        Taskgroup();
        ~Taskgroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf name_xr; //type: string

        class IncludedTaskIds; //type: Aaa::Taskgroups::Taskgroup::IncludedTaskIds
        class TaskMap; //type: Aaa::Taskgroups::Taskgroup::TaskMap

        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::IncludedTaskIds> included_task_ids;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::TaskMap> task_map;


}; // Aaa::Taskgroups::Taskgroup


class Aaa::Taskgroups::Taskgroup::IncludedTaskIds : public Entity
{
    public:
        IncludedTaskIds();
        ~IncludedTaskIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tasks; //type: Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks> > tasks;


}; // Aaa::Taskgroups::Taskgroup::IncludedTaskIds


class Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks : public Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf task_id; //type: string
        YLeaf read; //type: boolean
        YLeaf write; //type: boolean
        YLeaf execute; //type: boolean
        YLeaf debug; //type: boolean



}; // Aaa::Taskgroups::Taskgroup::IncludedTaskIds::Tasks


class Aaa::Taskgroups::Taskgroup::TaskMap : public Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tasks; //type: Aaa::Taskgroups::Taskgroup::TaskMap::Tasks

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Taskgroups::Taskgroup::TaskMap::Tasks> > tasks;


}; // Aaa::Taskgroups::Taskgroup::TaskMap


class Aaa::Taskgroups::Taskgroup::TaskMap::Tasks : public Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf task_id; //type: string
        YLeaf read; //type: boolean
        YLeaf write; //type: boolean
        YLeaf execute; //type: boolean
        YLeaf debug; //type: boolean



}; // Aaa::Taskgroups::Taskgroup::TaskMap::Tasks


class Aaa::Users : public Entity
{
    public:
        Users();
        ~Users();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class User; //type: Aaa::Users::User

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Users::User> > user;


}; // Aaa::Users


class Aaa::Users::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf name_xr; //type: string
        YLeaf admin_user; //type: boolean
        YLeaf first_user; //type: boolean
        YLeafList usergroup; //type: list of  string

        class TaskMap; //type: Aaa::Users::User::TaskMap

        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Users::User::TaskMap> task_map;


}; // Aaa::Users::User


class Aaa::Users::User::TaskMap : public Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tasks; //type: Aaa::Users::User::TaskMap::Tasks

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Users::User::TaskMap::Tasks> > tasks;


}; // Aaa::Users::User::TaskMap


class Aaa::Users::User::TaskMap::Tasks : public Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf task_id; //type: string
        YLeaf read; //type: boolean
        YLeaf write; //type: boolean
        YLeaf execute; //type: boolean
        YLeaf debug; //type: boolean



}; // Aaa::Users::User::TaskMap::Tasks


class Aaa::Usergroups : public Entity
{
    public:
        Usergroups();
        ~Usergroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Usergroup; //type: Aaa::Usergroups::Usergroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup> > usergroup;


}; // Aaa::Usergroups


class Aaa::Usergroups::Usergroup : public Entity
{
    public:
        Usergroup();
        ~Usergroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf name_xr; //type: string

        class TaskMap; //type: Aaa::Usergroups::Usergroup::TaskMap
        class Taskgroup; //type: Aaa::Usergroups::Usergroup::Taskgroup

        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::TaskMap> task_map;
        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup> > taskgroup;


}; // Aaa::Usergroups::Usergroup


class Aaa::Usergroups::Usergroup::TaskMap : public Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tasks; //type: Aaa::Usergroups::Usergroup::TaskMap::Tasks

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::TaskMap::Tasks> > tasks;


}; // Aaa::Usergroups::Usergroup::TaskMap


class Aaa::Usergroups::Usergroup::TaskMap::Tasks : public Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf task_id; //type: string
        YLeaf read; //type: boolean
        YLeaf write; //type: boolean
        YLeaf execute; //type: boolean
        YLeaf debug; //type: boolean



}; // Aaa::Usergroups::Usergroup::TaskMap::Tasks


class Aaa::Usergroups::Usergroup::Taskgroup : public Entity
{
    public:
        Taskgroup();
        ~Taskgroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name_xr; //type: string

        class IncludedTaskIds; //type: Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds
        class TaskMap; //type: Aaa::Usergroups::Usergroup::Taskgroup::TaskMap

        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds> included_task_ids;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::TaskMap> task_map;


}; // Aaa::Usergroups::Usergroup::Taskgroup


class Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds : public Entity
{
    public:
        IncludedTaskIds();
        ~IncludedTaskIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tasks; //type: Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks> > tasks;


}; // Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds


class Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks : public Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf task_id; //type: string
        YLeaf read; //type: boolean
        YLeaf write; //type: boolean
        YLeaf execute; //type: boolean
        YLeaf debug; //type: boolean



}; // Aaa::Usergroups::Usergroup::Taskgroup::IncludedTaskIds::Tasks


class Aaa::Usergroups::Usergroup::Taskgroup::TaskMap : public Entity
{
    public:
        TaskMap();
        ~TaskMap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tasks; //type: Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks> > tasks;


}; // Aaa::Usergroups::Usergroup::Taskgroup::TaskMap


class Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks : public Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf task_id; //type: string
        YLeaf read; //type: boolean
        YLeaf write; //type: boolean
        YLeaf execute; //type: boolean
        YLeaf debug; //type: boolean



}; // Aaa::Usergroups::Usergroup::Taskgroup::TaskMap::Tasks


class Aaa::AuthenMethod : public Entity
{
    public:
        AuthenMethod();
        ~AuthenMethod();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf authenmethod; //type: int32
        YLeafList usergroup; //type: list of  string
        YLeafList taskmap; //type: list of  string



}; // Aaa::AuthenMethod


class Aaa::CurrentUsergroup : public Entity
{
    public:
        CurrentUsergroup();
        ~CurrentUsergroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf authenmethod; //type: int32
        YLeafList usergroup; //type: list of  string
        YLeafList taskmap; //type: list of  string



}; // Aaa::CurrentUsergroup


class Aaa::Tacacs : public Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Requests; //type: Aaa::Tacacs::Requests
        class Servers; //type: Aaa::Tacacs::Servers
        class ServerGroups; //type: Aaa::Tacacs::ServerGroups

        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Requests> requests;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::ServerGroups> server_groups;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Servers> servers;


}; // Aaa::Tacacs


class Aaa::Tacacs::Requests : public Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Request; //type: Aaa::Tacacs::Requests::Request

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Requests::Request> > request;


}; // Aaa::Tacacs::Requests


class Aaa::Tacacs::Requests::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TacacsRequestbag; //type: Aaa::Tacacs::Requests::Request::TacacsRequestbag

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Requests::Request::TacacsRequestbag> > tacacs_requestbag;


}; // Aaa::Tacacs::Requests::Request


class Aaa::Tacacs::Requests::Request::TacacsRequestbag : public Entity
{
    public:
        TacacsRequestbag();
        ~TacacsRequestbag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf time_remaining; //type: uint32
        YLeaf bytes_out; //type: uint32
        YLeaf out_pak_size; //type: uint32
        YLeaf bytes_in; //type: uint32
        YLeaf in_pak_size; //type: uint32
        YLeaf pak_type; //type: string
        YLeaf session_id; //type: int32
        YLeaf sock; //type: int32



}; // Aaa::Tacacs::Requests::Request::TacacsRequestbag


class Aaa::Tacacs::Servers : public Entity
{
    public:
        Servers();
        ~Servers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Server; //type: Aaa::Tacacs::Servers::Server

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::Servers::Server> > server;


}; // Aaa::Tacacs::Servers


class Aaa::Tacacs::Servers::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf addr; //type: string
        YLeaf timeout; //type: uint32
        YLeaf port; //type: uint32
        YLeaf bytes_in; //type: uint32
        YLeaf bytes_out; //type: uint32
        YLeaf closes; //type: uint32
        YLeaf opens; //type: uint32
        YLeaf errors; //type: uint32
        YLeaf aborts; //type: uint32
        YLeaf paks_in; //type: uint32
        YLeaf paks_out; //type: uint32
        YLeaf replies_expected; //type: uint32
        YLeaf up; //type: boolean
        YLeaf conn_up; //type: boolean
        YLeaf single_connect; //type: boolean
        YLeaf is_private; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf addr_buf; //type: string
        YLeaf family; //type: string



}; // Aaa::Tacacs::Servers::Server


class Aaa::Tacacs::ServerGroups : public Entity
{
    public:
        ServerGroups();
        ~ServerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ServerGroup; //type: Aaa::Tacacs::ServerGroups::ServerGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::ServerGroups::ServerGroup> > server_group;


}; // Aaa::Tacacs::ServerGroups


class Aaa::Tacacs::ServerGroups::ServerGroup : public Entity
{
    public:
        ServerGroup();
        ~ServerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_name; //type: string
        YLeaf sg_map_num; //type: uint32
        YLeaf vrf_name; //type: string

        class Server; //type: Aaa::Tacacs::ServerGroups::ServerGroup::Server

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Tacacs::ServerGroups::ServerGroup::Server> > server;


}; // Aaa::Tacacs::ServerGroups::ServerGroup


class Aaa::Tacacs::ServerGroups::ServerGroup::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf addr; //type: string
        YLeaf timeout; //type: uint32
        YLeaf port; //type: uint32
        YLeaf bytes_in; //type: uint32
        YLeaf bytes_out; //type: uint32
        YLeaf closes; //type: uint32
        YLeaf opens; //type: uint32
        YLeaf errors; //type: uint32
        YLeaf aborts; //type: uint32
        YLeaf paks_in; //type: uint32
        YLeaf paks_out; //type: uint32
        YLeaf replies_expected; //type: uint32
        YLeaf up; //type: boolean
        YLeaf conn_up; //type: boolean
        YLeaf single_connect; //type: boolean
        YLeaf is_private; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf addr_buf; //type: string
        YLeaf family; //type: string



}; // Aaa::Tacacs::ServerGroups::ServerGroup::Server


class Aaa::Diameter : public Entity
{
    public:
        Diameter();
        ~Diameter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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

        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Gx> gx;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GxSessionIds> gx_session_ids;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GxStatistics> gx_statistics;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Gy> gy;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GySessionIds> gy_session_ids;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GyStatistics> gy_statistics;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Nas> nas;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::NasSession> nas_session;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::NasSummary> nas_summary;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Peers> peers;


}; // Aaa::Diameter


class Aaa::Diameter::Gy : public Entity
{
    public:
        Gy();
        ~Gy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_enabled; //type: boolean
        YLeaf tx_timer; //type: uint32
        YLeaf retransmits; //type: uint32



}; // Aaa::Diameter::Gy


class Aaa::Diameter::GxStatistics : public Entity
{
    public:
        GxStatistics();
        ~GxStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ccr_init_messages; //type: uint32
        YLeaf ccr_init_failed_messages; //type: uint32
        YLeaf ccr_init_timed_out_messages; //type: uint32
        YLeaf ccr_init_retry_messages; //type: uint32
        YLeaf ccr_update_messages; //type: uint32
        YLeaf ccr_update_failed_messages; //type: uint32
        YLeaf ccr_update_timed_out_messages; //type: uint32
        YLeaf ccr_update_retry_messages; //type: uint32
        YLeaf ccr_final_messages; //type: uint32
        YLeaf ccr_final_failed_messages; //type: uint32
        YLeaf ccr_final_timed_out_messages; //type: uint32
        YLeaf ccr_final_retry_messages; //type: uint32
        YLeaf cca_init_messages; //type: uint32
        YLeaf cca_init_error_messages; //type: uint32
        YLeaf cca_update_messages; //type: uint32
        YLeaf cca_update_error_messages; //type: uint32
        YLeaf cca_final_messages; //type: uint32
        YLeaf cca_final_error_messages; //type: uint32
        YLeaf rar_received_messages; //type: uint32
        YLeaf rar_received_error_messages; //type: uint32
        YLeaf raa_sent_messages; //type: uint32
        YLeaf raa_sent_error_messages; //type: uint32
        YLeaf asr_received_messages; //type: uint32
        YLeaf asr_received_error_messages; //type: uint32
        YLeaf asa_sent_messsages; //type: uint32
        YLeaf asa_sent_error_messages; //type: uint32
        YLeaf session_termination_messages; //type: uint32
        YLeaf unknown_request_messages; //type: uint32
        YLeaf restore_sessions; //type: uint32
        YLeaf open_sessions; //type: uint32
        YLeaf close_sessions; //type: uint32
        YLeaf active_sessions; //type: uint32



}; // Aaa::Diameter::GxStatistics


class Aaa::Diameter::Gx : public Entity
{
    public:
        Gx();
        ~Gx();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_enabled; //type: boolean
        YLeaf tx_timer; //type: uint32
        YLeaf retransmits; //type: uint32



}; // Aaa::Diameter::Gx


class Aaa::Diameter::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf origin_host; //type: string
        YLeaf origin_realm; //type: string
        YLeaf source_interface; //type: string
        YLeaf tls_trustpoint; //type: string
        YLeaf conn_retry_timer; //type: uint32
        YLeaf watchdog_timer; //type: uint32
        YLeaf transaction_timer; //type: uint32
        YLeaf trans_total; //type: uint32
        YLeaf trans_max; //type: uint32

        class Peer; //type: Aaa::Diameter::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Peers::Peer> > peer;


}; // Aaa::Diameter::Peers


class Aaa::Diameter::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf peer_name; //type: string
        YLeaf peer_index; //type: uint32
        YLeaf address; //type: string
        YLeaf port; //type: uint32
        YLeaf port_connect; //type: uint32
        YLeaf protocol_type; //type: ProtocolTypeValueEnum
        YLeaf security_type; //type: SecurityTypeValueEnum
        YLeaf conn_retry_timer; //type: uint32
        YLeaf watchdog_timer; //type: uint32
        YLeaf transaction_timer; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf source_interface; //type: string
        YLeaf destination_host; //type: string
        YLeaf destination_realm; //type: string
        YLeaf peer_type; //type: PeerEnum
        YLeaf firmware_revision; //type: uint32
        YLeaf state_duration; //type: uint32
        YLeaf last_disconnect_cause; //type: DisconnectCauseEnum
        YLeaf who_init_disconnect; //type: WhoInitiatedDisconnectEnum
        YLeaf in_as_rs; //type: uint32
        YLeaf out_as_rs; //type: uint32
        YLeaf in_as_as; //type: uint32
        YLeaf out_as_as; //type: uint32
        YLeaf in_ac_rs; //type: uint32
        YLeaf out_ac_rs; //type: uint32
        YLeaf in_ac_as; //type: uint32
        YLeaf out_ac_as; //type: uint32
        YLeaf in_ce_rs; //type: uint32
        YLeaf out_ce_rs; //type: uint32
        YLeaf in_ce_as; //type: uint32
        YLeaf out_ce_as; //type: uint32
        YLeaf in_dw_rs; //type: uint32
        YLeaf out_dw_rs; //type: uint32
        YLeaf in_dw_as; //type: uint32
        YLeaf out_dw_as; //type: uint32
        YLeaf in_dp_rs; //type: uint32
        YLeaf out_dp_rs; //type: uint32
        YLeaf in_dp_as; //type: uint32
        YLeaf out_dp_as; //type: uint32
        YLeaf in_ra_rs; //type: uint32
        YLeaf out_ra_rs; //type: uint32
        YLeaf in_ra_as; //type: uint32
        YLeaf out_ra_as; //type: uint32
        YLeaf in_st_rs; //type: uint32
        YLeaf out_st_rs; //type: uint32
        YLeaf in_st_as; //type: uint32
        YLeaf out_st_as; //type: uint32
        YLeaf in_cc_rs; //type: uint32
        YLeaf out_cc_rs; //type: uint32
        YLeaf in_cc_as; //type: uint32
        YLeaf out_cc_as; //type: uint32
        YLeaf out_aa_rs; //type: uint32
        YLeaf in_aa_as; //type: uint32
        YLeaf malformed_requests; //type: uint32
        YLeaf received_proto_errors; //type: uint32
        YLeaf sent_proto_errors; //type: uint32
        YLeaf received_transient_fails; //type: uint32
        YLeaf sent_transient_fails; //type: uint32
        YLeaf received_permanent_fails; //type: uint32
        YLeaf sent_permanent_fails; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf state; //type: PeerStateValueEnum



}; // Aaa::Diameter::Peers::Peer


class Aaa::Diameter::Nas : public Entity
{
    public:
        Nas();
        ~Nas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaanas_id; //type: string

        class ListOfNas; //type: Aaa::Diameter::Nas::ListOfNas

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::Nas::ListOfNas> > list_of_nas;


}; // Aaa::Diameter::Nas


class Aaa::Diameter::Nas::ListOfNas : public Entity
{
    public:
        ListOfNas();
        ~ListOfNas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_session_id; //type: string
        YLeaf diameter_session_id; //type: string
        YLeaf authentication_status; //type: uint32
        YLeaf authorization_status; //type: uint32
        YLeaf accounting_status; //type: uint32
        YLeaf accounting_status_stop; //type: uint32
        YLeaf disconnect_status; //type: uint32
        YLeaf accounting_intrim_in_packets; //type: uint32
        YLeaf accounting_intrim_out_packets; //type: uint32
        YLeaf method_list; //type: string
        YLeaf server_used_list; //type: string



}; // Aaa::Diameter::Nas::ListOfNas


class Aaa::Diameter::NasSummary : public Entity
{
    public:
        NasSummary();
        ~NasSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf authen_response_in_packets; //type: uint32
        YLeaf authen_request_out_packets; //type: uint32
        YLeaf authen_request_in_packets; //type: uint32
        YLeaf authen_response_out_packets; //type: uint32
        YLeaf authen_success_packets; //type: uint32
        YLeaf authen_response_fail_packets; //type: uint32
        YLeaf authorization_in_packets; //type: uint32
        YLeaf authorization_out_packets; //type: uint32
        YLeaf authorization_request_in_packets; //type: uint32
        YLeaf authorization_response_out_packets; //type: uint32
        YLeaf authorization_response_success_packets; //type: uint32
        YLeaf authorization_response_fail_packets; //type: uint32
        YLeaf accounting_response_in_packets; //type: uint32
        YLeaf accounting_request_out_packets; //type: uint32
        YLeaf accounting_start_request_packets; //type: uint32
        YLeaf accounting_start_response_packets; //type: uint32
        YLeaf accounting_start_success_packets; //type: uint32
        YLeaf accounting_start_failed_packets; //type: uint32
        YLeaf accounting_stop_response_in_packets; //type: uint32
        YLeaf accounting_stop_request_out_packets; //type: uint32
        YLeaf accounting_stop_request_in_packets; //type: uint32
        YLeaf accounting_stop_response_out_packets; //type: uint32
        YLeaf accounting_stop_success_response_packets; //type: uint32
        YLeaf accounting_stop_failed_packets; //type: uint32
        YLeaf accounting_intrim_response_in_packets; //type: uint32
        YLeaf accounting_interim_request_out_packets; //type: uint32
        YLeaf accounting_interim_request_in_packets; //type: uint32
        YLeaf accounting_interim_response_out_packets; //type: uint32
        YLeaf accounting_interim_success_packets; //type: uint32
        YLeaf accounting_interim_failed_packets; //type: uint32
        YLeaf disconnect_response_in_packets; //type: uint32
        YLeaf disconnect_request_out_packets; //type: uint32
        YLeaf disconnect_request_in_packets; //type: uint32
        YLeaf disconnect_response_out_packets; //type: uint32
        YLeaf disconnect_success_response_packets; //type: uint32
        YLeaf disconnect_failed_response_packets; //type: uint32
        YLeaf coa_request_in_packets; //type: uint32
        YLeaf coa_response_out_packets; //type: uint32
        YLeaf coa_request_packets; //type: uint32
        YLeaf coa_response_packets; //type: uint32
        YLeaf coa_success_packets; //type: uint32
        YLeaf coa_failed_packets; //type: uint32
        YLeaf pod_in_packets; //type: uint32
        YLeaf pod_out_packets; //type: uint32
        YLeaf pod_request_in_packets; //type: uint32
        YLeaf pod_response_out_packets; //type: uint32
        YLeaf pod_success_packets; //type: uint32
        YLeaf pod_failed_packets; //type: uint32



}; // Aaa::Diameter::NasSummary


class Aaa::Diameter::GySessionIds : public Entity
{
    public:
        GySessionIds();
        ~GySessionIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GySessionId; //type: Aaa::Diameter::GySessionIds::GySessionId

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GySessionIds::GySessionId> > gy_session_id;


}; // Aaa::Diameter::GySessionIds


class Aaa::Diameter::GySessionIds::GySessionId : public Entity
{
    public:
        GySessionId();
        ~GySessionId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: int32
        YLeaf aaa_session_id; //type: uint32
        YLeaf parent_aaa_session_id; //type: uint32
        YLeaf diameter_session_id; //type: string
        YLeaf request_number; //type: uint32
        YLeaf session_state; //type: string
        YLeaf request_type; //type: string
        YLeaf retry_count; //type: uint32



}; // Aaa::Diameter::GySessionIds::GySessionId


class Aaa::Diameter::GyStatistics : public Entity
{
    public:
        GyStatistics();
        ~GyStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ccr_init_messages; //type: uint32
        YLeaf ccr_init_failed_messages; //type: uint32
        YLeaf ccr_init_timed_out_messages; //type: uint32
        YLeaf ccr_init_retry_messages; //type: uint32
        YLeaf ccr_update_messages; //type: uint32
        YLeaf ccr_update_failed_messages; //type: uint32
        YLeaf ccr_update_timed_out_messages; //type: uint32
        YLeaf ccr_update_retry_messages; //type: uint32
        YLeaf ccr_final_messages; //type: uint32
        YLeaf ccr_final_failed_messages; //type: uint32
        YLeaf ccr_final_timed_out_messages; //type: uint32
        YLeaf ccr_final_retry_messages; //type: uint32
        YLeaf cca_init_messages; //type: uint32
        YLeaf cca_init_error_messages; //type: uint32
        YLeaf cca_update_messages; //type: uint32
        YLeaf cca_update_error_messages; //type: uint32
        YLeaf cca_final_messages; //type: uint32
        YLeaf cca_final_error_messages; //type: uint32
        YLeaf rar_received_messages; //type: uint32
        YLeaf rar_received_error_messages; //type: uint32
        YLeaf raa_sent_messages; //type: uint32
        YLeaf raa_sent_error_messages; //type: uint32
        YLeaf asr_received_messages; //type: uint32
        YLeaf asr_received_error_messages; //type: uint32
        YLeaf asa_sent_messages; //type: uint32
        YLeaf asa_sent_error_messages; //type: uint32
        YLeaf unknown_request_messages; //type: uint32
        YLeaf restore_sessions; //type: uint32
        YLeaf open_sessions; //type: uint32
        YLeaf close_sessions; //type: uint32
        YLeaf active_sessions; //type: uint32



}; // Aaa::Diameter::GyStatistics


class Aaa::Diameter::GxSessionIds : public Entity
{
    public:
        GxSessionIds();
        ~GxSessionIds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GxSessionId; //type: Aaa::Diameter::GxSessionIds::GxSessionId

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::GxSessionIds::GxSessionId> > gx_session_id;


}; // Aaa::Diameter::GxSessionIds


class Aaa::Diameter::GxSessionIds::GxSessionId : public Entity
{
    public:
        GxSessionId();
        ~GxSessionId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf session_id; //type: int32
        YLeaf aaa_session_id; //type: uint32
        YLeaf diameter_session_id; //type: string
        YLeaf request_number; //type: uint32
        YLeaf session_state; //type: string
        YLeaf request_type; //type: string
        YLeaf retry_count; //type: uint32



}; // Aaa::Diameter::GxSessionIds::GxSessionId


class Aaa::Diameter::NasSession : public Entity
{
    public:
        NasSession();
        ~NasSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaanas_id; //type: string

        class ListOfNas; //type: Aaa::Diameter::NasSession::ListOfNas

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Diameter::NasSession::ListOfNas> > list_of_nas;


}; // Aaa::Diameter::NasSession


class Aaa::Diameter::NasSession::ListOfNas : public Entity
{
    public:
        ListOfNas();
        ~ListOfNas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aaa_session_id; //type: string
        YLeaf diameter_session_id; //type: string
        YLeaf authentication_status; //type: uint32
        YLeaf authorization_status; //type: uint32
        YLeaf accounting_status; //type: uint32
        YLeaf accounting_status_stop; //type: uint32
        YLeaf disconnect_status; //type: uint32
        YLeaf accounting_intrim_in_packets; //type: uint32
        YLeaf accounting_intrim_out_packets; //type: uint32
        YLeaf method_list; //type: string
        YLeaf server_used_list; //type: string



}; // Aaa::Diameter::NasSession::ListOfNas


class Aaa::Radius : public Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Servers; //type: Aaa::Radius::Servers
        class RadiusSourceInterface; //type: Aaa::Radius::RadiusSourceInterface
        class Global; //type: Aaa::Radius::Global

        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::Global> global;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::RadiusSourceInterface> radius_source_interface;
        std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::Servers> servers;


}; // Aaa::Radius


class Aaa::Radius::Servers : public Entity
{
    public:
        Servers();
        ~Servers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Server; //type: Aaa::Radius::Servers::Server

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::Servers::Server> > server;


}; // Aaa::Radius::Servers


class Aaa::Radius::Servers::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ip_address; //type: string
        YLeaf auth_port_number; //type: uint32
        YLeaf acct_port_number; //type: uint32
        YLeaf ipv4_address; //type: string
        YLeaf priority; //type: uint32
        YLeaf timeout_xr; //type: uint32
        YLeaf retransmit; //type: uint32
        YLeaf dead_time; //type: uint32
        YLeaf dead_detect_time; //type: uint32
        YLeaf dead_detect_tries; //type: uint32
        YLeaf authentication_port; //type: uint32
        YLeaf accounting_port; //type: uint32
        YLeaf state; //type: string
        YLeaf current_state_duration; //type: uint32
        YLeaf previous_state_duration; //type: uint32
        YLeaf packets_in; //type: uint32
        YLeaf packets_out; //type: uint32
        YLeaf timeouts; //type: uint32
        YLeaf aborts; //type: uint32
        YLeaf replies_expected; //type: uint32
        YLeaf redirected_requests; //type: uint32
        YLeaf authentication_rtt; //type: uint32
        YLeaf access_requests; //type: uint32
        YLeaf access_request_retransmits; //type: uint32
        YLeaf access_accepts; //type: uint32
        YLeaf access_rejects; //type: uint32
        YLeaf access_challenges; //type: uint32
        YLeaf bad_access_responses; //type: uint32
        YLeaf bad_access_authenticators; //type: uint32
        YLeaf pending_access_requests; //type: uint32
        YLeaf access_timeouts; //type: uint32
        YLeaf unknown_access_types; //type: uint32
        YLeaf dropped_access_responses; //type: uint32
        YLeaf throttled_access_reqs; //type: uint32
        YLeaf throttled_timed_out_reqs; //type: uint32
        YLeaf throttled_dropped_reqs; //type: uint32
        YLeaf max_throttled_access_reqs; //type: uint32
        YLeaf currently_throttled_access_reqs; //type: uint32
        YLeaf authen_response_time; //type: uint32
        YLeaf authen_transaction_successess; //type: uint32
        YLeaf authen_transaction_failure; //type: uint32
        YLeaf authen_unexpected_responses; //type: uint32
        YLeaf authen_server_error_responses; //type: uint32
        YLeaf authen_incorrect_responses; //type: uint32
        YLeaf author_requests; //type: uint32
        YLeaf author_request_timeouts; //type: uint32
        YLeaf author_response_time; //type: uint32
        YLeaf author_transaction_successess; //type: uint32
        YLeaf author_transaction_failure; //type: uint32
        YLeaf author_unexpected_responses; //type: uint32
        YLeaf author_server_error_responses; //type: uint32
        YLeaf author_incorrect_responses; //type: uint32
        YLeaf accounting_rtt; //type: uint32
        YLeaf accounting_requests; //type: uint32
        YLeaf accounting_retransmits; //type: uint32
        YLeaf accounting_responses; //type: uint32
        YLeaf bad_accounting_responses; //type: uint32
        YLeaf bad_accounting_authenticators; //type: uint32
        YLeaf pending_accounting_requets; //type: uint32
        YLeaf accounting_timeouts; //type: uint32
        YLeaf unknown_accounting_types; //type: uint32
        YLeaf dropped_accounting_responses; //type: uint32
        YLeaf is_a_private_server; //type: boolean
        YLeaf total_test_auth_reqs; //type: uint32
        YLeaf total_test_auth_timeouts; //type: uint32
        YLeaf total_test_auth_response; //type: uint32
        YLeaf total_test_auth_pending; //type: uint32
        YLeaf total_test_acct_reqs; //type: uint32
        YLeaf total_test_acct_timeouts; //type: uint32
        YLeaf total_test_acct_response; //type: uint32
        YLeaf total_test_acct_pending; //type: uint32
        YLeaf throttled_acct_transactions; //type: uint32
        YLeaf throttled_acct_timed_out_stats; //type: uint32
        YLeaf throttled_acct_failures_stats; //type: uint32
        YLeaf max_acct_throttled; //type: uint32
        YLeaf throttleda_acct_transactions; //type: uint32
        YLeaf acct_unexpected_responses; //type: uint32
        YLeaf acct_server_error_responses; //type: uint32
        YLeaf acct_incorrect_responses; //type: uint32
        YLeaf acct_response_time; //type: uint32
        YLeaf acct_transaction_successess; //type: uint32
        YLeaf acct_transaction_failure; //type: uint32
        YLeaf total_deadtime; //type: uint32
        YLeaf last_deadtime; //type: uint32
        YLeaf is_quarantined; //type: boolean
        YLeaf group_name; //type: string
        YLeaf ip_address_xr; //type: string
        YLeaf family; //type: string



}; // Aaa::Radius::Servers::Server


class Aaa::Radius::RadiusSourceInterface : public Entity
{
    public:
        RadiusSourceInterface();
        ~RadiusSourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ListOfSourceInterface; //type: Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_locald_oper::Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface> > list_of_source_interface;


}; // Aaa::Radius::RadiusSourceInterface


class Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface : public Entity
{
    public:
        ListOfSourceInterface();
        ~ListOfSourceInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf ipaddrv4; //type: string
        YLeaf ipaddrv6; //type: string
        YLeaf vrfid; //type: uint32



}; // Aaa::Radius::RadiusSourceInterface::ListOfSourceInterface


class Aaa::Radius::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unknown_authentication_response; //type: uint32
        YLeaf authentication_nas_id; //type: string
        YLeaf unknown_accounting_response; //type: uint32
        YLeaf accounting_nas_id; //type: string



}; // Aaa::Radius::Global


}
}

#endif /* _CISCO_IOS_XR_AAA_LOCALD_OPER_ */

