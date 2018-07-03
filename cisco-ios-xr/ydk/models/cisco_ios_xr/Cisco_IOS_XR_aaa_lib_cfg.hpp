#ifndef _CISCO_IOS_XR_AAA_LIB_CFG_
#define _CISCO_IOS_XR_AAA_LIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_lib_cfg {

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

        ydk::YLeaf intercept; //type: empty
        ydk::YLeaf default_taskgroup; //type: string
        class Accountings; //type: Aaa::Accountings
        class Authorizations; //type: Aaa::Authorizations
        class AccountingUpdate; //type: Aaa::AccountingUpdate
        class Banner; //type: Aaa::Banner
        class Authentications; //type: Aaa::Authentications
        class PasswordPolicies; //type: Aaa::PasswordPolicies
        class ServerGroups; //type: Aaa::ServerGroups
        class Usernames; //type: Aaa::Usernames
        class Taskgroups; //type: Aaa::Taskgroups
        class Usergroups; //type: Aaa::Usergroups
        class Diameter; //type: Aaa::Diameter
        class Tacacs; //type: Aaa::Tacacs
        class Radius; //type: Aaa::Radius
        class AaaSubscriber; //type: Aaa::AaaSubscriber
        class AaaMobile; //type: Aaa::AaaMobile
        class AaaDot1x; //type: Aaa::AaaDot1x
        class RadiusAttribute; //type: Aaa::RadiusAttribute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Accountings> accountings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authorizations> authorizations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AccountingUpdate> accounting_update; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Banner> banner;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authentications> authentications;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::PasswordPolicies> password_policies;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups> server_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames> usernames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups> taskgroups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups> usergroups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter> diameter;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs> tacacs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius> radius;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber> aaa_subscriber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaMobile> aaa_mobile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaDot1x> aaa_dot1x;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute> radius_attribute;
        
}; // Aaa


class Aaa::Accountings : public ydk::Entity
{
    public:
        Accountings();
        ~Accountings();

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

        class Accounting; //type: Aaa::Accountings::Accounting

        ydk::YList accounting;
        
}; // Aaa::Accountings


class Aaa::Accountings::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeaf rp_failover; //type: AaaAccountingRpFailover
        ydk::YLeaf broadcast; //type: AaaAccountingBroadcast
        ydk::YLeaf type_xr; //type: AaaAccounting
        ydk::YLeaf method1; //type: AaaMethod
        ydk::YLeaf method2; //type: AaaMethod
        ydk::YLeaf method3; //type: AaaMethod
        ydk::YLeaf method4; //type: AaaMethod
        ydk::YLeaf server_group_name1; //type: string
        ydk::YLeaf server_group_name2; //type: string
        ydk::YLeaf server_group_name3; //type: string
        ydk::YLeaf server_group_name4; //type: string

}; // Aaa::Accountings::Accounting


class Aaa::Authorizations : public ydk::Entity
{
    public:
        Authorizations();
        ~Authorizations();

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

        class Authorization; //type: Aaa::Authorizations::Authorization

        ydk::YList authorization;
        
}; // Aaa::Authorizations


class Aaa::Authorizations::Authorization : public ydk::Entity
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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeaf method1; //type: AaaMethod
        ydk::YLeaf method2; //type: AaaMethod
        ydk::YLeaf method3; //type: AaaMethod
        ydk::YLeaf method4; //type: AaaMethod
        ydk::YLeaf server_group_name1; //type: string
        ydk::YLeaf server_group_name2; //type: string
        ydk::YLeaf server_group_name3; //type: string
        ydk::YLeaf server_group_name4; //type: string

}; // Aaa::Authorizations::Authorization


class Aaa::AccountingUpdate : public ydk::Entity
{
    public:
        AccountingUpdate();
        ~AccountingUpdate();

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

        ydk::YLeaf type; //type: AaaAccountingUpdate
        ydk::YLeaf periodic_interval; //type: uint32

}; // Aaa::AccountingUpdate


class Aaa::Banner : public ydk::Entity
{
    public:
        Banner();
        ~Banner();

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

        ydk::YLeaf login; //type: string

}; // Aaa::Banner


class Aaa::Authentications : public ydk::Entity
{
    public:
        Authentications();
        ~Authentications();

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

        class Authentication; //type: Aaa::Authentications::Authentication

        ydk::YList authentication;
        
}; // Aaa::Authentications


class Aaa::Authentications::Authentication : public ydk::Entity
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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeaf method1; //type: AaaMethod
        ydk::YLeaf method2; //type: AaaMethod
        ydk::YLeaf method3; //type: AaaMethod
        ydk::YLeaf method4; //type: AaaMethod
        ydk::YLeaf server_group_name1; //type: string
        ydk::YLeaf server_group_name2; //type: string
        ydk::YLeaf server_group_name3; //type: string
        ydk::YLeaf server_group_name4; //type: string

}; // Aaa::Authentications::Authentication


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
        ydk::YLeaf lower_case; //type: uint32
        ydk::YLeaf upper_case; //type: uint32
        ydk::YLeaf max_length; //type: uint32
        ydk::YLeaf min_char_change; //type: uint32
        ydk::YLeaf special_char; //type: uint32
        ydk::YLeaf numeric; //type: uint32
        ydk::YLeaf min_length; //type: uint32
        ydk::YLeaf authen_max_attempts; //type: uint32
        class Lifetime; //type: Aaa::PasswordPolicies::PasswordPolicy::Lifetime
        class LockoutTime; //type: Aaa::PasswordPolicies::PasswordPolicy::LockoutTime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::PasswordPolicies::PasswordPolicy::Lifetime> lifetime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::PasswordPolicies::PasswordPolicy::LockoutTime> lockout_time;
        
}; // Aaa::PasswordPolicies::PasswordPolicy


