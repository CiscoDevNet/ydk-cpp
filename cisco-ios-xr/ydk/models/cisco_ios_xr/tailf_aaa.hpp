#ifndef _TAILF_AAA_
#define _TAILF_AAA_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace tailf_aaa {

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

        class Authentication; //type: Aaa::Authentication
        class Authorization; //type: Aaa::Authorization
        class TailfAaaAccounting; //type: Aaa::TailfAaaAccounting
        class Ios; //type: Aaa::Ios
        class DisasterRecovery; //type: Aaa::DisasterRecovery
        class PrivilegedAccess; //type: Aaa::PrivilegedAccess
        class CiscoIOSXRSysadminAaaAaaShowAccounting; //type: Aaa::CiscoIOSXRSysadminAaaAaaShowAccounting
        class UserGroup; //type: Aaa::UserGroup

        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authorization> authorization;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::TailfAaaAccounting> tailf_aaa_accounting;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Ios> ios; // presence node
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::DisasterRecovery> disaster_recovery;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::PrivilegedAccess> privileged_access;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::CiscoIOSXRSysadminAaaAaaShowAccounting> cisco_ios_xr_sysadmin_aaa_aaa_show_accounting_;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::UserGroup> user_group;
        
}; // Aaa


class Aaa::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        class Users; //type: Aaa::Authentication::Users
        class Groups; //type: Aaa::Authentication::Groups
        class Login; //type: Aaa::Authentication::Login

        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authentication::Users> users;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authentication::Groups> groups;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authentication::Login> login;
        
}; // Aaa::Authentication


class Aaa::Authentication::Users : public ydk::Entity
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

        class User; //type: Aaa::Authentication::Users::User

        ydk::YList user;
        
}; // Aaa::Authentication::Users


class Aaa::Authentication::Users::User : public ydk::Entity
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
        ydk::YLeaf uid; //type: uint32
        ydk::YLeaf gid; //type: uint32
        ydk::YLeaf password; //type: string
        ydk::YLeaf ssh_keydir; //type: string
        ydk::YLeaf homedir; //type: string

}; // Aaa::Authentication::Users::User


class Aaa::Authentication::Groups : public ydk::Entity
{
    public:
        Groups();
        ~Groups();

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

        class Group; //type: Aaa::Authentication::Groups::Group

        ydk::YList group;
        
}; // Aaa::Authentication::Groups


class Aaa::Authentication::Groups::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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
        ydk::YLeaf gid; //type: uint32
        ydk::YLeaf users; //type: string

}; // Aaa::Authentication::Groups::Group


class Aaa::Authentication::Login : public ydk::Entity
{
    public:
        Login();
        ~Login();

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

        class Group; //type: Aaa::Authentication::Login::Group

        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authentication::Login::Group> group;
        
}; // Aaa::Authentication::Login


class Aaa::Authentication::Login::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf tacacs; //type: empty

}; // Aaa::Authentication::Login::Group


class Aaa::Authorization : public ydk::Entity
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

        class Cmdrules; //type: Aaa::Authorization::Cmdrules
        class Datarules; //type: Aaa::Authorization::Datarules
        class Commands; //type: Aaa::Authorization::Commands

        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authorization::Cmdrules> cmdrules;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authorization::Datarules> datarules;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authorization::Commands> commands;
        
}; // Aaa::Authorization


class Aaa::Authorization::Cmdrules : public ydk::Entity
{
    public:
        Cmdrules();
        ~Cmdrules();

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

        class Cmdrule; //type: Aaa::Authorization::Cmdrules::Cmdrule

        ydk::YList cmdrule;
        
}; // Aaa::Authorization::Cmdrules


class Aaa::Authorization::Cmdrules::Cmdrule : public ydk::Entity
{
    public:
        Cmdrule();
        ~Cmdrule();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf context; //type: string
        ydk::YLeaf command; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf ops; //type: CmdOperationType
        ydk::YLeaf action; //type: Action

}; // Aaa::Authorization::Cmdrules::Cmdrule


