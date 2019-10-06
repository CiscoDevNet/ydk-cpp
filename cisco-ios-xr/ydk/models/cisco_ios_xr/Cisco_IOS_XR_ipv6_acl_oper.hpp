#ifndef _CISCO_IOS_XR_IPV6_ACL_OPER_
#define _CISCO_IOS_XR_IPV6_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_acl_oper {

class Ipv6AclAndPrefixList : public ydk::Entity
{
    public:
        Ipv6AclAndPrefixList();
        ~Ipv6AclAndPrefixList();

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

        class AccessListManager; //type: Ipv6AclAndPrefixList::AccessListManager
        class Oor; //type: Ipv6AclAndPrefixList::Oor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager> access_list_manager;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor> oor;
        
}; // Ipv6AclAndPrefixList


class Ipv6AclAndPrefixList::AccessListManager : public ydk::Entity
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

        class Prefixes; //type: Ipv6AclAndPrefixList::AccessListManager::Prefixes
        class Usages; //type: Ipv6AclAndPrefixList::AccessListManager::Usages
        class Accesses; //type: Ipv6AclAndPrefixList::AccessListManager::Accesses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes> prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Usages> usages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses> accesses;
        
}; // Ipv6AclAndPrefixList::AccessListManager


class Ipv6AclAndPrefixList::AccessListManager::Prefixes : public ydk::Entity
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

        class Prefix; //type: Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix

        ydk::YList prefix;
        
}; // Ipv6AclAndPrefixList::AccessListManager::Prefixes


class Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix : public ydk::Entity
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
        class PrefixListSequences; //type: Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences> prefix_list_sequences;
        
}; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix


class Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences : public ydk::Entity
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

        class PrefixListSequence; //type: Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence

        ydk::YList prefix_list_sequence;
        
}; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences


class Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence : public ydk::Entity
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
        ydk::YLeaf is_ace_type; //type: AclAce1_
        ydk::YLeaf is_ace_sequence_number; //type: uint32
        ydk::YLeaf is_packet_allow_or_deny; //type: AclAction
        ydk::YLeaf is_address_in_numbers; //type: string
        ydk::YLeaf is_address_mask_length; //type: uint32
        ydk::YLeaf is_length_operator; //type: AclPortOperator___
        ydk::YLeaf is_packet_minimum_length; //type: uint32
        ydk::YLeaf is_packet_maximum_length; //type: uint32
        ydk::YLeaf hits; //type: uint32
        ydk::YLeaf is_comment_for_entry; //type: string
        ydk::YLeaf acl_name; //type: string

}; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence


class Ipv6AclAndPrefixList::AccessListManager::Usages : public ydk::Entity
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

        class Usage; //type: Ipv6AclAndPrefixList::AccessListManager::Usages::Usage

        ydk::YList usage;
        
}; // Ipv6AclAndPrefixList::AccessListManager::Usages


class Ipv6AclAndPrefixList::AccessListManager::Usages::Usage : public ydk::Entity
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

}; // Ipv6AclAndPrefixList::AccessListManager::Usages::Usage


class Ipv6AclAndPrefixList::AccessListManager::Accesses : public ydk::Entity
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

        class Access; //type: Ipv6AclAndPrefixList::AccessListManager::Accesses::Access

        ydk::YList access;
        
}; // Ipv6AclAndPrefixList::AccessListManager::Accesses


class Ipv6AclAndPrefixList::AccessListManager::Accesses::Access : public ydk::Entity
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
        class AccessListSequences; //type: Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences> access_list_sequences;
        
}; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access


class Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences : public ydk::Entity
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

        class AccessListSequence; //type: Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence

        ydk::YList access_list_sequence;
        
}; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences


class Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence : public ydk::Entity
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
        ydk::YLeaf is_ace_type; //type: AclAce1_
        ydk::YLeaf is_ace_sequence_number; //type: uint32
        ydk::YLeaf is_packet_allow_or_deny; //type: AclAction
        ydk::YLeaf is_protocol_operator; //type: AclPortOperator___
        ydk::YLeaf is_ipv6_protocol_type; //type: int32
        ydk::YLeaf is_ipv6_protocol2_type; //type: int32
        ydk::YLeaf is_source_address_in_numbers; //type: string
        ydk::YLeaf is_source_address_prefix_length; //type: uint32
        ydk::YLeaf source_mask; //type: string
        ydk::YLeaf is_destination_address_in_numbers; //type: string
        ydk::YLeaf is_destination_address_prefix_length; //type: uint32
        ydk::YLeaf destination_mask; //type: string
        ydk::YLeaf is_source_operator; //type: AclPortOperator___
        ydk::YLeaf is_source_port1; //type: uint32
        ydk::YLeaf is_source_port2; //type: uint32
        ydk::YLeaf is_destination_operator; //type: AclPortOperator___
        ydk::YLeaf is_destination_port1; //type: uint32
        ydk::YLeaf is_destination_port2; //type: uint32
        ydk::YLeaf is_log_option; //type: AclLog
        ydk::YLeaf counter_name; //type: string
        ydk::YLeaf is_tcp_bits_operator; //type: AclTcpflagsOperator
        ydk::YLeaf is_tcp_bits; //type: uint32
        ydk::YLeaf is_tcp_bits_mask; //type: uint32
        ydk::YLeaf is_dscp_present; //type: int32
        ydk::YLeaf dscp_operator; //type: uint8
        ydk::YLeaf is_dscp_valu; //type: uint8
        ydk::YLeaf is_dscp_valu2; //type: uint8
        ydk::YLeaf is_precedence_present; //type: int32
        ydk::YLeaf is_precedence_value; //type: uint32
        ydk::YLeaf is_header_matches; //type: uint32
        ydk::YLeaf is_packet_length_operator; //type: AclPortOperator___
        ydk::YLeaf is_packet_length_start; //type: uint32
        ydk::YLeaf is_packet_length_end; //type: uint32
        ydk::YLeaf is_time_to_live_operator; //type: AclPortOperator___
        ydk::YLeaf is_time_to_live_start; //type: uint32
        ydk::YLeaf is_time_to_live_end; //type: uint32
        ydk::YLeaf no_stats; //type: int32
        ydk::YLeaf hits; //type: uint64
        ydk::YLeaf capture; //type: boolean
        ydk::YLeaf undetermined_transport; //type: boolean
        ydk::YLeaf is_icmp_message_off; //type: int32
        ydk::YLeaf qos_group; //type: uint16
        ydk::YLeaf is_comment_for_entry; //type: string
        ydk::YLeaf next_hop_type; //type: BagAclNh
        ydk::YLeaf is_flow_id; //type: uint32
        ydk::YLeaf source_prefix_group; //type: string
        ydk::YLeaf destination_prefix_group; //type: string
        ydk::YLeaf source_port_group; //type: string
        ydk::YLeaf destination_port_group; //type: string
        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf sequence_str; //type: string
        ydk::YLeaf set_ttl; //type: uint16
        class HwNextHopInfo; //type: Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo
        class NextHopInfo; //type: Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo
        class Udf; //type: Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo> hw_next_hop_info;
        ydk::YList next_hop_info;
        ydk::YList udf;
        
}; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence


class Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo : public ydk::Entity
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

        ydk::YLeaf type; //type: BagAclNh
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf table_id; //type: uint32
        ydk::YLeaf vrf_name; //type: string

}; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo


class Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo : public ydk::Entity
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
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf track_name; //type: string
        ydk::YLeaf status; //type: BagAclNhStatus
        ydk::YLeaf at_status; //type: BagAclNhAtStatus
        ydk::YLeaf acl_nh_exist; //type: int32

}; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo


class Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf : public ydk::Entity
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

}; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::Udf