class Aaa::PasswordPolicies::PasswordPolicy::Lifetime : public ydk::Entity
{
    public:
        Lifetime();
        ~Lifetime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf years; //type: uint32
        ydk::YLeaf months; //type: uint32
        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf days; //type: uint32

}; // Aaa::PasswordPolicies::PasswordPolicy::Lifetime


class Aaa::PasswordPolicies::PasswordPolicy::LockoutTime : public ydk::Entity
{
    public:
        LockoutTime();
        ~LockoutTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hours; //type: uint32
        ydk::YLeaf minutes; //type: uint32
        ydk::YLeaf seconds; //type: uint32
        ydk::YLeaf days; //type: uint32

}; // Aaa::PasswordPolicies::PasswordPolicy::LockoutTime


class Aaa::ServerGroups : public ydk::Entity
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

        class DiameterServerGroups; //type: Aaa::ServerGroups::DiameterServerGroups
        class TacacsServerGroups; //type: Aaa::ServerGroups::TacacsServerGroups
        class RadiusServerGroups; //type: Aaa::ServerGroups::RadiusServerGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::DiameterServerGroups> diameter_server_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups> tacacs_server_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups> radius_server_groups;
        
}; // Aaa::ServerGroups


class Aaa::ServerGroups::DiameterServerGroups : public ydk::Entity
{
    public:
        DiameterServerGroups();
        ~DiameterServerGroups();

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

        class DiameterServerGroup; //type: Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup

        ydk::YList diameter_server_group;
        
}; // Aaa::ServerGroups::DiameterServerGroups


class Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup : public ydk::Entity
{
    public:
        DiameterServerGroup();
        ~DiameterServerGroup();

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

        ydk::YLeaf server_group_name; //type: string
        class Servers; //type: Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers> servers;
        
}; // Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup


class Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers : public ydk::Entity
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

        class Server; //type: Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server

        ydk::YList server;
        
}; // Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers


class Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server : public ydk::Entity
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

        ydk::YLeaf ordering_index; //type: uint32
        ydk::YLeaf peer_name; //type: string

}; // Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server


class Aaa::ServerGroups::TacacsServerGroups : public ydk::Entity
{
    public:
        TacacsServerGroups();
        ~TacacsServerGroups();

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

        class TacacsServerGroup; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup

        ydk::YList tacacs_server_group;
        
}; // Aaa::ServerGroups::TacacsServerGroups


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup : public ydk::Entity
{
    public:
        TacacsServerGroup();
        ~TacacsServerGroup();

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

        ydk::YLeaf server_group_name; //type: string
        ydk::YLeaf vrf; //type: string
        class Servers; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers
        class PrivateServers; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers> servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers> private_servers;
        
}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers : public ydk::Entity
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

        class Server; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server

        ydk::YList server;
        
}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server : public ydk::Entity
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

        ydk::YLeaf ordering_index; //type: uint32
        ydk::YLeaf ip_address; //type: string

}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers : public ydk::Entity
{
    public:
        PrivateServers();
        ~PrivateServers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrivateServer; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer

        ydk::YList private_server;
        
}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer : public ydk::Entity
{
    public:
        PrivateServer();
        ~PrivateServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ordering_index; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf port_number; //type: uint32
        ydk::YLeaf key; //type: string
        ydk::YLeaf timeout; //type: uint32

}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer


class Aaa::ServerGroups::RadiusServerGroups : public ydk::Entity
{
    public:
        RadiusServerGroups();
        ~RadiusServerGroups();

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

        class RadiusServerGroup; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup

        ydk::YList radius_server_group;
        
}; // Aaa::ServerGroups::RadiusServerGroups


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup : public ydk::Entity
{
    public:
        RadiusServerGroup();
        ~RadiusServerGroup();

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

        ydk::YLeaf server_group_name; //type: string
        ydk::YLeaf dead_time; //type: uint32
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf vrf; //type: string
        class Accounting; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting
        class Servers; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers
        class PrivateServers; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers
        class ServerGroupThrottle; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle
        class LoadBalance; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance
        class Authorization; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting> accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers> servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers> private_servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle> server_group_throttle;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance> load_balance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization> authorization;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Request; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request
        class Reply; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply> reply;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request : public ydk::Entity
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

        ydk::YLeaf action; //type: AaaAction
        ydk::YLeaf attribute_list_name; //type: string

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: AaaAction
        ydk::YLeaf attribute_list_name; //type: string

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers : public ydk::Entity
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

        class Server; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server

        ydk::YList server;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server : public ydk::Entity
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

        ydk::YLeaf ordering_index; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf auth_port_number; //type: uint16
        ydk::YLeaf acct_port_number; //type: uint16

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers : public ydk::Entity
{
    public:
        PrivateServers();
        ~PrivateServers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrivateServer; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer

        ydk::YList private_server;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer : public ydk::Entity
{
    public:
        PrivateServer();
        ~PrivateServer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ordering_index; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf auth_port_number; //type: uint16
        ydk::YLeaf acct_port_number; //type: uint16
        ydk::YLeaf private_timeout; //type: uint32
        ydk::YLeaf ignore_accounting_port; //type: boolean
        ydk::YLeaf private_retransmit; //type: uint32
        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf private_key; //type: string
        ydk::YLeaf username; //type: string
        ydk::YLeaf ignore_auth_port; //type: boolean

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle : public ydk::Entity
{
    public:
        ServerGroupThrottle();
        ~ServerGroupThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access; //type: uint32
        ydk::YLeaf accounting; //type: uint32
        ydk::YLeaf access_timeout; //type: uint32

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance : public ydk::Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Method; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method> method;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method : public ydk::Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Name; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name> name;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name : public ydk::Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf least_outstanding; //type: uint32
        ydk::YLeaf batch_size; //type: uint32
        ydk::YLeaf ignore_preferred_server; //type: boolean

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization : public ydk::Entity
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

        class Request; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request
        class Reply; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request> request;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply> reply;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request : public ydk::Entity
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

        ydk::YLeaf action; //type: AaaAction
        ydk::YLeaf attribute_list_name; //type: string

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply : public ydk::Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf action; //type: AaaAction
        ydk::YLeaf attribute_list_name; //type: string

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply


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

        ydk::YLeaf ordering_index; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf secret; //type: string
        ydk::YLeaf password; //type: string
        class PasswordPolicy; //type: Aaa::Usernames::Username::PasswordPolicy
        class UsergroupUnderUsernames; //type: Aaa::Usernames::Username::UsergroupUnderUsernames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames::Username::PasswordPolicy> password_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames::Username::UsergroupUnderUsernames> usergroup_under_usernames;
        
}; // Aaa::Usernames::Username


class Aaa::Usernames::Username::PasswordPolicy : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf password; //type: string

}; // Aaa::Usernames::Username::PasswordPolicy


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
        ydk::YLeaf description; //type: string
        class TaskgroupUnderTaskgroups; //type: Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups
        class Tasks; //type: Aaa::Taskgroups::Taskgroup::Tasks

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups> taskgroup_under_taskgroups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::Tasks> tasks;
        
}; // Aaa::Taskgroups::Taskgroup


class Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups : public ydk::Entity
{
    public:
        TaskgroupUnderTaskgroups();
        ~TaskgroupUnderTaskgroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TaskgroupUnderTaskgroup; //type: Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup

        ydk::YList taskgroup_under_taskgroup;
        
}; // Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups


class Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup : public ydk::Entity
{
    public:
        TaskgroupUnderTaskgroup();
        ~TaskgroupUnderTaskgroup();

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

}; // Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup


class Aaa::Taskgroups::Taskgroup::Tasks : public ydk::Entity
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

        class Task; //type: Aaa::Taskgroups::Taskgroup::Tasks::Task

        ydk::YList task;
        
}; // Aaa::Taskgroups::Taskgroup::Tasks


class Aaa::Taskgroups::Taskgroup::Tasks::Task : public ydk::Entity
{
    public:
        Task();
        ~Task();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AaaLocaldTaskClass
        ydk::YLeaf task_id; //type: string

}; // Aaa::Taskgroups::Taskgroup::Tasks::Task


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
        ydk::YLeaf description; //type: string
        class TaskgroupUnderUsergroups; //type: Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups
        class UsergroupUnderUsergroups; //type: Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups> taskgroup_under_usergroups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups> usergroup_under_usergroups;
        
}; // Aaa::Usergroups::Usergroup


class Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups : public ydk::Entity
{
    public:
        TaskgroupUnderUsergroups();
        ~TaskgroupUnderUsergroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TaskgroupUnderUsergroup; //type: Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup

        ydk::YList taskgroup_under_usergroup;
        
}; // Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups


class Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup : public ydk::Entity
{
    public:
        TaskgroupUnderUsergroup();
        ~TaskgroupUnderUsergroup();

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

}; // Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup


class Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups : public ydk::Entity
{
    public:
        UsergroupUnderUsergroups();
        ~UsergroupUnderUsergroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UsergroupUnderUsergroup; //type: Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup

        ydk::YList usergroup_under_usergroup;
        
}; // Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups


class Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup : public ydk::Entity
{
    public:
        UsergroupUnderUsergroup();
        ~UsergroupUnderUsergroup();

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

}; // Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup


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

        ydk::YLeaf source_interface; //type: string
        class Gy; //type: Aaa::Diameter::Gy
        class Origin; //type: Aaa::Diameter::Origin
        class Nas; //type: Aaa::Diameter::Nas
        class DiameterTls; //type: Aaa::Diameter::DiameterTls
        class Peers; //type: Aaa::Diameter::Peers
        class Diams; //type: Aaa::Diameter::Diams
        class Gx; //type: Aaa::Diameter::Gx
        class DiameterTimer; //type: Aaa::Diameter::DiameterTimer
        class Vendor; //type: Aaa::Diameter::Vendor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Gy> gy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Origin> origin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Nas> nas;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::DiameterTls> diameter_tls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Peers> peers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Diams> diams;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Gx> gx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::DiameterTimer> diameter_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Vendor> vendor;
        
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

        ydk::YLeaf retransmit; //type: uint32
        ydk::YLeaf dest_host; //type: string
        ydk::YLeaf tx_timer; //type: uint32

}; // Aaa::Diameter::Gy


class Aaa::Diameter::Origin : public ydk::Entity
{
    public:
        Origin();
        ~Origin();

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

        ydk::YLeaf realm; //type: string
        ydk::YLeaf host; //type: string

}; // Aaa::Diameter::Origin


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

        ydk::YLeaf dest_host; //type: string

}; // Aaa::Diameter::Nas


class Aaa::Diameter::DiameterTls : public ydk::Entity
{
    public:
        DiameterTls();
        ~DiameterTls();

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

