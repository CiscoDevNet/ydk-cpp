#ifndef _CISCO_IOS_XR_IPV4_ACL_OPER_
#define _CISCO_IOS_XR_IPV4_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_acl_oper {

class Ipv4AclAndPrefixList : public ydk::Entity
{
    public:
        Ipv4AclAndPrefixList();
        ~Ipv4AclAndPrefixList();

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

        class AccessListManager; //type: Ipv4AclAndPrefixList::AccessListManager
        class Oor; //type: Ipv4AclAndPrefixList::Oor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager> access_list_manager;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor> oor;
        
}; // Ipv4AclAndPrefixList


class Ipv4AclAndPrefixList::AccessListManager : public ydk::Entity
{
    public:
        AccessListManager();
        ~AccessListManager();

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

        class Prefixes; //type: Ipv4AclAndPrefixList::AccessListManager::Prefixes
        class Accesses; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses
        class Usages; //type: Ipv4AclAndPrefixList::AccessListManager::Usages

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes> prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses> accesses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Usages> usages;
        
}; // Ipv4AclAndPrefixList::AccessListManager


class Ipv4AclAndPrefixList::AccessListManager::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

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

        class Prefix; //type: Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix

        ydk::YList prefix;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Prefixes


class Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

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

        ydk::YLeaf prefix_list_name; //type: string
        class PrefixListSequences; //type: Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences> prefix_list_sequences;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix


class Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences : public ydk::Entity
{
    public:
        PrefixListSequences();
        ~PrefixListSequences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixListSequence; //type: Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence

        ydk::YList prefix_list_sequence;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences


class Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence : public ydk::Entity
{
    public:
        PrefixListSequence();
        ~PrefixListSequence();

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
        ydk::YLeaf item_type; //type: AclAce1_
        ydk::YLeaf sequence; //type: uint32
        ydk::YLeaf grant; //type: AclAction
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf operator_; //type: AclPortOperator___
        ydk::YLeaf minimum_length; //type: uint32
        ydk::YLeaf maximum_length; //type: uint32
        ydk::YLeaf hits; //type: uint32
        ydk::YLeaf remark; //type: string
        ydk::YLeaf acl_name; //type: string

}; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence


class Ipv4AclAndPrefixList::AccessListManager::Accesses : public ydk::Entity
{
    public:
        Accesses();
        ~Accesses();

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

        class Access; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access

        ydk::YList access;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Accesses


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

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

        ydk::YLeaf access_list_name; //type: string
        class AccessListSequences; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences
        class ObjectGroup; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences> access_list_sequences;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup> object_group;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences : public ydk::Entity
{
    public:
        AccessListSequences();
        ~AccessListSequences();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListSequence; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence

        ydk::YList access_list_sequence;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence : public ydk::Entity
{
    public:
        AccessListSequence();
        ~AccessListSequence();

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
        ydk::YLeaf item_type; //type: AclAce1_
        ydk::YLeaf sequence; //type: uint32
        ydk::YLeaf grant; //type: AclAction
        ydk::YLeaf protocol_operator; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf protocol2; //type: uint16
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_address_mask; //type: string
        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_address_mask; //type: string
        ydk::YLeaf source_operator; //type: AclPortOperator___
        ydk::YLeaf source_port1; //type: uint16
        ydk::YLeaf source_port2; //type: uint16
        ydk::YLeaf sorce_operator; //type: AclPortOperator___
        ydk::YLeaf sorce_port1; //type: uint16
        ydk::YLeaf sorce_port2; //type: uint16
        ydk::YLeaf destination_operator; //type: AclPortOperator___
        ydk::YLeaf destination_port1; //type: uint16
        ydk::YLeaf destination_port2; //type: uint16
        ydk::YLeaf log_option; //type: AclLog
        ydk::YLeaf counter_name; //type: string
        ydk::YLeaf capture; //type: boolean
        ydk::YLeaf dscp_present; //type: boolean
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf dscp2; //type: uint8
        ydk::YLeaf dscp_operator; //type: uint8
        ydk::YLeaf precedence_present; //type: boolean
        ydk::YLeaf precedence; //type: uint8
        ydk::YLeaf tcp_flags_operator; //type: AclTcpflagsOperator
        ydk::YLeaf tcp_flags; //type: uint8
        ydk::YLeaf tcp_flags_mask; //type: uint8
        ydk::YLeaf fragments; //type: uint8
        ydk::YLeaf packet_length_operator; //type: AclPortOperator___
        ydk::YLeaf packet_length1; //type: uint16
        ydk::YLeaf packet_length2; //type: uint16
        ydk::YLeaf ttl_operator; //type: AclPortOperator___
        ydk::YLeaf ttl1; //type: uint16
        ydk::YLeaf ttl2; //type: uint16
        ydk::YLeaf no_stats; //type: boolean
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf is_icmp_off; //type: boolean
        ydk::YLeaf qos_group; //type: uint16
        ydk::YLeaf next_hop_type; //type: BagAclNh
        ydk::YLeaf remark; //type: string
        ydk::YLeaf dynamic; //type: boolean
        ydk::YLeaf source_prefix_group; //type: string
        ydk::YLeaf destination_prefix_group; //type: string
        ydk::YLeaf source_port_group; //type: string
        ydk::YLeaf destination_port_group; //type: string
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf sequence_str; //type: string
        ydk::YLeaf fragment_offset_operator; //type: AclPortOperator___
        ydk::YLeaf fragment_offset1; //type: uint16
        ydk::YLeaf fragment_offset2; //type: uint16
        ydk::YLeaf set_ttl; //type: uint16
        ydk::YLeaf fragment_flags; //type: uint8
        class HwNextHopInfo; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo
        class NextHopInfo; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo
        class Udf; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo> hw_next_hop_info;
        ydk::YList next_hop_info;
        ydk::YList udf;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo : public ydk::Entity
{
    public:
        HwNextHopInfo();
        ~HwNextHopInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: uint32
        ydk::YLeaf type; //type: BagAclNh
        ydk::YLeaf vrf_name; //type: string

}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo : public ydk::Entity
{
    public:
        NextHopInfo();
        ~NextHopInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf track_name; //type: string
        ydk::YLeaf status; //type: BagAclNhStatus
        ydk::YLeaf at_status; //type: BagAclNhAtStatus
        ydk::YLeaf is_acl_next_hop_exist; //type: boolean

}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf : public ydk::Entity
{
    public:
        Udf();
        ~Udf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udf_name; //type: string
        ydk::YLeaf udf_value; //type: uint32
        ydk::YLeaf udf_mask; //type: uint32

}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup : public ydk::Entity
{
    public:
        ObjectGroup();
        ~ObjectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjGrpInfo; //type: Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo

        ydk::YList obj_grp_info;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup


class Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo : public ydk::Entity
{
    public:
        ObjGrpInfo();
        ~ObjGrpInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf obj_grp_name; //type: string
        ydk::YLeaf obj_grp_type; //type: uint32

}; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::ObjectGroup::ObjGrpInfo


class Ipv4AclAndPrefixList::AccessListManager::Usages : public ydk::Entity
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

        class Usage; //type: Ipv4AclAndPrefixList::AccessListManager::Usages::Usage

        ydk::YList usage;
        
}; // Ipv4AclAndPrefixList::AccessListManager::Usages


class Ipv4AclAndPrefixList::AccessListManager::Usages::Usage : public ydk::Entity
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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf application_id; //type: AclUsageAppIdEnum
        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf usage_details; //type: string

}; // Ipv4AclAndPrefixList::AccessListManager::Usages::Usage


class Ipv4AclAndPrefixList::Oor : public ydk::Entity
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

        class Details; //type: Ipv4AclAndPrefixList::Oor::Details
        class OorPrefixes; //type: Ipv4AclAndPrefixList::Oor::OorPrefixes
        class OorAccesses; //type: Ipv4AclAndPrefixList::Oor::OorAccesses
        class AccessListSummary; //type: Ipv4AclAndPrefixList::Oor::AccessListSummary
        class PrefixListSummary; //type: Ipv4AclAndPrefixList::Oor::PrefixListSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::Details> details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorPrefixes> oor_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorAccesses> oor_accesses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::AccessListSummary> access_list_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::PrefixListSummary> prefix_list_summary;
        
}; // Ipv4AclAndPrefixList::Oor


class Ipv4AclAndPrefixList::Oor::Details : public ydk::Entity
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

