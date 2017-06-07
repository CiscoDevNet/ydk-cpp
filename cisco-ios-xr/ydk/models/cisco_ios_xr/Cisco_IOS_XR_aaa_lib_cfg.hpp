#ifndef _CISCO_IOS_XR_AAA_LIB_CFG_
#define _CISCO_IOS_XR_AAA_LIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_aaa_lib_cfg {

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

        YLeaf default_taskgroup; //type: string
        class Accountings; //type: Aaa::Accountings
        class Authorizations; //type: Aaa::Authorizations
        class AccountingUpdate; //type: Aaa::AccountingUpdate
        class Banner; //type: Aaa::Banner
        class Authentications; //type: Aaa::Authentications
        class AaaSubscriber; //type: Aaa::AaaSubscriber
        class AaaMobile; //type: Aaa::AaaMobile
        class AaaDot1X; //type: Aaa::AaaDot1X
        class RadiusAttribute; //type: Aaa::RadiusAttribute
        class ServerGroups; //type: Aaa::ServerGroups
        class Usernames; //type: Aaa::Usernames
        class Taskgroups; //type: Aaa::Taskgroups
        class Usergroups; //type: Aaa::Usergroups
        class Diameter; //type: Aaa::Diameter
        class Radius; //type: Aaa::Radius
        class Tacacs; //type: Aaa::Tacacs

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaDot1X> aaa_dot1x;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaMobile> aaa_mobile;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber> aaa_subscriber;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AccountingUpdate> accounting_update; // presence node
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Accountings> accountings;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authentications> authentications;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authorizations> authorizations;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Banner> banner;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter> diameter;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius> radius;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute> radius_attribute;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups> server_groups;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs> tacacs;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups> taskgroups;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups> usergroups;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames> usernames;
        
}; // Aaa


class Aaa::Accountings : public Entity
{
    public:
        Accountings();
        ~Accountings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Accounting; //type: Aaa::Accountings::Accounting

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Accountings::Accounting> > accounting;
        
}; // Aaa::Accountings


class Aaa::Accountings::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeaf rp_failover; //type: AaaAccountingRpFailoverEnum
        YLeaf broadcast; //type: AaaAccountingBroadcastEnum
        YLeaf type_xr; //type: AaaAccountingEnum
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::Accountings::Accounting


class Aaa::Authorizations : public Entity
{
    public:
        Authorizations();
        ~Authorizations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authorization; //type: Aaa::Authorizations::Authorization

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authorizations::Authorization> > authorization;
        
}; // Aaa::Authorizations


class Aaa::Authorizations::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::Authorizations::Authorization


class Aaa::AccountingUpdate : public Entity
{
    public:
        AccountingUpdate();
        ~AccountingUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: AaaAccountingUpdateEnum
        YLeaf periodic_interval; //type: uint32

}; // Aaa::AccountingUpdate


class Aaa::Banner : public Entity
{
    public:
        Banner();
        ~Banner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf login; //type: string

}; // Aaa::Banner


class Aaa::Authentications : public Entity
{
    public:
        Authentications();
        ~Authentications();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authentication; //type: Aaa::Authentications::Authentication

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Authentications::Authentication> > authentication;
        
}; // Aaa::Authentications


class Aaa::Authentications::Authentication : public Entity
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

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::Authentications::Authentication


class Aaa::AaaSubscriber : public Entity
{
    public:
        AaaSubscriber();
        ~AaaSubscriber();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PolicyIfAuthors; //type: Aaa::AaaSubscriber::PolicyIfAuthors
        class Accountings; //type: Aaa::AaaSubscriber::Accountings
        class ServiceAccounting; //type: Aaa::AaaSubscriber::ServiceAccounting
        class PrepaidAuthors; //type: Aaa::AaaSubscriber::PrepaidAuthors
        class Authorizations; //type: Aaa::AaaSubscriber::Authorizations
        class Authentications; //type: Aaa::AaaSubscriber::Authentications

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Accountings> accountings;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Authentications> authentications;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Authorizations> authorizations;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::PolicyIfAuthors> policy_if_authors;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::PrepaidAuthors> prepaid_authors;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::ServiceAccounting> service_accounting;
        
}; // Aaa::AaaSubscriber


class Aaa::AaaSubscriber::PolicyIfAuthors : public Entity
{
    public:
        PolicyIfAuthors();
        ~PolicyIfAuthors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PolicyIfAuthor; //type: Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor> > policy_if_author;
        
}; // Aaa::AaaSubscriber::PolicyIfAuthors


class Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor : public Entity
{
    public:
        PolicyIfAuthor();
        ~PolicyIfAuthor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::PolicyIfAuthors::PolicyIfAuthor


class Aaa::AaaSubscriber::Accountings : public Entity
{
    public:
        Accountings();
        ~Accountings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Accounting; //type: Aaa::AaaSubscriber::Accountings::Accounting

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Accountings::Accounting> > accounting;
        
}; // Aaa::AaaSubscriber::Accountings


class Aaa::AaaSubscriber::Accountings::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeaf broadcast; //type: AaaAccountingBroadcastEnum
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::Accountings::Accounting


class Aaa::AaaSubscriber::ServiceAccounting : public Entity
{
    public:
        ServiceAccounting();
        ~ServiceAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: AaaServiceAccountingEnum

}; // Aaa::AaaSubscriber::ServiceAccounting


class Aaa::AaaSubscriber::PrepaidAuthors : public Entity
{
    public:
        PrepaidAuthors();
        ~PrepaidAuthors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrepaidAuthor; //type: Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor> > prepaid_author;
        
}; // Aaa::AaaSubscriber::PrepaidAuthors


class Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor : public Entity
{
    public:
        PrepaidAuthor();
        ~PrepaidAuthor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::PrepaidAuthors::PrepaidAuthor


class Aaa::AaaSubscriber::Authorizations : public Entity
{
    public:
        Authorizations();
        ~Authorizations();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authorization; //type: Aaa::AaaSubscriber::Authorizations::Authorization

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Authorizations::Authorization> > authorization;
        
}; // Aaa::AaaSubscriber::Authorizations


class Aaa::AaaSubscriber::Authorizations::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::Authorizations::Authorization


class Aaa::AaaSubscriber::Authentications : public Entity
{
    public:
        Authentications();
        ~Authentications();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authentication; //type: Aaa::AaaSubscriber::Authentications::Authentication

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaSubscriber::Authentications::Authentication> > authentication;
        
}; // Aaa::AaaSubscriber::Authentications


class Aaa::AaaSubscriber::Authentications::Authentication : public Entity
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

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaSubscriber::Authentications::Authentication


class Aaa::AaaMobile : public Entity
{
    public:
        AaaMobile();
        ~AaaMobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mobiles; //type: Aaa::AaaMobile::Mobiles

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaMobile::Mobiles> mobiles;
        
}; // Aaa::AaaMobile


class Aaa::AaaMobile::Mobiles : public Entity
{
    public:
        Mobiles();
        ~Mobiles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mobile; //type: Aaa::AaaMobile::Mobiles::Mobile

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaMobile::Mobiles::Mobile> > mobile;
        
}; // Aaa::AaaMobile::Mobiles


class Aaa::AaaMobile::Mobiles::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf listname; //type: string
        YLeaf broadcast; //type: AaaAccountingBroadcastEnum
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaMobile::Mobiles::Mobile


class Aaa::AaaDot1X : public Entity
{
    public:
        AaaDot1X();
        ~AaaDot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authentications; //type: Aaa::AaaDot1X::Authentications

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaDot1X::Authentications> authentications;
        
}; // Aaa::AaaDot1X


class Aaa::AaaDot1X::Authentications : public Entity
{
    public:
        Authentications();
        ~Authentications();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Authentication; //type: Aaa::AaaDot1X::Authentications::Authentication

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::AaaDot1X::Authentications::Authentication> > authentication;
        
}; // Aaa::AaaDot1X::Authentications


class Aaa::AaaDot1X::Authentications::Authentication : public Entity
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

        YLeaf type; //type: string
        YLeaf listname; //type: string
        YLeafList method; //type: list of  AaaMethodEnum
        YLeafList server_group_name; //type: list of  string

}; // Aaa::AaaDot1X::Authentications::Authentication


class Aaa::RadiusAttribute : public Entity
{
    public:
        RadiusAttribute();
        ~RadiusAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NasPortId; //type: Aaa::RadiusAttribute::NasPortId
        class CallingStation; //type: Aaa::RadiusAttribute::CallingStation
        class CalledStation; //type: Aaa::RadiusAttribute::CalledStation
        class NasPort; //type: Aaa::RadiusAttribute::NasPort
        class FormatOthers; //type: Aaa::RadiusAttribute::FormatOthers

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CalledStation> called_station;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CallingStation> calling_station;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::FormatOthers> format_others;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPort> nas_port;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPortId> nas_port_id;
        
}; // Aaa::RadiusAttribute


class Aaa::RadiusAttribute::NasPortId : public Entity
{
    public:
        NasPortId();
        ~NasPortId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Formats; //type: Aaa::RadiusAttribute::NasPortId::Formats

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPortId::Formats> formats;
        
}; // Aaa::RadiusAttribute::NasPortId


class Aaa::RadiusAttribute::NasPortId::Formats : public Entity
{
    public:
        Formats();
        ~Formats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Format; //type: Aaa::RadiusAttribute::NasPortId::Formats::Format

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPortId::Formats::Format> > format;
        
}; // Aaa::RadiusAttribute::NasPortId::Formats


class Aaa::RadiusAttribute::NasPortId::Formats::Format : public Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint32
        YLeaf format_name; //type: string

}; // Aaa::RadiusAttribute::NasPortId::Formats::Format


