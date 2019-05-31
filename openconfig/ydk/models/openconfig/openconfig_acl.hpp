#ifndef _OPENCONFIG_ACL_
#define _OPENCONFIG_ACL_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace openconfig {
namespace openconfig_acl {

class ACLTYPE : public virtual ydk::Identity
{
    public:
        ACLTYPE();
        ~ACLTYPE();


}; // ACLTYPE

class FORWARDINGACTION : public virtual ydk::Identity
{
    public:
        FORWARDINGACTION();
        ~FORWARDINGACTION();


}; // FORWARDINGACTION

class LOGACTION : public virtual ydk::Identity
{
    public:
        LOGACTION();
        ~LOGACTION();


}; // LOGACTION

class ACLCOUNTERCAPABILITY : public virtual ydk::Identity
{
    public:
        ACLCOUNTERCAPABILITY();
        ~ACLCOUNTERCAPABILITY();


}; // ACLCOUNTERCAPABILITY

class Acl : public ydk::Entity
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
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Config; //type: Acl::Config
        class State; //type: Acl::State
        class AclSets; //type: Acl::AclSets
        class Interfaces; //type: Acl::Interfaces

        std::shared_ptr<openconfig::openconfig_acl::Acl::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::State> state;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets> acl_sets;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces> interfaces;
        
}; // Acl


class Acl::Config : public ydk::Entity
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
        std::string get_absolute_path() const override;


}; // Acl::Config


class Acl::State : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf counter_capability; //type: ACLCOUNTERCAPABILITY

}; // Acl::State


class Acl::AclSets : public ydk::Entity
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

        class AclSet; //type: Acl::AclSets::AclSet

        ydk::YList acl_set;
        
}; // Acl::AclSets


class Acl::AclSets::AclSet : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_acl::Acl::AclSets::AclSet::Config::name)
        ydk::YLeaf name;
        ydk::YLeaf type; //type: ACLTYPE
        class Config; //type: Acl::AclSets::AclSet::Config
        class State; //type: Acl::AclSets::AclSet::State
        class AclEntries; //type: Acl::AclSets::AclSet::AclEntries

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::State> state;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries> acl_entries;
        
}; // Acl::AclSets::AclSet


class Acl::AclSets::AclSet::Config : public ydk::Entity
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
        ydk::YLeaf type; //type: ACLTYPE
        ydk::YLeaf description; //type: string

}; // Acl::AclSets::AclSet::Config


class Acl::AclSets::AclSet::State : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: ACLTYPE
        ydk::YLeaf description; //type: string

}; // Acl::AclSets::AclSet::State


class Acl::AclSets::AclSet::AclEntries : public ydk::Entity
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

        class AclEntry; //type: Acl::AclSets::AclSet::AclEntries::AclEntry

        ydk::YList acl_entry;
        
}; // Acl::AclSets::AclSet::AclEntries


class Acl::AclSets::AclSet::AclEntries::AclEntry : public ydk::Entity
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

        //type: uint32 (refers to openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Config::sequence_id)
        ydk::YLeaf sequence_id;
        class Config; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Config
        class State; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::State
        class L2; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::L2
        class Ipv4; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4
        class Ipv6; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6
        class Transport; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Transport
        class InputInterface; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface
        class Actions; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Actions

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::State> state;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::L2> l2;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4> ipv4;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6> ipv6;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Transport> transport;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface> input_interface;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Actions> actions;
        
}; // Acl::AclSets::AclSet::AclEntries::AclEntry


class Acl::AclSets::AclSet::AclEntries::AclEntry::Config : public ydk::Entity
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

        ydk::YLeaf sequence_id; //type: uint32
        ydk::YLeaf description; //type: string

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Config


class Acl::AclSets::AclSet::AclEntries::AclEntry::State : public ydk::Entity
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

        ydk::YLeaf sequence_id; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf matched_packets; //type: uint64
        ydk::YLeaf matched_octets; //type: uint64

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::State