        ydk::YLeaf default_max_ac_ls; //type: uint32
        ydk::YLeaf default_max_ac_es; //type: uint32
        ydk::YLeaf current_configured_ac_ls; //type: uint32
        ydk::YLeaf current_configured_ac_es; //type: uint32
        ydk::YLeaf current_max_configurable_ac_ls; //type: uint32
        ydk::YLeaf current_max_configurable_ac_es; //type: uint32
        ydk::YLeaf max_configurable_ac_ls; //type: uint32
        ydk::YLeaf max_configurable_ac_es; //type: uint32

}; // Ipv4AclAndPrefixList::Oor::Details


class Ipv4AclAndPrefixList::Oor::OorPrefixes : public ydk::Entity
{
    public:
        OorPrefixes();
        ~OorPrefixes();

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

        class OorPrefix; //type: Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix

        ydk::YList oor_prefix;
        
}; // Ipv4AclAndPrefixList::Oor::OorPrefixes


class Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix : public ydk::Entity
{
    public:
        OorPrefix();
        ~OorPrefix();

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

        ydk::YLeaf prefix_list_name; //type: string
        ydk::YLeaf default_max_ac_ls; //type: uint32
        ydk::YLeaf default_max_ac_es; //type: uint32
        ydk::YLeaf current_configured_ac_ls; //type: uint32
        ydk::YLeaf current_configured_ac_es; //type: uint32
        ydk::YLeaf current_max_configurable_ac_ls; //type: uint32
        ydk::YLeaf current_max_configurable_ac_es; //type: uint32
        ydk::YLeaf max_configurable_ac_ls; //type: uint32
        ydk::YLeaf max_configurable_ac_es; //type: uint32

}; // Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix


class Ipv4AclAndPrefixList::Oor::OorAccesses : public ydk::Entity
{
    public:
        OorAccesses();
        ~OorAccesses();

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

        class OorAccess; //type: Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess

        ydk::YList oor_access;
        
}; // Ipv4AclAndPrefixList::Oor::OorAccesses


class Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess : public ydk::Entity
{
    public:
        OorAccess();
        ~OorAccess();

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

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf default_max_ac_ls; //type: uint32
        ydk::YLeaf default_max_ac_es; //type: uint32
        ydk::YLeaf current_configured_ac_ls; //type: uint32
        ydk::YLeaf current_configured_ac_es; //type: uint32
        ydk::YLeaf current_max_configurable_ac_ls; //type: uint32
        ydk::YLeaf current_max_configurable_ac_es; //type: uint32
        ydk::YLeaf max_configurable_ac_ls; //type: uint32
        ydk::YLeaf max_configurable_ac_es; //type: uint32

}; // Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess


class Ipv4AclAndPrefixList::Oor::AccessListSummary : public ydk::Entity
{
    public:
        AccessListSummary();
        ~AccessListSummary();

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

        class Details; //type: Ipv4AclAndPrefixList::Oor::AccessListSummary::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::AccessListSummary::Details> details;
        
}; // Ipv4AclAndPrefixList::Oor::AccessListSummary


class Ipv4AclAndPrefixList::Oor::AccessListSummary::Details : public ydk::Entity
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

        ydk::YLeaf default_max_ac_ls; //type: uint32
        ydk::YLeaf default_max_ac_es; //type: uint32
        ydk::YLeaf current_configured_ac_ls; //type: uint32
        ydk::YLeaf current_configured_ac_es; //type: uint32
        ydk::YLeaf current_max_configurable_ac_ls; //type: uint32
        ydk::YLeaf current_max_configurable_ac_es; //type: uint32
        ydk::YLeaf max_configurable_ac_ls; //type: uint32
        ydk::YLeaf max_configurable_ac_es; //type: uint32

}; // Ipv4AclAndPrefixList::Oor::AccessListSummary::Details


class Ipv4AclAndPrefixList::Oor::PrefixListSummary : public ydk::Entity
{
    public:
        PrefixListSummary();
        ~PrefixListSummary();

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

        class Details; //type: Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details> details;
        
}; // Ipv4AclAndPrefixList::Oor::PrefixListSummary


class Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details : public ydk::Entity
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

        ydk::YLeaf default_max_ac_ls; //type: uint32
        ydk::YLeaf default_max_ac_es; //type: uint32
        ydk::YLeaf current_configured_ac_ls; //type: uint32
        ydk::YLeaf current_configured_ac_es; //type: uint32
        ydk::YLeaf current_max_configurable_ac_ls; //type: uint32
        ydk::YLeaf current_max_configurable_ac_es; //type: uint32
        ydk::YLeaf max_configurable_ac_ls; //type: uint32
        ydk::YLeaf max_configurable_ac_es; //type: uint32

}; // Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details