class Aaa::RadiusAttribute::CallingStation : public Entity
{
    public:
        CallingStation();
        ~CallingStation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Formats; //type: Aaa::RadiusAttribute::CallingStation::Formats

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CallingStation::Formats> formats;
        
}; // Aaa::RadiusAttribute::CallingStation


class Aaa::RadiusAttribute::CallingStation::Formats : public Entity
{
    public:
        Formats();
        ~Formats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Format; //type: Aaa::RadiusAttribute::CallingStation::Formats::Format

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CallingStation::Formats::Format> > format;
        
}; // Aaa::RadiusAttribute::CallingStation::Formats


class Aaa::RadiusAttribute::CallingStation::Formats::Format : public Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint32
        YLeaf format_name; //type: string

}; // Aaa::RadiusAttribute::CallingStation::Formats::Format


class Aaa::RadiusAttribute::CalledStation : public Entity
{
    public:
        CalledStation();
        ~CalledStation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Formats; //type: Aaa::RadiusAttribute::CalledStation::Formats

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CalledStation::Formats> formats;
        
}; // Aaa::RadiusAttribute::CalledStation


class Aaa::RadiusAttribute::CalledStation::Formats : public Entity
{
    public:
        Formats();
        ~Formats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Format; //type: Aaa::RadiusAttribute::CalledStation::Formats::Format

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::CalledStation::Formats::Format> > format;
        
}; // Aaa::RadiusAttribute::CalledStation::Formats


class Aaa::RadiusAttribute::CalledStation::Formats::Format : public Entity
{
    public:
        Format();
        ~Format();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: uint32
        YLeaf format_name; //type: string

}; // Aaa::RadiusAttribute::CalledStation::Formats::Format


class Aaa::RadiusAttribute::NasPort : public Entity
{
    public:
        NasPort();
        ~NasPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FormatExtendeds; //type: Aaa::RadiusAttribute::NasPort::FormatExtendeds

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPort::FormatExtendeds> format_extendeds;
        
}; // Aaa::RadiusAttribute::NasPort


class Aaa::RadiusAttribute::NasPort::FormatExtendeds : public Entity
{
    public:
        FormatExtendeds();
        ~FormatExtendeds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FormatExtended; //type: Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended> > format_extended;
        
}; // Aaa::RadiusAttribute::NasPort::FormatExtendeds


class Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended : public Entity
{
    public:
        FormatExtended();
        ~FormatExtended();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: string
        YLeaf type; //type: uint32
        YLeaf format_identifier; //type: string

}; // Aaa::RadiusAttribute::NasPort::FormatExtendeds::FormatExtended


class Aaa::RadiusAttribute::FormatOthers : public Entity
{
    public:
        FormatOthers();
        ~FormatOthers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FormatOther; //type: Aaa::RadiusAttribute::FormatOthers::FormatOther

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::RadiusAttribute::FormatOthers::FormatOther> > format_other;
        
}; // Aaa::RadiusAttribute::FormatOthers


class Aaa::RadiusAttribute::FormatOthers::FormatOther : public Entity
{
    public:
        FormatOther();
        ~FormatOther();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nas_port_type_name; //type: string
        YLeaf attribute_config1; //type: string
        YLeaf attribute_config2; //type: string
        YLeaf attribute_config3; //type: string
        YLeaf attribute_config4; //type: string
        YLeaf attribute_config5; //type: string
        YLeaf attribute_config6; //type: string
        YLeaf attribute_config7; //type: string
        YLeaf attribute_config8; //type: string
        YLeaf attribute_config9; //type: string
        YLeaf attribute_config10; //type: string
        YLeaf attribute_config11; //type: string
        YLeaf attribute_config12; //type: string
        YLeaf attribute_config13; //type: string
        YLeaf attribute_config14; //type: string
        YLeaf attribute_config15; //type: string
        YLeaf attribute_config16; //type: string
        YLeaf attribute_config17; //type: string
        YLeaf attribute_config18; //type: string
        YLeaf attribute_config19; //type: uint32

}; // Aaa::RadiusAttribute::FormatOthers::FormatOther


class Aaa::ServerGroups : public Entity
{
    public:
        ServerGroups();
        ~ServerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DiameterServerGroups; //type: Aaa::ServerGroups::DiameterServerGroups
        class RadiusServerGroups; //type: Aaa::ServerGroups::RadiusServerGroups
        class TacacsServerGroups; //type: Aaa::ServerGroups::TacacsServerGroups

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::DiameterServerGroups> diameter_server_groups;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups> radius_server_groups;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups> tacacs_server_groups;
        
}; // Aaa::ServerGroups


class Aaa::ServerGroups::DiameterServerGroups : public Entity
{
    public:
        DiameterServerGroups();
        ~DiameterServerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DiameterServerGroup; //type: Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup> > diameter_server_group;
        
}; // Aaa::ServerGroups::DiameterServerGroups


class Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup : public Entity
{
    public:
        DiameterServerGroup();
        ~DiameterServerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_group_name; //type: string
        class Servers; //type: Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers> servers;
        
}; // Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup


class Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers : public Entity
{
    public:
        Servers();
        ~Servers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server; //type: Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server> > server;
        
}; // Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers


class Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ordering_index; //type: int32
        YLeaf peer_name; //type: string

}; // Aaa::ServerGroups::DiameterServerGroups::DiameterServerGroup::Servers::Server


class Aaa::ServerGroups::RadiusServerGroups : public Entity
{
    public:
        RadiusServerGroups();
        ~RadiusServerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RadiusServerGroup; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup> > radius_server_group;
        
}; // Aaa::ServerGroups::RadiusServerGroups


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup : public Entity
{
    public:
        RadiusServerGroup();
        ~RadiusServerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_group_name; //type: string
        YLeaf dead_time; //type: uint32
        YLeaf source_interface; //type: string
        YLeaf vrf; //type: string
        class Accounting; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting
        class Servers; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers
        class PrivateServers; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers
        class ServerGroupThrottle; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle
        class LoadBalance; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance
        class Authorization; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers> private_servers;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle> server_group_throttle;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers> servers;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Request; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request
        class Reply; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply> reply;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request> request;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: AaaActionEnum
        YLeaf attribute_list_name; //type: string

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Request


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply : public Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: AaaActionEnum
        YLeaf attribute_list_name; //type: string

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Accounting::Reply


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers : public Entity
{
    public:
        Servers();
        ~Servers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server> > server;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ordering_index; //type: int32
        YLeaf ip_address; //type: string
        YLeaf auth_port_number; //type: uint16
        YLeaf acct_port_number; //type: uint16

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Servers::Server


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers : public Entity
{
    public:
        PrivateServers();
        ~PrivateServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrivateServer; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer> > private_server;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer : public Entity
{
    public:
        PrivateServer();
        ~PrivateServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ordering_index; //type: int32
        YLeaf ip_address; //type: string
        YLeaf auth_port_number; //type: uint16
        YLeaf acct_port_number; //type: uint16
        YLeaf private_timeout; //type: uint32
        YLeaf ignore_accounting_port; //type: boolean
        YLeaf private_retransmit; //type: uint32
        YLeaf idle_time; //type: uint32
        YLeaf private_key; //type: string
        YLeaf username; //type: string
        YLeaf ignore_auth_port; //type: boolean

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::PrivateServers::PrivateServer


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle : public Entity
{
    public:
        ServerGroupThrottle();
        ~ServerGroupThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access; //type: uint32
        YLeaf accounting; //type: uint32
        YLeaf access_timeout; //type: uint32

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::ServerGroupThrottle


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance : public Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Method; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method> method;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Name; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name> name;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf least_outstanding; //type: int32
        YLeaf batch_size; //type: uint32
        YLeaf ignore_preferred_server; //type: int32

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::LoadBalance::Method::Name


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Request; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request
        class Reply; //type: Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply> reply;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request> request;
        
}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: AaaActionEnum
        YLeaf attribute_list_name; //type: string

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Request


class Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply : public Entity
{
    public:
        Reply();
        ~Reply();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf action; //type: AaaActionEnum
        YLeaf attribute_list_name; //type: string

}; // Aaa::ServerGroups::RadiusServerGroups::RadiusServerGroup::Authorization::Reply


class Aaa::ServerGroups::TacacsServerGroups : public Entity
{
    public:
        TacacsServerGroups();
        ~TacacsServerGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TacacsServerGroup; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup> > tacacs_server_group;
        
}; // Aaa::ServerGroups::TacacsServerGroups


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup : public Entity
{
    public:
        TacacsServerGroup();
        ~TacacsServerGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server_group_name; //type: string
        YLeaf vrf; //type: string
        class Servers; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers
        class PrivateServers; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers> private_servers;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers> servers;
        
}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers : public Entity
{
    public:
        Servers();
        ~Servers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server> > server;
        
}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ordering_index; //type: int32
        YLeaf ip_address; //type: string

}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::Servers::Server


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers : public Entity
{
    public:
        PrivateServers();
        ~PrivateServers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrivateServer; //type: Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer> > private_server;
        
}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers


class Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer : public Entity
{
    public:
        PrivateServer();
        ~PrivateServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ordering_index; //type: int32
        YLeaf ip_address; //type: string
        YLeaf port_number; //type: uint32
        YLeaf key; //type: string
        YLeaf timeout; //type: uint32

}; // Aaa::ServerGroups::TacacsServerGroups::TacacsServerGroup::PrivateServers::PrivateServer


class Aaa::Usernames : public Entity
{
    public:
        Usernames();
        ~Usernames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Username; //type: Aaa::Usernames::Username

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames::Username> > username;
        
}; // Aaa::Usernames


class Aaa::Usernames::Username : public Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ordering_index; //type: int32
        YLeaf name; //type: string
        YLeaf secret; //type: string
        YLeaf password; //type: string
        class UsergroupUnderUsernames; //type: Aaa::Usernames::Username::UsergroupUnderUsernames

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames::Username::UsergroupUnderUsernames> usergroup_under_usernames;
        
}; // Aaa::Usernames::Username


class Aaa::Usernames::Username::UsergroupUnderUsernames : public Entity
{
    public:
        UsergroupUnderUsernames();
        ~UsergroupUnderUsernames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UsergroupUnderUsername; //type: Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername> > usergroup_under_username;
        
}; // Aaa::Usernames::Username::UsergroupUnderUsernames


class Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername : public Entity
{
    public:
        UsergroupUnderUsername();
        ~UsergroupUnderUsername();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Aaa::Usernames::Username::UsergroupUnderUsernames::UsergroupUnderUsername


class Aaa::Taskgroups : public Entity
{
    public:
        Taskgroups();
        ~Taskgroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Taskgroup; //type: Aaa::Taskgroups::Taskgroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup> > taskgroup;
        
}; // Aaa::Taskgroups


class Aaa::Taskgroups::Taskgroup : public Entity
{
    public:
        Taskgroup();
        ~Taskgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        class TaskgroupUnderTaskgroups; //type: Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups
        class Tasks; //type: Aaa::Taskgroups::Taskgroup::Tasks

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups> taskgroup_under_taskgroups;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::Tasks> tasks;
        
}; // Aaa::Taskgroups::Taskgroup


class Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups : public Entity
{
    public:
        TaskgroupUnderTaskgroups();
        ~TaskgroupUnderTaskgroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TaskgroupUnderTaskgroup; //type: Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup> > taskgroup_under_taskgroup;
        
}; // Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups


class Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup : public Entity
{
    public:
        TaskgroupUnderTaskgroup();
        ~TaskgroupUnderTaskgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Aaa::Taskgroups::Taskgroup::TaskgroupUnderTaskgroups::TaskgroupUnderTaskgroup


class Aaa::Taskgroups::Taskgroup::Tasks : public Entity
{
    public:
        Tasks();
        ~Tasks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Task; //type: Aaa::Taskgroups::Taskgroup::Tasks::Task

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Taskgroups::Taskgroup::Tasks::Task> > task;
        
}; // Aaa::Taskgroups::Taskgroup::Tasks


class Aaa::Taskgroups::Taskgroup::Tasks::Task : public Entity
{
    public:
        Task();
        ~Task();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type; //type: AaaLocaldTaskClassEnum
        YLeaf task_id; //type: string

}; // Aaa::Taskgroups::Taskgroup::Tasks::Task


class Aaa::Usergroups : public Entity
{
    public:
        Usergroups();
        ~Usergroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Usergroup; //type: Aaa::Usergroups::Usergroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup> > usergroup;
        
}; // Aaa::Usergroups


class Aaa::Usergroups::Usergroup : public Entity
{
    public:
        Usergroup();
        ~Usergroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        class TaskgroupUnderUsergroups; //type: Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups
        class UsergroupUnderUsergroups; //type: Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups> taskgroup_under_usergroups;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups> usergroup_under_usergroups;
        
}; // Aaa::Usergroups::Usergroup


class Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups : public Entity
{
    public:
        TaskgroupUnderUsergroups();
        ~TaskgroupUnderUsergroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TaskgroupUnderUsergroup; //type: Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup> > taskgroup_under_usergroup;
        
}; // Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups


class Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup : public Entity
{
    public:
        TaskgroupUnderUsergroup();
        ~TaskgroupUnderUsergroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Aaa::Usergroups::Usergroup::TaskgroupUnderUsergroups::TaskgroupUnderUsergroup


class Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups : public Entity
{
    public:
        UsergroupUnderUsergroups();
        ~UsergroupUnderUsergroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class UsergroupUnderUsergroup; //type: Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup> > usergroup_under_usergroup;
        
}; // Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups


class Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup : public Entity
{
    public:
        UsergroupUnderUsergroup();
        ~UsergroupUnderUsergroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Aaa::Usergroups::Usergroup::UsergroupUnderUsergroups::UsergroupUnderUsergroup


class Aaa::Diameter : public Entity
{
    public:
        Diameter();
        ~Diameter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_interface; //type: string
        class Gy; //type: Aaa::Diameter::Gy
        class Origin; //type: Aaa::Diameter::Origin
        class Nas; //type: Aaa::Diameter::Nas
        class DiameterTls; //type: Aaa::Diameter::DiameterTls
        class Peers; //type: Aaa::Diameter::Peers
        class Diams; //type: Aaa::Diameter::Diams
        class Gx; //type: Aaa::Diameter::Gx
        class DiameterTimer; //type: Aaa::Diameter::DiameterTimer
        class Vendor; //type: Aaa::Diameter::Vendor

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::DiameterTimer> diameter_timer;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::DiameterTls> diameter_tls;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Diams> diams;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Gx> gx;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Gy> gy;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Nas> nas;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Origin> origin;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Peers> peers;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Vendor> vendor;
        
}; // Aaa::Diameter


class Aaa::Diameter::Gy : public Entity
{
    public:
        Gy();
        ~Gy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retransmit; //type: uint32
        YLeaf dest_host; //type: string
        YLeaf tx_timer; //type: uint32

}; // Aaa::Diameter::Gy


class Aaa::Diameter::Origin : public Entity
{
    public:
        Origin();
        ~Origin();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf realm; //type: string
        YLeaf host; //type: string

}; // Aaa::Diameter::Origin


class Aaa::Diameter::Nas : public Entity
{
    public:
        Nas();
        ~Nas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dest_host; //type: string

}; // Aaa::Diameter::Nas


class Aaa::Diameter::DiameterTls : public Entity
{
    public:
        DiameterTls();
        ~DiameterTls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trustpoint; //type: string

}; // Aaa::Diameter::DiameterTls


class Aaa::Diameter::Peers : public Entity
{
    public:
        Peers();
        ~Peers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Aaa::Diameter::Peers::Peer

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Peers::Peer> > peer;
        
}; // Aaa::Diameter::Peers


class Aaa::Diameter::Peers::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf peer_name; //type: string
        YLeaf host_destination; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf realm_destination; //type: string
        YLeaf tcp_transport; //type: uint32
        YLeaf source_interface; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf tls_transport; //type: uint32
        YLeaf vrf_ip; //type: string
        class PeerTimer; //type: Aaa::Diameter::Peers::Peer::PeerTimer
        class PeerType; //type: Aaa::Diameter::Peers::Peer::PeerType

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Peers::Peer::PeerTimer> peer_timer;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Peers::Peer::PeerType> peer_type;
        
}; // Aaa::Diameter::Peers::Peer


class Aaa::Diameter::Peers::Peer::PeerTimer : public Entity
{
    public:
        PeerTimer();
        ~PeerTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transaction; //type: uint32
        YLeaf connection; //type: uint32
        YLeaf watchdog; //type: uint32

}; // Aaa::Diameter::Peers::Peer::PeerTimer


class Aaa::Diameter::Peers::Peer::PeerType : public Entity
{
    public:
        PeerType();
        ~PeerType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf server; //type: boolean

}; // Aaa::Diameter::Peers::Peer::PeerType


class Aaa::Diameter::Diams : public Entity
{
    public:
        Diams();
        ~Diams();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Diam; //type: Aaa::Diameter::Diams::Diam

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Diams::Diam> > diam;
        
}; // Aaa::Diameter::Diams


class Aaa::Diameter::Diams::Diam : public Entity
{
    public:
        Diam();
        ~Diam();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf list_id; //type: uint32
        class DiamAttrDefs; //type: Aaa::Diameter::Diams::Diam::DiamAttrDefs

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Diams::Diam::DiamAttrDefs> diam_attr_defs;
        
}; // Aaa::Diameter::Diams::Diam


class Aaa::Diameter::Diams::Diam::DiamAttrDefs : public Entity
{
    public:
        DiamAttrDefs();
        ~DiamAttrDefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DiamAttrDef; //type: Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef> > diam_attr_def;
        
}; // Aaa::Diameter::Diams::Diam::DiamAttrDefs


class Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef : public Entity
{
    public:
        DiamAttrDef();
        ~DiamAttrDef();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vendor_id; //type: uint32
        YLeaf attribute_id; //type: uint32
        class DiamAttrValue; //type: Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue> diam_attr_value;
        
}; // Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef


class Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue : public Entity
{
    public:
        DiamAttrValue();
        ~DiamAttrValue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf type_string; //type: string
        YLeaf type_ipv4_address; //type: string
        YLeaf type_binary; //type: string
        YLeaf type_boolean; //type: uint32
        YLeaf type_enum; //type: uint32
        YLeaf type_grouped; //type: uint32
        YLeaf type_ulong; //type: uint32
        YLeaf type_identity; //type: string
        YLeaf data_type; //type: uint32
        YLeaf mandatory; //type: uint32

}; // Aaa::Diameter::Diams::Diam::DiamAttrDefs::DiamAttrDef::DiamAttrValue


class Aaa::Diameter::Gx : public Entity
{
    public:
        Gx();
        ~Gx();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retransmit; //type: uint32
        YLeaf dest_host; //type: string
        YLeaf tx_timer; //type: uint32

}; // Aaa::Diameter::Gx


class Aaa::Diameter::DiameterTimer : public Entity
{
    public:
        DiameterTimer();
        ~DiameterTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transaction; //type: uint32
        YLeaf connection; //type: uint32
        YLeaf watchdog; //type: uint32

}; // Aaa::Diameter::DiameterTimer


class Aaa::Diameter::Vendor : public Entity
{
    public:
        Vendor();
        ~Vendor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Supported; //type: Aaa::Diameter::Vendor::Supported

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Vendor::Supported> supported;
        
}; // Aaa::Diameter::Vendor


class Aaa::Diameter::Vendor::Supported : public Entity
{
    public:
        Supported();
        ~Supported();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco; //type: boolean
        YLeaf threegpp; //type: boolean
        YLeaf etsi; //type: boolean
        YLeaf vodafone; //type: boolean

}; // Aaa::Diameter::Vendor::Supported


class Aaa::Radius : public Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retransmit; //type: uint32
        YLeaf dead_time; //type: uint32
        YLeaf key; //type: string
        YLeaf timeout; //type: uint32
        YLeaf ignore_accounting_port; //type: boolean
        YLeaf idle_time; //type: uint32
        YLeaf username; //type: string
        YLeaf ignore_auth_port; //type: boolean
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

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Attributes> attributes;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DeadCriteria> dead_criteria;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Disallow> disallow;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization> dynamic_authorization;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Hosts> hosts;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions> load_balance_options;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute> radius_attribute;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::SourcePort> source_port;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Throttle> throttle;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vrfs> vrfs;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa> vsa;
        
}; // Aaa::Radius


class Aaa::Radius::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Aaa::Radius::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Hosts::Host> > host;
        
}; // Aaa::Radius::Hosts


class Aaa::Radius::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ordering_index; //type: int32
        YLeaf ip_address; //type: string
        YLeaf auth_port_number; //type: uint16
        YLeaf acct_port_number; //type: uint16
        YLeaf host_retransmit; //type: uint32
        YLeaf host_timeout; //type: uint32
        YLeaf host_key; //type: string
        YLeaf ignore_accounting_port; //type: boolean
        YLeaf idle_time; //type: uint32
        YLeaf username; //type: string
        YLeaf ignore_auth_port; //type: boolean

}; // Aaa::Radius::Hosts::Host


class Aaa::Radius::DeadCriteria : public Entity
{
    public:
        DeadCriteria();
        ~DeadCriteria();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tries; //type: uint32
        YLeaf time; //type: uint32

}; // Aaa::Radius::DeadCriteria


class Aaa::Radius::Disallow : public Entity
{
    public:
        Disallow();
        ~Disallow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf null_username; //type: int32

}; // Aaa::Radius::Disallow


class Aaa::Radius::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp; //type: one of uint32, enumeration

}; // Aaa::Radius::Ipv6


class Aaa::Radius::DynamicAuthorization : public Entity
{
    public:
        DynamicAuthorization();
        ~DynamicAuthorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ignore; //type: AaaSelectKeyEnum
        YLeaf port; //type: uint32
        YLeaf authentication_type; //type: AaaAuthenticationEnum
        YLeaf server_key; //type: string
        class Clients; //type: Aaa::Radius::DynamicAuthorization::Clients

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization::Clients> clients;
        
}; // Aaa::Radius::DynamicAuthorization


class Aaa::Radius::DynamicAuthorization::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: Aaa::Radius::DynamicAuthorization::Clients::Client
        class ClientVrfName; //type: Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization::Clients::Client> > client;
        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName> > client_vrf_name;
        
}; // Aaa::Radius::DynamicAuthorization::Clients


