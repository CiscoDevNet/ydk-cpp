#ifndef _CISCO_IOS_XR_IPV6_ACL_CFG_
#define _CISCO_IOS_XR_IPV6_ACL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_acl_cfg {

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

        class Prefixes; //type: Ipv6AclAndPrefixList::Prefixes
        class LogUpdate; //type: Ipv6AclAndPrefixList::LogUpdate
        class Accesses; //type: Ipv6AclAndPrefixList::Accesses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Prefixes> prefixes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::LogUpdate> log_update;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses> accesses;
        
}; // Ipv6AclAndPrefixList


class Ipv6AclAndPrefixList::Prefixes : public ydk::Entity
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

        class Prefix; //type: Ipv6AclAndPrefixList::Prefixes::Prefix

        ydk::YList prefix;
        
}; // Ipv6AclAndPrefixList::Prefixes


class Ipv6AclAndPrefixList::Prefixes::Prefix : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class PrefixListEntries; //type: Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries> prefix_list_entries;
        
}; // Ipv6AclAndPrefixList::Prefixes::Prefix


class Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries : public ydk::Entity
{
    public:
        PrefixListEntries();
        ~PrefixListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixListEntry; //type: Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry

        ydk::YList prefix_list_entry;
        
}; // Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries


class Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry : public ydk::Entity
{
    public:
        PrefixListEntry();
        ~PrefixListEntry();

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
        ydk::YLeaf grant; //type: Ipv6AclGrantEnum
        ydk::YLeaf ipv6_address_as_string; //type: string
        ydk::YLeaf zone; //type: string
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefix_mask; //type: uint8
        ydk::YLeaf match_exact_length; //type: Ipv6PrefixMatchExactLength
        ydk::YLeaf exact_prefix_length; //type: uint8
        ydk::YLeaf match_max_length; //type: Ipv6PrefixMatchMaxLength
        ydk::YLeaf max_prefix_length; //type: uint8
        ydk::YLeaf match_min_length; //type: Ipv6PrefixMatchMinLength
        ydk::YLeaf min_prefix_length; //type: uint8
        ydk::YLeaf remark; //type: string

}; // Ipv6AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry


class Ipv6AclAndPrefixList::LogUpdate : public ydk::Entity
{
    public:
        LogUpdate();
        ~LogUpdate();

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

        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf rate; //type: uint32

}; // Ipv6AclAndPrefixList::LogUpdate


class Ipv6AclAndPrefixList::Accesses : public ydk::Entity
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

        class Access; //type: Ipv6AclAndPrefixList::Accesses::Access

        ydk::YList access;
        
}; // Ipv6AclAndPrefixList::Accesses