        ydk::YLeaf trustpoint; //type: string

}; // Aaa::Diameter::DiameterTls


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
        ydk::YLeaf host_destination; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf realm_destination; //type: string
        ydk::YLeaf tcp_transport; //type: uint32
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf tls_transport; //type: uint32
        ydk::YLeaf vrf_ip; //type: string
        class PeerTimer; //type: Aaa::Diameter::Peers::Peer::PeerTimer
        class PeerType; //type: Aaa::Diameter::Peers::Peer::PeerType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Peers::Peer::PeerTimer> peer_timer;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Peers::Peer::PeerType> peer_type;
        
}; // Aaa::Diameter::Peers::Peer


class Aaa::Diameter::Peers::Peer::PeerTimer : public ydk::Entity
{
    public:
        PeerTimer();
        ~PeerTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transaction; //type: uint32
        ydk::YLeaf connection; //type: uint32
        ydk::YLeaf watchdog; //type: uint32

}; // Aaa::Diameter::Peers::Peer::PeerTimer


class Aaa::Diameter::Peers::Peer::PeerType : public ydk::Entity
{
    public:
        PeerType();
        ~PeerType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server; //type: boolean

}; // Aaa::Diameter::Peers::Peer::PeerType


class Aaa::Diameter::Diams : public ydk::Entity
{
    public:
        Diams();
        ~Diams();

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

        class Diam; //type: Aaa::Diameter::Diams::Diam

        ydk::YList diam;
        
}; // Aaa::Diameter::Diams


class Aaa::Diameter::Diams::Diam : public ydk::Entity
{
    public:
        Diam();
        ~Diam();

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

        ydk::YLeaf list_id; //type: uint32
        class DiamAttrDefs; //type: Aaa::Diameter::Diams::Diam::DiamAttrDefs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Diams::Diam::DiamAttrDefs> diam_attr_defs;
        
}; // Aaa::Diameter::Diams::Diam


class Aaa::Diameter::Diams::Diam::DiamAttrDefs : public ydk::Entity
{
    public:
        DiamAttrDefs();
        ~DiamAttrDefs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiamAttrDef; //type: Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef

        ydk::YList diam_attr_def;
        
}; // Aaa::Diameter::Diams::Diam::DiamAttrDefs


class Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef : public ydk::Entity
{
    public:
        DiamAttrDef();
        ~DiamAttrDef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor_id; //type: uint32
        ydk::YLeaf attribute_id; //type: uint32
        class DiamAttrValue; //type: Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue> diam_attr_value;
        
}; // Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef


class Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue : public ydk::Entity
{
    public:
        DiamAttrValue();
        ~DiamAttrValue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type_string; //type: string
        ydk::YLeaf type_ipv4_address; //type: string
        ydk::YLeaf type_binary; //type: string
        ydk::YLeaf type_boolean; //type: uint32
        ydk::YLeaf type_enum; //type: uint32
        ydk::YLeaf type_grouped; //type: uint32
        ydk::YLeaf type_ulong; //type: uint32
        ydk::YLeaf type_identity; //type: string
        ydk::YLeaf data_type; //type: uint32
        ydk::YLeaf mandatory; //type: uint32

}; // Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue


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

        ydk::YLeaf retransmit; //type: uint32
        ydk::YLeaf dest_host; //type: string
        ydk::YLeaf tx_timer; //type: uint32

}; // Aaa::Diameter::Gx


class Aaa::Diameter::DiameterTimer : public ydk::Entity
{
    public:
        DiameterTimer();
        ~DiameterTimer();

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

        ydk::YLeaf transaction; //type: uint32
        ydk::YLeaf connection; //type: uint32
        ydk::YLeaf watchdog; //type: uint32

}; // Aaa::Diameter::DiameterTimer


class Aaa::Diameter::Vendor : public ydk::Entity
{
    public:
        Vendor();
        ~Vendor();

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

        class Supported; //type: Aaa::Diameter::Vendor::Supported

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Vendor::Supported> supported;
        
}; // Aaa::Diameter::Vendor


class Aaa::Diameter::Vendor::Supported : public ydk::Entity
{
    public:
        Supported();
        ~Supported();

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

        ydk::YLeaf cisco; //type: boolean
        ydk::YLeaf threegpp; //type: boolean
        ydk::YLeaf etsi; //type: boolean
        ydk::YLeaf vodafone; //type: boolean

}; // Aaa::Diameter::Vendor::Supported


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

        ydk::YLeaf key; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf single_connect; //type: boolean
        class Ipv6; //type: Aaa::Tacacs::Ipv6
        class Hosts; //type: Aaa::Tacacs::Hosts
        class Ipv4; //type: Aaa::Tacacs::Ipv4
        class Vrfs; //type: Aaa::Tacacs::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Hosts> hosts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Vrfs> vrfs;
        
}; // Aaa::Tacacs


class Aaa::Tacacs::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        ydk::YLeaf dscp; //type: one of uint32, enumeration

}; // Aaa::Tacacs::Ipv6


class Aaa::Tacacs::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

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

        class Host; //type: Aaa::Tacacs::Hosts::Host

        ydk::YList host;
        
}; // Aaa::Tacacs::Hosts


class Aaa::Tacacs::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf ordering_index; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf port_number; //type: uint32
        ydk::YLeaf key; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf single_connect; //type: boolean

}; // Aaa::Tacacs::Hosts::Host


class Aaa::Tacacs::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf dscp; //type: one of uint32, enumeration

}; // Aaa::Tacacs::Ipv4


class Aaa::Tacacs::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: Aaa::Tacacs::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Aaa::Tacacs::Vrfs


