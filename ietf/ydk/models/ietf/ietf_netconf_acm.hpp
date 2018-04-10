#ifndef _IETF_NETCONF_ACM_
#define _IETF_NETCONF_ACM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
namespace ietf_netconf_acm {

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
        ydk::YLeaf read_default; //type: ActionType
        ydk::YLeaf write_default; //type: ActionType
        ydk::YLeaf exec_default; //type: ActionType
        ydk::YLeaf enable_external_groups; //type: boolean
        ydk::YLeaf denied_operations; //type: uint32
        ydk::YLeaf denied_data_writes; //type: uint32
        ydk::YLeaf denied_notifications; //type: uint32
        class Groups; //type: Nacm::Groups
        class RuleList; //type: Nacm::RuleList

        std::shared_ptr<ietf::ietf_netconf_acm::Nacm::Groups> groups;
        std::vector<std::shared_ptr<ietf::ietf_netconf_acm::Nacm::RuleList> > rule_list;
        
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

        std::vector<std::shared_ptr<ietf::ietf_netconf_acm::Nacm::Groups::Group> > group;
        
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

        ydk::YLeaf name; //type: string
        ydk::YLeafList user_name; //type: list of  string

}; // Nacm::Groups::Group


class Nacm::RuleList : public ydk::Entity
{
    public:
        RuleList();
        ~RuleList();

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
        ydk::YLeafList group; //type: list of  string
        class Rule; //type: Nacm::RuleList::Rule

        std::vector<std::shared_ptr<ietf::ietf_netconf_acm::Nacm::RuleList::Rule> > rule;
        
}; // Nacm::RuleList


class Nacm::RuleList::Rule : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf module_name; //type: string
        ydk::YLeaf rpc_name; //type: string
        ydk::YLeaf notification_name; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf access_operations; //type: one of bits, string
        ydk::YLeaf action; //type: ActionType
        ydk::YLeaf comment; //type: string

}; // Nacm::RuleList::Rule

class ActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};


}
}

#endif /* _IETF_NETCONF_ACM_ */

