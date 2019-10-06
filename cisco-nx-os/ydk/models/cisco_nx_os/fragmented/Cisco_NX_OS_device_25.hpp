#ifndef _CISCO_NX_OS_DEVICE_25_
#define _CISCO_NX_OS_DEVICE_25_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_24.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_


class System::AclItems::Ipv4Items::NameItems : public ydk::Entity
{
    public:
        NameItems();
        ~NameItems();

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

        class ACLList; //type: System::AclItems::Ipv4Items::NameItems::ACLList

        ydk::YList acl_list;
        
}; // System::AclItems::Ipv4Items::NameItems


class System::AclItems::Ipv4Items::NameItems::ACLList : public ydk::Entity
{
    public:
        ACLList();
        ~ACLList();

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
        ydk::YLeaf upid; //type: uint32
        ydk::YLeaf peracestatistics; //type: uint8
        ydk::YLeaf configstatus; //type: uint32
        class ReseqItems; //type: System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems
        class SeqItems; //type: System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems> reseq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems> seq_items;
        
}; // System::AclItems::Ipv4Items::NameItems::ACLList


class System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems : public ydk::Entity
{
    public:
        ReseqItems();
        ~ReseqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf step; //type: uint32

}; // System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems


class System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems : public ydk::Entity
{
    public:
        SeqItems();
        ~SeqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ACEList; //type: System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList

        ydk::YList ace_list;
        
}; // System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems


class System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList : public ydk::Entity
{
    public:
        ACEList();
        ~ACEList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf protocolmask; //type: uint8
        ydk::YLeaf srcprefix; //type: string
        ydk::YLeaf srcprefixmask; //type: string
        ydk::YLeaf srcprefixlength; //type: uint8
        ydk::YLeaf dstprefix; //type: string
        ydk::YLeaf dstprefixmask; //type: string
        ydk::YLeaf dstprefixlength; //type: uint8
        ydk::YLeaf precedence; //type: uint8
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf icmpstr; //type: uint16
        ydk::YLeaf icmptype; //type: uint16
        ydk::YLeaf icmpcode; //type: uint16
        ydk::YLeaf tos; //type: uint8
        ydk::YLeaf configstatus; //type: uint8
        ydk::YLeaf upid; //type: uint32
        ydk::YLeaf remark; //type: string
        ydk::YLeaf action; //type: AclActionType
        ydk::YLeaf srcportop; //type: uint8
        ydk::YLeaf srcport1; //type: uint16
        ydk::YLeaf srcport2; //type: uint16
        ydk::YLeaf srcportmask; //type: uint16
        ydk::YLeaf dstportop; //type: uint8
        ydk::YLeaf dstport1; //type: uint16
        ydk::YLeaf dstport2; //type: uint16
        ydk::YLeaf dstportmask; //type: uint16
        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf pktlenop; //type: uint8
        ydk::YLeaf pktlen1; //type: uint16
        ydk::YLeaf pktlen2; //type: uint16
        ydk::YLeaf urg; //type: boolean
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf psh; //type: boolean
        ydk::YLeaf rst; //type: boolean
        ydk::YLeaf syn; //type: boolean
        ydk::YLeaf fin; //type: boolean
        ydk::YLeaf est; //type: boolean
        ydk::YLeaf rev; //type: boolean
        ydk::YLeaf tcpflagsmask; //type: uint8
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf fragment; //type: boolean
        ydk::YLeaf capturesession; //type: uint16
        ydk::YLeaf httpoption; //type: AclHttpOptionType
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf tcpoptionlength; //type: uint32
        ydk::YLeaf timerange; //type: string
        ydk::YLeaf srcaddrgroup; //type: string
        ydk::YLeaf dstaddrgroup; //type: string
        ydk::YLeaf srcportgroup; //type: string
        ydk::YLeaf dstportgroup; //type: string
        ydk::YLeaf redirect; //type: string
        class UdfItems; //type: System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems> udf_items;
        
}; // System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList


class System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems : public ydk::Entity
{
    public:
        UdfItems();
        ~UdfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udf1name; //type: string
        ydk::YLeaf udf1val; //type: uint16
        ydk::YLeaf udf1mask; //type: uint16
        ydk::YLeaf udf2name; //type: string
        ydk::YLeaf udf2val; //type: uint16
        ydk::YLeaf udf2mask; //type: uint16
        ydk::YLeaf udf3name; //type: string
        ydk::YLeaf udf3val; //type: uint16
        ydk::YLeaf udf3mask; //type: uint16
        ydk::YLeaf udf4name; //type: string
        ydk::YLeaf udf4val; //type: uint16
        ydk::YLeaf udf4mask; //type: uint16
        ydk::YLeaf udf5name; //type: string
        ydk::YLeaf udf5val; //type: uint16
        ydk::YLeaf udf5mask; //type: uint16
        ydk::YLeaf udf6name; //type: string
        ydk::YLeaf udf6val; //type: uint16
        ydk::YLeaf udf6mask; //type: uint16
        ydk::YLeaf udf7name; //type: string
        ydk::YLeaf udf7val; //type: uint16
        ydk::YLeaf udf7mask; //type: uint16
        ydk::YLeaf udf8name; //type: string
        ydk::YLeaf udf8val; //type: uint16
        ydk::YLeaf udf8mask; //type: uint16
        ydk::YLeaf udf9name; //type: string
        ydk::YLeaf udf9val; //type: uint16
        ydk::YLeaf udf9mask; //type: uint16
        ydk::YLeaf udf10name; //type: string
        ydk::YLeaf udf10val; //type: uint16
        ydk::YLeaf udf10mask; //type: uint16
        ydk::YLeaf udf11name; //type: string
        ydk::YLeaf udf11val; //type: uint16
        ydk::YLeaf udf11mask; //type: uint16
        ydk::YLeaf udf12name; //type: string
        ydk::YLeaf udf12val; //type: uint16
        ydk::YLeaf udf12mask; //type: uint16
        ydk::YLeaf udf13name; //type: string
        ydk::YLeaf udf13val; //type: uint16
        ydk::YLeaf udf13mask; //type: uint16
        ydk::YLeaf udf14name; //type: string
        ydk::YLeaf udf14val; //type: uint16
        ydk::YLeaf udf14mask; //type: uint16
        ydk::YLeaf udf15name; //type: string
        ydk::YLeaf udf15val; //type: uint16
        ydk::YLeaf udf15mask; //type: uint16
        ydk::YLeaf udf16name; //type: string
        ydk::YLeaf udf16val; //type: uint16
        ydk::YLeaf udf16mask; //type: uint16
        ydk::YLeaf udf17name; //type: string
        ydk::YLeaf udf17val; //type: uint16
        ydk::YLeaf udf17mask; //type: uint16
        ydk::YLeaf udf18name; //type: string
        ydk::YLeaf udf18val; //type: uint16
        ydk::YLeaf udf18mask; //type: uint16
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv4Items::NameItems::ACLList::SeqItems::ACEList::UdfItems


class System::AclItems::Ipv4Items::ONameItems : public ydk::Entity
{
    public:
        ONameItems();
        ~ONameItems();

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