class Ipv6AclAndPrefixList::Oor : public ydk::Entity
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

        class Details; //type: Ipv6AclAndPrefixList::Oor::Details
        class PrefixListSummary; //type: Ipv6AclAndPrefixList::Oor::PrefixListSummary
        class OorAccesses; //type: Ipv6AclAndPrefixList::Oor::OorAccesses
        class OorPrefixes; //type: Ipv6AclAndPrefixList::Oor::OorPrefixes
        class AccessListSummary; //type: Ipv6AclAndPrefixList::Oor::AccessListSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::Details> details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::PrefixListSummary> prefix_list_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorAccesses> oor_accesses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorPrefixes> oor_prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::AccessListSummary> access_list_summary;
        
}; // Ipv6AclAndPrefixList::Oor


class Ipv6AclAndPrefixList::Oor::Details : public ydk::Entity
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

        ydk::YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_default_maximum_configurable_ac_es; //type: uint32
        ydk::YLeaf is_current_configured_ac_ls; //type: uint32
        ydk::YLeaf is_current_configured_aces; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_acls; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_aces; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_es; //type: uint32

}; // Ipv6AclAndPrefixList::Oor::Details


class Ipv6AclAndPrefixList::Oor::PrefixListSummary : public ydk::Entity
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

        class Details; //type: Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details> details;
        
}; // Ipv6AclAndPrefixList::Oor::PrefixListSummary


class Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details : public ydk::Entity
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

        ydk::YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_default_maximum_configurable_ac_es; //type: uint32
        ydk::YLeaf is_current_configured_ac_ls; //type: uint32
        ydk::YLeaf is_current_configured_aces; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_acls; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_aces; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_es; //type: uint32

}; // Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details


class Ipv6AclAndPrefixList::Oor::OorAccesses : public ydk::Entity
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

        class OorAccess; //type: Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess

        ydk::YList oor_access;
        
}; // Ipv6AclAndPrefixList::Oor::OorAccesses


class Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess : public ydk::Entity
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
        ydk::YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_default_maximum_configurable_ac_es; //type: uint32
        ydk::YLeaf is_current_configured_ac_ls; //type: uint32
        ydk::YLeaf is_current_configured_aces; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_acls; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_aces; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_es; //type: uint32

}; // Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess


class Ipv6AclAndPrefixList::Oor::OorPrefixes : public ydk::Entity
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

        class OorPrefix; //type: Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix

        ydk::YList oor_prefix;
        
}; // Ipv6AclAndPrefixList::Oor::OorPrefixes


class Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix : public ydk::Entity
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
        ydk::YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_default_maximum_configurable_ac_es; //type: uint32
        ydk::YLeaf is_current_configured_ac_ls; //type: uint32
        ydk::YLeaf is_current_configured_aces; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_acls; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_aces; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_es; //type: uint32

}; // Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix


class Ipv6AclAndPrefixList::Oor::AccessListSummary : public ydk::Entity
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

        class Details; //type: Ipv6AclAndPrefixList::Oor::AccessListSummary::Details

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::AccessListSummary::Details> details;
        
}; // Ipv6AclAndPrefixList::Oor::AccessListSummary


class Ipv6AclAndPrefixList::Oor::AccessListSummary::Details : public ydk::Entity
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

        ydk::YLeaf is_default_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_default_maximum_configurable_ac_es; //type: uint32
        ydk::YLeaf is_current_configured_ac_ls; //type: uint32
        ydk::YLeaf is_current_configured_aces; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_acls; //type: uint32
        ydk::YLeaf is_current_maximum_configurable_aces; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_ls; //type: uint32
        ydk::YLeaf is_maximum_configurable_ac_es; //type: uint32

}; // Ipv6AclAndPrefixList::Oor::AccessListSummary::Details

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

#endif /* _CISCO_IOS_XR_IPV6_ACL_OPER_ */

