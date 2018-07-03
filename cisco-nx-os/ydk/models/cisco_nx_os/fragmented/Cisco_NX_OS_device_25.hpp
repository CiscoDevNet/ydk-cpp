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


class System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList : public ydk::Entity
{
    public:
        PortMemberList();
        ~PortMemberList();

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
        ydk::YLeaf portop; //type: uint8
        ydk::YLeaf port1; //type: uint16
        ydk::YLeaf port2; //type: uint16
        ydk::YLeaf configstatus; //type: uint8
        ydk::YLeaf usersetbit; //type: uint64

}; // System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList


class System::AclItems::VlanItems : public ydk::Entity
{
    public:
        VlanItems();
        ~VlanItems();

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

        class VLANACLList; //type: System::AclItems::VlanItems::VLANACLList

        ydk::YList vlanacl_list;
        
}; // System::AclItems::VlanItems


class System::AclItems::VlanItems::VLANACLList : public ydk::Entity
{
    public:
        VLANACLList();
        ~VLANACLList();

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
        ydk::YLeaf maxseq; //type: uint32
        class SeqItems; //type: System::AclItems::VlanItems::VLANACLList::SeqItems
        class VlanlistItems; //type: System::AclItems::VlanItems::VLANACLList::VlanlistItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems::VLANACLList::SeqItems> seq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems::VLANACLList::VlanlistItems> vlanlist_items;
        
}; // System::AclItems::VlanItems::VLANACLList


class System::AclItems::VlanItems::VLANACLList::SeqItems : public ydk::Entity
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

        class VLANSeqList; //type: System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList

        ydk::YList vlanseq_list;
        
}; // System::AclItems::VlanItems::VLANACLList::SeqItems


class System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList : public ydk::Entity
{
    public:
        VLANSeqList();
        ~VLANSeqList();

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
        ydk::YLeaf peracestatistics; //type: uint8
        class MatchItems; //type: System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems
        class ActionItems; //type: System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems> match_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems> action_items;
        
}; // System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList


class System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems : public ydk::Entity
{
    public:
        MatchItems();
        ~MatchItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VLANACLMatchList; //type: System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList

        ydk::YList vlanaclmatch_list;
        
}; // System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems


class System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList : public ydk::Entity
{
    public:
        VLANACLMatchList();
        ~VLANACLMatchList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acltype; //type: uint16
        ydk::YLeaf aclname; //type: string

}; // System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::MatchItems::VLANACLMatchList


class System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems : public ydk::Entity
{
    public:
        ActionItems();
        ~ActionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actiontype; //type: AclVAclActionType
        ydk::YLeaf log; //type: uint8
        ydk::YLeaf redirectintf; //type: string

}; // System::AclItems::VlanItems::VLANACLList::SeqItems::VLANSeqList::ActionItems


class System::AclItems::VlanItems::VLANACLList::VlanlistItems : public ydk::Entity
{
    public:
        VlanlistItems();
        ~VlanlistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf list; //type: string
        ydk::YLeaf operation_; //type: uint8
        ydk::YLeaf listoper; //type: string
        ydk::YLeaf listerr; //type: string
        ydk::YLeaf timestamp; //type: string

}; // System::AclItems::VlanItems::VLANACLList::VlanlistItems


class System::AclItems::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

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

        class StatClearItems; //type: System::AclItems::MacItems::StatClearItems
        class PolicyItems; //type: System::AclItems::MacItems::PolicyItems
        class NameItems; //type: System::AclItems::MacItems::NameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::StatClearItems> statclear_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems> name_items;
        
}; // System::AclItems::MacItems


class System::AclItems::MacItems::StatClearItems : public ydk::Entity
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
        ydk::YLeaf timestamp; //type: string

}; // System::AclItems::MacItems::StatClearItems


class System::AclItems::MacItems::PolicyItems : public ydk::Entity
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

        class IngressItems; //type: System::AclItems::MacItems::PolicyItems::IngressItems
        class EgressItems; //type: System::AclItems::MacItems::PolicyItems::EgressItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems> ingress_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems> egress_items;
        
}; // System::AclItems::MacItems::PolicyItems


class System::AclItems::MacItems::PolicyItems::IngressItems : public ydk::Entity
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

        class IntfItems; //type: System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems
        class VtyItems; //type: System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems> vty_items;
        
}; // System::AclItems::MacItems::PolicyItems::IngressItems


class System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems


class System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList : public ydk::Entity
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
        class AclItems_; //type: System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList


class System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
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

}; // System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::AclItems_


class System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
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

}; // System::AclItems::MacItems::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems


class System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems : public ydk::Entity
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

        class AclItems_; //type: System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems


class System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_ : public ydk::Entity
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

}; // System::AclItems::MacItems::PolicyItems::IngressItems::VtyItems::AclItems_


class System::AclItems::MacItems::PolicyItems::EgressItems : public ydk::Entity
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

        class IntfItems; //type: System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems
        class VtyItems; //type: System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems> vty_items;
        
}; // System::AclItems::MacItems::PolicyItems::EgressItems


class System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems


class System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList : public ydk::Entity
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
        class AclItems_; //type: System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList


class System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
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

}; // System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::AclItems_


class System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
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

}; // System::AclItems::MacItems::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems


class System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems : public ydk::Entity
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

        class AclItems_; //type: System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems


class System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_ : public ydk::Entity
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

}; // System::AclItems::MacItems::PolicyItems::EgressItems::VtyItems::AclItems_


class System::AclItems::MacItems::NameItems : public ydk::Entity
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

        class ACLList; //type: System::AclItems::MacItems::NameItems::ACLList

        ydk::YList acl_list;
        
}; // System::AclItems::MacItems::NameItems


class System::AclItems::MacItems::NameItems::ACLList : public ydk::Entity
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
        ydk::YLeaf peracestatistics; //type: uint8
        ydk::YLeaf configstatus; //type: uint32
        class ReseqItems; //type: System::AclItems::MacItems::NameItems::ACLList::ReseqItems
        class SeqItems; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::ReseqItems> reseq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::SeqItems> seq_items;
        
}; // System::AclItems::MacItems::NameItems::ACLList


class System::AclItems::MacItems::NameItems::ACLList::ReseqItems : public ydk::Entity
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
        ydk::YLeaf reseqdone; //type: boolean
        class ReseqItems_; //type: System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_> reseq_items;
        
}; // System::AclItems::MacItems::NameItems::ACLList::ReseqItems


class System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_ : public ydk::Entity
{
    public:
        ReseqItems_();
        ~ReseqItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReseqResultEntryList; //type: System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList

        ydk::YList reseqresultentry_list;
        
}; // System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_


class System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList : public ydk::Entity
{
    public:
        ReseqResultEntryList();
        ~ReseqResultEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf beforeseq; //type: uint32
        ydk::YLeaf afterseq; //type: uint32

}; // System::AclItems::MacItems::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList


class System::AclItems::MacItems::NameItems::ACLList::SeqItems : public ydk::Entity
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

        class SEQList; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList

        ydk::YList seq_list;
        
}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems


class System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList : public ydk::Entity
{
    public:
        SEQList();
        ~SEQList();

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
        class AceItems; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems
        class RemarkItems; //type: System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems> ace_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems> remark_items;
        
}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList


class System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems : public ydk::Entity
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

        ydk::YLeaf protocol; //type: uint32
        ydk::YLeaf cos; //type: uint8
        ydk::YLeaf redirect; //type: string
        ydk::YLeaf timerange; //type: string
        ydk::YLeaf vlan; //type: uint32
        ydk::YLeaf erspandscp; //type: uint8
        ydk::YLeaf erspangre; //type: uint32
        ydk::YLeaf usersetbit; //type: uint64
        ydk::YLeaf action; //type: AclActionType
        ydk::YLeaf srcprefix; //type: string
        ydk::YLeaf srcprefixmask; //type: string
        ydk::YLeaf dstprefix; //type: string
        ydk::YLeaf dstprefixmask; //type: string
        ydk::YLeaf packets; //type: uint64

}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::AceItems


class System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems : public ydk::Entity
{
    public:
        RemarkItems();
        ~RemarkItems();

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
        ydk::YLeaf remark; //type: string

}; // System::AclItems::MacItems::NameItems::ACLList::SeqItems::SEQList::RemarkItems


class System::AclItems::Ipv4Items : public ydk::Entity
{
    public:
        Ipv4Items();
        ~Ipv4Items();

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

        class StatClearItems; //type: System::AclItems::Ipv4Items::StatClearItems
        class PolicyItems; //type: System::AclItems::Ipv4Items::PolicyItems
        class NameItems; //type: System::AclItems::Ipv4Items::NameItems
        class ONameItems; //type: System::AclItems::Ipv4Items::ONameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::StatClearItems> statclear_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::NameItems> name_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::ONameItems> oname_items;
        
}; // System::AclItems::Ipv4Items


class System::AclItems::Ipv4Items::StatClearItems : public ydk::Entity
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
        ydk::YLeaf timestamp; //type: string

}; // System::AclItems::Ipv4Items::StatClearItems


class System::AclItems::Ipv4Items::PolicyItems : public ydk::Entity
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

        class IngressItems; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems
        class EgressItems; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems> ingress_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems> egress_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems : public ydk::Entity
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

        class IntfItems; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems
        class VtyItems; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems> vty_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList : public ydk::Entity
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
        class AclItems_; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
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

}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::AclItems_


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
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

}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::IntfItems::IfList::PortaclItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems : public ydk::Entity
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

        class AclItems_; //type: System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems


class System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_ : public ydk::Entity
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

}; // System::AclItems::Ipv4Items::PolicyItems::IngressItems::VtyItems::AclItems_


class System::AclItems::Ipv4Items::PolicyItems::EgressItems : public ydk::Entity
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

        class IntfItems; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems
        class VtyItems; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems> vty_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList : public ydk::Entity
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
        class AclItems_; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_
        class PortaclItems; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems> portacl_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_ : public ydk::Entity
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

}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::AclItems_


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems : public ydk::Entity
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

}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::IntfItems::IfList::PortaclItems


