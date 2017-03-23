#ifndef _CISCO_IOS_XR_ES_ACL_OPER_
#define _CISCO_IOS_XR_ES_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_es_acl_oper {

class EsAcl : public Entity
{
    public:
        EsAcl();
        ~EsAcl();

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



        class Active; //type: EsAcl::Active

        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active> active;


}; // EsAcl


class EsAcl::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Oor; //type: EsAcl::Active::Oor
        class List; //type: EsAcl::Active::List
        class OorAcls; //type: EsAcl::Active::OorAcls
        class Usages; //type: EsAcl::Active::Usages

        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List> list;
        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor> oor;
        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::OorAcls> oor_acls;
        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Usages> usages;


}; // EsAcl::Active


class EsAcl::Active::Oor : public Entity
{
    public:
        Oor();
        ~Oor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AclSummary; //type: EsAcl::Active::Oor::AclSummary

        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor::AclSummary> acl_summary;


}; // EsAcl::Active::Oor


class EsAcl::Active::Oor::AclSummary : public Entity
{
    public:
        AclSummary();
        ~AclSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Details; //type: EsAcl::Active::Oor::AclSummary::Details

        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor::AclSummary::Details> details;


}; // EsAcl::Active::Oor::AclSummary


class EsAcl::Active::Oor::AclSummary::Details : public Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf current_configured_ac_ls; //type: uint32
        YLeaf current_configured_ac_es; //type: uint32
        YLeaf maximum_configurable_ac_ls; //type: uint32
        YLeaf maximum_configurable_ac_es; //type: uint32



}; // EsAcl::Active::Oor::AclSummary::Details


class EsAcl::Active::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Acls; //type: EsAcl::Active::List::Acls

        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls> acls;


}; // EsAcl::Active::List


class EsAcl::Active::List::Acls : public Entity
{
    public:
        Acls();
        ~Acls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Acl; //type: EsAcl::Active::List::Acls::Acl

        std::vector<std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls::Acl> > acl;


}; // EsAcl::Active::List::Acls


class EsAcl::Active::List::Acls::Acl : public Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class AclSequenceNumbers; //type: EsAcl::Active::List::Acls::Acl::AclSequenceNumbers

        std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls::Acl::AclSequenceNumbers> acl_sequence_numbers;


}; // EsAcl::Active::List::Acls::Acl


class EsAcl::Active::List::Acls::Acl::AclSequenceNumbers : public Entity
{
    public:
        AclSequenceNumbers();
        ~AclSequenceNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AclSequenceNumber; //type: EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber

        std::vector<std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber> > acl_sequence_number;


}; // EsAcl::Active::List::Acls::Acl::AclSequenceNumbers


class EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber : public Entity
{
    public:
        AclSequenceNumber();
        ~AclSequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number; //type: uint32
        YLeaf ace_type; //type: AclAce1Enum
        YLeaf ace_sequence_number; //type: uint32
        YLeaf hits; //type: uint64
        YLeaf grant; //type: AclActionEnum
        YLeaf source_address; //type: string
        YLeaf source_wild_card_bits; //type: string
        YLeaf destination_address; //type: string
        YLeaf destination_wild_card_bits; //type: string
        YLeaf ether_type_number; //type: uint16
        YLeaf vlan1; //type: uint16
        YLeaf vlan2; //type: uint16
        YLeaf cos; //type: uint8
        YLeaf dei; //type: uint8
        YLeaf inner_header_vlan1; //type: uint16
        YLeaf inner_header_vlan2; //type: uint16
        YLeaf inner_header_cos; //type: uint8
        YLeaf inner_header_dei; //type: uint8
        YLeaf capture; //type: boolean
        YLeaf log_option; //type: uint8
        YLeaf remark; //type: string
        YLeaf acl_name; //type: string
        YLeaf sequence_string; //type: string



}; // EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber


class EsAcl::Active::OorAcls : public Entity
{
    public:
        OorAcls();
        ~OorAcls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OorAcl; //type: EsAcl::Active::OorAcls::OorAcl

        std::vector<std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::OorAcls::OorAcl> > oor_acl;


}; // EsAcl::Active::OorAcls


class EsAcl::Active::OorAcls::OorAcl : public Entity
{
    public:
        OorAcl();
        ~OorAcl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf current_configured_ac_ls; //type: uint32
        YLeaf current_configured_ac_es; //type: uint32
        YLeaf maximum_configurable_ac_ls; //type: uint32
        YLeaf maximum_configurable_ac_es; //type: uint32



}; // EsAcl::Active::OorAcls::OorAcl


class EsAcl::Active::Usages : public Entity
{
    public:
        Usages();
        ~Usages();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Usage; //type: EsAcl::Active::Usages::Usage

        std::vector<std::shared_ptr<Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Usages::Usage> > usage;


}; // EsAcl::Active::Usages


class EsAcl::Active::Usages::Usage : public Entity
{
    public:
        Usage();
        ~Usage();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf location; //type: string
        YLeaf application_id; //type: AclUsageAppIdEnumEnum
        YLeaf name; //type: string
        YLeaf usage_details; //type: string



}; // EsAcl::Active::Usages::Usage

class AclActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;
        static const Enum::YLeaf encrypt;
        static const Enum::YLeaf bypass;
        static const Enum::YLeaf fallthrough;
        static const Enum::YLeaf invalid;

};

class AclAce1Enum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf remark;
        static const Enum::YLeaf abf;

};


}
}

#endif /* _CISCO_IOS_XR_ES_ACL_OPER_ */