class Aaa::Authorization::Datarules : public ydk::Entity
{
    public:
        Datarules();
        ~Datarules();

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

        class Datarule; //type: Aaa::Authorization::Datarules::Datarule

        ydk::YList datarule;
        
}; // Aaa::Authorization::Datarules


class Aaa::Authorization::Datarules::Datarule : public ydk::Entity
{
    public:
        Datarule();
        ~Datarule();

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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf namespace_; //type: string
        ydk::YLeaf context; //type: string
        ydk::YLeaf keypath; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf ops; //type: DataOperationType
        ydk::YLeaf action; //type: Action

}; // Aaa::Authorization::Datarules::Datarule


class Aaa::Authorization::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

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

        class Group; //type: Aaa::Authorization::Commands::Group

        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::Authorization::Commands::Group> group;
        
}; // Aaa::Authorization::Commands


class Aaa::Authorization::Commands::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf tacacs; //type: empty
        ydk::YLeaf none; //type: empty

}; // Aaa::Authorization::Commands::Group


class Aaa::TailfAaaAccounting : public ydk::Entity
{
    public:
        TailfAaaAccounting();
        ~TailfAaaAccounting();

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

        class Commands; //type: Aaa::TailfAaaAccounting::Commands

        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::TailfAaaAccounting::Commands> commands;
        
}; // Aaa::TailfAaaAccounting


class Aaa::TailfAaaAccounting::Commands : public ydk::Entity
{
    public:
        Commands();
        ~Commands();

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

        class Group; //type: Aaa::TailfAaaAccounting::Commands::Group

        std::shared_ptr<cisco_ios_xr::tailf_aaa::Aaa::TailfAaaAccounting::Commands::Group> group;
        
}; // Aaa::TailfAaaAccounting::Commands


class Aaa::TailfAaaAccounting::Commands::Group : public ydk::Entity
{
    public:
        Group();
        ~Group();

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

        ydk::YLeaf tacacs; //type: empty

}; // Aaa::TailfAaaAccounting::Commands::Group


class Aaa::Ios : public ydk::Entity
{
    public:
        Ios();
        ~Ios();

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

        class Level; //type: Aaa::Ios::Level
        class Privilege; //type: Aaa::Ios::Privilege

        ydk::YList level;
        ydk::YList privilege;
        
}; // Aaa::Ios


class Aaa::Ios::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

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

        ydk::YLeaf nr; //type: int32
        ydk::YLeaf secret; //type: string
        ydk::YLeaf password; //type: string
        ydk::YLeaf prompt; //type: string

}; // Aaa::Ios::Level


class Aaa::Ios::Privilege : public ydk::Entity
{
    public:
        Privilege();
        ~Privilege();

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

        ydk::YLeaf mode; //type: one of string, enumeration
        class Level; //type: Aaa::Ios::Privilege::Level

        ydk::YList level;
        
}; // Aaa::Ios::Privilege


class Aaa::Ios::Privilege::Level : public ydk::Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nr; //type: int32
        class Command; //type: Aaa::Ios::Privilege::Level::Command

        ydk::YList command;
        
}; // Aaa::Ios::Privilege::Level


class Aaa::Ios::Privilege::Level::Command : public ydk::Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Aaa::Ios::Privilege::Level::Command


class Aaa::DisasterRecovery : public ydk::Entity
{
    public:
        DisasterRecovery();
        ~DisasterRecovery();

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

        //type: string (refers to cisco_ios_xr::tailf_aaa::Aaa::Authentication::Users::User::name)
        ydk::YLeaf username;
        ydk::YLeaf password; //type: string

}; // Aaa::DisasterRecovery


class Aaa::PrivilegedAccess : public ydk::Entity
{
    public:
        PrivilegedAccess();
        ~PrivilegedAccess();

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

        ydk::YLeaf shell_access; //type: string
        ydk::YLeaf first_user; //type: string
        ydk::YLeaf first_user_change; //type: string
        ydk::YLeaf current_disaster_recovery_user; //type: string

}; // Aaa::PrivilegedAccess


