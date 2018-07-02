#ifndef _CISCO_NX_OS_DEVICE_36_
#define _CISCO_NX_OS_DEVICE_36_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_35.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtDstV6AttList();
        ~RtRtmapRtDstV6AttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtDstV6AttItems::RtRtmapRtDstV6AttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems : public ydk::Entity
{
    public:
        RtrtmapRtNhAttItems();
        ~RtrtmapRtNhAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtNhAttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList

        ydk::YList rtrtmaprtnhatt_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList : public ydk::Entity
{
    public:
        RtRtmapRtNhAttList();
        ~RtRtmapRtNhAttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhAttItems::RtRtmapRtNhAttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems : public ydk::Entity
{
    public:
        RtrtmapRtNhV6AttItems();
        ~RtrtmapRtNhV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtNhV6AttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList

        ydk::YList rtrtmaprtnhv6att_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtNhV6AttList();
        ~RtRtmapRtNhV6AttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtNhV6AttItems::RtRtmapRtNhV6AttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems : public ydk::Entity
{
    public:
        RtrtmapRtSrcAttItems();
        ~RtrtmapRtSrcAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtSrcAttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList

        ydk::YList rtrtmaprtsrcatt_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList : public ydk::Entity
{
    public:
        RtRtmapRtSrcAttList();
        ~RtRtmapRtSrcAttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcAttItems::RtRtmapRtSrcAttList


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems : public ydk::Entity
{
    public:
        RtrtmapRtSrcV6AttItems();
        ~RtrtmapRtSrcV6AttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtRtmapRtSrcV6AttList; //type: System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList

        ydk::YList rtrtmaprtsrcv6att_list;
        
}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems


class System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList : public ydk::Entity
{
    public:
        RtRtmapRtSrcV6AttList();
        ~RtRtmapRtSrcV6AttList();

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

}; // System::RpmItems::Pfxlistv6Items::RuleV6List::RtrtmapRtSrcV6AttItems::RtRtmapRtSrcV6AttList


class System::RpmItems::RtregcomItems : public ydk::Entity
{
    public:
        RtregcomItems();
        ~RtregcomItems();

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

        class RuleList; //type: System::RpmItems::RtregcomItems::RuleList

        ydk::YList rule_list;
        
}; // System::RpmItems::RtregcomItems


class System::RpmItems::RtregcomItems::RuleList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: RtcomComT
        ydk::YLeaf mode; //type: RtcomMode
        class EntItems; //type: System::RpmItems::RtregcomItems::RuleList::EntItems
        class RtRegCommAttItems; //type: System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtregcomItems::RuleList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems> rtregcommatt_items;
        
}; // System::RpmItems::RtregcomItems::RuleList


class System::RpmItems::RtregcomItems::RuleList::EntItems : public ydk::Entity
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

        class EntryList; //type: System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList

        ydk::YList entry_list;
        
}; // System::RpmItems::RtregcomItems::RuleList::EntItems


class System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList : public ydk::Entity
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

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf action; //type: RtfltAction
        ydk::YLeaf regex; //type: string
        class ItemItems; //type: System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems> item_items;
        
}; // System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList


class System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems : public ydk::Entity
{
    public:
        ItemItems();
        ~ItemItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ItemList; //type: System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList

        ydk::YList item_list;
        
}; // System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems


class System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList : public ydk::Entity
{
    public:
        ItemList();
        ~ItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::RpmItems::RtregcomItems::RuleList::EntItems::EntryList::ItemItems::ItemList


class System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems : public ydk::Entity
{
    public:
        RtRegCommAttItems();
        ~RtRegCommAttItems();

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

}; // System::RpmItems::RtregcomItems::RuleList::RtRegCommAttItems


class System::IpSrcIfItems : public ydk::Entity
{
    public:
        IpSrcIfItems();
        ~IpSrcIfItems();

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

        class DnsItems; //type: System::IpSrcIfItems::DnsItems
        class TftpItems; //type: System::IpSrcIfItems::TftpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::DnsItems> dns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpSrcIfItems::TftpItems> tftp_items;
        
}; // System::IpSrcIfItems


class System::IpSrcIfItems::DnsItems : public ydk::Entity
{
    public:
        DnsItems();
        ~DnsItems();

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

        class DnsSrcIfList; //type: System::IpSrcIfItems::DnsItems::DnsSrcIfList

        ydk::YList dnssrcif_list;
        
}; // System::IpSrcIfItems::DnsItems


class System::IpSrcIfItems::DnsItems::DnsSrcIfList : public ydk::Entity
{
    public:
        DnsSrcIfList();
        ~DnsSrcIfList();

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

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::DnsItems::DnsSrcIfList


class System::IpSrcIfItems::TftpItems : public ydk::Entity
{
    public:
        TftpItems();
        ~TftpItems();

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

        class TftpList; //type: System::IpSrcIfItems::TftpItems::TftpList

        ydk::YList tftp_list;
        
}; // System::IpSrcIfItems::TftpItems


class System::IpSrcIfItems::TftpItems::TftpList : public ydk::Entity
{
    public:
        TftpList();
        ~TftpList();

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

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::IpSrcIfItems::TftpItems::TftpList


class System::SysmgrItems : public ydk::Entity
{
    public:
        SysmgrItems();
        ~SysmgrItems();

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
        class SysItems; //type: System::SysmgrItems::SysItems
        class SysCfgItems; //type: System::SysmgrItems::SysCfgItems
        class CoreItems; //type: System::SysmgrItems::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SysItems> sys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SysCfgItems> syscfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::CoreItems> core_items;
        
}; // System::SysmgrItems


class System::SysmgrItems::SysItems : public ydk::Entity
{
    public:
        SysItems();
        ~SysItems();

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

        ydk::YLeaf rdmode; //type: SysmgrRdMode
        ydk::YLeaf name; //type: string
        class SupItems; //type: System::SysmgrItems::SysItems::SupItems
        class ImageItems; //type: System::SysmgrItems::SysItems::ImageItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SysItems::SupItems> sup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SysmgrItems::SysItems::ImageItems> image_items;
        
}; // System::SysmgrItems::SysItems


class System::SysmgrItems::SysItems::SupItems : public ydk::Entity
{
    public:
        SupItems();
        ~SupItems();

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

        class SupStList; //type: System::SysmgrItems::SysItems::SupItems::SupStList

        ydk::YList supst_list;
        
}; // System::SysmgrItems::SysItems::SupItems


class System::SysmgrItems::SysItems::SupItems::SupStList : public ydk::Entity
{
    public:
        SupStList();
        ~SupStList();

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

        ydk::YLeaf type; //type: SysmgrSupT
        ydk::YLeaf operst; //type: SysmgrSupSt
        ydk::YLeaf rdst; //type: SysmgrRdSt
        ydk::YLeaf name; //type: string

}; // System::SysmgrItems::SysItems::SupItems::SupStList


class System::SysmgrItems::SysItems::ImageItems : public ydk::Entity
{
    public:
        ImageItems();
        ~ImageItems();

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

        class FwStList; //type: System::SysmgrItems::SysItems::ImageItems::FwStList

        ydk::YList fwst_list;
        
}; // System::SysmgrItems::SysItems::ImageItems


class System::SysmgrItems::SysItems::ImageItems::FwStList : public ydk::Entity
{
    public:
        FwStList();
        ~FwStList();

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

        ydk::YLeaf type; //type: SysmgrFwT
        ydk::YLeaf ver; //type: string
        ydk::YLeaf mode; //type: SysmgrFwMode
        ydk::YLeaf name; //type: string

}; // System::SysmgrItems::SysItems::ImageItems::FwStList


class System::SysmgrItems::SysCfgItems : public ydk::Entity
{
    public:
        SysCfgItems();
        ~SysCfgItems();

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

        ydk::YLeaf cfgmode; //type: SysmgrCfgMode
        ydk::YLeaf operdatamode; //type: SysmgrOperDataMode

}; // System::SysmgrItems::SysCfgItems


class System::SysmgrItems::CoreItems : public ydk::Entity
{
    public:
        CoreItems();
        ~CoreItems();

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

        class CoresList; //type: System::SysmgrItems::CoreItems::CoresList

        ydk::YList cores_list;
        
}; // System::SysmgrItems::CoreItems


class System::SysmgrItems::CoreItems::CoresList : public ydk::Entity
{
    public:
        CoresList();
        ~CoresList();

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

        ydk::YLeaf dest; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::SysmgrItems::CoreItems::CoresList


class System::TcpudpItems : public ydk::Entity
{
    public:
        TcpudpItems();
        ~TcpudpItems();

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
        class InstItems; //type: System::TcpudpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TcpudpItems::InstItems> inst_items;
        
}; // System::TcpudpItems


class System::TcpudpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf synwaittime; //type: uint16
        ydk::YLeaf pathmtudiscovery; //type: NwAdminSt_
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::TcpudpItems::InstItems


class System::TermlItems : public ydk::Entity
{
    public:
        TermlItems();
        ~TermlItems();

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

        class LnItems; //type: System::TermlItems::LnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems> ln_items;
        
}; // System::TermlItems


class System::TermlItems::LnItems : public ydk::Entity
{
    public:
        LnItems();
        ~LnItems();

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

        class ConsItems; //type: System::TermlItems::LnItems::ConsItems
        class VtyItems; //type: System::TermlItems::LnItems::VtyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems> cons_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems> vty_items;
        
}; // System::TermlItems::LnItems


class System::TermlItems::LnItems::ConsItems : public ydk::Entity
{
    public:
        ConsItems();
        ~ConsItems();

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

        class ExecTmeoutItems; //type: System::TermlItems::LnItems::ConsItems::ExecTmeoutItems
        class WdthItems; //type: System::TermlItems::LnItems::ConsItems::WdthItems
        class LgthItems; //type: System::TermlItems::LnItems::ConsItems::LgthItems
        class SpeedItems; //type: System::TermlItems::LnItems::ConsItems::SpeedItems
        class DatabitsItems; //type: System::TermlItems::LnItems::ConsItems::DatabitsItems
        class StopbitsItems; //type: System::TermlItems::LnItems::ConsItems::StopbitsItems
        class ParityItems; //type: System::TermlItems::LnItems::ConsItems::ParityItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::ExecTmeoutItems> exectmeout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::WdthItems> wdth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::LgthItems> lgth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::SpeedItems> speed_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::DatabitsItems> databits_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::StopbitsItems> stopbits_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::ConsItems::ParityItems> parity_items;
        
}; // System::TermlItems::LnItems::ConsItems


class System::TermlItems::LnItems::ConsItems::ExecTmeoutItems : public ydk::Entity
{
    public:
        ExecTmeoutItems();
        ~ExecTmeoutItems();

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

        ydk::YLeaf timeout; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::ExecTmeoutItems


class System::TermlItems::LnItems::ConsItems::WdthItems : public ydk::Entity
{
    public:
        WdthItems();
        ~WdthItems();

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

        ydk::YLeaf termwidth; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::WdthItems


class System::TermlItems::LnItems::ConsItems::LgthItems : public ydk::Entity
{
    public:
        LgthItems();
        ~LgthItems();

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

        ydk::YLeaf termlength; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::LgthItems


class System::TermlItems::LnItems::ConsItems::SpeedItems : public ydk::Entity
{
    public:
        SpeedItems();
        ~SpeedItems();

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

        ydk::YLeaf speed; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::SpeedItems


class System::TermlItems::LnItems::ConsItems::DatabitsItems : public ydk::Entity
{
    public:
        DatabitsItems();
        ~DatabitsItems();

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

        ydk::YLeaf databits; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::DatabitsItems


class System::TermlItems::LnItems::ConsItems::StopbitsItems : public ydk::Entity
{
    public:
        StopbitsItems();
        ~StopbitsItems();

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

        ydk::YLeaf stopbits; //type: uint32

}; // System::TermlItems::LnItems::ConsItems::StopbitsItems


class System::TermlItems::LnItems::ConsItems::ParityItems : public ydk::Entity
{
    public:
        ParityItems();
        ~ParityItems();

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

        ydk::YLeaf parity; //type: TerminalTermParity

}; // System::TermlItems::LnItems::ConsItems::ParityItems


class System::TermlItems::LnItems::VtyItems : public ydk::Entity
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

        class ExecTmeoutItems; //type: System::TermlItems::LnItems::VtyItems::ExecTmeoutItems
        class AbsTmeoutItems; //type: System::TermlItems::LnItems::VtyItems::AbsTmeoutItems
        class SsLmtItems; //type: System::TermlItems::LnItems::VtyItems::SsLmtItems
        class LgoutWarningItems; //type: System::TermlItems::LnItems::VtyItems::LgoutWarningItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems::ExecTmeoutItems> exectmeout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems::AbsTmeoutItems> abstmeout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems::SsLmtItems> sslmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TermlItems::LnItems::VtyItems::LgoutWarningItems> lgoutwarning_items;
        
}; // System::TermlItems::LnItems::VtyItems


class System::TermlItems::LnItems::VtyItems::ExecTmeoutItems : public ydk::Entity
{
    public:
        ExecTmeoutItems();
        ~ExecTmeoutItems();

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

        ydk::YLeaf timeout; //type: uint32

}; // System::TermlItems::LnItems::VtyItems::ExecTmeoutItems


class System::TermlItems::LnItems::VtyItems::AbsTmeoutItems : public ydk::Entity
{
    public:
        AbsTmeoutItems();
        ~AbsTmeoutItems();

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

        ydk::YLeaf timeout; //type: uint32

}; // System::TermlItems::LnItems::VtyItems::AbsTmeoutItems


class System::TermlItems::LnItems::VtyItems::SsLmtItems : public ydk::Entity
{
    public:
        SsLmtItems();
        ~SsLmtItems();

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

        ydk::YLeaf seslmt; //type: uint32

}; // System::TermlItems::LnItems::VtyItems::SsLmtItems


class System::TermlItems::LnItems::VtyItems::LgoutWarningItems : public ydk::Entity
{
    public:
        LgoutWarningItems();
        ~LgoutWarningItems();

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

        ydk::YLeaf lgtwarn; //type: uint32

}; // System::TermlItems::LnItems::VtyItems::LgoutWarningItems


class System::TermlogItems : public ydk::Entity
{
    public:
        TermlogItems();
        ~TermlogItems();

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

        ydk::YLeaf logshowcommand; //type: boolean

}; // System::TermlogItems


class System::TestRuleItems : public ydk::Entity
{
    public:
        TestRuleItems();
        ~TestRuleItems();

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

        class CRuleList; //type: System::TestRuleItems::CRuleList

        ydk::YList crule_list;
        
}; // System::TestRuleItems


class System::TestRuleItems::CRuleList : public ydk::Entity
{
    public:
        CRuleList();
        ~CRuleList();

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
        ydk::YLeaf pechunkname; //type: string
        ydk::YLeaf testclientchunkname; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf freq; //type: string

}; // System::TestRuleItems::CRuleList


class System::TestRsltItems : public ydk::Entity
{
    public:
        TestRsltItems();
        ~TestRsltItems();

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

        class CRsltList; //type: System::TestRsltItems::CRsltList

        ydk::YList crslt_list;
        
}; // System::TestRsltItems


class System::TestRsltItems::CRsltList : public ydk::Entity
{
    public:
        CRsltList();
        ~CRsltList();

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
        ydk::YLeaf ts; //type: string
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf operst; //type: TestOperSt
        ydk::YLeaf qual; //type: string
        ydk::YLeaf operstqual; //type: string

}; // System::TestRsltItems::CRsltList


class System::TunnelItems : public ydk::Entity
{
    public:
        TunnelItems();
        ~TunnelItems();

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

        class IfList; //type: System::TunnelItems::IfList

        ydk::YList if_list;
        
}; // System::TunnelItems


class System::TunnelItems::IfList : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf src; //type: string
        ydk::YLeaf dest; //type: string
        ydk::YLeaf ttype; //type: TunnelTunnelQual
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf cfgdmtu; //type: uint32
        ydk::YLeaf keepalvintvl; //type: uint32
        ydk::YLeaf keepalvretries; //type: uint32
        ydk::YLeaf adminst; //type: TunnelAdminSt
        ydk::YLeaf type; //type: string
        ydk::YLeaf tlayer; //type: TunnelLayerT
        ydk::YLeaf mac; //type: string
        ydk::YLeaf iod; //type: uint32
        ydk::YLeaf operst; //type: TunnelOperSt
        ydk::YLeaf operstqual; //type: TunnelOperStQual
        ydk::YLeaf delinprog; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class DepItems; //type: System::TunnelItems::IfList::DepItems
        class VnodeItems; //type: System::TunnelItems::IfList::VnodeItems
        class IdepItems; //type: System::TunnelItems::IfList::IdepItems
        class OdevItems; //type: System::TunnelItems::IfList::OdevItems
        class BankItems; //type: System::TunnelItems::IfList::BankItems
        class PortifItems; //type: System::TunnelItems::IfList::PortifItems
        class RtvrfMbrItems; //type: System::TunnelItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::TunnelItems::IfList::RtnwPathToIfItems
        class RstunnelMbrIfsItems; //type: System::TunnelItems::IfList::RstunnelMbrIfsItems
        class RstunnelToLooseNodeItems; //type: System::TunnelItems::IfList::RstunnelToLooseNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::DepItems> dep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::IdepItems> idep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems> odev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::BankItems> bank_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::PortifItems> portif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::RstunnelMbrIfsItems> rstunnelmbrifs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::RstunnelToLooseNodeItems> rstunneltoloosenode_items;
        
}; // System::TunnelItems::IfList


class System::TunnelItems::IfList::DepItems : public ydk::Entity
{
    public:
        DepItems();
        ~DepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DEpList; //type: System::TunnelItems::IfList::DepItems::DEpList

        ydk::YList dep_list;
        
}; // System::TunnelItems::IfList::DepItems


class System::TunnelItems::IfList::DepItems::DEpList : public ydk::Entity
{
    public:
        DEpList();
        ~DEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf lcc; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf uuid; //type: string

}; // System::TunnelItems::IfList::DepItems::DEpList


class System::TunnelItems::IfList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::TunnelItems::IfList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::TunnelItems::IfList::VnodeItems


class System::TunnelItems::IfList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::TunnelItems::IfList::VnodeItems::VNodeList


class System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems


class System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

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

}; // System::TunnelItems::IfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems


class System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

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

}; // System::TunnelItems::IfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::TunnelItems::IfList::IdepItems : public ydk::Entity
{
    public:
        IdepItems();
        ~IdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpList; //type: System::TunnelItems::IfList::IdepItems::IDEpList

        ydk::YList idep_list;
        
}; // System::TunnelItems::IfList::IdepItems


class System::TunnelItems::IfList::IdepItems::IDEpList : public ydk::Entity
{
    public:
        IDEpList();
        ~IDEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf vendorid; //type: CompVendor
        ydk::YLeaf domname; //type: string
        ydk::YLeaf ctrlrname; //type: string
        ydk::YLeaf eppdn; //type: string
        ydk::YLeaf compvmdn; //type: string
        ydk::YLeaf comphvdn; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf ephostaddr; //type: string
        ydk::YLeaf hypervisorname; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf gtag; //type: uint32
        ydk::YLeaf brifid; //type: string
        ydk::YLeaf containername; //type: string
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf eppdownloadhint; //type: OpflexEppDownloadHint
        ydk::YLeaf handle; //type: uint64
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf lcc; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf uuid; //type: string
        class IdepcntrItems; //type: System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems
        class VdepItems; //type: System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems> idepcntr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems> vdep_items;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList


class System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems : public ydk::Entity
{
    public:
        IdepcntrItems();
        ~IdepcntrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpCntrList; //type: System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList

        ydk::YList idepcntr_list;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems


class System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList : public ydk::Entity
{
    public:
        IDEpCntrList();
        ~IDEpCntrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf drop; //type: uint64
        ydk::YLeaf ucast; //type: uint64
        ydk::YLeaf mcast; //type: uint64
        ydk::YLeaf bcast; //type: uint64
        ydk::YLeaf pkts; //type: uint64
        ydk::YLeaf bytes; //type: uint64
        ydk::YLeaf direction; //type: OpflexDirection
        ydk::YLeaf pktsresetmask; //type: uint32
        ydk::YLeaf bytesresetmask; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::TunnelItems::IfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList


class System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems : public ydk::Entity
{
    public:
        VdepItems();
        ~VdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VDEpList; //type: System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList

        ydk::YList vdep_list;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems


class System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList : public ydk::Entity
{
    public:
        VDEpList();
        ~VDEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf brifid; //type: string
        ydk::YLeaf eppdn; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf gtag; //type: uint32
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf lcc; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf uuid; //type: string
        class RsvNodeItems; //type: System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems> rsvnode_items;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList


class System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems : public ydk::Entity
{
    public:
        RsvNodeItems();
        ~RsvNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVNodeList; //type: System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList

        ydk::YList rsvnode_list;
        
}; // System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems


class System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList : public ydk::Entity
{
    public:
        RsVNodeList();
        ~RsVNodeList();

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

}; // System::TunnelItems::IfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList


class System::TunnelItems::IfList::OdevItems : public ydk::Entity
{
    public:
        OdevItems();
        ~OdevItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ODevList; //type: System::TunnelItems::IfList::OdevItems::ODevList

        ydk::YList odev_list;
        
}; // System::TunnelItems::IfList::OdevItems


class System::TunnelItems::IfList::OdevItems::ODevList : public ydk::Entity
{
    public:
        ODevList();
        ~ODevList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf updatets; //type: uint64
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf numhb; //type: uint32
        ydk::YLeaf lastnumhb; //type: uint32
        ydk::YLeaf hbstatus; //type: OpflexHbStatus
        ydk::YLeaf operst; //type: OpflexDevOperState
        ydk::YLeaf devoperissues; //type: string
        ydk::YLeaf maxmisshb; //type: uint32
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf domname; //type: string
        ydk::YLeaf ctrlrname; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf state; //type: CompHostState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class OdevcapItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems
        class VnodeItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems
        class OpnicItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems> odevcap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems> opnic_items;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList


class System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems : public ydk::Entity
{
    public:
        OdevcapItems();
        ~OdevcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::TunnelItems::IfList::OdevItems::ODevList::OdevcapItems


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

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

}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems


class System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

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

}; // System::TunnelItems::IfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems : public ydk::Entity
{
    public:
        OpnicItems();
        ~OpnicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OPNicList; //type: System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList

        ydk::YList opnic_list;
        
}; // System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems


class System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList : public ydk::Entity
{
    public:
        OPNicList();
        ~OPNicList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::TunnelItems::IfList::OdevItems::ODevList::OpnicItems::OPNicList


class System::TunnelItems::IfList::BankItems : public ydk::Entity
{
    public:
        BankItems();
        ~BankItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BankList; //type: System::TunnelItems::IfList::BankItems::BankList

        ydk::YList bank_list;
        
}; // System::TunnelItems::IfList::BankItems


class System::TunnelItems::IfList::BankItems::BankList : public ydk::Entity
{
    public:
        BankList();
        ~BankList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AcBankT
        class DbgIngrTepItems; //type: System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems
        class DbgEgrTepItems; //type: System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems> dbgingrtep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems> dbgegrtep_items;
        
}; // System::TunnelItems::IfList::BankItems::BankList


class System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems : public ydk::Entity
{
    public:
        DbgIngrTepItems();
        ~DbgIngrTepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::TunnelItems::IfList::BankItems::BankList::DbgIngrTepItems


class System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems : public ydk::Entity
{
    public:
        DbgEgrTepItems();
        ~DbgEgrTepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::TunnelItems::IfList::BankItems::BankList::DbgEgrTepItems


class System::TunnelItems::IfList::PortifItems : public ydk::Entity
{
    public:
        PortifItems();
        ~PortifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortIfList; //type: System::TunnelItems::IfList::PortifItems::PortIfList

        ydk::YList portif_list;
        
}; // System::TunnelItems::IfList::PortifItems


class System::TunnelItems::IfList::PortifItems::PortIfList : public ydk::Entity
{
    public:
        PortIfList();
        ~PortIfList();

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
        class BankItems; //type: System::TunnelItems::IfList::PortifItems::PortIfList::BankItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::PortifItems::PortIfList::BankItems> bank_items;
        
}; // System::TunnelItems::IfList::PortifItems::PortIfList


class System::TunnelItems::IfList::PortifItems::PortIfList::BankItems : public ydk::Entity
{
    public:
        BankItems();
        ~BankItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BankList; //type: System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList

        ydk::YList bank_list;
        
}; // System::TunnelItems::IfList::PortifItems::PortIfList::BankItems


class System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList : public ydk::Entity
{
    public:
        BankList();
        ~BankList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AcBankT
        class DbgIngrTepItems; //type: System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems
        class DbgEgrTepItems; //type: System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems> dbgingrtep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems> dbgegrtep_items;
        
}; // System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList


class System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems : public ydk::Entity
{
    public:
        DbgIngrTepItems();
        ~DbgIngrTepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgIngrTepItems


class System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems : public ydk::Entity
{
    public:
        DbgEgrTepItems();
        ~DbgEgrTepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems


class System::TunnelItems::IfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

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

}; // System::TunnelItems::IfList::RtvrfMbrItems


class System::TunnelItems::IfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::TunnelItems::IfList::RtnwPathToIfItems


class System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

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

}; // System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::TunnelItems::IfList::RstunnelMbrIfsItems : public ydk::Entity
{
    public:
        RstunnelMbrIfsItems();
        ~RstunnelMbrIfsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsTunnelMbrIfsList; //type: System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList

        ydk::YList rstunnelmbrifs_list;
        
}; // System::TunnelItems::IfList::RstunnelMbrIfsItems


class System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList : public ydk::Entity
{
    public:
        RsTunnelMbrIfsList();
        ~RsTunnelMbrIfsList();

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

}; // System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList


class System::TunnelItems::IfList::RstunnelToLooseNodeItems : public ydk::Entity
{
    public:
        RstunnelToLooseNodeItems();
        ~RstunnelToLooseNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsTunnelToLooseNodeList; //type: System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList

        ydk::YList rstunneltoloosenode_list;
        
}; // System::TunnelItems::IfList::RstunnelToLooseNodeItems


class System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList : public ydk::Entity
{
    public:
        RsTunnelToLooseNodeList();
        ~RsTunnelToLooseNodeList();

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

}; // System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList


class System::VtpItems : public ydk::Entity
{
    public:
        VtpItems();
        ~VtpItems();

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
        class InstItems; //type: System::VtpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VtpItems::InstItems> inst_items;
        
}; // System::VtpItems


class System::VtpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf mode; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::VtpItems::InstItems


class System::NbmItems : public ydk::Entity
{
    public:
        NbmItems();
        ~NbmItems();

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

        class ConfItems; //type: System::NbmItems::ConfItems
        class ShowItems; //type: System::NbmItems::ShowItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems> conf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems> show_items;
        
}; // System::NbmItems


class System::NbmItems::ConfItems : public ydk::Entity
{
    public:
        ConfItems();
        ~ConfItems();

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

        class GlobalItems; //type: System::NbmItems::ConfItems::GlobalItems
        class FlowpolicytableItems; //type: System::NbmItems::ConfItems::FlowpolicytableItems
        class HostpolicytableItems; //type: System::NbmItems::ConfItems::HostpolicytableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::GlobalItems> global_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowpolicytableItems> flowpolicytable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems> hostpolicytable_items;
        
}; // System::NbmItems::ConfItems


class System::NbmItems::ConfItems::GlobalItems : public ydk::Entity
{
    public:
        GlobalItems();
        ~GlobalItems();

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

        ydk::YLeaf senderhostpolicy; //type: NbmNbmPermit
        ydk::YLeaf localrcvrhostpolicy; //type: NbmNbmPermit
        ydk::YLeaf remotercvrhostpolicy; //type: NbmNbmPermit
        ydk::YLeaf flowbwmbps; //type: uint32
        ydk::YLeaf unicastbwpct; //type: uint8

}; // System::NbmItems::ConfItems::GlobalItems


class System::NbmItems::ConfItems::FlowpolicytableItems : public ydk::Entity
{
    public:
        FlowpolicytableItems();
        ~FlowpolicytableItems();

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

        class NameItems; //type: System::NbmItems::ConfItems::FlowpolicytableItems::NameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowpolicytableItems::NameItems> name_items;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems


class System::NbmItems::ConfItems::FlowpolicytableItems::NameItems : public ydk::Entity
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

        class FlowPolicyList; //type: System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList

        ydk::YList flowpolicy_list;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems::NameItems


class System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList : public ydk::Entity
{
    public:
        FlowPolicyList();
        ~FlowPolicyList();

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
        ydk::YLeaf bwmbps; //type: uint64
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf queueid; //type: uint8
        class BgnItems; //type: System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems> bgn_items;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList


class System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems : public ydk::Entity
{
    public:
        BgnItems();
        ~BgnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlowPolicyRangeList; //type: System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList

        ydk::YList flowpolicyrange_list;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems


class System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList : public ydk::Entity
{
    public:
        FlowPolicyRangeList();
        ~FlowPolicyRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groupbegin; //type: string
        ydk::YLeaf groupend; //type: string

}; // System::NbmItems::ConfItems::FlowpolicytableItems::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList


class System::NbmItems::ConfItems::HostpolicytableItems : public ydk::Entity
{
    public:
        HostpolicytableItems();
        ~HostpolicytableItems();

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

        class SeqItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::SeqItems
        class SeqnumItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::SeqItems> seq_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems> seqnum_items;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems


class System::NbmItems::ConfItems::HostpolicytableItems::SeqItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class SenderHostPolicyList; //type: System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList

        ydk::YList senderhostpolicy_list;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::SeqItems


class System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList : public ydk::Entity
{
    public:
        SenderHostPolicyList();
        ~SenderHostPolicyList();

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

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf host; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf groupmask; //type: uint8
        ydk::YLeaf permission; //type: NbmNbmPermit

}; // System::NbmItems::ConfItems::HostpolicytableItems::SeqItems::SenderHostPolicyList


class System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems : public ydk::Entity
{
    public:
        SeqnumItems();
        ~SeqnumItems();

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

        class ReceiverHostPolicyList; //type: System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList

        ydk::YList receiverhostpolicy_list;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems


class System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList : public ydk::Entity
{
    public:
        ReceiverHostPolicyList();
        ~ReceiverHostPolicyList();

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

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf host; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf groupmask; //type: uint8
        ydk::YLeaf permission; //type: NbmNbmPermit

}; // System::NbmItems::ConfItems::HostpolicytableItems::SeqnumItems::ReceiverHostPolicyList


class System::NbmItems::ShowItems : public ydk::Entity
{
    public:
        ShowItems();
        ~ShowItems();

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

        class FlowsItems; //type: System::NbmItems::ShowItems::FlowsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::FlowsItems> flows_items;
        
}; // System::NbmItems::ShowItems


class System::NbmItems::ShowItems::FlowsItems : public ydk::Entity
{
    public:
        FlowsItems();
        ~FlowsItems();

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

        class SourceItems; //type: System::NbmItems::ShowItems::FlowsItems::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::FlowsItems::SourceItems> source_items;
        
}; // System::NbmItems::ShowItems::FlowsItems


class System::NbmItems::ShowItems::FlowsItems::SourceItems : public ydk::Entity
{
    public:
        SourceItems();
        ~SourceItems();

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

        class NbmFlowList; //type: System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList

        ydk::YList nbmflow_list;
        
}; // System::NbmItems::ShowItems::FlowsItems::SourceItems


class System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList : public ydk::Entity
{
    public:
        NbmFlowList();
        ~NbmFlowList();

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

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf ingressif; //type: uint32
        ydk::YLeaf ingressifname; //type: string
        ydk::YLeaf egressifcount; //type: uint32
        ydk::YLeaf bwkbps; //type: uint64
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf qid; //type: uint32
        ydk::YLeaf isfhr; //type: NbmFhrFlag
        ydk::YLeaf tstamp; //type: uint64
        class OifItems; //type: System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems> oif_items;
        
}; // System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList


class System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListList; //type: System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList

        ydk::YList oiflist_list;
        
}; // System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems


class System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList : public ydk::Entity
{
    public:
        OifListList();
        ~OifListList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oif; //type: uint32
        ydk::YLeaf oifname; //type: string
        ydk::YLeaf reporterip; //type: string
        ydk::YLeaf oiftstamp; //type: uint64

}; // System::NbmItems::ShowItems::FlowsItems::SourceItems::NbmFlowList::OifItems::OifListList


class System::NbmccItems : public ydk::Entity
{
    public:
        NbmccItems();
        ~NbmccItems();

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

        class EifItems; //type: System::NbmccItems::EifItems
        class SrcipItems; //type: System::NbmccItems::SrcipItems
        class RepipItems; //type: System::NbmccItems::RepipItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmccItems::EifItems> eif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmccItems::SrcipItems> srcip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmccItems::RepipItems> repip_items;
        
}; // System::NbmccItems


class System::NbmccItems::EifItems : public ydk::Entity
{
    public:
        EifItems();
        ~EifItems();

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

        class NbmCcFlowEntityList; //type: System::NbmccItems::EifItems::NbmCcFlowEntityList

        ydk::YList nbmccflowentity_list;
        
}; // System::NbmccItems::EifItems


class System::NbmccItems::EifItems::NbmCcFlowEntityList : public ydk::Entity
{
    public:
        NbmCcFlowEntityList();
        ~NbmCcFlowEntityList();

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

        ydk::YLeaf egressif; //type: uint32
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf reporterip; //type: string
        ydk::YLeaf ingressif; //type: uint32
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf bandwidthunit; //type: NbmNbmBwUnitEn
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf queueid; //type: uint8

}; // System::NbmccItems::EifItems::NbmCcFlowEntityList


class System::NbmccItems::SrcipItems : public ydk::Entity
{
    public:
        SrcipItems();
        ~SrcipItems();

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

        class SenderCcTableList; //type: System::NbmccItems::SrcipItems::SenderCcTableList

        ydk::YList sendercctable_list;
        
}; // System::NbmccItems::SrcipItems


class System::NbmccItems::SrcipItems::SenderCcTableList : public ydk::Entity
{
    public:
        SenderCcTableList();
        ~SenderCcTableList();

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

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf iif; //type: uint8
        ydk::YLeaf dummyproperty1; //type: uint32
        ydk::YLeaf dummyproperty2; //type: uint32
        ydk::YLeaf dummyproperty3; //type: uint32

}; // System::NbmccItems::SrcipItems::SenderCcTableList


class System::NbmccItems::RepipItems : public ydk::Entity
{
    public:
        RepipItems();
        ~RepipItems();

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

        class ReceiverCcTableList; //type: System::NbmccItems::RepipItems::ReceiverCcTableList

        ydk::YList receivercctable_list;
        
}; // System::NbmccItems::RepipItems


class System::NbmccItems::RepipItems::ReceiverCcTableList : public ydk::Entity
{
    public:
        ReceiverCcTableList();
        ~ReceiverCcTableList();

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

        ydk::YLeaf reporterip; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf oif; //type: uint8
        ydk::YLeaf dummyproperty1; //type: uint32
        ydk::YLeaf dummyproperty2; //type: uint32
        ydk::YLeaf dummyproperty3; //type: uint32

}; // System::NbmccItems::RepipItems::ReceiverCcTableList


class System::NbmFlowsTableItems : public ydk::Entity
{
    public:
        NbmFlowsTableItems();
        ~NbmFlowsTableItems();

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

        ydk::YLeaf mode; //type: string
        class FlowOpItems; //type: System::NbmFlowsTableItems::FlowOpItems
        class SrcIPItems; //type: System::NbmFlowsTableItems::SrcIPItems
        class IifItems; //type: System::NbmFlowsTableItems::IifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmFlowsTableItems::FlowOpItems> flowop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmFlowsTableItems::SrcIPItems> srcip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmFlowsTableItems::IifItems> iif_items;
        
}; // System::NbmFlowsTableItems


class System::NbmFlowsTableItems::FlowOpItems : public ydk::Entity
{
    public:
        FlowOpItems();
        ~FlowOpItems();

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

        class NbmFlowEntityList; //type: System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList

        ydk::YList nbmflowentity_list;
        
}; // System::NbmFlowsTableItems::FlowOpItems


class System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList : public ydk::Entity
{
    public:
        NbmFlowEntityList();
        ~NbmFlowEntityList();

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

        ydk::YLeaf flowop; //type: NbmNbmFlowOperEn
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf egressif; //type: uint32
        ydk::YLeaf controllerip; //type: string
        ydk::YLeaf controllervip; //type: string
        ydk::YLeaf reporterip; //type: string
        ydk::YLeaf ingressif; //type: uint32
        ydk::YLeaf egressifcount; //type: uint32
        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf bandwidthunit; //type: NbmNbmBwUnitEn
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf queueid; //type: uint8
        ydk::YLeaf switchiif; //type: uint8

}; // System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList


class System::NbmFlowsTableItems::SrcIPItems : public ydk::Entity
{
    public:
        SrcIPItems();
        ~SrcIPItems();

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

        class NbmOifCounterList; //type: System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList

        ydk::YList nbmoifcounter_list;
        
}; // System::NbmFlowsTableItems::SrcIPItems


class System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList : public ydk::Entity
{
    public:
        NbmOifCounterList();
        ~NbmOifCounterList();

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

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf oifcount; //type: uint32

}; // System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList


class System::NbmFlowsTableItems::IifItems : public ydk::Entity
{
    public:
        IifItems();
        ~IifItems();

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

        class NbmUpdateIifList; //type: System::NbmFlowsTableItems::IifItems::NbmUpdateIifList

        ydk::YList nbmupdateiif_list;
        
}; // System::NbmFlowsTableItems::IifItems


class System::NbmFlowsTableItems::IifItems::NbmUpdateIifList : public ydk::Entity
{
    public:
        NbmUpdateIifList();
        ~NbmUpdateIifList();

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

        ydk::YLeaf newingressif; //type: uint32
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf previngressif; //type: uint32
        ydk::YLeaf seqnum; //type: uint32

}; // System::NbmFlowsTableItems::IifItems::NbmUpdateIifList


class System::NbmStatsItems : public ydk::Entity
{
    public:
        NbmStatsItems();
        ~NbmStatsItems();

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

        class SrcIPItems; //type: System::NbmStatsItems::SrcIPItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmStatsItems::SrcIPItems> srcip_items;
        
}; // System::NbmStatsItems


class System::NbmStatsItems::SrcIPItems : public ydk::Entity
{
    public:
        SrcIPItems();
        ~SrcIPItems();

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

        class NbmStatsEntityList; //type: System::NbmStatsItems::SrcIPItems::NbmStatsEntityList

        ydk::YList nbmstatsentity_list;
        
}; // System::NbmStatsItems::SrcIPItems


class System::NbmStatsItems::SrcIPItems::NbmStatsEntityList : public ydk::Entity
{
    public:
        NbmStatsEntityList();
        ~NbmStatsEntityList();

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

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf allowedpkts; //type: uint64
        ydk::YLeaf allowedbytes; //type: uint64
        ydk::YLeaf deniedpkts; //type: uint64
        ydk::YLeaf deniedbytes; //type: uint64
        ydk::YLeaf totalpkts; //type: uint64
        ydk::YLeaf totalbytes; //type: uint64
        ydk::YLeaf tstamp; //type: uint64

}; // System::NbmStatsItems::SrcIPItems::NbmStatsEntityList


class System::BootItems : public ydk::Entity
{
    public:
        BootItems();
        ~BootItems();

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

        ydk::YLeaf poap; //type: BootPoap
        class ImageItems; //type: System::BootItems::ImageItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BootItems::ImageItems> image_items;
        
}; // System::BootItems


class System::BootItems::ImageItems : public ydk::Entity
{
    public:
        ImageItems();
        ~ImageItems();

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

        ydk::YLeaf sup1; //type: string
        ydk::YLeaf sup2; //type: string
        ydk::YLeaf image_err; //type: string

}; // System::BootItems::ImageItems


class System::ChItems : public ydk::Entity
{
    public:
        ChItems();
        ~ChItems();

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

        ydk::YLeaf role; //type: TopNodeRole
        ydk::YLeaf operst; //type: EqptChOperSt
        ydk::YLeaf operstqual; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf descr; //type: string
        class EjpolItems; //type: System::ChItems::EjpolItems
        class IndledItems; //type: System::ChItems::IndledItems
        class LocledItems; //type: System::ChItems::LocledItems
        class SupslotItems; //type: System::ChItems::SupslotItems
        class LcslotItems; //type: System::ChItems::LcslotItems
        class FcslotItems; //type: System::ChItems::FcslotItems
        class ScslotItems; //type: System::ChItems::ScslotItems
        class PsuslotItems; //type: System::ChItems::PsuslotItems
        class FtslotItems; //type: System::ChItems::FtslotItems
        class SpbpItems; //type: System::ChItems::SpbpItems
        class BslotItems; //type: System::ChItems::BslotItems
        class NslotItems; //type: System::ChItems::NslotItems
        class PItems; //type: System::ChItems::PItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::EjpolItems> ejpol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::IndledItems> indled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems> supslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems> lcslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems> fcslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems> scslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems> psuslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems> ftslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems> spbp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems> bslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems> nslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PItems> p_items;
        
}; // System::ChItems


class System::ChItems::EjpolItems : public ydk::Entity
{
    public:
        EjpolItems();
        ~EjpolItems();

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

        class EjPolList; //type: System::ChItems::EjpolItems::EjPolList

        ydk::YList ejpol_list;
        
}; // System::ChItems::EjpolItems


class System::ChItems::EjpolItems::EjPolList : public ydk::Entity
{
    public:
        EjPolList();
        ~EjPolList();

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
        ydk::YLeaf autosh; //type: EqptAdSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::EjpolItems::EjPolList


class System::ChItems::IndledItems : public ydk::Entity
{
    public:
        IndledItems();
        ~IndledItems();

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

        class IndLedList; //type: System::ChItems::IndledItems::IndLedList

        ydk::YList indled_list;
        
}; // System::ChItems::IndledItems


class System::ChItems::IndledItems::IndLedList : public ydk::Entity
{
    public:
        IndLedList();
        ~IndLedList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf type; //type: EqptLedType

}; // System::ChItems::IndledItems::IndLedList


class System::ChItems::LocledItems : public ydk::Entity
{
    public:
        LocledItems();
        ~LocledItems();

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

        class LocLedList; //type: System::ChItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::LocledItems


class System::ChItems::LocledItems::LocLedList : public ydk::Entity
{
    public:
        LocLedList();
        ~LocLedList();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf type; //type: EqptLedType
        ydk::YLeaf adminst; //type: EqptAdSt

}; // System::ChItems::LocledItems::LocLedList


class System::ChItems::SupslotItems : public ydk::Entity
{
    public:
        SupslotItems();
        ~SupslotItems();

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

        class SupCSlotList; //type: System::ChItems::SupslotItems::SupCSlotList

        ydk::YList supcslot_list;
        
}; // System::ChItems::SupslotItems


class System::ChItems::SupslotItems::SupCSlotList : public ydk::Entity
{
    public:
        SupCSlotList();
        ~SupCSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class SupItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems
        class RstrecItems; //type: System::ChItems::SupslotItems::SupCSlotList::RstrecItems
        class RemrstrecItems; //type: System::ChItems::SupslotItems::SupCSlotList::RemrstrecItems
        class RtoosSlotItems; //type: System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems> sup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::RstrecItems> rstrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::RemrstrecItems> remrstrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList


class System::ChItems::SupslotItems::SupCSlotList::SupItems : public ydk::Entity
{
    public:
        SupItems();
        ~SupItems();

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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf rdst; //type: EqptRdSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf upts; //type: string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf fwver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        class RunningItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems
        class EjItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems
        class IndledItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::IndledItems
        class LocledItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems
        class CpuportItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuportItems
        class EobcItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems
        class EpcItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems
        class MgmtItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems
        class ConsoleItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems
        class SensorItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems
        class SpsupItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems
        class AsicItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems
        class CpuItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems
        class FpgaItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::FpgaItems
        class DimmItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems
        class FlashItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems
        class ObflItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems> ej_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::IndledItems> indled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuportItems> cpuport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems> eobc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems> epc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems> console_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems> spsup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::FpgaItems> fpga_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems> obfl_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems : public ydk::Entity
{
    public:
        RunningItems();
        ~RunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf biosver; //type: string
        ydk::YLeaf expectedver; //type: string
        ydk::YLeaf operst; //type: FirmwareRunningOperSt
        ydk::YLeaf interimver; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems : public ydk::Entity
{
    public:
        EjItems();
        ~EjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EjecList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList

        ydk::YList ejec_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_36_ */

