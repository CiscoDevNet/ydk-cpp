#ifndef _TAILF_AAA_
#define _TAILF_AAA_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace tailf_aaa {

class Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Authentication; //type: Aaa::Authentication
        class Ios; //type: Aaa::Ios

        std::shared_ptr<tailf_aaa::Aaa::Authentication> authentication_;
        std::shared_ptr<tailf_aaa::Aaa::Ios> ios_; // presence node
        
}; // Aaa


class Aaa::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Users; //type: Aaa::Authentication::Users

        std::shared_ptr<tailf_aaa::Aaa::Authentication::Users> users_;
        
}; // Aaa::Authentication


class Aaa::Authentication::Users : public Entity
{
    public:
        Users();
        ~Users();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class User; //type: Aaa::Authentication::Users::User

        std::vector<std::shared_ptr<tailf_aaa::Aaa::Authentication::Users::User> > user_;
        
}; // Aaa::Authentication::Users


class Aaa::Authentication::Users::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf uid; //type: int32
        YLeaf gid; //type: int32
        YLeaf password; //type: string
        YLeaf ssh_keydir; //type: string
        YLeaf homedir; //type: string

}; // Aaa::Authentication::Users::User


class Aaa::Ios : public Entity
{
    public:
        Ios();
        ~Ios();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Aaa::Ios::Level
        class Privilege; //type: Aaa::Ios::Privilege

        std::vector<std::shared_ptr<tailf_aaa::Aaa::Ios::Level> > level_;
        std::vector<std::shared_ptr<tailf_aaa::Aaa::Ios::Privilege> > privilege_;
        
}; // Aaa::Ios


class Aaa::Ios::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nr; //type: int32
        YLeaf secret; //type: string
        YLeaf password; //type: string
        YLeaf prompt; //type: string

}; // Aaa::Ios::Level


class Aaa::Ios::Privilege : public Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mode; //type: one of string, enumeration
        class Level; //type: Aaa::Ios::Privilege::Level

        std::vector<std::shared_ptr<tailf_aaa::Aaa::Ios::Privilege::Level> > level_;
        
}; // Aaa::Ios::Privilege


class Aaa::Ios::Privilege::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nr; //type: int32
        class Command; //type: Aaa::Ios::Privilege::Level::Command

        std::vector<std::shared_ptr<tailf_aaa::Aaa::Ios::Privilege::Level::Command> > command_;
        
}; // Aaa::Ios::Privilege::Level


class Aaa::Ios::Privilege::Level::Command : public Entity
{
    public:
        Command();
        ~Command();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Aaa::Ios::Privilege::Level::Command

class Alias : public Entity
{
    public:
        Alias();
        ~Alias();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf name; //type: string
        YLeaf expansion; //type: string

}; // Alias

class Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf complete_on_space; //type: boolean
        YLeaf ignore_leading_space; //type: boolean
        YLeaf idle_timeout; //type: uint64
        YLeaf paginate; //type: boolean
        YLeaf history; //type: uint64
        YLeaf autowizard; //type: boolean
        YLeaf show_defaults; //type: boolean
        YLeaf display_level; //type: uint64
        YLeaf prompt1; //type: string
        YLeaf prompt2; //type: string

}; // Session

class User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        class Alias; //type: User::Alias
        class Session; //type: User::Session

        std::vector<std::shared_ptr<tailf_aaa::User::Alias> > alias_;
        std::shared_ptr<tailf_aaa::User::Session> session_;
        
}; // User


class User::Alias : public Entity
{
    public:
        Alias();
        ~Alias();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf expansion; //type: string

}; // User::Alias


class User::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf complete_on_space; //type: boolean
        YLeaf ignore_leading_space; //type: boolean
        YLeaf idle_timeout; //type: uint64
        YLeaf paginate; //type: boolean
        YLeaf history; //type: uint64
        YLeaf autowizard; //type: boolean
        YLeaf show_defaults; //type: boolean
        YLeaf display_level; //type: uint64
        YLeaf prompt1; //type: string
        YLeaf prompt2; //type: string

}; // User::Session

class BuiltinmodesEnum : public Enum
{
    public:
        static const Enum::YLeaf exec;
        static const Enum::YLeaf configure;

};


}
}

#endif /* _TAILF_AAA_ */