class Aaa::CiscoIOSXRSysadminAaaAaaShowAccounting : public ydk::Entity
{
    public:
        CiscoIOSXRSysadminAaaAaaShowAccounting();
        ~CiscoIOSXRSysadminAaaAaaShowAccounting();

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

        ydk::YLeaf log_data; //type: string

}; // Aaa::CiscoIOSXRSysadminAaaAaaShowAccounting


class Aaa::UserGroup : public ydk::Entity
{
    public:
        UserGroup();
        ~UserGroup();

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

        ydk::YLeaf grp_data; //type: string

}; // Aaa::UserGroup

class Alias : public ydk::Entity
{
    public:
        Alias();
        ~Alias();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf expansion; //type: string

}; // Alias

class Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf complete_on_space; //type: boolean
        ydk::YLeaf ignore_leading_space; //type: boolean
        ydk::YLeaf idle_timeout; //type: uint64
        ydk::YLeaf paginate; //type: boolean
        ydk::YLeaf history; //type: uint64
        ydk::YLeaf autowizard; //type: boolean
        ydk::YLeaf show_defaults; //type: boolean
        ydk::YLeaf display_level; //type: uint64
        ydk::YLeaf prompt1; //type: string
        ydk::YLeaf prompt2; //type: string

}; // Session

class User : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        class Alias; //type: User::Alias
        class Session; //type: User::Session

        ydk::YList alias;
        std::shared_ptr<cisco_ios_xr::tailf_aaa::User::Session> session;
        
}; // User


class User::Alias : public ydk::Entity
{
    public:
        Alias();
        ~Alias();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf expansion; //type: string

}; // User::Alias


class User::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf complete_on_space; //type: boolean
        ydk::YLeaf ignore_leading_space; //type: boolean
        ydk::YLeaf idle_timeout; //type: uint64
        ydk::YLeaf paginate; //type: boolean
        ydk::YLeaf history; //type: uint64
        ydk::YLeaf autowizard; //type: boolean
        ydk::YLeaf show_defaults; //type: boolean
        ydk::YLeaf display_level; //type: uint64
        ydk::YLeaf prompt1; //type: string
        ydk::YLeaf prompt2; //type: string

}; // User::Session

class DataOperationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf r;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf x;
        static const ydk::Enum::YLeaf rw;
        static const ydk::Enum::YLeaf rwx;
        static const ydk::Enum::YLeaf wx;
        static const ydk::Enum::YLeaf w;
        static const ydk::Enum::YLeaf c;
        static const ydk::Enum::YLeaf cr;
        static const ydk::Enum::YLeaf cu;
        static const ydk::Enum::YLeaf cd;
        static const ydk::Enum::YLeaf cx;
        static const ydk::Enum::YLeaf cru;
        static const ydk::Enum::YLeaf crd;
        static const ydk::Enum::YLeaf crx;
        static const ydk::Enum::YLeaf cud;
        static const ydk::Enum::YLeaf cux;
        static const ydk::Enum::YLeaf cdx;
        static const ydk::Enum::YLeaf crud;
        static const ydk::Enum::YLeaf crux;
        static const ydk::Enum::YLeaf crdx;
        static const ydk::Enum::YLeaf cudx;
        static const ydk::Enum::YLeaf crudx;
        static const ydk::Enum::YLeaf ru;
        static const ydk::Enum::YLeaf rd;
        static const ydk::Enum::YLeaf rud;
        static const ydk::Enum::YLeaf rux;
        static const ydk::Enum::YLeaf rdx;
        static const ydk::Enum::YLeaf u;
        static const ydk::Enum::YLeaf ud;
        static const ydk::Enum::YLeaf ux;
        static const ydk::Enum::YLeaf d;
        static const ydk::Enum::YLeaf dx;

};

class BuiltinModes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf configure;

};

class BuiltinModes_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf configure;

};

class CmdOperationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf r;
        static const ydk::Enum::YLeaf rx;
        static const ydk::Enum::YLeaf x;

};

class Action : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf accept_log;

};


}
}

#endif /* _TAILF_AAA_ */