class System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems : public ydk::Entity
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

        class AclItems_; //type: System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems::AclItems_> acl_items;
        
}; // System::AclItems::Ipv4Items::PolicyItems::EgressItems::VtyItems


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
        ydk::YLeaf reseqdone; //type: boolean
        class ReseqItems_; //type: System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_> reseq_items;
        
}; // System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems


class System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_ : public ydk::Entity
{
    public:
        ReseqItems_();
        ~ReseqItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReseqResultEntryList; //type: System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList

        ydk::YList reseqresultentry_list;
        
}; // System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_


class System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList : public ydk::Entity
{
    public:
        ReseqResultEntryList();
        ~ReseqResultEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf beforeseq; //type: uint32
        ydk::YLeaf afterseq; //type: uint32

}; // System::AclItems::Ipv4Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList


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
        ydk::YLeaf remark; //type: string
        ydk::YLeaf usersetbit; //type: uint64
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
        ydk::YLeaf configstatus; //type: uint32
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
        ydk::YLeaf usersetbit; //type: uint64

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
        ydk::YLeaf timestamp; //type: string

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
        ydk::YLeaf reseqdone; //type: boolean
        class ReseqItems_; //type: System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_> reseq_items;
        
}; // System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems


class System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_ : public ydk::Entity
{
    public:
        ReseqItems_();
        ~ReseqItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReseqResultEntryList; //type: System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList

        ydk::YList reseqresultentry_list;
        
}; // System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_


class System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList : public ydk::Entity
{
    public:
        ReseqResultEntryList();
        ~ReseqResultEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf beforeseq; //type: uint32
        ydk::YLeaf afterseq; //type: uint32

}; // System::AclItems::Ipv6Items::NameItems::ACLList::ReseqItems::ReseqItems_::ReseqResultEntryList


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
        ydk::YLeaf remark; //type: string
        ydk::YLeaf usersetbit; //type: uint64
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
        ydk::YLeaf configstatus; //type: uint32
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
        ydk::YLeaf usersetbit; //type: uint64

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf pinstnodeid; //type: uint32
        ydk::YLeaf startnodeidarr; //type: string
        ydk::YLeaf endnodeidarr; //type: string
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
        ydk::YLeaf rulenodeid; //type: uint32
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
        ydk::YLeaf fltgroupnodeid; //type: uint32
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
        ydk::YLeaf parentid; //type: uint32
        ydk::YLeaf entrynodeid; //type: uint32

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
        ydk::YLeaf prio; //type: uint8
        ydk::YLeaf descr; //type: string
        ydk::YLeaf prot; //type: uint8
        ydk::YLeaf sfromport; //type: uint16
        ydk::YLeaf stoport; //type: uint16
        ydk::YLeaf dfromport; //type: uint16
        ydk::YLeaf dtoport; //type: uint16
        ydk::YLeaf tcprules; //type: string
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

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
        ydk::YLeaf operstqual; //type: string

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
        ydk::YLeaf operstqual; //type: string

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
        ydk::YLeaf operstqual; //type: string

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
        ydk::YLeaf tcl; //type: RelnClassId

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

        class HwTelemetryItems; //type: System::AnalyticsItems::HwTelemetryItems
        class InstItems; //type: System::AnalyticsItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems> hw_telemetry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::InstItems> inst_items;
        
}; // System::AnalyticsItems


class System::AnalyticsItems::HwTelemetryItems : public ydk::Entity
{
    public:
        HwTelemetryItems();
        ~HwTelemetryItems();

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

        class StreamingstatsItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems> streamingstats_items;
        
}; // System::AnalyticsItems::HwTelemetryItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems : public ydk::Entity
{
    public:
        StreamingstatsItems();
        ~StreamingstatsItems();

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

        class InstItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems> inst_items;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList : public ydk::Entity
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

        ydk::YLeaf mode; //type: SsxModeT
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class RecordpItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems
        class CollectorItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems
        class MonitorItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems
        class FwdinstItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems> recordp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems> collector_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems> monitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::FwdinstItems> fwdinst_items;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems : public ydk::Entity
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

        class RecordPList; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList

        ydk::YList recordp_list;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList : public ydk::Entity
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
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::RecordpItems::RecordPList


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems : public ydk::Entity
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

        class CollectorList; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList

        ydk::YList collector_list;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList : public ydk::Entity
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
        ydk::YLeaf mtu; //type: uint16

}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::CollectorItems::CollectorList


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems : public ydk::Entity
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

        class MonitorList; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList

        ydk::YList monitor_list;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList : public ydk::Entity
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
        class RsrecordPAttItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems
        class RscollectorAttItems; //type: System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems> rsrecordpatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RscollectorAttItems> rscollectoratt_items;
        
}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList


class System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems : public ydk::Entity
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::AnalyticsItems::HwTelemetryItems::StreamingstatsItems::InstItems::InstList::MonitorItems::MonitorList::RsrecordPAttItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_25_ */