class Aaa::Radius::DynamicAuthorization::Clients::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf server_key; //type: string

}; // Aaa::Radius::DynamicAuthorization::Clients::Client


class Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName : public Entity
{
    public:
        ClientVrfName();
        ~ClientVrfName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf ip_address; //type: string
        YLeaf server_key; //type: string

}; // Aaa::Radius::DynamicAuthorization::Clients::ClientVrfName


class Aaa::Radius::LoadBalanceOptions : public Entity
{
    public:
        LoadBalanceOptions();
        ~LoadBalanceOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LoadBalanceMethod; //type: Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod> load_balance_method;
        
}; // Aaa::Radius::LoadBalanceOptions


class Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod : public Entity
{
    public:
        LoadBalanceMethod();
        ~LoadBalanceMethod();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BatchSize; //type: Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize> batch_size;
        
}; // Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod


class Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize : public Entity
{
    public:
        BatchSize();
        ~BatchSize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf batch_size; //type: uint32
        YLeaf ignore_preferred_server; //type: int32

}; // Aaa::Radius::LoadBalanceOptions::LoadBalanceMethod::BatchSize


class Aaa::Radius::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Aaa::Radius::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vrfs::Vrf> > vrf;
        
}; // Aaa::Radius::Vrfs


class Aaa::Radius::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf source_interface; //type: string

}; // Aaa::Radius::Vrfs::Vrf