class Aaa::Tacacs::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_interface; //type: string

}; // Aaa::Tacacs::Vrfs::Vrf


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

        ydk::YLeaf retransmit; //type: uint32
        ydk::YLeaf dead_time; //type: uint32
        ydk::YLeaf key; //type: string
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf ignore_accounting_port; //type: boolean
        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf username; //type: string
        ydk::YLeaf ignore_auth_port; //type: boolean
        class Hosts; //type: Aaa::Radius::Hosts
        class DeadCriteria; //type: Aaa::Radius::DeadCriteria
        class Disallow; //type: Aaa::Radius::Disallow
        class Ipv6; //type: Aaa::Radius::Ipv6
        class DynamicAuthorization; //type: Aaa::Radius::DynamicAuthorization
        class LoadBalanceOptions; //type: Aaa::Radius::LoadBalanceOptions
        class Vrfs; //type: Aaa::Radius::Vrfs
        class Throttle; //type: Aaa::Radius::Throttle
        class Vsa; //type: Aaa::Radius::Vsa
        class Ipv4; //type: Aaa::Radius::Ipv4
        class RadiusAttribute; //type: Aaa::Radius::RadiusAttribute
        class Attributes; //type: Aaa::Radius::Attributes
        class SourcePort; //type: Aaa::Radius::SourcePort

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Hosts> hosts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DeadCriteria> dead_criteria;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Disallow> disallow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization> dynamic_authorization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions> load_balance_options;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Throttle> throttle;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa> vsa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute> radius_attribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Attributes> attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::SourcePort> source_port;
        
}; // Aaa::Radius


class Aaa::Radius::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

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

        class Host; //type: Aaa::Radius::Hosts::Host

        ydk::YList host;
        
}; // Aaa::Radius::Hosts


class Aaa::Radius::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

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

        ydk::YLeaf ordering_index; //type: uint32
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf auth_port_number; //type: uint16
        ydk::YLeaf acct_port_number; //type: uint16
        ydk::YLeaf host_retransmit; //type: uint32
        ydk::YLeaf host_timeout; //type: uint32
        ydk::YLeaf host_key; //type: string
        ydk::YLeaf ignore_accounting_port; //type: boolean
        ydk::YLeaf idle_time; //type: uint32
        ydk::YLeaf username; //type: string
        ydk::YLeaf ignore_auth_port; //type: boolean

}; // Aaa::Radius::Hosts::Host


class Aaa::Radius::DeadCriteria : public ydk::Entity
{
    public:
        DeadCriteria();
        ~DeadCriteria();

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

        ydk::YLeaf tries; //type: uint32
        ydk::YLeaf time; //type: uint32

}; // Aaa::Radius::DeadCriteria


class Aaa::Radius::Disallow : public ydk::Entity
{
    public:
        Disallow();
        ~Disallow();

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

        ydk::YLeaf null_username; //type: uint32

}; // Aaa::Radius::Disallow


class Aaa::Radius::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        ydk::YLeaf dscp; //type: one of uint32, enumeration

}; // Aaa::Radius::Ipv6


class Aaa::Radius::DynamicAuthorization : public ydk::Entity
{
    public:
        DynamicAuthorization();
        ~DynamicAuthorization();

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

        ydk::YLeaf ignore; //type: AaaSelectKey
        ydk::YLeaf port; //type: uint32
        ydk::YLeaf authentication_type; //type: AaaAuthentication
        ydk::YLeaf server_key; //type: string
        class Clients; //type: Aaa::Radius::DynamicAuthorization::Clients

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization::Clients> clients;
        
}; // Aaa::Radius::DynamicAuthorization


class Aaa::Radius::DynamicAuthorization::Clients : public ydk::Entity
{
    public:
        Clients();
        ~Clients();

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

        class Client; //type: Aaa::Radius::DynamicAuthorization::Clients::Client
        class ClientVrfName; //type: Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName

        ydk::YList client;
        ydk::YList client_vrf_name;
        
}; // Aaa::Radius::DynamicAuthorization::Clients


class Aaa::Radius::DynamicAuthorization::Clients::Client : public ydk::Entity
{
    public:
        Client();
        ~Client();

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
        ydk::YLeaf server_key; //type: string

}; // Aaa::Radius::DynamicAuthorization::Clients::Client


class Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName : public ydk::Entity
{
    public:
        ClientVrfName();
        ~ClientVrfName();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf server_key; //type: string

}; // Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName


class Aaa::Radius::LoadBalanceOptions : public ydk::Entity
{
    public:
        LoadBalanceOptions();
        ~LoadBalanceOptions();

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

        class LoadBalanceMethod; //type: Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod> load_balance_method;
        
}; // Aaa::Radius::LoadBalanceOptions


class Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod : public ydk::Entity
{
    public:
        LoadBalanceMethod();
        ~LoadBalanceMethod();

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

        class BatchSize; //type: Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize> batch_size;
        
}; // Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod


class Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize : public ydk::Entity
{
    public:
        BatchSize();
        ~BatchSize();

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

        ydk::YLeaf batch_size; //type: uint32
        ydk::YLeaf ignore_preferred_server; //type: boolean

}; // Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize


class Aaa::Radius::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

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

        class Vrf; //type: Aaa::Radius::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Aaa::Radius::Vrfs


class Aaa::Radius::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf source_interface; //type: string

}; // Aaa::Radius::Vrfs::Vrf


class Aaa::Radius::Throttle : public ydk::Entity
{
    public:
        Throttle();
        ~Throttle();

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

        ydk::YLeaf access; //type: uint32
        ydk::YLeaf accounting; //type: uint32
        ydk::YLeaf access_timeout; //type: uint32

}; // Aaa::Radius::Throttle


class Aaa::Radius::Vsa : public ydk::Entity
{
    public:
        Vsa();
        ~Vsa();

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

        class Attribute; //type: Aaa::Radius::Vsa::Attribute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa::Attribute> attribute;
        
}; // Aaa::Radius::Vsa