class Acl::AclSets::AclSet::AclEntries::AclEntry::L2 : public ydk::Entity
{
    public:
        L2();
        ~L2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config
        class State; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State> state;
        
}; // Acl::AclSets::AclSet::AclEntries::AclEntry::L2


class Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config : public ydk::Entity
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

        ydk::YLeaf source_mac; //type: string
        ydk::YLeaf source_mac_mask; //type: string
        ydk::YLeaf destination_mac; //type: string
        ydk::YLeaf destination_mac_mask; //type: string
        ydk::YLeaf ethertype; //type: one of uint16, identityref

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::L2::Config


class Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State : public ydk::Entity
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

        ydk::YLeaf source_mac; //type: string
        ydk::YLeaf source_mac_mask; //type: string
        ydk::YLeaf destination_mac; //type: string
        ydk::YLeaf destination_mac_mask; //type: string
        ydk::YLeaf ethertype; //type: one of uint16, identityref

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::L2::State


class Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4 : public ydk::Entity
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

        class Config; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config
        class State; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State> state;
        
}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4


class Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf protocol; //type: one of uint8, identityref
        ydk::YLeaf hop_limit; //type: uint8

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::Config


class Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf protocol; //type: one of uint8, identityref
        ydk::YLeaf hop_limit; //type: uint8

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv4::State


class Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6 : public ydk::Entity
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

        class Config; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config
        class State; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State> state;
        
}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6


class Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_flow_label; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_flow_label; //type: uint32
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf protocol; //type: one of uint8, identityref
        ydk::YLeaf hop_limit; //type: uint8

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::Config


class Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State : public ydk::Entity
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

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_flow_label; //type: uint32
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_flow_label; //type: uint32
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf protocol; //type: one of uint8, identityref
        ydk::YLeaf hop_limit; //type: uint8

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Ipv6::State


class Acl::AclSets::AclSet::AclEntries::AclEntry::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config
        class State; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State> state;
        
}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Transport


class Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config : public ydk::Entity
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

        ydk::YLeaf source_port; //type: one of uint16, string, enumeration
        ydk::YLeaf destination_port; //type: one of uint16, string, enumeration
        ydk::YLeafList tcp_flags; //type: list of  TCPFLAGS

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::Config


class Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State : public ydk::Entity
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

        ydk::YLeaf source_port; //type: one of uint16, string, enumeration
        ydk::YLeaf destination_port; //type: one of uint16, string, enumeration
        ydk::YLeafList tcp_flags; //type: list of  TCPFLAGS

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Transport::State


class Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface : public ydk::Entity
{
    public:
        InputInterface();
        ~InputInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config
        class State; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State
        class InterfaceRef; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State> state;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef> interface_ref;
        
}; // Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface


class Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config : public ydk::Entity
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


}; // Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::Config


class Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State : public ydk::Entity
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


}; // Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::State


class Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef : public ydk::Entity
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

        class Config; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config
        class State; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State> state;
        
}; // Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef


class Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config : public ydk::Entity
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

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::Config


class Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State : public ydk::Entity
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

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::InputInterface::InterfaceRef::State


class Acl::AclSets::AclSet::AclEntries::AclEntry::Actions : public ydk::Entity
{
    public:
        Actions();
        ~Actions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config
        class State; //type: Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State> state;
        
}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Actions


class Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config : public ydk::Entity
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

        ydk::YLeaf forwarding_action; //type: FORWARDINGACTION
        ydk::YLeaf log_action; //type: LOGACTION

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::Config


class Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State : public ydk::Entity
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

        ydk::YLeaf forwarding_action; //type: FORWARDINGACTION
        ydk::YLeaf log_action; //type: LOGACTION

}; // Acl::AclSets::AclSet::AclEntries::AclEntry::Actions::State


class Acl::Interfaces : public ydk::Entity
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

        class Interface; //type: Acl::Interfaces::Interface

        ydk::YList interface;
        
}; // Acl::Interfaces


