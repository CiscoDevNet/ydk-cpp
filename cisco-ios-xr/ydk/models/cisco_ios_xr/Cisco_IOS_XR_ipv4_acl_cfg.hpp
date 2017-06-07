#ifndef _CISCO_IOS_XR_IPV4_ACL_CFG_
#define _CISCO_IOS_XR_IPV4_ACL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_ipv4_acl_cfg {

class Ipv4AclAndPrefixList : public Entity
{
    public:
        Ipv4AclAndPrefixList();
        ~Ipv4AclAndPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Accesses; //type: Ipv4AclAndPrefixList::Accesses
        class Prefixes; //type: Ipv4AclAndPrefixList::Prefixes
        class LogUpdate; //type: Ipv4AclAndPrefixList::LogUpdate

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses> accesses;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::LogUpdate> log_update;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes> prefixes;
        
}; // Ipv4AclAndPrefixList


class Ipv4AclAndPrefixList::Accesses : public Entity
{
    public:
        Accesses();
        ~Accesses();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Access; //type: Ipv4AclAndPrefixList::Accesses::Access

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access> > access;
        
}; // Ipv4AclAndPrefixList::Accesses


class Ipv4AclAndPrefixList::Accesses::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf access_list_name; //type: string
        class AccessListEntries; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries> access_list_entries;
        
}; // Ipv4AclAndPrefixList::Accesses::Access


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries : public Entity
{
    public:
        AccessListEntries();
        ~AccessListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessListEntry; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry> > access_list_entry;
        
}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry : public Entity
{
    public:
        AccessListEntry();
        ~AccessListEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence_number; //type: uint32
        YLeaf grant; //type: Ipv4AclGrantEnumEnum
        YLeaf protocol_operator; //type: Ipv4AclOperatorEnumEnum
        YLeaf protocol; //type: one of uint32, enumeration
        YLeaf protocol2; //type: one of uint32, enumeration
        YLeaf counter_name; //type: string
        YLeaf igmp_message_type; //type: one of uint32, enumeration
        YLeaf precedence; //type: one of uint32, enumeration
        YLeaf log_option; //type: Ipv4AclLoggingEnumEnum
        YLeaf capture; //type: boolean
        YLeaf icmp_off; //type: empty
        YLeaf qos_group; //type: uint32
        YLeaf fragments; //type: empty
        YLeaf remark; //type: string
        YLeaf source_prefix_group; //type: string
        YLeaf destination_prefix_group; //type: string
        YLeaf source_port_group; //type: string
        YLeaf destination_port_group; //type: string
        YLeaf sequence_str; //type: string
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


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork : public Entity
{
    public:
        SourceNetwork();
        ~SourceNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf source_wild_card_bits; //type: string
        YLeaf source_prefix_length; //type: uint8

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork : public Entity
{
    public:
        DestinationNetwork();
        ~DestinationNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_address; //type: string
        YLeaf destination_wild_card_bits; //type: string
        YLeaf destination_prefix_length; //type: uint8

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort : public Entity
{
    public:
        SourcePort();
        ~SourcePort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_operator; //type: Ipv4AclOperatorEnumEnum
        YLeaf first_source_port; //type: one of uint32, enumeration
        YLeaf second_source_port; //type: one of uint32, enumeration

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort : public Entity
{
    public:
        DestinationPort();
        ~DestinationPort();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination_operator; //type: Ipv4AclOperatorEnumEnum
        YLeaf first_destination_port; //type: one of uint32, enumeration
        YLeaf second_destination_port; //type: one of uint32, enumeration

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp : public Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf icmp_type_code; //type: Ipv4AclIcmpTypeCodeEnumEnum

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcp_bits_match_operator; //type: Ipv4AclTcpMatchOperatorEnumEnum
        YLeaf tcp_bits; //type: one of uint32, enumeration
        YLeaf tcp_bits_mask; //type: one of uint32, enumeration

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength : public Entity
{
    public:
        PacketLength();
        ~PacketLength();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_length_operator; //type: Ipv4AclOperatorEnumEnum
        YLeaf packet_length_min; //type: uint32
        YLeaf packet_length_max; //type: uint32

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive : public Entity
{
    public:
        TimeToLive();
        ~TimeToLive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_to_live_operator; //type: Ipv4AclOperatorEnumEnum
        YLeaf time_to_live_min; //type: uint32
        YLeaf time_to_live_max; //type: uint32

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::FragmentOffset : public Entity
{
    public:
        FragmentOffset();
        ~FragmentOffset();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fragment_offset_operator; //type: Ipv4AclOperatorEnumEnum
        YLeaf fragment_offset_1; //type: uint32
        YLeaf fragment_offset_2; //type: uint32

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::FragmentOffset


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop_type; //type: NextHopTypeEnum
        class NextHop1; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1
        class NextHop2; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2
        class NextHop3; //type: Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1> next_hop_1;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2> next_hop_2;
        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3> next_hop_3;
        
}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1 : public Entity
{
    public:
        NextHop1();
        ~NextHop1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeaf vrf_name; //type: string
        YLeaf track_name; //type: string

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2 : public Entity
{
    public:
        NextHop2();
        ~NextHop2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeaf vrf_name; //type: string
        YLeaf track_name; //type: string

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3 : public Entity
{
    public:
        NextHop3();
        ~NextHop3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf next_hop; //type: string
        YLeaf vrf_name; //type: string
        YLeaf track_name; //type: string

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3


class Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dscp_operator; //type: Ipv4AclOperatorEnumEnum
        YLeaf dscp_min; //type: one of uint32, enumeration
        YLeaf dscp_max; //type: one of uint32, enumeration

}; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Dscp


class Ipv4AclAndPrefixList::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prefix; //type: Ipv4AclAndPrefixList::Prefixes::Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix> > prefix;
        
}; // Ipv4AclAndPrefixList::Prefixes


class Ipv4AclAndPrefixList::Prefixes::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_list_name; //type: string
        class PrefixListEntries; //type: Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries

        std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries> prefix_list_entries; // presence node
        
}; // Ipv4AclAndPrefixList::Prefixes::Prefix


class Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries : public Entity
{
    public:
        PrefixListEntries();
        ~PrefixListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrefixListEntry; //type: Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry> > prefix_list_entry;
        
}; // Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries


class Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry : public Entity
{
    public:
        PrefixListEntry();
        ~PrefixListEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sequence_number; //type: uint32
        YLeaf grant; //type: Ipv4AclGrantEnumEnum
        YLeaf prefix; //type: string
        YLeaf netmask; //type: string
        YLeaf match_exact_length; //type: empty
        YLeaf exact_prefix_length; //type: uint32
        YLeaf match_max_length; //type: empty
        YLeaf max_prefix_length; //type: uint32
        YLeaf match_min_length; //type: empty
        YLeaf min_prefix_length; //type: uint32
        YLeaf remark; //type: string

}; // Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry


class Ipv4AclAndPrefixList::LogUpdate : public Entity
{
    public:
        LogUpdate();
        ~LogUpdate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint32
        YLeaf rate; //type: uint32

}; // Ipv4AclAndPrefixList::LogUpdate

class NextHopTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none_next_hop;
        static const Enum::YLeaf regular_next_hop;
        static const Enum::YLeaf default_next_hop;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_CFG_ */