class AclTcpflagsOperator : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_none;
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any_old;
        static const ydk::Enum::YLeaf match_any;

        static int get_enum_value(const std::string & name) {
            if (name == "match-none") return 0;
            if (name == "match-all") return 1;
            if (name == "match-any-old") return 2;
            if (name == "match-any") return 3;
            return -1;
        }
};

class AclPortOperator : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf neq;
        static const ydk::Enum::YLeaf range;
        static const ydk::Enum::YLeaf onebyte;
        static const ydk::Enum::YLeaf twobytes;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "eq") return 1;
            if (name == "gt") return 2;
            if (name == "lt") return 3;
            if (name == "neq") return 4;
            if (name == "range") return 5;
            if (name == "onebyte") return 8;
            if (name == "twobytes") return 9;
            return -1;
        }
};

class AclAce1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf remark;
        static const ydk::Enum::YLeaf abf;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 0;
            if (name == "remark") return 1;
            if (name == "abf") return 2;
            return -1;
        }
};

class AclPortOperator_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf neq;
        static const ydk::Enum::YLeaf range;
        static const ydk::Enum::YLeaf onebyte;
        static const ydk::Enum::YLeaf twobytes;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "eq") return 1;
            if (name == "gt") return 2;
            if (name == "lt") return 3;
            if (name == "neq") return 4;
            if (name == "range") return 5;
            if (name == "onebyte") return 8;
            if (name == "twobytes") return 9;
            return -1;
        }
};

class BagAclNhAtStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf not_present;
        static const ydk::Enum::YLeaf max;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "up") return 1;
            if (name == "down") return 2;
            if (name == "not-present") return 3;
            if (name == "max") return 4;
            return -1;
        }
};

class BagAclNh : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nexthop_none;
        static const ydk::Enum::YLeaf nexthop_default;
        static const ydk::Enum::YLeaf nexthop;

        static int get_enum_value(const std::string & name) {
            if (name == "nexthop-none") return 0;
            if (name == "nexthop-default") return 1;
            if (name == "nexthop") return 2;
            return -1;
        }
};

class AclPortOperator__ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf neq;
        static const ydk::Enum::YLeaf range;
        static const ydk::Enum::YLeaf onebyte;
        static const ydk::Enum::YLeaf twobytes;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "eq") return 1;
            if (name == "gt") return 2;
            if (name == "lt") return 3;
            if (name == "neq") return 4;
            if (name == "range") return 5;
            if (name == "onebyte") return 8;
            if (name == "twobytes") return 9;
            return -1;
        }
};

class AclAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf encrypt;
        static const ydk::Enum::YLeaf bypass;
        static const ydk::Enum::YLeaf fallthrough;
        static const ydk::Enum::YLeaf invalid;

        static int get_enum_value(const std::string & name) {
            if (name == "deny") return 0;
            if (name == "permit") return 1;
            if (name == "encrypt") return 2;
            if (name == "bypass") return 3;
            if (name == "fallthrough") return 4;
            if (name == "invalid") return 5;
            return -1;
        }
};

class BagAclNhStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_present;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf max;

        static int get_enum_value(const std::string & name) {
            if (name == "not-present") return 0;
            if (name == "unknown") return 1;
            if (name == "down") return 2;
            if (name == "up") return 3;
            if (name == "max") return 4;
            return -1;
        }
};

class AclPortOperator___ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf neq;
        static const ydk::Enum::YLeaf range;
        static const ydk::Enum::YLeaf onebyte;
        static const ydk::Enum::YLeaf twobytes;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "eq") return 1;
            if (name == "gt") return 2;
            if (name == "lt") return 3;
            if (name == "neq") return 4;
            if (name == "range") return 5;
            if (name == "onebyte") return 8;
            if (name == "twobytes") return 9;
            return -1;
        }
};

class AclLog : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log_none;
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf log_input;

        static int get_enum_value(const std::string & name) {
            if (name == "log-none") return 0;
            if (name == "log") return 1;
            if (name == "log-input") return 2;
            return -1;
        }
};

class AclAce1_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf remark;
        static const ydk::Enum::YLeaf abf;

        static int get_enum_value(const std::string & name) {
            if (name == "normal") return 0;
            if (name == "remark") return 1;
            if (name == "abf") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_OPER_ */

