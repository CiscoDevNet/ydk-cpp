#ifndef _CISCO_IOS_XR_IPV4_ACL_CFG_
#define _CISCO_IOS_XR_IPV4_ACL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_acl_cfg {

class Ipv4AclAndPrefixList : public ydk::Entity
{
    public:
        Ipv4AclAndPrefixList();
        ~Ipv4AclAndPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Accesses; //type: Ipv4AclAndPrefixList::Accesses
        class Prefixes; //type: Ipv4AclAndPrefixList::Prefixes
        class LogUpdate; //type: Ipv4AclAndPrefixList::LogUpdate

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses> accesses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::LogUpdate> log_update;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes> prefixes;
        
}; // Ipv4AclAndPrefixList


class Ipv4AclAndPrefixList::Accesses : public ydk::Entity
{
    public:
        Accesses();
        ~Accesses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Access; //type: Ipv4AclAndPrefixList::Accesses::Access

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access> > access;
        
}; // Ipv4AclAndPrefixList::Accesses


class Ipv4AclAndPrefixList::Accesses::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        class AccessListEntries; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries> access_list_entries;
        
}; // Ipv4AclAndPrefixList::Accesses::Access


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries : public ydk::Entity
{
    public:
        AccessListEntries();
        ~AccessListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListEntry; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry> > access_list_entry;
        
}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry : public ydk::Entity
{
    public:
        AccessListEntry();
        ~AccessListEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf grant; //type: Ipv4AclGrantEnum
        ydk::YLeaf protocol_operator; //type: Ipv4AclOperatorEnum
        ydk::YLeaf protocol; //type: one of uint32, enumeration
        ydk::YLeaf protocol2; //type: one of uint32, enumeration
        ydk::YLeaf counter_name; //type: string
        ydk::YLeaf igmp_message_type; //type: one of uint32, enumeration
        ydk::YLeaf precedence; //type: one of uint32, enumeration
        ydk::YLeaf log_option; //type: Ipv4AclLoggingEnum
        ydk::YLeaf capture; //type: boolean
        ydk::YLeaf icmp_off; //type: empty
        ydk::YLeaf qos_group; //type: uint32
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf remark; //type: string
        ydk::YLeaf source_prefix_group; //type: string
        ydk::YLeaf destination_prefix_group; //type: string
        ydk::YLeaf source_port_group; //type: string
        ydk::YLeaf destination_port_group; //type: string
        ydk::YLeaf sequence_str; //type: string
        class SourceNetwork; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork
        class DestinationNetwork; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork
        class SourcePort; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort
        class DestinationPort; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort
        class Icmp; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp
        class Tcp; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp
        class PacketLength; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength
        class TimeToLive; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive
        class FragmentOffset; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::FragmentOffset
        class NextHop; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop
        class Dscp; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Dscp

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork> destination_network;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort> destination_port;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::FragmentOffset> fragment_offset;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength> packet_length;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork> source_network;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort> source_port;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive> time_to_live;
        
}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork : public ydk::Entity
{
    public:
        SourceNetwork();
        ~SourceNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_address; //type: string
        ydk::YLeaf source_wild_card_bits; //type: string
        ydk::YLeaf source_prefix_length; //type: uint8

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork : public ydk::Entity
{
    public:
        DestinationNetwork();
        ~DestinationNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wild_card_bits; //type: string
        ydk::YLeaf destination_prefix_length; //type: uint8

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort : public ydk::Entity
{
    public:
        SourcePort();
        ~SourcePort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_operator; //type: Ipv4AclOperatorEnum
        ydk::YLeaf first_source_port; //type: one of uint32, enumeration
        ydk::YLeaf second_source_port; //type: one of uint32, enumeration

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort : public ydk::Entity
{
    public:
        DestinationPort();
        ~DestinationPort();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_operator; //type: Ipv4AclOperatorEnum
        ydk::YLeaf first_destination_port; //type: one of uint32, enumeration
        ydk::YLeaf second_destination_port; //type: one of uint32, enumeration

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf icmp_type_code; //type: Ipv4AclIcmpTypeCodeEnum

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_bits_match_operator; //type: Ipv4AclTcpMatchOperatorEnum
        ydk::YLeaf tcp_bits; //type: one of uint32, enumeration
        ydk::YLeaf tcp_bits_mask; //type: one of uint32, enumeration

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength : public ydk::Entity
{
    public:
        PacketLength();
        ~PacketLength();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_length_operator; //type: Ipv4AclOperatorEnum
        ydk::YLeaf packet_length_min; //type: uint32
        ydk::YLeaf packet_length_max; //type: uint32

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive : public ydk::Entity
{
    public:
        TimeToLive();
        ~TimeToLive();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_to_live_operator; //type: Ipv4AclOperatorEnum
        ydk::YLeaf time_to_live_min; //type: uint32
        ydk::YLeaf time_to_live_max; //type: uint32

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::FragmentOffset : public ydk::Entity
{
    public:
        FragmentOffset();
        ~FragmentOffset();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fragment_offset_operator; //type: Ipv4AclOperatorEnum
        ydk::YLeaf fragment_offset_1; //type: uint32
        ydk::YLeaf fragment_offset_2; //type: uint32

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::FragmentOffset


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_type; //type: NextHopType
        class NextHop1; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1
        class NextHop2; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2
        class NextHop3; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1> next_hop_1;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2> next_hop_2;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3> next_hop_3;
        
}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1 : public ydk::Entity
{
    public:
        NextHop1();
        ~NextHop1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf track_name; //type: string

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2 : public ydk::Entity
{
    public:
        NextHop2();
        ~NextHop2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf track_name; //type: string

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3 : public ydk::Entity
{
    public:
        NextHop3();
        ~NextHop3();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf track_name; //type: string

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_operator; //type: Ipv4AclOperatorEnum
        ydk::YLeaf dscp_min; //type: one of uint32, enumeration
        ydk::YLeaf dscp_max; //type: one of uint32, enumeration

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Dscp


class Ipv4AclAndPrefixList::Prefixes : public ydk::Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Prefix; //type: Ipv4AclAndPrefixList::Prefixes::Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix> > prefix;
        
}; // Ipv4AclAndPrefixList::Prefixes


class Ipv4AclAndPrefixList::Prefixes::Prefix : public ydk::Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_list_name; //type: string
        class PrefixListEntries; //type: Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries> prefix_list_entries; // presence node
        
}; // Ipv4AclAndPrefixList::Prefixes::Prefix


class Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries : public ydk::Entity
{
    public:
        PrefixListEntries();
        ~PrefixListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixListEntry; //type: Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry> > prefix_list_entry;
        
}; // Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries


class Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry : public ydk::Entity
{
    public:
        PrefixListEntry();
        ~PrefixListEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sequence_number; //type: uint32
        ydk::YLeaf grant; //type: Ipv4AclGrantEnum
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf match_exact_length; //type: empty
        ydk::YLeaf exact_prefix_length; //type: uint32
        ydk::YLeaf match_max_length; //type: empty
        ydk::YLeaf max_prefix_length; //type: uint32
        ydk::YLeaf match_min_length; //type: empty
        ydk::YLeaf min_prefix_length; //type: uint32
        ydk::YLeaf remark; //type: string

}; // Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry


class Ipv4AclAndPrefixList::LogUpdate : public ydk::Entity
{
    public:
        LogUpdate();
        ~LogUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf rate; //type: uint32

}; // Ipv4AclAndPrefixList::LogUpdate

class NextHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none_next_hop;
        static const ydk::Enum::YLeaf regular_next_hop;
        static const ydk::Enum::YLeaf default_next_hop;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_CFG_ */