class Aaa::Radius::Vsa::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

        class Ignore; //type: Aaa::Radius::Vsa::Attribute::Ignore

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa::Attribute::Ignore> ignore;
        
}; // Aaa::Radius::Vsa::Attribute


class Aaa::Radius::Vsa::Attribute::Ignore : public ydk::Entity
{
    public:
        Ignore();
        ~Ignore();

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

        ydk::YLeaf unknown; //type: empty

}; // Aaa::Radius::Vsa::Attribute::Ignore


class Aaa::Radius::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        ydk::YLeaf dscp; //type: one of uint32, enumeration

}; // Aaa::Radius::Ipv4


class Aaa::Radius::RadiusAttribute : public ydk::Entity
{
    public:
        RadiusAttribute();
        ~RadiusAttribute();

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

        class FilterId11; //type: Aaa::Radius::RadiusAttribute::FilterId11
        class AcctMultiSessionId; //type: Aaa::Radius::RadiusAttribute::AcctMultiSessionId
        class AcctSessionId; //type: Aaa::Radius::RadiusAttribute::AcctSessionId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::FilterId11> filter_id_11;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctMultiSessionId> acct_multi_session_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctSessionId> acct_session_id;
        
}; // Aaa::Radius::RadiusAttribute


class Aaa::Radius::RadiusAttribute::FilterId11 : public ydk::Entity
{
    public:
        FilterId11();
        ~FilterId11();

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

        class Defaults; //type: Aaa::Radius::RadiusAttribute::FilterId11::Defaults

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::FilterId11::Defaults> defaults;
        
}; // Aaa::Radius::RadiusAttribute::FilterId11


class Aaa::Radius::RadiusAttribute::FilterId11::Defaults : public ydk::Entity
{
    public:
        Defaults();
        ~Defaults();

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

        ydk::YLeaf direction; //type: AaaDirection

}; // Aaa::Radius::RadiusAttribute::FilterId11::Defaults


class Aaa::Radius::RadiusAttribute::AcctMultiSessionId : public ydk::Entity
{
    public:
        AcctMultiSessionId();
        ~AcctMultiSessionId();

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

        class IncludeParentSessionId; //type: Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId> include_parent_session_id;
        
}; // Aaa::Radius::RadiusAttribute::AcctMultiSessionId


class Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId : public ydk::Entity
{
    public:
        IncludeParentSessionId();
        ~IncludeParentSessionId();

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

        ydk::YLeaf config; //type: AaaConfig

}; // Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId


class Aaa::Radius::RadiusAttribute::AcctSessionId : public ydk::Entity
{
    public:
        AcctSessionId();
        ~AcctSessionId();

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

        class PrependNasPortId; //type: Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId> prepend_nas_port_id;
        
}; // Aaa::Radius::RadiusAttribute::AcctSessionId


class Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId : public ydk::Entity
{
    public:
        PrependNasPortId();
        ~PrependNasPortId();

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

        ydk::YLeaf config; //type: AaaConfig

}; // Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId


class Aaa::Radius::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

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

        class Attribute; //type: Aaa::Radius::Attributes::Attribute

        ydk::YList attribute;
        
}; // Aaa::Radius::Attributes


class Aaa::Radius::Attributes::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

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

        ydk::YLeaf attribute_list_name; //type: string
        ydk::YLeaf attribute; //type: string
        class VendorIds; //type: Aaa::Radius::Attributes::Attribute::VendorIds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Attributes::Attribute::VendorIds> vendor_ids;
        
}; // Aaa::Radius::Attributes::Attribute


class Aaa::Radius::Attributes::Attribute::VendorIds : public ydk::Entity
{
    public:
        VendorIds();
        ~VendorIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VendorId; //type: Aaa::Radius::Attributes::Attribute::VendorIds::VendorId

        ydk::YList vendor_id;
        
}; // Aaa::Radius::Attributes::Attribute::VendorIds


class Aaa::Radius::Attributes::Attribute::VendorIds::VendorId : public ydk::Entity
{
    public:
        VendorId();
        ~VendorId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor_id; //type: uint32
        class VendorType; //type: Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType

        ydk::YList vendor_type;
        
}; // Aaa::Radius::Attributes::Attribute::VendorIds::VendorId


class Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType : public ydk::Entity
{
    public:
        VendorType();
        ~VendorType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vendor_type; //type: uint32
        class AttributeName; //type: Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName

        ydk::YList attribute_name;
        
}; // Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType


class Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName : public ydk::Entity
{
    public:
        AttributeName();
        ~AttributeName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_name; //type: string
        class AttributeNameAbsent; //type: Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent

        ydk::YList attribute_name_absent;
        
}; // Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName


class Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent : public ydk::Entity
{
    public:
        AttributeNameAbsent();
        ~AttributeNameAbsent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_name_absent; //type: uint32
        class AttributeNamePresent; //type: Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent

        ydk::YList attribute_name_present;
        
}; // Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent


class Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent : public ydk::Entity
{
    public:
        AttributeNamePresent();
        ~AttributeNamePresent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf attribute_name_present; //type: uint32

}; // Aaa::Radius::Attributes::Attribute::VendorIds::VendorId::VendorType::AttributeName::AttributeNameAbsent::AttributeNamePresent


class Aaa::Radius::SourcePort : public ydk::Entity
{
    public:
        SourcePort();
        ~SourcePort();

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

        ydk::YLeaf extended; //type: empty

}; // Aaa::Radius::SourcePort


class Aaa::AaaSubscriber : public ydk::Entity
{
    public:
        AaaSubscriber();
        ~AaaSubscriber();

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

