#ifndef _CISCO_IOS_XR_AAA_NACM_CFG_
#define _CISCO_IOS_XR_AAA_NACM_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_nacm_cfg {

class Nacm : public ydk::Entity
{
    public:
        Nacm();
        ~Nacm();

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

        ydk::YLeaf enable_nacm; //type: boolean
        ydk::YLeaf write_default; //type: NacmAction
        ydk::YLeaf exec_default; //type: NacmAction
        ydk::YLeaf enable_external_groups; //type: boolean
        ydk::YLeaf read_default; //type: NacmAction
        class Groups; //type: Nacm::Groups
        class RulelistClasses; //type: Nacm::RulelistClasses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_nacm_cfg::Nacm::Groups> groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_nacm_cfg::Nacm::RulelistClasses> rulelist_classes;
        
}; // Nacm


class Nacm::Groups : public ydk::Entity
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

        class Group; //type: Nacm::Groups::Group

        ydk::YList group;
        
}; // Nacm::Groups


class Nacm::Groups::Group : public ydk::Entity
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

        ydk::YLeaf group_name; //type: string
        ydk::YLeafList user_name; //type: list of  string

}; // Nacm::Groups::Group


class Nacm::RulelistClasses : public ydk::Entity
{
    public:
        RulelistClasses();
        ~RulelistClasses();

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

        class RulelistClass; //type: Nacm::RulelistClasses::RulelistClass

        ydk::YList rulelist_class;
        
}; // Nacm::RulelistClasses


class Nacm::RulelistClasses::RulelistClass : public ydk::Entity
{
    public:
        RulelistClass();
        ~RulelistClass();

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

        ydk::YLeaf ordering_index; //type: string
        ydk::YLeaf rulelist_name; //type: string
        class GroupNames; //type: Nacm::RulelistClasses::RulelistClass::GroupNames
        class Rules; //type: Nacm::RulelistClasses::RulelistClass::Rules

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_nacm_cfg::Nacm::RulelistClasses::RulelistClass::GroupNames> group_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_nacm_cfg::Nacm::RulelistClasses::RulelistClass::Rules> rules;
        
}; // Nacm::RulelistClasses::RulelistClass


class Nacm::RulelistClasses::RulelistClass::GroupNames : public ydk::Entity
{
    public:
        GroupNames();
        ~GroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList group_name; //type: list of  string

}; // Nacm::RulelistClasses::RulelistClass::GroupNames


class Nacm::RulelistClasses::RulelistClass::Rules : public ydk::Entity
{
    public:
        Rules();
        ~Rules();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rule; //type: Nacm::RulelistClasses::RulelistClass::Rules::Rule

        ydk::YList rule;
        
}; // Nacm::RulelistClasses::RulelistClass::Rules


class Nacm::RulelistClasses::RulelistClass::Rules::Rule : public ydk::Entity
{
    public:
        Rule();
        ~Rule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ordering_index; //type: string
        ydk::YLeaf rule_name; //type: string
        ydk::YLeaf module_name; //type: string
        ydk::YLeaf action; //type: NacmAction
        ydk::YLeaf comment; //type: string
        class RuleType; //type: Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType
        class AccessOperations; //type: Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_nacm_cfg::Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType> rule_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_nacm_cfg::Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations> access_operations;
        
}; // Nacm::RulelistClasses::RulelistClass::Rules::Rule


class Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType : public ydk::Entity
{
    public:
        RuleType();
        ~RuleType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: NacmRule
        ydk::YLeaf value_; //type: string

}; // Nacm::RulelistClasses::RulelistClass::Rules::Rule::RuleType


class Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations : public ydk::Entity
{
    public:
        AccessOperations();
        ~AccessOperations();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf create; //type: uint32
        ydk::YLeaf read; //type: uint32
        ydk::YLeaf update; //type: uint32
        ydk::YLeaf delete_; //type: uint32
        ydk::YLeaf exec; //type: uint32
        ydk::YLeaf all; //type: uint32

}; // Nacm::RulelistClasses::RulelistClass::Rules::Rule::AccessOperations

class NacmAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};

class NacmRule : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protocol_operation;
        static const ydk::Enum::YLeaf data_node;
        static const ydk::Enum::YLeaf notification;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_NACM_CFG_ */