class Aaa::Radius::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access; //type: uint32
        YLeaf accounting; //type: uint32
        YLeaf access_timeout; //type: uint32

}; // Aaa::Radius::Throttle


class Aaa::Radius::Vsa : public Entity
{
    public:
        Vsa();
        ~Vsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Attribute; //type: Aaa::Radius::Vsa::Attribute

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa::Attribute> attribute;
        
}; // Aaa::Radius::Vsa


class Aaa::Radius::Vsa::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ignore; //type: Aaa::Radius::Vsa::Attribute::Ignore

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Vsa::Attribute::Ignore> ignore;
        
}; // Aaa::Radius::Vsa::Attribute


class Aaa::Radius::Vsa::Attribute::Ignore : public Entity
{
    public:
        Ignore();
        ~Ignore();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unknown; //type: empty

}; // Aaa::Radius::Vsa::Attribute::Ignore


class Aaa::Radius::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp; //type: one of uint32, enumeration

}; // Aaa::Radius::Ipv4


class Aaa::Radius::RadiusAttribute : public Entity
{
    public:
        RadiusAttribute();
        ~RadiusAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class FilterId11; //type: Aaa::Radius::RadiusAttribute::FilterId11
        class AcctMultiSessionId; //type: Aaa::Radius::RadiusAttribute::AcctMultiSessionId
        class AcctSessionId; //type: Aaa::Radius::RadiusAttribute::AcctSessionId

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctMultiSessionId> acct_multi_session_id;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctSessionId> acct_session_id;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::FilterId11> filter_id_11;
        
}; // Aaa::Radius::RadiusAttribute


