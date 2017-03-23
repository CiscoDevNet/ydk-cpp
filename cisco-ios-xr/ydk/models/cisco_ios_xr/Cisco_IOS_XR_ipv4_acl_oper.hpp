#ifndef _CISCO_IOS_XR_IPV4_ACL_OPER_
#define _CISCO_IOS_XR_IPV4_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_ipv4_acl_oper {

class Ipv4AclAndPrefixList : public Entity
{
    public:
        Ipv4AclAndPrefixList();
        ~Ipv4AclAndPrefixList();

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



        class AccessListManager; //type: Ipv4AclAndPrefixList::AccessListManager
        class Oor; //type: Ipv4AclAndPrefixList::Oor

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager> access_list_manager;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor> oor;


}; // Ipv4AclAndPrefixList


class Ipv4AclAndPrefixList::AccessListManager : public Entity
{
    public:
        AccessListManager();
        ~AccessListManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Prefixes; //type: Ipv4AclAndPrefixList::AccessListManager::Prefixes
        class Accesses; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses
        class Usages; //type: Ipv4AclAndPrefixList::AccessListManager::Usages

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses> accesses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes> prefixes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Usages> usages;


}; // Ipv4AclAndPrefixList::AccessListManager


class Ipv4AclAndPrefixList::AccessListManager::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Prefix; //type: Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix> > prefix;


}; // Ipv4AclAndPrefixList::AccessListManager::Prefixes


class Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_list_name; //type: string

        class PrefixListSequences; //type: Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences> prefix_list_sequences;


}; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix


class Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences : public Entity
{
    public:
        PrefixListSequences();
        ~PrefixListSequences();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PrefixListSequence; //type: Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence> > prefix_list_sequence;


}; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences


class Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence : public Entity
{
    public:
        PrefixListSequence();
        ~PrefixListSequence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number; //type: uint32
        YLeaf item_type; //type: AclAce1Enum
        YLeaf sequence; //type: uint32
        YLeaf grant; //type: AclActionEnum
        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        YLeaf operator_; //type: AclPortOperatorEnum
        YLeaf minimum_length; //type: uint32
        YLeaf maximum_length; //type: uint32
        YLeaf hits; //type: uint32
        YLeaf remark; //type: string
        YLeaf acl_name; //type: string



}; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence


class Ipv4AclAndPrefixList::AccessListManager::Accesses : public Entity
{
    public:
        Accesses();
        ~Accesses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Access; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access> > access;


}; // Ipv4AclAndPrefixList::AccessListManager::Accesses


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf access_list_name; //type: string

        class AccessListSequences; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences
        class ObjectGroup; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences> access_list_sequences;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup> object_group;


}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences : public Entity
{
    public:
        AccessListSequences();
        ~AccessListSequences();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessListSequence; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence> > access_list_sequence;


}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence : public Entity
{
    public:
        AccessListSequence();
        ~AccessListSequence();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sequence_number; //type: uint32
        YLeaf item_type; //type: AclAce1Enum
        YLeaf sequence; //type: uint32
        YLeaf grant; //type: AclActionEnum
        YLeaf protocol_operator; //type: uint16
        YLeaf protocol; //type: uint16
        YLeaf protocol2; //type: uint16
        YLeaf source_address; //type: string
        YLeaf source_address_mask; //type: string
        YLeaf destination_address; //type: string
        YLeaf destination_address_mask; //type: string
        YLeaf source_operator; //type: AclPortOperatorEnum
        YLeaf source_port1; //type: uint16
        YLeaf source_port2; //type: uint16
        YLeaf sorce_operator; //type: AclPortOperatorEnum
        YLeaf sorce_port1; //type: uint16
        YLeaf sorce_port2; //type: uint16
        YLeaf destination_operator; //type: AclPortOperatorEnum
        YLeaf destination_port1; //type: uint16
        YLeaf destination_port2; //type: uint16
        YLeaf log_option; //type: AclLogEnum
        YLeaf counter_name; //type: string
        YLeaf capture; //type: boolean
        YLeaf dscp_present; //type: boolean
        YLeaf dscp; //type: uint8
        YLeaf dscp2; //type: uint8
        YLeaf dscp_operator; //type: uint8
        YLeaf precedence_present; //type: boolean
        YLeaf precedence; //type: uint8
        YLeaf tcp_flags_operator; //type: AclTcpflagsOperatorEnum
        YLeaf tcp_flags; //type: uint8
        YLeaf tcp_flags_mask; //type: uint8
        YLeaf fragments; //type: uint8
        YLeaf port_length_operator; //type: AclPortOperatorEnum
        YLeaf port_length1; //type: uint16
        YLeaf port_length2; //type: uint16
        YLeaf ttl_operator; //type: AclPortOperatorEnum
        YLeaf ttl1; //type: uint16
        YLeaf ttl2; //type: uint16
        YLeaf no_stats; //type: boolean
        YLeaf hits; //type: uint64
        YLeaf is_icmp_off; //type: boolean
        YLeaf qos_group; //type: uint16
        YLeaf next_hop_type; //type: BagAclNhEnum
        YLeaf remark; //type: string
        YLeaf dynamic; //type: boolean
        YLeaf source_prefix_group; //type: string
        YLeaf destination_prefix_group; //type: string
        YLeaf source_port_group; //type: string
        YLeaf destination_port_group; //type: string
        YLeaf acl_name; //type: string
        YLeaf sequence_str; //type: string
        YLeaf fragment_offset_operator; //type: AclPortOperatorEnum
        YLeaf fragment_offset1; //type: uint16
        YLeaf fragment_offset2; //type: uint16

        class HwNextHopInfo; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo
        class NextHopInfo; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo
        class Udf; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo> hw_next_hop_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo> > next_hop_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf> > udf;


}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo : public Entity
{
    public:
        HwNextHopInfo();
        ~HwNextHopInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: uint32
        YLeaf type; //type: BagAclNhEnum
        YLeaf vrf_name; //type: string



}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo : public Entity
{
    public:
        NextHopInfo();
        ~NextHopInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop; //type: string
        YLeaf track_name; //type: string
        YLeaf status; //type: BagAclNhStatusEnum
        YLeaf at_status; //type: BagAclNhAtStatusEnum
        YLeaf is_acl_next_hop_exist; //type: boolean



}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf : public Entity
{
    public:
        Udf();
        ~Udf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf udf_name; //type: string
        YLeaf udf_value; //type: uint32
        YLeaf udf_mask; //type: uint32



}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup : public Entity
{
    public:
        ObjectGroup();
        ~ObjectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ObjGrpInfo; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo> > obj_grp_info;


}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo : public Entity
{
    public:
        ObjGrpInfo();
        ~ObjGrpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf obj_grp_name; //type: string
        YLeaf obj_grp_type; //type: uint32



}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo


class Ipv4AclAndPrefixList::AccessListManager::Usages : public Entity
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



        class Usage; //type: Ipv4AclAndPrefixList::AccessListManager::Usages::Usage

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Usages::Usage> > usage;


}; // Ipv4AclAndPrefixList::AccessListManager::Usages


class Ipv4AclAndPrefixList::AccessListManager::Usages::Usage : public Entity
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


        YLeaf node_name; //type: string
        YLeaf application_id; //type: AclUsageAppIdEnumEnum
        YLeaf access_list_name; //type: string
        YLeaf usage_details; //type: string



}; // Ipv4AclAndPrefixList::AccessListManager::Usages::Usage


class Ipv4AclAndPrefixList::Oor : public Entity
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



        class Details; //type: Ipv4AclAndPrefixList::Oor::Details
        class OorPrefixes; //type: Ipv4AclAndPrefixList::Oor::OorPrefixes
        class OorAccesses; //type: Ipv4AclAndPrefixList::Oor::OorAccesses
        class AccessListSummary; //type: Ipv4AclAndPrefixList::Oor::AccessListSummary
        class PrefixListSummary; //type: Ipv4AclAndPrefixList::Oor::PrefixListSummary

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::AccessListSummary> access_list_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::Details> details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorAccesses> oor_accesses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorPrefixes> oor_prefixes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::PrefixListSummary> prefix_list_summary;


}; // Ipv4AclAndPrefixList::Oor


class Ipv4AclAndPrefixList::Oor::Details : public Entity
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


        YLeaf default_max_ac_ls; //type: uint32
        YLeaf default_max_ac_es; //type: uint32
        YLeaf current_configured_ac_ls; //type: uint32
        YLeaf current_configured_ac_es; //type: uint32
        YLeaf current_max_configurable_ac_ls; //type: uint32
        YLeaf current_max_configurable_ac_es; //type: uint32
        YLeaf max_configurable_ac_ls; //type: uint32
        YLeaf max_configurable_ac_es; //type: uint32



}; // Ipv4AclAndPrefixList::Oor::Details


