#ifndef _CISCO_IOS_XR_ES_ACL_OPER_
#define _CISCO_IOS_XR_ES_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_es_acl_oper {

class EsAcl : public ydk::Entity
{
    public:
        EsAcl();
        ~EsAcl();

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

        class Active; //type: EsAcl::Active

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active> active;
        
}; // EsAcl


class EsAcl::Active : public ydk::Entity
{
    public:
        Active();
        ~Active();

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

        class Oor; //type: EsAcl::Active::Oor
        class List; //type: EsAcl::Active::List
        class OorAcls; //type: EsAcl::Active::OorAcls
        class Usages; //type: EsAcl::Active::Usages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor> oor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List> list;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active::OorAcls> oor_acls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Usages> usages;
        
}; // EsAcl::Active


class EsAcl::Active::Oor : public ydk::Entity
{
    public:
        Oor();
        ~Oor();

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

        class AclSummary; //type: EsAcl::Active::Oor::AclSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor::AclSummary> acl_summary;
        
}; // EsAcl::Active::Oor


class EsAcl::Active::Oor::AclSummary : public ydk::Entity
{
    public:
        AclSummary();
        ~AclSummary();

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

        class Details; //type: EsAcl::Active::Oor::AclSummary::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active::Oor::AclSummary::Details> details;
        
}; // EsAcl::Active::Oor::AclSummary


class EsAcl::Active::Oor::AclSummary::Details : public ydk::Entity
{
    public:
        Details();
        ~Details();

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

        ydk::YLeaf current_configured_ac_ls; //type: uint32
        ydk::YLeaf current_configured_ac_es; //type: uint32
        ydk::YLeaf maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf maximum_configurable_ac_es; //type: uint32

}; // EsAcl::Active::Oor::AclSummary::Details


class EsAcl::Active::List : public ydk::Entity
{
    public:
        List();
        ~List();

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

        class Acls; //type: EsAcl::Active::List::Acls

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls> acls;
        
}; // EsAcl::Active::List


class EsAcl::Active::List::Acls : public ydk::Entity
{
    public:
        Acls();
        ~Acls();

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

        class Acl; //type: EsAcl::Active::List::Acls::Acl

        ydk::YList acl;
        
}; // EsAcl::Active::List::Acls


class EsAcl::Active::List::Acls::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

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
        class AclSequenceNumbers; //type: EsAcl::Active::List::Acls::Acl::AclSequenceNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_es_acl_oper::EsAcl::Active::List::Acls::Acl::AclSequenceNumbers> acl_sequence_numbers;
        
}; // EsAcl::Active::List::Acls::Acl


class EsAcl::Active::List::Acls::Acl::AclSequenceNumbers : public ydk::Entity
{
    public:
        AclSequenceNumbers();
        ~AclSequenceNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AclSequenceNumber; //type: EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber

        ydk::YList acl_sequence_number;
        
}; // EsAcl::Active::List::Acls::Acl::AclSequenceNumbers


class EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber : public ydk::Entity
{
    public:
        AclSequenceNumber();
        ~AclSequenceNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf ace_type; //type: AclAce1_
        ydk::YLeaf ace_sequence_number; //type: uint32
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf grant; //type: AclAction
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wild_card_bits; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wild_card_bits; //type: string
        ydk::YLeaf ether_type_number; //type: uint16
        ydk::YLeaf vlan1; //type: uint16
        ydk::YLeaf vlan2; //type: uint16
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf dei; //type: uint8
        ydk::YLeaf inner_header_vlan1; //type: uint16
        ydk::YLeaf inner_header_vlan2; //type: uint16
        ydk::YLeaf inner_header_cos; //type: uint8
        ydk::YLeaf inner_header_dei; //type: uint8
        ydk::YLeaf capture; //type: boolean
        ydk::YLeaf log_option; //type: uint8
        ydk::YLeaf remark; //type: string
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf sequence_string; //type: string

}; // EsAcl::Active::List::Acls::Acl::AclSequenceNumbers::AclSequenceNumber


class EsAcl::Active::OorAcls : public ydk::Entity
{
    public:
        OorAcls();
        ~OorAcls();

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

        class OorAcl; //type: EsAcl::Active::OorAcls::OorAcl

        ydk::YList oor_acl;
        
}; // EsAcl::Active::OorAcls


class EsAcl::Active::OorAcls::OorAcl : public ydk::Entity
{
    public:
        OorAcl();
        ~OorAcl();

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
        ydk::YLeaf current_configured_ac_ls; //type: uint32
        ydk::YLeaf current_configured_ac_es; //type: uint32
        ydk::YLeaf maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf maximum_configurable_ac_es; //type: uint32

}; // EsAcl::Active::OorAcls::OorAcl


class EsAcl::Active::Usages : public ydk::Entity
{
    public:
        Usages();
        ~Usages();

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

        class Usage; //type: EsAcl::Active::Usages::Usage

        ydk::YList usage;
        
}; // EsAcl::Active::Usages


class EsAcl::Active::Usages::Usage : public ydk::Entity
{
    public:
        Usage();
        ~Usage();

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

        ydk::YLeaf location; //type: string
        ydk::YLeaf application_id; //type: AclUsageAppIdEnum
        ydk::YLeaf name; //type: string
        ydk::YLeaf usage_details; //type: string

}; // EsAcl::Active::Usages::Usage

class AclAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf encrypt;
        static const ydk::Enum::YLeaf bypass;
        static const ydk::Enum::YLeaf fallthrough;
        static const ydk::Enum::YLeaf invalid;

};

class AclAce1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf remark;
        static const ydk::Enum::YLeaf abf;

};

class AclAce1_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf remark;
        static const ydk::Enum::YLeaf abf;

};


}
}

#endif /* _CISCO_IOS_XR_ES_ACL_OPER_ */