class Aaa::Radius::RadiusAttribute::FilterId11 : public Entity
{
    public:
        FilterId11();
        ~FilterId11();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Defaults; //type: Aaa::Radius::RadiusAttribute::FilterId11::Defaults

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::FilterId11::Defaults> defaults;
        
}; // Aaa::Radius::RadiusAttribute::FilterId11


class Aaa::Radius::RadiusAttribute::FilterId11::Defaults : public Entity
{
    public:
        Defaults();
        ~Defaults();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf direction; //type: AaaDirectionEnum

}; // Aaa::Radius::RadiusAttribute::FilterId11::Defaults


class Aaa::Radius::RadiusAttribute::AcctMultiSessionId : public Entity
{
    public:
        AcctMultiSessionId();
        ~AcctMultiSessionId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IncludeParentSessionId; //type: Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId> include_parent_session_id;
        
}; // Aaa::Radius::RadiusAttribute::AcctMultiSessionId


class Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId : public Entity
{
    public:
        IncludeParentSessionId();
        ~IncludeParentSessionId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf config; //type: AaaConfigEnum

}; // Aaa::Radius::RadiusAttribute::AcctMultiSessionId::IncludeParentSessionId


class Aaa::Radius::RadiusAttribute::AcctSessionId : public Entity
{
    public:
        AcctSessionId();
        ~AcctSessionId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrependNasPortId; //type: Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId> prepend_nas_port_id;
        
}; // Aaa::Radius::RadiusAttribute::AcctSessionId


class Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId : public Entity
{
    public:
        PrependNasPortId();
        ~PrependNasPortId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf config; //type: AaaConfigEnum

}; // Aaa::Radius::RadiusAttribute::AcctSessionId::PrependNasPortId


class Aaa::Radius::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Attribute; //type: Aaa::Radius::Attributes::Attribute

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Radius::Attributes::Attribute> > attribute;
        
}; // Aaa::Radius::Attributes


class Aaa::Radius::Attributes::Attribute : public Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attribute_list_name; //type: string
        YLeaf attribute; //type: string

}; // Aaa::Radius::Attributes::Attribute


class Aaa::Radius::SourcePort : public Entity
{
    public:
        SourcePort();
        ~SourcePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended; //type: empty

}; // Aaa::Radius::SourcePort


class Aaa::Tacacs : public Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: string
        YLeaf timeout; //type: uint32
        YLeaf single_connect; //type: boolean
        class Ipv6; //type: Aaa::Tacacs::Ipv6
        class Hosts; //type: Aaa::Tacacs::Hosts
        class Ipv4; //type: Aaa::Tacacs::Ipv4
        class Vrfs; //type: Aaa::Tacacs::Vrfs

        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Hosts> hosts;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Vrfs> vrfs;
        
}; // Aaa::Tacacs


class Aaa::Tacacs::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp; //type: one of uint32, enumeration

}; // Aaa::Tacacs::Ipv6


class Aaa::Tacacs::Hosts : public Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Aaa::Tacacs::Hosts::Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Hosts::Host> > host;
        
}; // Aaa::Tacacs::Hosts


class Aaa::Tacacs::Hosts::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ordering_index; //type: int32
        YLeaf ip_address; //type: string
        YLeaf port_number; //type: uint32
        YLeaf key; //type: string
        YLeaf timeout; //type: uint32
        YLeaf single_connect; //type: boolean

}; // Aaa::Tacacs::Hosts::Host


class Aaa::Tacacs::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp; //type: one of uint32, enumeration

}; // Aaa::Tacacs::Ipv4


class Aaa::Tacacs::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: Aaa::Tacacs::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_aaa_lib_cfg::Aaa::Tacacs::Vrfs::Vrf> > vrf;
        
}; // Aaa::Tacacs::Vrfs


class Aaa::Tacacs::Vrfs::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf source_interface; //type: string

}; // Aaa::Tacacs::Vrfs::Vrf


}
}

#endif /* _CISCO_IOS_XR_AAA_LIB_CFG_ */