        class AddrGroupList; //type: System::AclItems::Ipv4Items::ONameItems::AddrGroupList

        ydk::YList addrgroup_list;
        
}; // System::AclItems::Ipv4Items::ONameItems


class System::AclItems::Ipv4Items::ONameItems::AddrGroupList : public ydk::Entity
{
    public:
        AddrGroupList();
        ~AddrGroupList();

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
        ydk::YLeaf upid; //type: uint32
        class SeqItems; //type: System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems> seq_items;
        
}; // System::AclItems::Ipv4Items::ONameItems::AddrGroupList


class System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems : public ydk::Entity
{
    public:
        SeqItems();
        ~SeqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddrMemberList; //type: System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList

        ydk::YList addrmember_list;
        
}; // System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems


class System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList : public ydk::Entity
{
    public:
        AddrMemberList();
        ~AddrMemberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefixmask; //type: string
        ydk::YLeaf prefixlength; //type: uint8
        ydk::YLeaf configstatus; //type: uint8
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv4Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList


class System::AclItems::Ipv6Items : public ydk::Entity
{
    public:
        Ipv6Items();
        ~Ipv6Items();

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

        ydk::YLeaf upid; //type: uint32
        class StatClearItems; //type: System::AclItems::Ipv6Items::StatClearItems
        class PolicyItems; //type: System::AclItems::Ipv6Items::PolicyItems
        class NameItems; //type: System::AclItems::Ipv6Items::NameItems
        class ONameItems; //type: System::AclItems::Ipv6Items::ONameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::StatClearItems> statclear_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::NameItems> name_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::ONameItems> oname_items;
        
}; // System::AclItems::Ipv6Items


class System::AclItems::Ipv6Items::StatClearItems : public ydk::Entity
{
    public:
        StatClearItems();
        ~StatClearItems();

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
        ydk::YLeaf timestamp; //type: one of uint64, string

}; // System::AclItems::Ipv6Items::StatClearItems


class System::AclItems::Ipv6Items::PolicyItems : public ydk::Entity
{
    public:
        PolicyItems();
        ~PolicyItems();

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

        ydk::YLeaf upid; //type: uint32
        class IngressItems; //type: System::AclItems::Ipv6Items::PolicyItems::IngressItems
        class EgressItems; //type: System::AclItems::Ipv6Items::PolicyItems::EgressItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::IngressItems> ingress_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::EgressItems> egress_items;
        
}; // System::AclItems::Ipv6Items::PolicyItems


class System::AclItems::Ipv6Items::PolicyItems::IngressItems : public ydk::Entity
{
    public:
        IngressItems();
        ~IngressItems();

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

        ydk::YLeaf upid; //type: uint32
        class IntfItems; //type: System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems
        class VtyItems; //type: System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems> vty_items;
        
}; // System::AclItems::Ipv6Items::PolicyItems::IngressItems


class System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

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

        class IfList; //type: System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems


class System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

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
        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList


class System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_


class System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
{
    public:
        PortaclItems();
        ~PortaclItems();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv6Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems


class System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems : public ydk::Entity
{
    public:
        VtyItems();
        ~VtyItems();

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

        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems


class System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv6Items::PolicyItems::IngressItems::VtyItems::AclItems_


class System::AclItems::Ipv6Items::PolicyItems::EgressItems : public ydk::Entity
{
    public:
        EgressItems();
        ~EgressItems();

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

        ydk::YLeaf upid; //type: uint32
        class IntfItems; //type: System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems
        class VtyItems; //type: System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems> vty_items;
        
}; // System::AclItems::Ipv6Items::PolicyItems::EgressItems


class System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems : public ydk::Entity
{
    public:
        IntfItems();
        ~IntfItems();

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

        class IfList; //type: System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems


class System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList : public ydk::Entity
{
    public:
        IfList();
        ~IfList();

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
        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList


class System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_


class System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
{
    public:
        PortaclItems();
        ~PortaclItems();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv6Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems


class System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems : public ydk::Entity
{
    public:
        VtyItems();
        ~VtyItems();

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

        ydk::YLeaf upid; //type: uint32
        class AclItems_; //type: System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems


class System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_ : public ydk::Entity
{
    public:
        AclItems_();
        ~AclItems_();

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
        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv6Items::PolicyItems::EgressItems::VtyItems::AclItems_


class System::AclItems::Ipv6Items::NameItems : public ydk::Entity
{
    public:
        NameItems();
        ~NameItems();

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

        class ACLList; //type: System::AclItems::Ipv6Items::NameItems::ACLList

        ydk::YList acl_list;
        
}; // System::AclItems::Ipv6Items::NameItems


class System::AclItems::Ipv6Items::NameItems::ACLList : public ydk::Entity
{
    public:
        ACLList();
        ~ACLList();

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
        ydk::YLeaf upid; //type: uint32
        ydk::YLeaf peracestatistics; //type: uint8
        ydk::YLeaf configstatus; //type: uint32
        class ReseqItems; //type: System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems
        class SeqItems; //type: System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems> reseq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems> seq_items;
        
}; // System::AclItems::Ipv6Items::NameItems::ACLList


class System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems : public ydk::Entity
{
    public:
        ReseqItems();
        ~ReseqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint32
        ydk::YLeaf step; //type: uint32

}; // System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems


class System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems : public ydk::Entity
{
    public:
        SeqItems();
        ~SeqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ACEList; //type: System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList

        ydk::YList ace_list;
        
}; // System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems


class System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList : public ydk::Entity
{
    public:
        ACEList();
        ~ACEList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf protocolmask; //type: uint8
        ydk::YLeaf srcprefix; //type: string
        ydk::YLeaf srcprefixmask; //type: string
        ydk::YLeaf srcprefixlength; //type: uint8
        ydk::YLeaf dstprefix; //type: string
        ydk::YLeaf dstprefixmask; //type: string
        ydk::YLeaf dstprefixlength; //type: uint8
        ydk::YLeaf flowlabel; //type: uint32
        ydk::YLeaf icmpstr; //type: uint16
        ydk::YLeaf icmptype; //type: uint16
        ydk::YLeaf icmpcode; //type: uint16
        ydk::YLeaf configstatus; //type: uint8
        ydk::YLeaf upid; //type: uint32
        ydk::YLeaf remark; //type: string
        ydk::YLeaf action; //type: AclActionType
        ydk::YLeaf srcportop; //type: uint8
        ydk::YLeaf srcport1; //type: uint16
        ydk::YLeaf srcport2; //type: uint16
        ydk::YLeaf srcportmask; //type: uint16
        ydk::YLeaf dstportop; //type: uint8
        ydk::YLeaf dstport1; //type: uint16
        ydk::YLeaf dstport2; //type: uint16
        ydk::YLeaf dstportmask; //type: uint16
        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf pktlenop; //type: uint8
        ydk::YLeaf pktlen1; //type: uint16
        ydk::YLeaf pktlen2; //type: uint16
        ydk::YLeaf urg; //type: boolean
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf psh; //type: boolean
        ydk::YLeaf rst; //type: boolean
        ydk::YLeaf syn; //type: boolean
        ydk::YLeaf fin; //type: boolean
        ydk::YLeaf est; //type: boolean
        ydk::YLeaf rev; //type: boolean
        ydk::YLeaf tcpflagsmask; //type: uint8
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf fragment; //type: boolean
        ydk::YLeaf capturesession; //type: uint16
        ydk::YLeaf httpoption; //type: AclHttpOptionType
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf tcpoptionlength; //type: uint32
        ydk::YLeaf timerange; //type: string
        ydk::YLeaf srcaddrgroup; //type: string
        ydk::YLeaf dstaddrgroup; //type: string
        ydk::YLeaf srcportgroup; //type: string
        ydk::YLeaf dstportgroup; //type: string
        ydk::YLeaf redirect; //type: string

}; // System::AclItems::Ipv6Items::NameItems::ACLList::SeqItems::ACEList


class System::AclItems::Ipv6Items::ONameItems : public ydk::Entity
{
    public:
        ONameItems();
        ~ONameItems();

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

        class AddrGroupList; //type: System::AclItems::Ipv6Items::ONameItems::AddrGroupList

        ydk::YList addrgroup_list;
        
}; // System::AclItems::Ipv6Items::ONameItems


class System::AclItems::Ipv6Items::ONameItems::AddrGroupList : public ydk::Entity
{
    public:
        AddrGroupList();
        ~AddrGroupList();

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
        ydk::YLeaf upid; //type: uint32
        class SeqItems; //type: System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems> seq_items;
        
}; // System::AclItems::Ipv6Items::ONameItems::AddrGroupList


class System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems : public ydk::Entity
{
    public:
        SeqItems();
        ~SeqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AddrMemberList; //type: System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList

        ydk::YList addrmember_list;
        
}; // System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems


class System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList : public ydk::Entity
{
    public:
        AddrMemberList();
        ~AddrMemberList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefixmask; //type: string
        ydk::YLeaf prefixlength; //type: uint8
        ydk::YLeaf configstatus; //type: uint8
        ydk::YLeaf upid; //type: uint32

}; // System::AclItems::Ipv6Items::ONameItems::AddrGroupList::SeqItems::AddrMemberList


class System::ActrlItems : public ydk::Entity
{
    public:
        ActrlItems();
        ~ActrlItems();

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
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class AuxItems; //type: System::ActrlItems::AuxItems
        class FiltItems; //type: System::ActrlItems::FiltItems
        class InstItems; //type: System::ActrlItems::InstItems
        class ScopeItems; //type: System::ActrlItems::ScopeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::AuxItems> aux_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems> filt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::ScopeItems> scope_items;
        
}; // System::ActrlItems


class System::ActrlItems::AuxItems : public ydk::Entity
{
    public:
        AuxItems();
        ~AuxItems();

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
        class ScopeItems; //type: System::ActrlItems::AuxItems::ScopeItems
        class RuleItems; //type: System::ActrlItems::AuxItems::RuleItems
        class FltItems; //type: System::ActrlItems::AuxItems::FltItems
        class MgmtruleItems; //type: System::ActrlItems::AuxItems::MgmtruleItems
        class MgmtauxfltItems; //type: System::ActrlItems::AuxItems::MgmtauxfltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::AuxItems::ScopeItems> scope_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::AuxItems::RuleItems> rule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::AuxItems::FltItems> flt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::AuxItems::MgmtruleItems> mgmtrule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::AuxItems::MgmtauxfltItems> mgmtauxflt_items;
        
}; // System::ActrlItems::AuxItems


class System::ActrlItems::AuxItems::ScopeItems : public ydk::Entity
{
    public:
        ScopeItems();
        ~ScopeItems();

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

        class AuxScopeList; //type: System::ActrlItems::AuxItems::ScopeItems::AuxScopeList

        ydk::YList auxscope_list;
        
}; // System::ActrlItems::AuxItems::ScopeItems


class System::ActrlItems::AuxItems::ScopeItems::AuxScopeList : public ydk::Entity
{
    public:
        AuxScopeList();
        ~AuxScopeList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::ActrlItems::AuxItems::ScopeItems::AuxScopeList


class System::ActrlItems::AuxItems::RuleItems : public ydk::Entity
{
    public:
        RuleItems();
        ~RuleItems();

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

        class AuxRuleList; //type: System::ActrlItems::AuxItems::RuleItems::AuxRuleList

        ydk::YList auxrule_list;
        
}; // System::ActrlItems::AuxItems::RuleItems


class System::ActrlItems::AuxItems::RuleItems::AuxRuleList : public ydk::Entity
{
    public:
        AuxRuleList();
        ~AuxRuleList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf fltid; //type: uint32
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf scopeid; //type: uint32
        ydk::YLeaf direction; //type: ActrlDirection
        ydk::YLeaf name; //type: string

}; // System::ActrlItems::AuxItems::RuleItems::AuxRuleList


class System::ActrlItems::AuxItems::FltItems : public ydk::Entity
{
    public:
        FltItems();
        ~FltItems();

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

        class AuxFltList; //type: System::ActrlItems::AuxItems::FltItems::AuxFltList

        ydk::YList auxflt_list;
        
}; // System::ActrlItems::AuxItems::FltItems


class System::ActrlItems::AuxItems::FltItems::AuxFltList : public ydk::Entity
{
    public:
        AuxFltList();
        ~AuxFltList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf ruleidarr; //type: string
        ydk::YLeaf ruleindex; //type: uint16
        ydk::YLeaf name; //type: string
        class EntItems; //type: System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems> ent_items;
        
}; // System::ActrlItems::AuxItems::FltItems::AuxFltList


class System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AuxEntryList; //type: System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList

        ydk::YList auxentry_list;
        
}; // System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems


class System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList : public ydk::Entity
{
    public:
        AuxEntryList();
        ~AuxEntryList();

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

}; // System::ActrlItems::AuxItems::FltItems::AuxFltList::EntItems::AuxEntryList


class System::ActrlItems::AuxItems::MgmtruleItems : public ydk::Entity
{
    public:
        MgmtruleItems();
        ~MgmtruleItems();

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

        class MgmtAuxRuleList; //type: System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList

        ydk::YList mgmtauxrule_list;
        
}; // System::ActrlItems::AuxItems::MgmtruleItems


class System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList : public ydk::Entity
{
    public:
        MgmtAuxRuleList();
        ~MgmtAuxRuleList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf ctx_id; //type: uint32
        ydk::YLeaf scope_id; //type: uint32
        ydk::YLeaf fltid; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::ActrlItems::AuxItems::MgmtruleItems::MgmtAuxRuleList


class System::ActrlItems::AuxItems::MgmtauxfltItems : public ydk::Entity
{
    public:
        MgmtauxfltItems();
        ~MgmtauxfltItems();

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

        class MgmtAuxFltList; //type: System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList

        ydk::YList mgmtauxflt_list;
        
}; // System::ActrlItems::AuxItems::MgmtauxfltItems


class System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList : public ydk::Entity
{
    public:
        MgmtAuxFltList();
        ~MgmtAuxFltList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf mgmtruleidarr; //type: string
        ydk::YLeaf mgmtruleindex; //type: uint16
        ydk::YLeaf name; //type: string

}; // System::ActrlItems::AuxItems::MgmtauxfltItems::MgmtAuxFltList


class System::ActrlItems::FiltItems : public ydk::Entity
{
    public:
        FiltItems();
        ~FiltItems();

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

        class FltList; //type: System::ActrlItems::FiltItems::FltList

        ydk::YList flt_list;
        
}; // System::ActrlItems::FiltItems


class System::ActrlItems::FiltItems::FltList : public ydk::Entity
{
    public:
        FltList();
        ~FltList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        class EntItems; //type: System::ActrlItems::FiltItems::FltList::EntItems
        class RtfvToRemoteRFltPItems; //type: System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems
        class RtfvToRemoteRFltAttItems; //type: System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems
        class RsrfltpConnItems; //type: System::ActrlItems::FiltItems::FltList::RsrfltpConnItems
        class RtvnsConnToFltInstItems; //type: System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems
        class RtvzFwdRFltPAttItems; //type: System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems
        class RtvzRevRFltPAttItems; //type: System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems
        class RtvzTabooRFltAttItems; //type: System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems
        class RtvzRFltAttItems; //type: System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems> rtfvtoremoterfltp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems> rtfvtoremoterfltatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::RsrfltpConnItems> rsrfltpconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems> rtvnsconntofltinst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems> rtvzfwdrfltpatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems> rtvzrevrfltpatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems> rtvztaboorfltatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems> rtvzrfltatt_items;
        
}; // System::ActrlItems::FiltItems::FltList


class System::ActrlItems::FiltItems::FltList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EntryList; //type: System::ActrlItems::FiltItems::FltList::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::ActrlItems::FiltItems::FltList::EntItems


class System::ActrlItems::FiltItems::FltList::EntItems::EntryList : public ydk::Entity
{
    public:
        EntryList();
        ~EntryList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf applytofrag; //type: boolean
        ydk::YLeaf ethert; //type: L2EtherType
        ydk::YLeaf arpopc; //type: ArpOpcode
        ydk::YLeaf icmpv4t; //type: uint8
        ydk::YLeaf icmpv6t; //type: uint8

}; // System::ActrlItems::FiltItems::FltList::EntItems::EntryList


class System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems : public ydk::Entity
{
    public:
        RtfvToRemoteRFltPItems();
        ~RtfvToRemoteRFltPItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvToRemoteRFltPList; //type: System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList

        ydk::YList rtfvtoremoterfltp_list;
        
}; // System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems


class System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList : public ydk::Entity
{
    public:
        RtFvToRemoteRFltPList();
        ~RtFvToRemoteRFltPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltPItems::RtFvToRemoteRFltPList


class System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems : public ydk::Entity
{
    public:
        RtfvToRemoteRFltAttItems();
        ~RtfvToRemoteRFltAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvToRemoteRFltAttList; //type: System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList

        ydk::YList rtfvtoremoterfltatt_list;
        
}; // System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems


class System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList : public ydk::Entity
{
    public:
        RtFvToRemoteRFltAttList();
        ~RtFvToRemoteRFltAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::FiltItems::FltList::RtfvToRemoteRFltAttItems::RtFvToRemoteRFltAttList


class System::ActrlItems::FiltItems::FltList::RsrfltpConnItems : public ydk::Entity
{
    public:
        RsrfltpConnItems();
        ~RsrfltpConnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::FiltItems::FltList::RsrfltpConnItems


class System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems : public ydk::Entity
{
    public:
        RtvnsConnToFltInstItems();
        ~RtvnsConnToFltInstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtVnsConnToFltInstList; //type: System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList

        ydk::YList rtvnsconntofltinst_list;
        
}; // System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems


class System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList : public ydk::Entity
{
    public:
        RtVnsConnToFltInstList();
        ~RtVnsConnToFltInstList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::FiltItems::FltList::RtvnsConnToFltInstItems::RtVnsConnToFltInstList


class System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems : public ydk::Entity
{
    public:
        RtvzFwdRFltPAttItems();
        ~RtvzFwdRFltPAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtVzFwdRFltPAttList; //type: System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList

        ydk::YList rtvzfwdrfltpatt_list;
        
}; // System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems


class System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList : public ydk::Entity
{
    public:
        RtVzFwdRFltPAttList();
        ~RtVzFwdRFltPAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::FiltItems::FltList::RtvzFwdRFltPAttItems::RtVzFwdRFltPAttList


class System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems : public ydk::Entity
{
    public:
        RtvzRevRFltPAttItems();
        ~RtvzRevRFltPAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtVzRevRFltPAttList; //type: System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList

        ydk::YList rtvzrevrfltpatt_list;
        
}; // System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems


class System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList : public ydk::Entity
{
    public:
        RtVzRevRFltPAttList();
        ~RtVzRevRFltPAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::FiltItems::FltList::RtvzRevRFltPAttItems::RtVzRevRFltPAttList


class System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems : public ydk::Entity
{
    public:
        RtvzTabooRFltAttItems();
        ~RtvzTabooRFltAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtVzTabooRFltAttList; //type: System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList

        ydk::YList rtvztaboorfltatt_list;
        
}; // System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems


class System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList : public ydk::Entity
{
    public:
        RtVzTabooRFltAttList();
        ~RtVzTabooRFltAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::FiltItems::FltList::RtvzTabooRFltAttItems::RtVzTabooRFltAttList


class System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems : public ydk::Entity
{
    public:
        RtvzRFltAttItems();
        ~RtvzRFltAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtVzRFltAttList; //type: System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList

        ydk::YList rtvzrfltatt_list;
        
}; // System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems


class System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList : public ydk::Entity
{
    public:
        RtVzRFltAttList();
        ~RtVzRFltAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::FiltItems::FltList::RtvzRFltAttItems::RtVzRFltAttList


class System::ActrlItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        ydk::YLeaf accctrl; //type: string
        ydk::YLeaf logclrintvl; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string

}; // System::ActrlItems::InstItems


class System::ActrlItems::ScopeItems : public ydk::Entity
{
    public:
        ScopeItems();
        ~ScopeItems();

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

