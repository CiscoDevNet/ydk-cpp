#ifndef _CISCO_IOS_XR_IPV6_ACL_CFG_
#define _CISCO_IOS_XR_IPV6_ACL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_ipv6_acl_cfg {

class Ipv6AclAndPrefixList : public Entity
{
    public:
        Ipv6AclAndPrefixList();
        ~Ipv6AclAndPrefixList();

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

        class Prefixes; //type: Ipv6AclAndPrefixList::Prefixes
        class LogUpdate; //type: Ipv6AclAndPrefixList::LogUpdate
        class Accesses; //type: Ipv6AclAndPrefixList::Accesses

        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses> accesses;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::LogUpdate> log_update;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Prefixes> prefixes;
        
}; // Ipv6AclAndPrefixList


class Ipv6AclAndPrefixList::Prefixes : public Entity
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

        class Prefix; //type: Ipv6AclAndPrefixList::Prefixes::Prefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Prefixes::Prefix> > prefix;
        
}; // Ipv6AclAndPrefixList::Prefixes


class Ipv6AclAndPrefixList::Prefixes::Prefix : public Entity
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

        YLeaf name; //type: string
        class PrefixListEntries; //type: Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries

        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries> prefix_list_entries; // presence node
        
}; // Ipv6AclAndPrefixList::Prefixes::Prefix


class Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries : public Entity
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

        class PrefixListEntry; //type: Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry> > prefix_list_entry;
        
}; // Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries


class Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry : public Entity
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
        YLeaf grant; //type: Ipv6AclGrantEnumEnum
        YLeaf ipv6_address_as_string; //type: string
        YLeaf zone; //type: string
        YLeaf prefix; //type: string
        YLeaf prefix_mask; //type: uint8
        YLeaf match_exact_length; //type: Ipv6PrefixMatchExactLengthEnum
        YLeaf exact_prefix_length; //type: uint8
        YLeaf match_max_length; //type: Ipv6PrefixMatchMaxLengthEnum
        YLeaf max_prefix_length; //type: uint8
        YLeaf match_min_length; //type: Ipv6PrefixMatchMinLengthEnum
        YLeaf min_prefix_length; //type: uint8
        YLeaf remark; //type: string

}; // Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry


class Ipv6AclAndPrefixList::LogUpdate : public Entity
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

}; // Ipv6AclAndPrefixList::LogUpdate


class Ipv6AclAndPrefixList::Accesses : public Entity
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

        class Access; //type: Ipv6AclAndPrefixList::Accesses::Access

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access> > access;
        
}; // Ipv6AclAndPrefixList::Accesses


class Ipv6AclAndPrefixList::Accesses::Access : public Entity
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

        YLeaf name; //type: string
        class AccessListEntries; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries

        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries> access_list_entries;
        
}; // Ipv6AclAndPrefixList::Accesses::Access


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries : public Entity
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

        class AccessListEntry; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry> > access_list_entry;
        
}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry : public Entity
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
        YLeaf grant; //type: Ipv6AclGrantEnumEnum
        YLeaf protocol_operator; //type: Ipv6AclOperatorEnumEnum
        YLeaf protocol; //type: one of uint32, enumeration
        YLeaf protocol2; //type: one of uint32, enumeration
        YLeaf dscp; //type: one of uint32, enumeration
        YLeaf precedence; //type: one of uint32, enumeration
        YLeaf counter_name; //type: string
        YLeaf log_option; //type: Ipv6AclLoggingEnumEnum
        YLeaf capture; //type: boolean
        YLeaf undetermined_transport; //type: boolean
        YLeaf icmp_off; //type: empty
        YLeaf qos_group; //type: uint32
        YLeaf remark; //type: string
        YLeaf source_prefix_group; //type: string
        YLeaf destination_prefix_group; //type: string
        YLeaf source_port_group; //type: string
        YLeaf destination_port_group; //type: string
        YLeaf sequence_str; //type: string
        class SourceNetwork; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork
        class DestinationNetwork; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork
        class SourcePort; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort
        class DestinationPort; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort
        class Icmp; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp
        class Tcp; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp
        class PacketLength; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength
        class TimeToLive; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive
        class NextHop; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop
        class HeaderFlags; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags

        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork> destination_network;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort> destination_port;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags> header_flags;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp> icmp;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength> packet_length;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork> source_network;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort> source_port;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive> time_to_live;
        
}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork : public Entity
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
        YLeaf source_wild_card_bits; //type: uint8
        YLeaf source_mask; //type: string

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork : public Entity
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
        YLeaf destination_wild_card_bits; //type: uint8
        YLeaf destination_mask; //type: string

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort : public Entity
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

        YLeaf source_operator; //type: Ipv6AclOperatorEnumEnum
        YLeaf first_source_port; //type: one of uint32, enumeration
        YLeaf second_source_port; //type: one of uint32, enumeration

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort : public Entity
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

        YLeaf destination_operator; //type: Ipv6AclOperatorEnumEnum
        YLeaf first_destination_port; //type: one of uint32, enumeration
        YLeaf second_destination_port; //type: one of uint32, enumeration

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp : public Entity
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

        YLeaf icmp_type_code; //type: Ipv6AclIcmpTypeCodeEnumEnum

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp : public Entity
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

        YLeaf tcp_bits_match_operator; //type: Ipv6AclTcpMatchOperatorEnumEnum
        YLeaf tcp_bits; //type: one of uint32, enumeration
        YLeaf tcp_bits_mask; //type: one of uint32, enumeration

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength : public Entity
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

        YLeaf packet_length_operator; //type: Ipv6AclOperatorEnumEnum
        YLeaf packet_length_min; //type: uint32
        YLeaf packet_length_max; //type: uint32

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive : public Entity
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

        YLeaf time_to_live_operator; //type: Ipv6AclOperatorEnumEnum
        YLeaf time_to_live_min; //type: uint32
        YLeaf time_to_live_max; //type: uint32

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop : public Entity
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
        class NextHop1; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1
        class NextHop2; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2
        class NextHop3; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3

        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1> next_hop_1;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2> next_hop_2;
        std::shared_ptr<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3> next_hop_3;
        
}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1 : public Entity
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

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2 : public Entity
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

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3 : public Entity
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

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags : public Entity
{
    public:
        HeaderFlags();
        ~HeaderFlags();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf routing; //type: empty
        YLeaf destopts; //type: empty
        YLeaf hop_by_hop; //type: empty
        YLeaf fragments; //type: empty
        YLeaf authen; //type: empty

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags

class NextHopTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none_next_hop;
        static const Enum::YLeaf regular_next_hop;
        static const Enum::YLeaf default_next_hop;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ACL_CFG_ */