        class PolicyIfAuthors; //type: Aaa::AaaSubscriber::PolicyIfAuthors
        class Accountings; //type: Aaa::AaaSubscriber::Accountings
        class ServiceAccounting; //type: Aaa::AaaSubscriber::ServiceAccounting
        class PrepaidAuthors; //type: Aaa::AaaSubscriber::PrepaidAuthors
        class Authorizations; //type: Aaa::AaaSubscriber::Authorizations
        class Authentications; //type: Aaa::AaaSubscriber::Authentications

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::PolicyIfAuthors> policy_if_authors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Accountings> accountings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::ServiceAccounting> service_accounting;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::PrepaidAuthors> prepaid_authors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Authorizations> authorizations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Authentications> authentications;
        
}; // Aaa::AaaSubscriber


class Aaa::AaaSubscriber::PolicyIfAuthors : public ydk::Entity
{
    public:
        PolicyIfAuthors();
        ~PolicyIfAuthors();

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

        class PolicyIfAuthor; //type: Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor

        ydk::YList policy_if_author;
        
}; // Aaa::AaaSubscriber::PolicyIfAuthors


class Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor : public ydk::Entity
{
    public:
        PolicyIfAuthor();
        ~PolicyIfAuthor();

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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeafList method; //type: list of  AaaMethod
        ydk::YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor


class Aaa::AaaSubscriber::Accountings : public ydk::Entity
{
    public:
        Accountings();
        ~Accountings();

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

        class Accounting; //type: Aaa::AaaSubscriber::Accountings::Accounting

        ydk::YList accounting;
        
}; // Aaa::AaaSubscriber::Accountings


class Aaa::AaaSubscriber::Accountings::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeaf broadcast; //type: AaaAccountingBroadcast
        ydk::YLeafList method; //type: list of  AaaMethod
        ydk::YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::Accountings::Accounting


class Aaa::AaaSubscriber::ServiceAccounting : public ydk::Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

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

        ydk::YLeaf type; //type: AaaServiceAccounting

}; // Aaa::AaaSubscriber::ServiceAccounting


class Aaa::AaaSubscriber::PrepaidAuthors : public ydk::Entity
{
    public:
        PrepaidAuthors();
        ~PrepaidAuthors();

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

        class PrepaidAuthor; //type: Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor

        ydk::YList prepaid_author;
        
}; // Aaa::AaaSubscriber::PrepaidAuthors


class Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor : public ydk::Entity
{
    public:
        PrepaidAuthor();
        ~PrepaidAuthor();

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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeafList method; //type: list of  AaaMethod
        ydk::YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor


class Aaa::AaaSubscriber::Authorizations : public ydk::Entity
{
    public:
        Authorizations();
        ~Authorizations();

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

        class Authorization; //type: Aaa::AaaSubscriber::Authorizations::Authorization

        ydk::YList authorization;
        
}; // Aaa::AaaSubscriber::Authorizations


class Aaa::AaaSubscriber::Authorizations::Authorization : public ydk::Entity
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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeafList method; //type: list of  AaaMethod
        ydk::YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::Authorizations::Authorization


class Aaa::AaaSubscriber::Authentications : public ydk::Entity
{
    public:
        Authentications();
        ~Authentications();

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

        class Authentication; //type: Aaa::AaaSubscriber::Authentications::Authentication

        ydk::YList authentication;
        
}; // Aaa::AaaSubscriber::Authentications


class Aaa::AaaSubscriber::Authentications::Authentication : public ydk::Entity
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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeafList method; //type: list of  AaaMethod
        ydk::YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::Authentications::Authentication


class Aaa::AaaMobile : public ydk::Entity
{
    public:
        AaaMobile();
        ~AaaMobile();

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

        class Mobiles; //type: Aaa::AaaMobile::Mobiles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaMobile::Mobiles> mobiles;
        
}; // Aaa::AaaMobile


class Aaa::AaaMobile::Mobiles : public ydk::Entity
{
    public:
        Mobiles();
        ~Mobiles();

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

        class Mobile; //type: Aaa::AaaMobile::Mobiles::Mobile

        ydk::YList mobile;
        
}; // Aaa::AaaMobile::Mobiles


class Aaa::AaaMobile::Mobiles::Mobile : public ydk::Entity
{
    public:
        Mobile();
        ~Mobile();

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

        ydk::YLeaf listname; //type: string
        ydk::YLeaf broadcast; //type: AaaAccountingBroadcast
        ydk::YLeafList method; //type: list of  AaaMethod
        ydk::YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaMobile::Mobiles::Mobile


class Aaa::AaaDot1x : public ydk::Entity
{
    public:
        AaaDot1x();
        ~AaaDot1x();

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

        class Authentications; //type: Aaa::AaaDot1x::Authentications

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaDot1x::Authentications> authentications;
        
}; // Aaa::AaaDot1x


class Aaa::AaaDot1x::Authentications : public ydk::Entity
{
    public:
        Authentications();
        ~Authentications();

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

        class Authentication; //type: Aaa::AaaDot1x::Authentications::Authentication

        ydk::YList authentication;
        
}; // Aaa::AaaDot1x::Authentications


class Aaa::AaaDot1x::Authentications::Authentication : public ydk::Entity
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

        ydk::YLeaf type; //type: string
        ydk::YLeaf listname; //type: string
        ydk::YLeafList method; //type: list of  AaaMethod
        ydk::YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaDot1x::Authentications::Authentication


class Aaa::RadiusAttribute : public ydk::Entity
{
    public:
        RadiusAttribute();
        ~RadiusAttribute();

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