class Ipv6AclAndPrefixList::Accesses::Access : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        class AccessListEntries; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries> access_list_entries;
        
}; // Ipv6AclAndPrefixList::Accesses::Access


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries : public ydk::Entity
{
    public:
        AccessListEntries();
        ~AccessListEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessListEntry; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry

        ydk::YList access_list_entry;
        
}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry : public ydk::Entity
{
    public:
        AccessListEntry();
        ~AccessListEntry();

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
        ydk::YLeaf grant; //type: Ipv6AclGrantEnum
        ydk::YLeaf protocol_operator; //type: Ipv6AclOperatorEnum
        ydk::YLeaf protocol; //type: one of uint32, enumeration
        ydk::YLeaf protocol2; //type: one of uint32, enumeration
        ydk::YLeaf dscp; //type: one of uint32, enumeration
        ydk::YLeaf precedence; //type: one of uint32, enumeration
        ydk::YLeaf counter_name; //type: string
        ydk::YLeaf log_option; //type: Ipv6AclLoggingEnum
        ydk::YLeaf capture; //type: boolean
        ydk::YLeaf undetermined_transport; //type: boolean
        ydk::YLeaf icmp_off; //type: empty
        ydk::YLeaf qos_group; //type: uint32
        ydk::YLeaf set_ttl; //type: uint32
        ydk::YLeaf remark; //type: string
        ydk::YLeaf source_prefix_group; //type: string
        ydk::YLeaf destination_prefix_group; //type: string
        ydk::YLeaf source_port_group; //type: string
        ydk::YLeaf destination_port_group; //type: string
        ydk::YLeaf sequence_str; //type: string
        class SourceNetwork; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork
        class DestinationNetwork; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork
        class SourcePort; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort
        class DestinationPort; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort
        class Icmp; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp
        class Tcp; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp
        class PacketLength; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength
        class TimeToLive; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive
        class DSCPValues; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DSCPValues
        class NextHop; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop
        class HeaderFlags; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork> source_network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork> destination_network;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort> source_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort> destination_port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp> icmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp> tcp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength> packet_length;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive> time_to_live;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DSCPValues> dscpvalues;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop> next_hop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags> header_flags;
        
}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork : public ydk::Entity
{
    public:
        SourceNetwork();
        ~SourceNetwork();

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
        ydk::YLeaf source_wild_card_bits; //type: uint8
        ydk::YLeaf source_mask; //type: string

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork : public ydk::Entity
{
    public:
        DestinationNetwork();
        ~DestinationNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_address; //type: string
        ydk::YLeaf destination_wild_card_bits; //type: uint8
        ydk::YLeaf destination_mask; //type: string

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort : public ydk::Entity
{
    public:
        SourcePort();
        ~SourcePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_operator; //type: Ipv6AclOperatorEnum
        ydk::YLeaf first_source_port; //type: one of uint32, enumeration
        ydk::YLeaf second_source_port; //type: one of uint32, enumeration

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort : public ydk::Entity
{
    public:
        DestinationPort();
        ~DestinationPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf destination_operator; //type: Ipv6AclOperatorEnum
        ydk::YLeaf first_destination_port; //type: one of uint32, enumeration
        ydk::YLeaf second_destination_port; //type: one of uint32, enumeration

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp : public ydk::Entity
{
    public:
        Icmp();
        ~Icmp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf icmp_type_code; //type: Ipv6AclIcmpTypeCodeEnum

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcp_bits_match_operator; //type: Ipv6AclTcpMatchOperatorEnum
        ydk::YLeaf tcp_bits; //type: Ipv6AclTcpBitsNumber
        ydk::YLeaf tcp_bits_mask; //type: Ipv6AclTcpBitsNumber

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength : public ydk::Entity
{
    public:
        PacketLength();
        ~PacketLength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_length_operator; //type: Ipv6AclOperatorEnum
        ydk::YLeaf packet_length_min; //type: uint32
        ydk::YLeaf packet_length_max; //type: uint32

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive : public ydk::Entity
{
    public:
        TimeToLive();
        ~TimeToLive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_to_live_operator; //type: Ipv6AclOperatorEnum
        ydk::YLeaf time_to_live_min; //type: uint32
        ydk::YLeaf time_to_live_max; //type: uint32

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DSCPValues : public ydk::Entity
{
    public:
        DSCPValues();
        ~DSCPValues();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dscp_operator; //type: Ipv6AclOperatorEnum
        ydk::YLeaf dscp_lower; //type: one of uint32, enumeration
        ydk::YLeaf dscp_upper; //type: one of uint32, enumeration

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DSCPValues


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop : public ydk::Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf next_hop_type; //type: NextHopType
        class NextHop1; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1
        class NextHop2; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2
        class NextHop3; //type: Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1> next_hop_1;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2> next_hop_2;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3> next_hop_3;
        
}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1 : public ydk::Entity
{
    public:
        NextHop1();
        ~NextHop1();

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

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2 : public ydk::Entity
{
    public:
        NextHop2();
        ~NextHop2();

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

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3 : public ydk::Entity
{
    public:
        NextHop3();
        ~NextHop3();

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

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3


class Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags : public ydk::Entity
{
    public:
        HeaderFlags();
        ~HeaderFlags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routing; //type: empty
        ydk::YLeaf destopts; //type: empty
        ydk::YLeaf hop_by_hop; //type: empty
        ydk::YLeaf fragments; //type: empty
        ydk::YLeaf authen; //type: empty

}; // Ipv6AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::HeaderFlags

class NextHopType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf regular_next_hop;
        static const ydk::Enum::YLeaf default_next_hop;

        static int get_enum_value(const std::string & name) {
            if (name == "regular-next-hop") return 1;
            if (name == "default-next-hop") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ACL_CFG_ */

