#ifndef _CISCO_IOS_XR_AAA_LOCALD_ADMIN_CFG_
#define _CISCO_IOS_XR_AAA_LOCALD_ADMIN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_locald_admin_cfg {

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

        class Usernames; //type: Aaa::Usernames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa::Usernames> usernames;
        
}; // Aaa


class Aaa::Usernames : public ydk::Entity
{
    public:
        Usernames();
        ~Usernames();

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

        class Username; //type: Aaa::Usernames::Username

        ydk::YList username;
        
}; // Aaa::Usernames


class Aaa::Usernames::Username : public ydk::Entity
{
    public:
        Username();
        ~Username();

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
        class UsergroupUnderUsernames; //type: Aaa::Usernames::Username::UsergroupUnderUsernames
        class Secret; //type: Aaa::Usernames::Username::Secret

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa::Usernames::Username::UsergroupUnderUsernames> usergroup_under_usernames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa::Usernames::Username::Secret> secret;
        
}; // Aaa::Usernames::Username


class Aaa::Usernames::Username::UsergroupUnderUsernames : public ydk::Entity
{
    public:
        UsergroupUnderUsernames();
        ~UsergroupUnderUsernames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UsergroupUnderUsername; //type: Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername

        ydk::YList usergroup_under_username;
        
}; // Aaa::Usernames::Username::UsergroupUnderUsernames


class Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername : public ydk::Entity
{
    public:
        UsergroupUnderUsername();
        ~UsergroupUnderUsername();

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

}; // Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername


class Aaa::Usernames::Username::Secret : public ydk::Entity
{
    public:
        Secret();
        ~Secret();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AaaAdminPassword
        ydk::YLeaf secret5; //type: string
        ydk::YLeaf secret8; //type: string
        ydk::YLeaf secret9; //type: string

}; // Aaa::Usernames::Username::Secret

class AaaAdminPassword : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type5;
        static const ydk::Enum::YLeaf type8;
        static const ydk::Enum::YLeaf type9;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_LOCALD_ADMIN_CFG_ */