class Ipv4AclAndPrefixList::Oor::OorPrefixes : public Entity
{
    public:
        OorPrefixes();
        ~OorPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OorPrefix; //type: Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix> > oor_prefix;


}; // Ipv4AclAndPrefixList::Oor::OorPrefixes


class Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix : public Entity
{
    public:
        OorPrefix();
        ~OorPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_list_name; //type: string
        YLeaf default_max_ac_ls; //type: uint32
        YLeaf default_max_ac_es; //type: uint32
        YLeaf current_configured_ac_ls; //type: uint32
        YLeaf current_configured_ac_es; //type: uint32
        YLeaf current_max_configurable_ac_ls; //type: uint32
        YLeaf current_max_configurable_ac_es; //type: uint32
        YLeaf max_configurable_ac_ls; //type: uint32
        YLeaf max_configurable_ac_es; //type: uint32



}; // Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix


class Ipv4AclAndPrefixList::Oor::OorAccesses : public Entity
{
    public:
        OorAccesses();
        ~OorAccesses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OorAccess; //type: Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess> > oor_access;


}; // Ipv4AclAndPrefixList::Oor::OorAccesses


class Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess : public Entity
{
    public:
        OorAccess();
        ~OorAccess();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf access_list_name; //type: string
        YLeaf default_max_ac_ls; //type: uint32
        YLeaf default_max_ac_es; //type: uint32
        YLeaf current_configured_ac_ls; //type: uint32
        YLeaf current_configured_ac_es; //type: uint32
        YLeaf current_max_configurable_ac_ls; //type: uint32
        YLeaf current_max_configurable_ac_es; //type: uint32
        YLeaf max_configurable_ac_ls; //type: uint32
        YLeaf max_configurable_ac_es; //type: uint32



}; // Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess


class Ipv4AclAndPrefixList::Oor::AccessListSummary : public Entity
{
    public:
        AccessListSummary();
        ~AccessListSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Details; //type: Ipv4AclAndPrefixList::Oor::AccessListSummary::Details

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::AccessListSummary::Details> details;


}; // Ipv4AclAndPrefixList::Oor::AccessListSummary


class Ipv4AclAndPrefixList::Oor::AccessListSummary::Details : public Entity
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


        YLeaf default_max_ac_ls; //type: uint32
        YLeaf default_max_ac_es; //type: uint32
        YLeaf current_configured_ac_ls; //type: uint32
        YLeaf current_configured_ac_es; //type: uint32
        YLeaf current_max_configurable_ac_ls; //type: uint32
        YLeaf current_max_configurable_ac_es; //type: uint32
        YLeaf max_configurable_ac_ls; //type: uint32
        YLeaf max_configurable_ac_es; //type: uint32



}; // Ipv4AclAndPrefixList::Oor::AccessListSummary::Details


class Ipv4AclAndPrefixList::Oor::PrefixListSummary : public Entity
{
    public:
        PrefixListSummary();
        ~PrefixListSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Details; //type: Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details> details;


}; // Ipv4AclAndPrefixList::Oor::PrefixListSummary


class Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details : public Entity
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


        YLeaf default_max_ac_ls; //type: uint32
        YLeaf default_max_ac_es; //type: uint32
        YLeaf current_configured_ac_ls; //type: uint32
        YLeaf current_configured_ac_es; //type: uint32
        YLeaf current_max_configurable_ac_ls; //type: uint32
        YLeaf current_max_configurable_ac_es; //type: uint32
        YLeaf max_configurable_ac_ls; //type: uint32
        YLeaf max_configurable_ac_es; //type: uint32



}; // Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details

class AclTcpflagsOperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf match_none;
        static const Enum::YLeaf match_all;
        static const Enum::YLeaf match_any_old;
        static const Enum::YLeaf match_any;

};

class AclPortOperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf eq;
        static const Enum::YLeaf gt;
        static const Enum::YLeaf lt;
        static const Enum::YLeaf neq;
        static const Enum::YLeaf range;
        static const Enum::YLeaf onebyte;
        static const Enum::YLeaf twobytes;

};

class AclAce1Enum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf remark;
        static const Enum::YLeaf abf;

};

class BagAclNhAtStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf max;

};

class BagAclNhEnum : public Enum
{
    public:
        static const Enum::YLeaf nexthop_none;
        static const Enum::YLeaf nexthop_default;
        static const Enum::YLeaf nexthop;

};

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

class BagAclNhStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf max;

};

class AclLogEnum : public Enum
{
    public:
        static const Enum::YLeaf log_none;
        static const Enum::YLeaf log;
        static const Enum::YLeaf log_input;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_OPER_ */