class Acl::Interfaces::Interface : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_acl::Acl::Interfaces::Interface::Config::id)
        ydk::YLeaf id;
        class Config; //type: Acl::Interfaces::Interface::Config
        class State; //type: Acl::Interfaces::Interface::State
        class InterfaceRef; //type: Acl::Interfaces::Interface::InterfaceRef
        class IngressAclSets; //type: Acl::Interfaces::Interface::IngressAclSets
        class EgressAclSets; //type: Acl::Interfaces::Interface::EgressAclSets

        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::State> state;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::InterfaceRef> interface_ref;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::IngressAclSets> ingress_acl_sets;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::EgressAclSets> egress_acl_sets;
        
}; // Acl::Interfaces::Interface


class Acl::Interfaces::Interface::Config : public ydk::Entity
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

}; // Acl::Interfaces::Interface::Config


class Acl::Interfaces::Interface::State : public ydk::Entity
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

        ydk::YLeaf id; //type: string

}; // Acl::Interfaces::Interface::State


class Acl::Interfaces::Interface::InterfaceRef : public ydk::Entity
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

        class Config; //type: Acl::Interfaces::Interface::InterfaceRef::Config
        class State; //type: Acl::Interfaces::Interface::InterfaceRef::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::InterfaceRef::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::InterfaceRef::State> state;
        
}; // Acl::Interfaces::Interface::InterfaceRef


class Acl::Interfaces::Interface::InterfaceRef::Config : public ydk::Entity
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

}; // Acl::Interfaces::Interface::InterfaceRef::Config


class Acl::Interfaces::Interface::InterfaceRef::State : public ydk::Entity
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

}; // Acl::Interfaces::Interface::InterfaceRef::State


class Acl::Interfaces::Interface::IngressAclSets : public ydk::Entity
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

        class IngressAclSet; //type: Acl::Interfaces::Interface::IngressAclSets::IngressAclSet

        ydk::YList ingress_acl_set;
        
}; // Acl::Interfaces::Interface::IngressAclSets


class Acl::Interfaces::Interface::IngressAclSets::IngressAclSet : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_acl::Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config::set_name)
        ydk::YLeaf set_name;
        ydk::YLeaf type; //type: ACLTYPE
        class Config; //type: Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config
        class State; //type: Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State
        class AclEntries; //type: Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries

        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State> state;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries> acl_entries;
        
}; // Acl::Interfaces::Interface::IngressAclSets::IngressAclSet


class Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_acl::Acl::AclSets::AclSet::Config::name)
        ydk::YLeaf set_name;
        ydk::YLeaf type; //type: ACLTYPE

}; // Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::Config


class Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_acl::Acl::AclSets::AclSet::Config::name)
        ydk::YLeaf set_name;
        ydk::YLeaf type; //type: ACLTYPE

}; // Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::State


class Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries : public ydk::Entity
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

        class AclEntry; //type: Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry

        ydk::YList acl_entry;
        
}; // Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries


class Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_acl::Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State::sequence_id)
        ydk::YLeaf sequence_id;
        class State; //type: Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State> state;
        
}; // Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry


class Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::sequence_id)
        ydk::YLeaf sequence_id;
        ydk::YLeaf matched_packets; //type: uint64
        ydk::YLeaf matched_octets; //type: uint64

}; // Acl::Interfaces::Interface::IngressAclSets::IngressAclSet::AclEntries::AclEntry::State


class Acl::Interfaces::Interface::EgressAclSets : public ydk::Entity
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

        class EgressAclSet; //type: Acl::Interfaces::Interface::EgressAclSets::EgressAclSet

        ydk::YList egress_acl_set;
        
}; // Acl::Interfaces::Interface::EgressAclSets


class Acl::Interfaces::Interface::EgressAclSets::EgressAclSet : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_acl::Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config::set_name)
        ydk::YLeaf set_name;
        ydk::YLeaf type; //type: ACLTYPE
        class Config; //type: Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config
        class State; //type: Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State
        class AclEntries; //type: Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries

        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config> config;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State> state;
        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries> acl_entries;
        
}; // Acl::Interfaces::Interface::EgressAclSets::EgressAclSet


class Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_acl::Acl::AclSets::AclSet::Config::name)
        ydk::YLeaf set_name;
        ydk::YLeaf type; //type: ACLTYPE

}; // Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::Config


class Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State : public ydk::Entity
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

        //type: string (refers to openconfig::openconfig_acl::Acl::AclSets::AclSet::Config::name)
        ydk::YLeaf set_name;
        ydk::YLeaf type; //type: ACLTYPE

}; // Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::State


class Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries : public ydk::Entity
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

        class AclEntry; //type: Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry

        ydk::YList acl_entry;
        
}; // Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries


class Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_acl::Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State::sequence_id)
        ydk::YLeaf sequence_id;
        class State; //type: Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State

        std::shared_ptr<openconfig::openconfig_acl::Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State> state;
        
}; // Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry


class Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State : public ydk::Entity
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

        //type: leafref (refers to openconfig::openconfig_acl::Acl::AclSets::AclSet::AclEntries::AclEntry::sequence_id)
        ydk::YLeaf sequence_id;
        ydk::YLeaf matched_packets; //type: uint64
        ydk::YLeaf matched_octets; //type: uint64

}; // Acl::Interfaces::Interface::EgressAclSets::EgressAclSet::AclEntries::AclEntry::State

class ACLIPV4 : public openconfig::openconfig_acl::ACLTYPE, virtual ydk::Identity
{
    public:
        ACLIPV4();
        ~ACLIPV4();


}; // ACLIPV4

class ACLIPV6 : public openconfig::openconfig_acl::ACLTYPE, virtual ydk::Identity
{
    public:
        ACLIPV6();
        ~ACLIPV6();


}; // ACLIPV6

class ACLL2 : public openconfig::openconfig_acl::ACLTYPE, virtual ydk::Identity
{
    public:
        ACLL2();
        ~ACLL2();


}; // ACLL2

class ACLMIXED : public openconfig::openconfig_acl::ACLTYPE, virtual ydk::Identity
{
    public:
        ACLMIXED();
        ~ACLMIXED();


}; // ACLMIXED

class ACCEPT : public openconfig::openconfig_acl::FORWARDINGACTION, virtual ydk::Identity
{
    public:
        ACCEPT();
        ~ACCEPT();


}; // ACCEPT

class DROP : public openconfig::openconfig_acl::FORWARDINGACTION, virtual ydk::Identity
{
    public:
        DROP();
        ~DROP();


}; // DROP

class REJECT : public openconfig::openconfig_acl::FORWARDINGACTION, virtual ydk::Identity
{
    public:
        REJECT();
        ~REJECT();


}; // REJECT

class LOGSYSLOG : public openconfig::openconfig_acl::LOGACTION, virtual ydk::Identity
{
    public:
        LOGSYSLOG();
        ~LOGSYSLOG();


}; // LOGSYSLOG

class LOGNONE : public openconfig::openconfig_acl::LOGACTION, virtual ydk::Identity
{
    public:
        LOGNONE();
        ~LOGNONE();


}; // LOGNONE

class INTERFACEONLY : public openconfig::openconfig_acl::ACLCOUNTERCAPABILITY, virtual ydk::Identity
{
    public:
        INTERFACEONLY();
        ~INTERFACEONLY();


}; // INTERFACEONLY

class AGGREGATEONLY : public openconfig::openconfig_acl::ACLCOUNTERCAPABILITY, virtual ydk::Identity
{
    public:
        AGGREGATEONLY();
        ~AGGREGATEONLY();


}; // AGGREGATEONLY

class INTERFACEAGGREGATE : public openconfig::openconfig_acl::ACLCOUNTERCAPABILITY, virtual ydk::Identity
{
    public:
        INTERFACEAGGREGATE();
        ~INTERFACEAGGREGATE();


}; // INTERFACEAGGREGATE


}
}

#endif /* _OPENCONFIG_ACL_ */

