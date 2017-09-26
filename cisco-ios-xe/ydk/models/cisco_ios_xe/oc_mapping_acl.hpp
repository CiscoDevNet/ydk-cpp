#ifndef _OC_MAPPING_ACL_
#define _OC_MAPPING_ACL_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace oc_mapping_acl {

class AclMapping : public ydk::Entity
{
    public:
        AclMapping();
        ~AclMapping();

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

        class AclSets; //type: AclMapping::AclSets
        class Interfaces; //type: AclMapping::Interfaces

        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::AclSets> acl_sets;
        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces> interfaces;
        
}; // AclMapping


class AclMapping::AclSets : public ydk::Entity
{
    public:
        AclSets();
        ~AclSets();

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

        class AclSet; //type: AclMapping::AclSets::AclSet

        std::vector<std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::AclSets::AclSet> > acl_set;
        
}; // AclMapping::AclSets


class AclMapping::AclSets::AclSet : public ydk::Entity
{
    public:
        AclSet();
        ~AclSet();

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
        class Config; //type: AclMapping::AclSets::AclSet::Config

        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::AclSets::AclSet::Config> config;
        
}; // AclMapping::AclSets::AclSet


class AclMapping::AclSets::AclSet::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

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
        ydk::YLeaf acl_type; //type: IpVersion
        ydk::YLeaf description; //type: string
        class AclEntries; //type: AclMapping::AclSets::AclSet::Config::AclEntries

        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::AclSets::AclSet::Config::AclEntries> acl_entries;
        
}; // AclMapping::AclSets::AclSet::Config


class AclMapping::AclSets::AclSet::Config::AclEntries : public ydk::Entity
{
    public:
        AclEntries();
        ~AclEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AclEntry; //type: AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry

        std::vector<std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry> > acl_entry;
        
}; // AclMapping::AclSets::AclSet::Config::AclEntries


class AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry : public ydk::Entity
{
    public:
        AclEntry();
        ~AclEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_id; //type: uint32
        ydk::YLeaf ip_version; //type: IpVersion

}; // AclMapping::AclSets::AclSet::Config::AclEntries::AclEntry


class AclMapping::Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

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

        class Interface; //type: AclMapping::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface> > interface;
        
}; // AclMapping::Interfaces


class AclMapping::Interfaces::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf id; //type: string
        class Config; //type: AclMapping::Interfaces::Interface::Config
        class InterfaceRef; //type: AclMapping::Interfaces::Interface::InterfaceRef
        class IngressAclSets; //type: AclMapping::Interfaces::Interface::IngressAclSets
        class EgressAclSets; //type: AclMapping::Interfaces::Interface::EgressAclSets

        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::Config> config;
        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::EgressAclSets> egress_acl_sets;
        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::IngressAclSets> ingress_acl_sets;
        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::InterfaceRef> interface_ref;
        
}; // AclMapping::Interfaces::Interface


class AclMapping::Interfaces::Interface::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string

}; // AclMapping::Interfaces::Interface::Config


class AclMapping::Interfaces::Interface::EgressAclSets : public ydk::Entity
{
    public:
        EgressAclSets();
        ~EgressAclSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EgressAclSet; //type: AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet

        std::vector<std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet> > egress_acl_set;
        
}; // AclMapping::Interfaces::Interface::EgressAclSets


class AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet : public ydk::Entity
{
    public:
        EgressAclSet();
        ~EgressAclSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_name; //type: string
        class Config; //type: AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config
        class AclEntries; //type: AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries

        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries> acl_entries;
        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config> config;
        
}; // AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet


class AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries : public ydk::Entity
{
    public:
        AclEntries();
        ~AclEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AclEntry; //type: AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry

        std::vector<std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry> > acl_entry;
        
}; // AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries


class AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry : public ydk::Entity
{
    public:
        AclEntry();
        ~AclEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_id; //type: string

}; // AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry


class AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_name; //type: string

}; // AclMapping::Interfaces::Interface::EgressAclSets::EgressAclSet::Config


class AclMapping::Interfaces::Interface::IngressAclSets : public ydk::Entity
{
    public:
        IngressAclSets();
        ~IngressAclSets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IngressAclSet; //type: AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet

        std::vector<std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet> > ingress_acl_set;
        
}; // AclMapping::Interfaces::Interface::IngressAclSets


class AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet : public ydk::Entity
{
    public:
        IngressAclSet();
        ~IngressAclSet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_name; //type: string
        class Config; //type: AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config
        class State; //type: AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State
        class AclEntries; //type: AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries

        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries> acl_entries;
        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config> config;
        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State> state;
        
}; // AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet


class AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries : public ydk::Entity
{
    public:
        AclEntries();
        ~AclEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AclEntry; //type: AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry

        std::vector<std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry> > acl_entry;
        
}; // AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries


class AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry : public ydk::Entity
{
    public:
        AclEntry();
        ~AclEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_id; //type: string

}; // AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry


class AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_name; //type: string

}; // AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::Config


class AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_name; //type: string

}; // AclMapping::Interfaces::Interface::IngressAclSets::IngressAclSet::State


class AclMapping::Interfaces::Interface::InterfaceRef : public ydk::Entity
{
    public:
        InterfaceRef();
        ~InterfaceRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: AclMapping::Interfaces::Interface::InterfaceRef::Config
        class State; //type: AclMapping::Interfaces::Interface::InterfaceRef::State

        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::InterfaceRef::Config> config;
        std::shared_ptr<cisco_ios_xe::oc_mapping_acl::AclMapping::Interfaces::Interface::InterfaceRef::State> state;
        
}; // AclMapping::Interfaces::Interface::InterfaceRef


class AclMapping::Interfaces::Interface::InterfaceRef::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // AclMapping::Interfaces::Interface::InterfaceRef::Config


class AclMapping::Interfaces::Interface::InterfaceRef::State : public ydk::Entity
{
    public:
        State();
        ~State();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::name)
        ydk::YLeaf interface;
        //type: leafref (refers to openconfig::openconfig_interfaces::Interfaces::Interface::Subinterfaces::Subinterface::index_)
        ydk::YLeaf subinterface;

}; // AclMapping::Interfaces::Interface::InterfaceRef::State


}
}

#endif /* _OC_MAPPING_ACL_ */