        class ScopeList; //type: System::ActrlItems::ScopeItems::ScopeList

        ydk::YList scope_list;
        
}; // System::ActrlItems::ScopeItems


class System::ActrlItems::ScopeItems::ScopeList : public ydk::Entity
{
    public:
        ScopeList();
        ~ScopeList();

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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf seclbl; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class RuleItems; //type: System::ActrlItems::ScopeItems::ScopeList::RuleItems
        class MrItems; //type: System::ActrlItems::ScopeItems::ScopeList::MrItems
        class SrItems; //type: System::ActrlItems::ScopeItems::ScopeList::SrItems
        class RstenConnItems; //type: System::ActrlItems::ScopeItems::ScopeList::RstenConnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::ScopeItems::ScopeList::RuleItems> rule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::ScopeItems::ScopeList::MrItems> mr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::ScopeItems::ScopeList::SrItems> sr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ActrlItems::ScopeItems::ScopeList::RstenConnItems> rstenconn_items;
        
}; // System::ActrlItems::ScopeItems::ScopeList


class System::ActrlItems::ScopeItems::ScopeList::RuleItems : public ydk::Entity
{
    public:
        RuleItems();
        ~RuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList

        ydk::YList rule_list;
        
}; // System::ActrlItems::ScopeItems::ScopeList::RuleItems


class System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf scopeid; //type: uint32
        ydk::YLeaf spctag; //type: uint32
        ydk::YLeaf dpctag; //type: uint32
        ydk::YLeaf fltid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf type; //type: ActrlRuleT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf direction; //type: ActrlDirection
        ydk::YLeaf action; //type: string
        ydk::YLeaf qosgrp; //type: QosPrio
        ydk::YLeaf markdscp; //type: uint8
        ydk::YLeaf operst; //type: ActrlOperSt

}; // System::ActrlItems::ScopeItems::ScopeList::RuleItems::RuleList


class System::ActrlItems::ScopeItems::ScopeList::MrItems : public ydk::Entity
{
    public:
        MrItems();
        ~MrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MgmtRuleList; //type: System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList

        ydk::YList mgmtrule_list;
        
}; // System::ActrlItems::ScopeItems::ScopeList::MrItems


class System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList : public ydk::Entity
{
    public:
        MgmtRuleList();
        ~MgmtRuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scopeid; //type: uint32
        ydk::YLeaf spctag; //type: uint32
        ydk::YLeaf dpctag; //type: uint32
        ydk::YLeaf fltid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf type; //type: ActrlRuleT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf direction; //type: ActrlDirection
        ydk::YLeaf action; //type: string
        ydk::YLeaf qosgrp; //type: QosPrio
        ydk::YLeaf markdscp; //type: uint8
        ydk::YLeaf operst; //type: ActrlOperSt

}; // System::ActrlItems::ScopeItems::ScopeList::MrItems::MgmtRuleList


class System::ActrlItems::ScopeItems::ScopeList::SrItems : public ydk::Entity
{
    public:
        SrItems();
        ~SrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SnmpRuleList; //type: System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList

        ydk::YList snmprule_list;
        
}; // System::ActrlItems::ScopeItems::ScopeList::SrItems


class System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList : public ydk::Entity
{
    public:
        SnmpRuleList();
        ~SnmpRuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scopeid; //type: uint32
        ydk::YLeaf spctag; //type: uint32
        ydk::YLeaf dpctag; //type: uint32
        ydk::YLeaf fltid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf type; //type: ActrlRuleT
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf direction; //type: ActrlDirection
        ydk::YLeaf action; //type: string
        ydk::YLeaf qosgrp; //type: QosPrio
        ydk::YLeaf markdscp; //type: uint8
        ydk::YLeaf operst; //type: ActrlOperSt

}; // System::ActrlItems::ScopeItems::ScopeList::SrItems::SnmpRuleList


class System::ActrlItems::ScopeItems::ScopeList::RstenConnItems : public ydk::Entity
{
    public:
        RstenConnItems();
        ~RstenConnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsTenConnList; //type: System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList

        ydk::YList rstenconn_list;
        
}; // System::ActrlItems::ScopeItems::ScopeList::RstenConnItems


class System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList : public ydk::Entity
{
    public:
        RsTenConnList();
        ~RsTenConnList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::ActrlItems::ScopeItems::ScopeList::RstenConnItems::RsTenConnList


class System::ActrlcapprovItems : public ydk::Entity
{
    public:
        ActrlcapprovItems();
        ~ActrlcapprovItems();

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

        class ProvList; //type: System::ActrlcapprovItems::ProvList

        ydk::YList prov_list;
        
}; // System::ActrlcapprovItems


class System::ActrlcapprovItems::ProvList : public ydk::Entity
{
    public:
        ProvList();
        ~ProvList();

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

        ydk::YLeaf subj; //type: ActrlcapSubj
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf total; //type: uint32
        ydk::YLeaf remaining; //type: uint32
        ydk::YLeaf utilization; //type: uint8

}; // System::ActrlcapprovItems::ProvList


class System::AnalyticsItems : public ydk::Entity
{
    public:
        AnalyticsItems();
        ~AnalyticsItems();

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

        class InstItems; //type: System::AnalyticsItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems> inst_items;
        
}; // System::AnalyticsItems


class System::AnalyticsItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        class InstList; //type: System::AnalyticsItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::AnalyticsItems::InstItems


class System::AnalyticsItems::InstItems::InstList : public ydk::Entity
{
    public:
        InstList();
        ~InstList();

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

        ydk::YLeaf mode; //type: AnalyticsModeT
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class CapabilityItems; //type: System::AnalyticsItems::InstItems::InstList::CapabilityItems
        class SlotItems; //type: System::AnalyticsItems::InstItems::InstList::SlotItems
        class ControllerItems; //type: System::AnalyticsItems::InstItems::InstList::ControllerItems
        class RecordpItems; //type: System::AnalyticsItems::InstItems::InstList::RecordpItems
        class CollectorItems; //type: System::AnalyticsItems::InstItems::InstList::CollectorItems
        class MonitorItems; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems
        class ProfItems; //type: System::AnalyticsItems::InstItems::InstList::ProfItems
        class FwdinstItems; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems
        class PolicyItems; //type: System::AnalyticsItems::InstItems::InstList::PolicyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::CapabilityItems> capability_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::SlotItems> slot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ControllerItems> controller_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::RecordpItems> recordp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::CollectorItems> collector_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ProfItems> prof_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::FwdinstItems> fwdinst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::PolicyItems> policy_items;
        
}; // System::AnalyticsItems::InstItems::InstList


class System::AnalyticsItems::InstItems::InstList::CapabilityItems : public ydk::Entity
{
    public:
        CapabilityItems();
        ~CapabilityItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fabricmode; //type: AnalyticsCModeT
        ydk::YLeaf buckethashwidth; //type: uint16
        ydk::YLeaf numtcament; //type: uint32
        ydk::YLeaf numtcamentperv4; //type: uint16
        ydk::YLeaf numtcamentperv6; //type: uint16
        ydk::YLeaf configlatencyresfactor; //type: AnalyticsConfigLatencyResFactorT
        ydk::YLeaf oportsupport; //type: AnalyticsOportSupportT
        ydk::YLeaf oclasssupport; //type: AnalyticsOportSupportT

}; // System::AnalyticsItems::InstItems::InstList::CapabilityItems


class System::AnalyticsItems::InstItems::InstList::SlotItems : public ydk::Entity
{
    public:
        SlotItems();
        ~SlotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SlotList; //type: System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList

        ydk::YList slot_list;
        
}; // System::AnalyticsItems::InstItems::InstList::SlotItems


class System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList : public ydk::Entity
{
    public:
        SlotList();
        ~SlotList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slotid; //type: uint16
        class OclassItems; //type: System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems> oclass_items;
        
}; // System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList


class System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems : public ydk::Entity
{
    public:
        OclassItems();
        ~OclassItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OclassList; //type: System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList

        ydk::YList oclass_list;
        
}; // System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems


class System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList : public ydk::Entity
{
    public:
        OclassList();
        ~OclassList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf prioritymapping; //type: string

}; // System::AnalyticsItems::InstItems::InstList::SlotItems::SlotList::OclassItems::OclassList


class System::AnalyticsItems::InstItems::InstList::ControllerItems : public ydk::Entity
{
    public:
        ControllerItems();
        ~ControllerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ControllerList; //type: System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList

        ydk::YList controller_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ControllerItems


class System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList : public ydk::Entity
{
    public:
        ControllerList();
        ~ControllerList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf srcaddr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::ControllerItems::ControllerList


class System::AnalyticsItems::InstItems::InstList::RecordpItems : public ydk::Entity
{
    public:
        RecordpItems();
        ~RecordpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RecordPList; //type: System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList

        ydk::YList recordp_list;
        
}; // System::AnalyticsItems::InstItems::InstList::RecordpItems


class System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList : public ydk::Entity
{
    public:
        RecordPList();
        ~RecordPList();

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
        ydk::YLeaf match; //type: string
        ydk::YLeaf collect; //type: string
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::RecordpItems::RecordPList


class System::AnalyticsItems::InstItems::InstList::CollectorItems : public ydk::Entity
{
    public:
        CollectorItems();
        ~CollectorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CollectorList; //type: System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList

        ydk::YList collector_list;
        
}; // System::AnalyticsItems::InstItems::InstList::CollectorItems


class System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList : public ydk::Entity
{
    public:
        CollectorList();
        ~CollectorList();

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
        ydk::YLeaf ver; //type: AnalyticsCollVersion
        ydk::YLeaf descr; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf srcaddr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::CollectorItems::CollectorList


class System::AnalyticsItems::InstItems::InstList::MonitorItems : public ydk::Entity
{
    public:
        MonitorItems();
        ~MonitorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MonitorList; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList

        ydk::YList monitor_list;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList : public ydk::Entity
{
    public:
        MonitorList();
        ~MonitorList();

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
        ydk::YLeaf descr; //type: string
        class CollectorbucketItems; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems
        class RsrecordPAttItems; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems> collectorbucket_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems> rsrecordpatt_items;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems : public ydk::Entity
{
    public:
        CollectorbucketItems();
        ~CollectorbucketItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CollectorBucketList; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList

        ydk::YList collectorbucket_list;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList : public ydk::Entity
{
    public:
        CollectorBucketList();
        ~CollectorBucketList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf hashlo; //type: uint32
        ydk::YLeaf hashhi; //type: uint32
        ydk::YLeaf descr; //type: string
        class RscollectorAttItems; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems> rscollectoratt_items;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems : public ydk::Entity
{
    public:
        RscollectorAttItems();
        ~RscollectorAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsCollectorAttList; //type: System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList

        ydk::YList rscollectoratt_list;
        
}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList : public ydk::Entity
{
    public:
        RsCollectorAttList();
        ~RsCollectorAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::CollectorbucketItems::CollectorBucketList::RscollectorAttItems::RsCollectorAttList


class System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems : public ydk::Entity
{
    public:
        RsrecordPAttItems();
        ~RsrecordPAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::AnalyticsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems


class System::AnalyticsItems::InstItems::InstList::ProfItems : public ydk::Entity
{
    public:
        ProfItems();
        ~ProfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProfileList; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList

        ydk::YList profile_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList : public ydk::Entity
{
    public:
        ProfileList();
        ~ProfileList();

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
        ydk::YLeaf collectintvl; //type: uint32
        ydk::YLeaf srcport; //type: uint32
        ydk::YLeaf ippktidshift; //type: uint8
        ydk::YLeaf burstintvlshift; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf seqnumguessthreshlo; //type: uint32
        ydk::YLeaf seqnumguessthreshhi; //type: uint32
        ydk::YLeaf descr; //type: string
        class PayloadlenbinItems; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems
        class TcpopthdrlenbinItems; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems
        class RcvwindowszbinItems; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems> payloadlenbin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems> tcpopthdrlenbin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems> rcvwindowszbin_items;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems : public ydk::Entity
{
    public:
        PayloadlenbinItems();
        ~PayloadlenbinItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PayloadLenBinList; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList

        ydk::YList payloadlenbin_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList : public ydk::Entity
{
    public:
        PayloadLenBinList();
        ~PayloadLenBinList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::PayloadlenbinItems::PayloadLenBinList


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems : public ydk::Entity
{
    public:
        TcpopthdrlenbinItems();
        ~TcpopthdrlenbinItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TCPOptHdrLenBinList; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList

        ydk::YList tcpopthdrlenbin_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList : public ydk::Entity
{
    public:
        TCPOptHdrLenBinList();
        ~TCPOptHdrLenBinList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::TcpopthdrlenbinItems::TCPOptHdrLenBinList


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems : public ydk::Entity
{
    public:
        RcvwindowszbinItems();
        ~RcvwindowszbinItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RcvWindowSzBinList; //type: System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList

        ydk::YList rcvwindowszbin_list;
        
}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems


class System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList : public ydk::Entity
{
    public:
        RcvWindowSzBinList();
        ~RcvWindowSzBinList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint8
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::ProfItems::ProfileList::RcvwindowszbinItems::RcvWindowSzBinList


class System::AnalyticsItems::InstItems::InstList::FwdinstItems : public ydk::Entity
{
    public:
        FwdinstItems();
        ~FwdinstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FwdInstTargetList; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList

        ydk::YList fwdinsttarget_list;
        
}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems


class System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList : public ydk::Entity
{
    public:
        FwdInstTargetList();
        ~FwdInstTargetList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf collectorid; //type: uint32
        ydk::YLeaf defpolicy; //type: AnalyticsDefPolicyT
        ydk::YLeaf ipv4hit; //type: uint32
        ydk::YLeaf ipv6hit; //type: uint32
        ydk::YLeaf cehit; //type: uint32
        ydk::YLeaf ipv4create; //type: uint32
        ydk::YLeaf ipv6create; //type: uint32
        ydk::YLeaf cecreate; //type: uint32
        ydk::YLeaf exportcount; //type: uint32
        ydk::YLeaf skipcount; //type: uint32
        ydk::YLeaf flttype; //type: AnalyticsFltType
        ydk::YLeaf dir; //type: AnalyticsDirectionT
        class RsprofAttItems; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems
        class RspolicyAttItems; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems
        class DbgStatisticsItems; //type: System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems> rsprofatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems> rspolicyatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems> dbgstatistics_items;
        
}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList


class System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems : public ydk::Entity
{
    public:
        RsprofAttItems();
        ~RsprofAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RsprofAttItems


class System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems : public ydk::Entity
{
    public:
        RspolicyAttItems();
        ~RspolicyAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::RspolicyAttItems


class System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems : public ydk::Entity
{
    public:
        DbgStatisticsItems();
        ~DbgStatisticsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flowcreatece; //type: uint64
        ydk::YLeaf flowcreateipv4; //type: uint64
        ydk::YLeaf flowcreateipv6; //type: uint64
        ydk::YLeaf flowhitce; //type: uint64
        ydk::YLeaf flowhitipv4; //type: uint64
        ydk::YLeaf flowhitipv6; //type: uint64
        ydk::YLeaf packetsseen; //type: uint64
        ydk::YLeaf export_; //type: uint64
        ydk::YLeaf skipcollect; //type: uint64
        ydk::YLeaf lastcollectts; //type: uint64

}; // System::AnalyticsItems::InstItems::InstList::FwdinstItems::FwdInstTargetList::DbgStatisticsItems


class System::AnalyticsItems::InstItems::InstList::PolicyItems : public ydk::Entity
{
    public:
        PolicyItems();
        ~PolicyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyList; //type: System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList

        ydk::YList policy_list;
        
}; // System::AnalyticsItems::InstItems::InstList::PolicyItems


class System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList : public ydk::Entity
{
    public:
        PolicyList();
        ~PolicyList();

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
        ydk::YLeaf descr; //type: string
        class AclItems; //type: System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems> acl_items;
        
}; // System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList


class System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems : public ydk::Entity
{
    public:
        AclItems();
        ~AclItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchAclList; //type: System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList

        ydk::YList matchacl_list;
        
}; // System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems


class System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList : public ydk::Entity
{
    public:
        MatchAclList();
        ~MatchAclList();

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
        ydk::YLeaf aclname; //type: string
        ydk::YLeaf flttype; //type: AnalyticsFltType
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::InstItems::InstList::PolicyItems::PolicyList::AclItems::MatchAclList


class System::HwtelemetryItems : public ydk::Entity
{
    public:
        HwtelemetryItems();
        ~HwtelemetryItems();

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

        class FteItems; //type: System::HwtelemetryItems::FteItems
        class InbandtelemetryItems; //type: System::HwtelemetryItems::InbandtelemetryItems
        class NetflowItems; //type: System::HwtelemetryItems::NetflowItems
        class SflowItems; //type: System::HwtelemetryItems::SflowItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::FteItems> fte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems> inbandtelemetry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::NetflowItems> netflow_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::SflowItems> sflow_items;
        
}; // System::HwtelemetryItems


class System::HwtelemetryItems::FteItems : public ydk::Entity
{
    public:
        FteItems();
        ~FteItems();

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

        ydk::YLeaf enable; //type: boolean

}; // System::HwtelemetryItems::FteItems


class System::HwtelemetryItems::InbandtelemetryItems : public ydk::Entity
{
    public:
        InbandtelemetryItems();
        ~InbandtelemetryItems();

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

        class InstItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems> inst_items;
        
}; // System::HwtelemetryItems::InbandtelemetryItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems : public ydk::Entity
{
    public:
        InstItems();
        ~InstItems();

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

        class InstList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList : public ydk::Entity
{
    public:
        InstList();
        ~InstList();

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

        ydk::YLeaf mode; //type: InbandTelemetryModeT
        ydk::YLeaf profile; //type: InbandTelemetryProfile
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class WatchlistItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems
        class DroplistItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems
        class RecordpItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems
        class CollectorItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems
        class FlowprofItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems
        class QueueprofItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems
        class MonitorItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems
        class FwdinstItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems> watchlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems> droplist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems> recordp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems> collector_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems> flowprof_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems> queueprof_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems> fwdinst_items;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems : public ydk::Entity
{
    public:
        WatchlistItems();
        ~WatchlistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class WatchlistAclList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList

        ydk::YList watchlistacl_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList : public ydk::Entity
{
    public:
        WatchlistAclList();
        ~WatchlistAclList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf peracestatistics; //type: uint8
        ydk::YLeaf configstatus; //type: uint32
        class AceItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems> ace_items;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems : public ydk::Entity
{
    public:
        AceItems();
        ~AceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class WatchlistAceList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList

        ydk::YList watchlistace_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList : public ydk::Entity
{
    public:
        WatchlistAceList();
        ~WatchlistAceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf remark; //type: string
        ydk::YLeaf action; //type: AclActionType
        ydk::YLeaf srcportop; //type: uint8
        ydk::YLeaf srcport1; //type: uint16
        ydk::YLeaf srcport2; //type: uint16
        ydk::YLeaf srcportmask; //type: uint16
        ydk::YLeaf dstportop; //type: uint8
        ydk::YLeaf dstport1; //type: uint16
        ydk::YLeaf dstport2; //type: uint16
        ydk::YLeaf dstportmask; //type: uint16
        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf pktlenop; //type: uint8
        ydk::YLeaf pktlen1; //type: uint16
        ydk::YLeaf pktlen2; //type: uint16
        ydk::YLeaf urg; //type: boolean
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf psh; //type: boolean
        ydk::YLeaf rst; //type: boolean
        ydk::YLeaf syn; //type: boolean
        ydk::YLeaf fin; //type: boolean
        ydk::YLeaf est; //type: boolean
        ydk::YLeaf rev; //type: boolean
        ydk::YLeaf tcpflagsmask; //type: uint8
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf fragment; //type: boolean
        ydk::YLeaf capturesession; //type: uint16
        ydk::YLeaf httpoption; //type: AclHttpOptionType
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf tcpoptionlength; //type: uint32
        ydk::YLeaf timerange; //type: string
        ydk::YLeaf srcaddrgroup; //type: string
        ydk::YLeaf dstaddrgroup; //type: string
        ydk::YLeaf srcportgroup; //type: string
        ydk::YLeaf dstportgroup; //type: string
        ydk::YLeaf redirect; //type: string
        ydk::YLeaf flttype; //type: InbandTelemetryFltType
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf protocolmask; //type: uint8
        ydk::YLeaf srcprefix; //type: string
        ydk::YLeaf srcprefixmask; //type: string
        ydk::YLeaf srcprefixlength; //type: uint8
        ydk::YLeaf dstprefix; //type: string
        ydk::YLeaf dstprefixmask; //type: string
        ydk::YLeaf dstprefixlength; //type: uint8

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::WatchlistItems::WatchlistAclList::AceItems::WatchlistAceList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems : public ydk::Entity
{
    public:
        DroplistItems();
        ~DroplistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DroplistAclList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList

        ydk::YList droplistacl_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList : public ydk::Entity
{
    public:
        DroplistAclList();
        ~DroplistAclList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf peracestatistics; //type: uint8
        ydk::YLeaf configstatus; //type: uint32
        class AceItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems> ace_items;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems : public ydk::Entity
{
    public:
        AceItems();
        ~AceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DroplistAceList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList

        ydk::YList droplistace_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList : public ydk::Entity
{
    public:
        DroplistAceList();
        ~DroplistAceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf remark; //type: string
        ydk::YLeaf action; //type: AclActionType
        ydk::YLeaf srcportop; //type: uint8
        ydk::YLeaf srcport1; //type: uint16
        ydk::YLeaf srcport2; //type: uint16
        ydk::YLeaf srcportmask; //type: uint16
        ydk::YLeaf dstportop; //type: uint8
        ydk::YLeaf dstport1; //type: uint16
        ydk::YLeaf dstport2; //type: uint16
        ydk::YLeaf dstportmask; //type: uint16
        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf pktlenop; //type: uint8
        ydk::YLeaf pktlen1; //type: uint16
        ydk::YLeaf pktlen2; //type: uint16
        ydk::YLeaf urg; //type: boolean
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf psh; //type: boolean
        ydk::YLeaf rst; //type: boolean
        ydk::YLeaf syn; //type: boolean
        ydk::YLeaf fin; //type: boolean
        ydk::YLeaf est; //type: boolean
        ydk::YLeaf rev; //type: boolean
        ydk::YLeaf tcpflagsmask; //type: uint8
        ydk::YLeaf packets; //type: uint64
        ydk::YLeaf fragment; //type: boolean
        ydk::YLeaf capturesession; //type: uint16
        ydk::YLeaf httpoption; //type: AclHttpOptionType
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf tcpoptionlength; //type: uint32
        ydk::YLeaf timerange; //type: string
        ydk::YLeaf srcaddrgroup; //type: string
        ydk::YLeaf dstaddrgroup; //type: string
        ydk::YLeaf srcportgroup; //type: string
        ydk::YLeaf dstportgroup; //type: string
        ydk::YLeaf redirect; //type: string
        ydk::YLeaf flttype; //type: InbandTelemetryFltType
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf protocolmask; //type: uint8
        ydk::YLeaf srcprefix; //type: string
        ydk::YLeaf srcprefixmask; //type: string
        ydk::YLeaf srcprefixlength; //type: uint8
        ydk::YLeaf dstprefix; //type: string
        ydk::YLeaf dstprefixmask; //type: string
        ydk::YLeaf dstprefixlength; //type: uint8

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::DroplistItems::DroplistAclList::AceItems::DroplistAceList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems : public ydk::Entity
{
    public:
        RecordpItems();
        ~RecordpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RecordPList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList

        ydk::YList recordp_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList : public ydk::Entity
{
    public:
        RecordPList();
        ~RecordPList();

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
        ydk::YLeaf collect0; //type: string
        ydk::YLeaf descr; //type: string

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::RecordpItems::RecordPList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems : public ydk::Entity
{
    public:
        CollectorItems();
        ~CollectorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CollectorList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList

        ydk::YList collector_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList : public ydk::Entity
{
    public:
        CollectorList();
        ~CollectorList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf dstaddr; //type: string
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf sequencenumber; //type: uint32

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::CollectorItems::CollectorList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems : public ydk::Entity
{
    public:
        FlowprofItems();
        ~FlowprofItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlowProfileList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList

        ydk::YList flowprofile_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList : public ydk::Entity
{
    public:
        FlowProfileList();
        ~FlowProfileList();

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
        ydk::YLeaf dscp; //type: uint16
        ydk::YLeaf dscpmask; //type: uint16
        ydk::YLeaf age; //type: uint16
        ydk::YLeaf latencyquant; //type: uint16
        ydk::YLeaf descr; //type: string

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FlowprofItems::FlowProfileList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems : public ydk::Entity
{
    public:
        QueueprofItems();
        ~QueueprofItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QueueProfileList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList

        ydk::YList queueprofile_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList : public ydk::Entity
{
    public:
        QueueProfileList();
        ~QueueProfileList();

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
        ydk::YLeaf depth; //type: uint32
        ydk::YLeaf latency; //type: uint32
        ydk::YLeaf breach; //type: uint16
        ydk::YLeaf taildrop; //type: boolean
        ydk::YLeaf descr; //type: string

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::QueueprofItems::QueueProfileList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems : public ydk::Entity
{
    public:
        MonitorItems();
        ~MonitorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MonitorList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList

        ydk::YList monitor_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList : public ydk::Entity
{
    public:
        MonitorList();
        ~MonitorList();

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
        ydk::YLeaf descr; //type: string
        class RsrecordPAttItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems
        class RscollectorAttItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems
        class RswatchlistAttItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems
        class RsdroplistAttItems; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems> rsrecordpatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems> rscollectoratt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems> rswatchlistatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems> rsdroplistatt_items;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems : public ydk::Entity
{
    public:
        RsrecordPAttItems();
        ~RsrecordPAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems : public ydk::Entity
{
    public:
        RscollectorAttItems();
        ~RscollectorAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsCollectorAttList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList

        ydk::YList rscollectoratt_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList : public ydk::Entity
{
    public:
        RsCollectorAttList();
        ~RsCollectorAttList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems::RsCollectorAttList


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems : public ydk::Entity
{
    public:
        RswatchlistAttItems();
        ~RswatchlistAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RswatchlistAttItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems : public ydk::Entity
{
    public:
        RsdroplistAttItems();
        ~RsdroplistAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string

}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::MonitorItems::MonitorList::RsdroplistAttItems


class System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems : public ydk::Entity
{
    public:
        FwdinstItems();
        ~FwdinstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FwdInstTargetList; //type: System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems::FwdInstTargetList

        ydk::YList fwdinsttarget_list;
        
}; // System::HwtelemetryItems::InbandtelemetryItems::InstItems::InstList::FwdinstItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_25_ */