        class NasPortId; //type: Aaa::RadiusAttribute::NasPortId
        class CallingStation; //type: Aaa::RadiusAttribute::CallingStation
        class CalledStation; //type: Aaa::RadiusAttribute::CalledStation
        class NasPort; //type: Aaa::RadiusAttribute::NasPort
        class FormatOthers; //type: Aaa::RadiusAttribute::FormatOthers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPortId> nas_port_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CallingStation> calling_station;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CalledStation> called_station;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPort> nas_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::FormatOthers> format_others;
        
}; // Aaa::RadiusAttribute


class Aaa::RadiusAttribute::NasPortId : public ydk::Entity
{
    public:
        NasPortId();
        ~NasPortId();

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

        class Formats; //type: Aaa::RadiusAttribute::NasPortId::Formats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPortId::Formats> formats;
        
}; // Aaa::RadiusAttribute::NasPortId


class Aaa::RadiusAttribute::NasPortId::Formats : public ydk::Entity
{
    public:
        Formats();
        ~Formats();

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

        class Format; //type: Aaa::RadiusAttribute::NasPortId::Formats::Format

        ydk::YList format;
        
}; // Aaa::RadiusAttribute::NasPortId::Formats


class Aaa::RadiusAttribute::NasPortId::Formats::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

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

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf format_name; //type: string

}; // Aaa::RadiusAttribute::NasPortId::Formats::Format


class Aaa::RadiusAttribute::CallingStation : public ydk::Entity
{
    public:
        CallingStation();
        ~CallingStation();

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

        class Formats; //type: Aaa::RadiusAttribute::CallingStation::Formats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CallingStation::Formats> formats;
        
}; // Aaa::RadiusAttribute::CallingStation


class Aaa::RadiusAttribute::CallingStation::Formats : public ydk::Entity
{
    public:
        Formats();
        ~Formats();

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

        class Format; //type: Aaa::RadiusAttribute::CallingStation::Formats::Format

        ydk::YList format;
        
}; // Aaa::RadiusAttribute::CallingStation::Formats


class Aaa::RadiusAttribute::CallingStation::Formats::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

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

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf format_name; //type: string

}; // Aaa::RadiusAttribute::CallingStation::Formats::Format


class Aaa::RadiusAttribute::CalledStation : public ydk::Entity
{
    public:
        CalledStation();
        ~CalledStation();

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

        class Formats; //type: Aaa::RadiusAttribute::CalledStation::Formats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CalledStation::Formats> formats;
        
}; // Aaa::RadiusAttribute::CalledStation


class Aaa::RadiusAttribute::CalledStation::Formats : public ydk::Entity
{
    public:
        Formats();
        ~Formats();

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

        class Format; //type: Aaa::RadiusAttribute::CalledStation::Formats::Format

        ydk::YList format;
        
}; // Aaa::RadiusAttribute::CalledStation::Formats


class Aaa::RadiusAttribute::CalledStation::Formats::Format : public ydk::Entity
{
    public:
        Format();
        ~Format();

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

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf format_name; //type: string

}; // Aaa::RadiusAttribute::CalledStation::Formats::Format


class Aaa::RadiusAttribute::NasPort : public ydk::Entity
{
    public:
        NasPort();
        ~NasPort();

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

        class FormatExtendeds; //type: Aaa::RadiusAttribute::NasPort::FormatExtendeds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPort::FormatExtendeds> format_extendeds;
        
}; // Aaa::RadiusAttribute::NasPort


class Aaa::RadiusAttribute::NasPort::FormatExtendeds : public ydk::Entity
{
    public:
        FormatExtendeds();
        ~FormatExtendeds();

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

        class FormatExtended; //type: Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended

        ydk::YList format_extended;
        
}; // Aaa::RadiusAttribute::NasPort::FormatExtendeds


class Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended : public ydk::Entity
{
    public:
        FormatExtended();
        ~FormatExtended();

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

        ydk::YLeaf value_; //type: string
        ydk::YLeaf type; //type: uint32
        ydk::YLeaf format_identifier; //type: string

}; // Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended


class Aaa::RadiusAttribute::FormatOthers : public ydk::Entity
{
    public:
        FormatOthers();
        ~FormatOthers();

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

        class FormatOther; //type: Aaa::RadiusAttribute::FormatOthers::FormatOther

        ydk::YList format_other;
        
}; // Aaa::RadiusAttribute::FormatOthers


class Aaa::RadiusAttribute::FormatOthers::FormatOther : public ydk::Entity
{
    public:
        FormatOther();
        ~FormatOther();

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

        ydk::YLeaf nas_port_type_name; //type: string
        ydk::YLeaf attribute_config1; //type: string
        ydk::YLeaf attribute_config2; //type: string
        ydk::YLeaf attribute_config3; //type: string
        ydk::YLeaf attribute_config4; //type: string
        ydk::YLeaf attribute_config5; //type: string
        ydk::YLeaf attribute_config6; //type: string
        ydk::YLeaf attribute_config7; //type: string
        ydk::YLeaf attribute_config8; //type: string
        ydk::YLeaf attribute_config9; //type: string
        ydk::YLeaf attribute_config10; //type: string
        ydk::YLeaf attribute_config11; //type: string
        ydk::YLeaf attribute_config12; //type: string
        ydk::YLeaf attribute_config13; //type: string
        ydk::YLeaf attribute_config14; //type: string
        ydk::YLeaf attribute_config15; //type: string
        ydk::YLeaf attribute_config16; //type: string
        ydk::YLeaf attribute_config17; //type: string
        ydk::YLeaf attribute_config18; //type: string
        ydk::YLeaf attribute_config19; //type: uint32

}; // Aaa::RadiusAttribute::FormatOthers::FormatOther


}
}

#endif /* _CISCO_IOS_XR_AAA_LIB_CFG_ */

