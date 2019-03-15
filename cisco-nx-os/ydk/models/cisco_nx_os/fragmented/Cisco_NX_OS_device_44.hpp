#ifndef _CISCO_NX_OS_DEVICE_44_
#define _CISCO_NX_OS_DEVICE_44_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_43.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::Pim6Items::InstItems::DomItems::DomList::EventhistItems : public ydk::Entity
{
    public:
        EventhistItems();
        ~EventhistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventHistoryList; //type: System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::EventhistItems


class System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList : public ydk::Entity
{
    public:
        EventHistoryList();
        ~EventHistoryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: Pim6EhType
        ydk::YLeaf size; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::EventhistItems::EventHistoryList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf dr; //type: string
        ydk::YLeaf nbrholdtime; //type: uint32
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf nexthello; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf drdelay; //type: uint16
        ydk::YLeaf jprtmap; //type: string
        ydk::YLeaf neighrtmap; //type: string
        ydk::YLeaf neighpfxlist; //type: string
        ydk::YLeaf border; //type: boolean
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf rteppdn; //type: string
        ydk::YLeaf bfdinst; //type: RtdmcBfdInstSt
        ydk::YLeaf pimsparsemode; //type: boolean
        class AdjItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems
        class DbItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems
        class JpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems
        class HelloItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems
        class TrstatsItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems
        class RtvrfMbrItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems> jp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems> hello_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
{
    public:
        AdjItems();
        ~AdjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
{
    public:
        AdjEpList();
        ~AdjEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf nbrname; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf learntime; //type: string
        ydk::YLeaf expirytime; //type: string
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf bfdst; //type: RtdmcBfdOperSt
        ydk::YLeaf operst; //type: RtdmcAdjOperSt
        ydk::YLeaf flags; //type: string

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems : public ydk::Entity
{
    public:
        DbItems();
        ~DbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DbList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList : public ydk::Entity
{
    public:
        DbList();
        ~DbList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RtdmcDbT
        ydk::YLeaf name; //type: string
        class BfItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems
        class EmbedrpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems
        class SyslogItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems
        class VrfItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems> bf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems> embedrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems> syslog_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems> vrf_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems : public ydk::Entity
{
    public:
        BfItems();
        ~BfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfentryItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems> bfentry_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems : public ydk::Entity
{
    public:
        BfentryItems();
        ~BfentryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfEntryList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList

        ydk::YList bfentry_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList : public ydk::Entity
{
    public:
        BfEntryList();
        ~BfEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bftype; //type: string
        ydk::YLeaf bfattr; //type: uint32
        ydk::YLeaf bfsgmnt; //type: uint32
        ydk::YLeaf bfflags; //type: uint32
        ydk::YLeaf bfcompressarraysize; //type: uint32
        ydk::YLeaf bfposallocated; //type: uint32
        class BfcompItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems> bfcomp_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems : public ydk::Entity
{
    public:
        BfcompItems();
        ~BfcompItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BfCompList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList

        ydk::YList bfcomp_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList : public ydk::Entity
{
    public:
        BfCompList();
        ~BfCompList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfidx; //type: uint32
        ydk::YLeaf bfcomptype; //type: string
        ydk::YLeaf bfbitpos; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::BfItems::BfentryItems::BfEntryList::BfcompItems::BfCompList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems : public ydk::Entity
{
    public:
        EmbedrpItems();
        ~EmbedrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EmbedRpList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList

        ydk::YList embedrp_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList : public ydk::Entity
{
    public:
        EmbedRpList();
        ~EmbedRpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf illegalflag; //type: boolean
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf prefixlen; //type: uint32
        ydk::YLeaf grpid; //type: uint32
        ydk::YLeaf scope; //type: uint32
        ydk::YLeaf scopestr; //type: string
        ydk::YLeaf rpifid; //type: string

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::EmbedrpItems::EmbedRpList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems : public ydk::Entity
{
    public:
        SyslogItems();
        ~SyslogItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SyslogList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList

        ydk::YList syslog_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList : public ydk::Entity
{
    public:
        SyslogList();
        ~SyslogList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf facname; //type: string
        ydk::YLeaf defloglvl; //type: uint16
        ydk::YLeaf currloglvl; //type: uint16

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::SyslogItems::SyslogList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList : public ydk::Entity
{
    public:
        VrfList();
        ~VrfList();

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
        ydk::YLeaf cid; //type: uint32
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf pim6enbldintfcount; //type: uint32
        ydk::YLeaf bfdenabled; //type: boolean
        ydk::YLeaf totalnumroutes; //type: uint32
        class AutorpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems
        class BsrItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems
        class GrangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems
        class GroupItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems
        class IfrecItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems
        class RpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems
        class TrstatsItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems
        class VrfdetailItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems> grange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems> group_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems> ifrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems> rp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems> vrfdetail_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems : public ydk::Entity
{
    public:
        AutorpItems();
        ~AutorpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoRppInfoList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList

        ydk::YList autorppinfo_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList : public ydk::Entity
{
    public:
        AutoRppInfoList();
        ~AutoRppInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf expiry; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::AutorpItems::AutoRppInfoList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems : public ydk::Entity
{
    public:
        BsrItems();
        ~BsrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BsrInfoList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList

        ydk::YList bsrinfo_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList : public ydk::Entity
{
    public:
        BsrInfoList();
        ~BsrInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf bsraddr; //type: string
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf hash; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32
        ydk::YLeaf besthash; //type: boolean

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::BsrItems::BsrInfoList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems : public ydk::Entity
{
    public:
        GrangeItems();
        ~GrangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpGrangeList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList

        ydk::YList rpgrange_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList : public ydk::Entity
{
    public:
        RpGrangeList();
        ~RpGrangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf mode; //type: string
        ydk::YLeaf usershared; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GrangeItems::RpGrangeList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf grpmasklen; //type: uint32
        ydk::YLeaf bidir; //type: boolean
        class SourceItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
{
    public:
        SourceList();
        ~SourceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf expiryts; //type: string
        ydk::YLeaf assertmetrics; //type: uint32
        ydk::YLeaf assertmetricprefs; //type: uint32
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf routeiif; //type: string
        ydk::YLeaf rpfnbr; //type: string
        ydk::YLeaf routebits; //type: string
        ydk::YLeaf rttimeoutinvtl; //type: uint32
        ydk::YLeaf jpholdtime; //type: uint32
        class OifItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
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

        class OifList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
{
    public:
        OifList();
        ~OifList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oifname; //type: string
        ydk::YLeaf oifuptime; //type: string
        ydk::YLeaf oifrpf; //type: boolean
        ydk::YLeaf oiflispencapentries; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems : public ydk::Entity
{
    public:
        IfrecItems();
        ~IfrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfRecList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList

        ydk::YList ifrec_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList : public ydk::Entity
{
    public:
        IfRecList();
        ~IfRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pim6ifname; //type: string
        ydk::YLeaf pim6dr; //type: string
        ydk::YLeaf pim6drprio; //type: uint32
        ydk::YLeaf pim6nbrholdtime; //type: uint32
        ydk::YLeaf pim6genid; //type: uint32
        ydk::YLeaf pim6nexthello; //type: string
        ydk::YLeaf pim6ipaddr; //type: string
        ydk::YLeaf pim6border; //type: boolean
        ydk::YLeaf pim6sparsemode; //type: boolean
        class AdjrecItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems
        class IfstatsItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems> adjrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems> ifstats_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems : public ydk::Entity
{
    public:
        AdjrecItems();
        ~AdjrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpRecList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList

        ydk::YList adjeprec_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList : public ydk::Entity
{
    public:
        AdjEpRecList();
        ~AdjEpRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf nbrname; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf learntime; //type: string
        ydk::YLeaf expirytime; //type: string
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf bfdst; //type: RtdmcBfdOperSt
        ydk::YLeaf operst; //type: RtdmcAdjOperSt
        ydk::YLeaf flags; //type: string
        class AdjstatsItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems> adjstats_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lasthellorcvd; //type: string
        ydk::YLeaf longhelloitvl; //type: uint32
        ydk::YLeaf lastholdtime; //type: uint16
        ydk::YLeaf nonhelloexpresets; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems : public ydk::Entity
{
    public:
        IfstatsItems();
        ~IfstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hellosent; //type: uint32
        ydk::YLeaf hellorcvd; //type: uint32
        ydk::YLeaf jpsent; //type: uint32
        ydk::YLeaf jprcvd; //type: uint32
        ydk::YLeaf assertsent; //type: uint32
        ydk::YLeaf assertrcvd; //type: uint32
        ydk::YLeaf graftssent; //type: uint32
        ydk::YLeaf graftsrcvd; //type: uint32
        ydk::YLeaf grftacksent; //type: uint32
        ydk::YLeaf grftackrcvd; //type: uint32
        ydk::YLeaf dfoffersent; //type: uint32
        ydk::YLeaf dfofferrcvd; //type: uint32
        ydk::YLeaf dfwinnersent; //type: uint32
        ydk::YLeaf dfwinnerrcvd; //type: uint32
        ydk::YLeaf dfbackoffsent; //type: uint32
        ydk::YLeaf dfbackoffrcvd; //type: uint32
        ydk::YLeaf dfpassessent; //type: uint32
        ydk::YLeaf dfpassesrcvd; //type: uint32
        ydk::YLeaf chksumerr; //type: uint32
        ydk::YLeaf invalidpktsent; //type: uint32
        ydk::YLeaf invalidpktrcvd; //type: uint32
        ydk::YLeaf authfail; //type: uint32
        ydk::YLeaf pktlenerr; //type: uint32
        ydk::YLeaf badverpkt; //type: uint32
        ydk::YLeaf pktfrmself; //type: uint32
        ydk::YLeaf pktfrmnonnbr; //type: uint32
        ydk::YLeaf pktonpassiveif; //type: uint32
        ydk::YLeaf jprcvdonrpf; //type: uint32
        ydk::YLeaf joinnorp; //type: uint32
        ydk::YLeaf joinwrongrp; //type: uint32
        ydk::YLeaf jpssmrcvd; //type: uint32
        ydk::YLeaf jpbidirrcvd; //type: uint32
        ydk::YLeaf jpfilterin; //type: uint32
        ydk::YLeaf jpfilterout; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems : public ydk::Entity
{
    public:
        RpItems();
        ~RpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpInfoRecList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList

        ydk::YList rpinforec_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList : public ydk::Entity
{
    public:
        RpInfoRecList();
        ~RpInfoRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf rplocal; //type: boolean
        ydk::YLeaf rpuptime; //type: string
        ydk::YLeaf rppriority; //type: uint32
        ydk::YLeaf rpdisctype; //type: string
        ydk::YLeaf rpdfordinal; //type: uint32
        ydk::YLeaf rpmetricpref; //type: uint32
        ydk::YLeaf rpmetric; //type: uint32
        class RpifItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems> rpif_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems : public ydk::Entity
{
    public:
        RpifItems();
        ~RpifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpIfList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList

        ydk::YList rpif_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList : public ydk::Entity
{
    public:
        RpIfList();
        ~RpIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifname; //type: string
        ydk::YLeaf dfwinner; //type: string
        ydk::YLeaf dfstate; //type: RtdmcDfStates
        ydk::YLeaf dfuptime; //type: string
        ydk::YLeaf isrpf; //type: boolean
        ydk::YLeaf winnermetricpref; //type: uint32
        ydk::YLeaf winnermetric; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lastclearts; //type: string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf autorpannrcvd; //type: uint32
        ydk::YLeaf autorpdiscrcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
        ydk::YLeaf autorpannsent; //type: uint32
        ydk::YLeaf autorpdiscsent; //type: uint32
        ydk::YLeaf autorprpfsent; //type: uint32
        ydk::YLeaf autorpbrddeny; //type: uint32
        ydk::YLeaf autorrpnolistn; //type: uint32
        ydk::YLeaf autorpttlexp; //type: uint32
        ydk::YLeaf autorpinvtype; //type: uint32
        ydk::YLeaf bsnonbr; //type: uint32
        ydk::YLeaf bsborddeny; //type: uint32
        ydk::YLeaf bslenerr; //type: uint32
        ydk::YLeaf bsrpffail; //type: uint32
        ydk::YLeaf bsnolis; //type: uint32
        ydk::YLeaf candrpnolis; //type: uint32
        ydk::YLeaf candrpborddeny; //type: uint32
        ydk::YLeaf regrcvdnorp; //type: uint32
        ydk::YLeaf regrcvdforssm; //type: uint32
        ydk::YLeaf regrcvdforbd; //type: uint32
        ydk::YLeaf noroute; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::TrstatsItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems : public ydk::Entity
{
    public:
        VrfdetailItems();
        ~VrfdetailItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stlmt; //type: uint64
        ydk::YLeaf availstlmt; //type: uint64
        ydk::YLeaf rsvlmt; //type: uint64
        ydk::YLeaf availrsvlmt; //type: uint64
        ydk::YLeaf rsvpolname; //type: string
        ydk::YLeaf regratelmt; //type: uint64
        ydk::YLeaf sharedtrpolname; //type: string
        class GrangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems> grange_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems : public ydk::Entity
{
    public:
        GrangeItems();
        ~GrangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SharedRouteRangeList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList

        ydk::YList sharedrouterange_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList : public ydk::Entity
{
    public:
        SharedRouteRangeList();
        ~SharedRouteRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grangeip; //type: string

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::DbItems::DbList::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems : public ydk::Entity
{
    public:
        JpItems();
        ~JpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JpTrPList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList

        ydk::YList jptrp_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList : public ydk::Entity
{
    public:
        JpTrPList();
        ~JpTrPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf policydir; //type: RtdmcPolicyDirType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf itvl; //type: uint16

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::JpItems::JpTrPList


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems : public ydk::Entity
{
    public:
        HelloItems();
        ~HelloItems();

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
        ydk::YLeaf helloitvl; //type: uint32
        ydk::YLeaf autht; //type: RtdmcAuthT
        ydk::YLeaf authkey; //type: string

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::HelloItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lastclearts; //type: string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf autorpannrcvd; //type: uint32
        ydk::YLeaf autorpdiscrcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
        ydk::YLeaf autorpannsent; //type: uint32
        ydk::YLeaf autorpdiscsent; //type: uint32
        ydk::YLeaf autorprpfsent; //type: uint32
        ydk::YLeaf autorpbrddeny; //type: uint32
        ydk::YLeaf autorrpnolistn; //type: uint32
        ydk::YLeaf autorpttlexp; //type: uint32
        ydk::YLeaf autorpinvtype; //type: uint32
        ydk::YLeaf bsnonbr; //type: uint32
        ydk::YLeaf bsborddeny; //type: uint32
        ydk::YLeaf bslenerr; //type: uint32
        ydk::YLeaf bsrpffail; //type: uint32
        ydk::YLeaf bsnolis; //type: uint32
        ydk::YLeaf candrpnolis; //type: uint32
        ydk::YLeaf candrpborddeny; //type: uint32
        ydk::YLeaf regrcvdnorp; //type: uint32
        ydk::YLeaf regrcvdforssm; //type: uint32
        ydk::YLeaf regrcvdforbd; //type: uint32
        ydk::YLeaf noroute; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::TrstatsItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::Pim6Items::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::Pim6Items::InstItems::DomItems::DomList::LimitItems : public ydk::Entity
{
    public:
        LimitItems();
        ~LimitItems();

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
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf rsvd; //type: uint32
        ydk::YLeaf rtmap; //type: string

}; // System::Pim6Items::InstItems::DomItems::DomList::LimitItems


class System::Pim6Items::InstItems::DomItems::DomList::AsmItems : public ydk::Entity
{
    public:
        AsmItems();
        ~AsmItems();

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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf prebuildspt; //type: boolean
        ydk::YLeaf force; //type: boolean
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        class SgexpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems
        class SharedItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems
        class RegItems; //type: System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems> sgexp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems> shared_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems> reg_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::AsmItems


class System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems : public ydk::Entity
{
    public:
        SgexpItems();
        ~SgexpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf grplist; //type: string
        ydk::YLeaf grplist1; //type: string
        ydk::YLeaf grplist2; //type: string
        ydk::YLeaf grplist3; //type: string
        ydk::YLeaf ssmnone; //type: boolean
        ydk::YLeaf sgexpitvl; //type: uint32

}; // System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SgexpItems


class System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems : public ydk::Entity
{
    public:
        SharedItems();
        ~SharedItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf grplist; //type: string
        ydk::YLeaf grplist1; //type: string
        ydk::YLeaf grplist2; //type: string
        ydk::YLeaf grplist3; //type: string
        ydk::YLeaf ssmnone; //type: boolean
        ydk::YLeaf usesptcommand; //type: boolean

}; // System::Pim6Items::InstItems::DomItems::DomList::AsmItems::SharedItems


class System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems : public ydk::Entity
{
    public:
        RegItems();
        ~RegItems();

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
        ydk::YLeaf addr; //type: string
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf maxrate; //type: uint16
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string

}; // System::Pim6Items::InstItems::DomItems::DomList::AsmItems::RegItems


class System::Pim6Items::InstItems::DomItems::DomList::SsmItems : public ydk::Entity
{
    public:
        SsmItems();
        ~SsmItems();

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
        class RangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems> range_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::SsmItems


class System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems : public ydk::Entity
{
    public:
        RangeItems();
        ~RangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf grplist; //type: string
        ydk::YLeaf grplist1; //type: string
        ydk::YLeaf grplist2; //type: string
        ydk::YLeaf grplist3; //type: string
        ydk::YLeaf ssmnone; //type: boolean

}; // System::Pim6Items::InstItems::DomItems::DomList::SsmItems::RangeItems


class System::Pim6Items::InstItems::DomItems::DomList::BidirItems : public ydk::Entity
{
    public:
        BidirItems();
        ~BidirItems();

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
        ydk::YLeaf maxrp; //type: uint16
        ydk::YLeaf dfobitvl; //type: uint16

}; // System::Pim6Items::InstItems::DomItems::DomList::BidirItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems : public ydk::Entity
{
    public:
        StaticrpItems();
        ~StaticrpItems();

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
        class RpItems; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems> rp_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems : public ydk::Entity
{
    public:
        RpItems();
        ~RpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticRPList; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList

        ydk::YList staticrp_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList : public ydk::Entity
{
    public:
        StaticRPList();
        ~StaticRPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        class RangeItems; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems
        class RpgrplistItems; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems> range_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems> rpgrplist_items;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems : public ydk::Entity
{
    public:
        RangeItems();
        ~RangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpGrpRangeList; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList

        ydk::YList rpgrprange_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList : public ydk::Entity
{
    public:
        RpGrpRangeList();
        ~RpGrpRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bidir; //type: boolean
        ydk::YLeaf override; //type: boolean
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf grplist; //type: string
        ydk::YLeaf grplist1; //type: string
        ydk::YLeaf grplist2; //type: string
        ydk::YLeaf grplist3; //type: string
        ydk::YLeaf ssmnone; //type: boolean

}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RangeItems::RpGrpRangeList


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems : public ydk::Entity
{
    public:
        RpgrplistItems();
        ~RpgrplistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpGrpListList; //type: System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList

        ydk::YList rpgrplist_list;
        
}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems


class System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList : public ydk::Entity
{
    public:
        RpGrpListList();
        ~RpGrpListList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grplistname; //type: string
        ydk::YLeaf bidir; //type: boolean
        ydk::YLeaf override; //type: boolean

}; // System::Pim6Items::InstItems::DomItems::DomList::StaticrpItems::RpItems::StaticRPList::RpgrplistItems::RpGrpListList


class System::Pim6Items::InstItems::GlItems : public ydk::Entity
{
    public:
        GlItems();
        ~GlItems();

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

        ydk::YLeaf loglvl; //type: uint16
        ydk::YLeaf isolate; //type: boolean

}; // System::Pim6Items::InstItems::GlItems


class System::Pim6Items::InstItems::RoutedbItems : public ydk::Entity
{
    public:
        RoutedbItems();
        ~RoutedbItems();

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

        class VrfItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems> vrf_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems : public ydk::Entity
{
    public:
        VrfItems();
        ~VrfItems();

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

        class VrfList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList : public ydk::Entity
{
    public:
        VrfList();
        ~VrfList();

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
        ydk::YLeaf cid; //type: uint32
        ydk::YLeaf tableid; //type: string
        ydk::YLeaf pim6enbldintfcount; //type: uint32
        ydk::YLeaf bfdenabled; //type: boolean
        ydk::YLeaf totalnumroutes; //type: uint32
        class AutorpItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems
        class BsrItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems
        class GrangeItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems
        class GroupItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems
        class IfrecItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems
        class RpItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems
        class TrstatsItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems
        class VrfdetailItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems> autorp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems> bsr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems> grange_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems> group_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems> ifrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems> rp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems> trstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems> vrfdetail_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems : public ydk::Entity
{
    public:
        AutorpItems();
        ~AutorpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutoRppInfoList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList

        ydk::YList autorppinfo_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList : public ydk::Entity
{
    public:
        AutoRppInfoList();
        ~AutoRppInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf expiry; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::AutorpItems::AutoRppInfoList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems : public ydk::Entity
{
    public:
        BsrItems();
        ~BsrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BsrInfoList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList

        ydk::YList bsrinfo_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList : public ydk::Entity
{
    public:
        BsrInfoList();
        ~BsrInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf bsraddr; //type: string
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf hash; //type: uint32
        ydk::YLeaf hashmasklen; //type: uint32
        ydk::YLeaf besthash; //type: boolean

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::BsrItems::BsrInfoList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems : public ydk::Entity
{
    public:
        GrangeItems();
        ~GrangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpGrangeList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList

        ydk::YList rpgrange_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList : public ydk::Entity
{
    public:
        RpGrangeList();
        ~RpGrangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf mode; //type: string
        ydk::YLeaf usershared; //type: uint32

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GrangeItems::RpGrangeList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList : public ydk::Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpaddr; //type: string
        ydk::YLeaf grpmasklen; //type: uint32
        ydk::YLeaf bidir; //type: boolean
        class SourceItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
{
    public:
        SourceList();
        ~SourceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf expiryts; //type: string
        ydk::YLeaf assertmetrics; //type: uint32
        ydk::YLeaf assertmetricprefs; //type: uint32
        ydk::YLeaf oifcount; //type: uint32
        ydk::YLeaf routeiif; //type: string
        ydk::YLeaf rpfnbr; //type: string
        ydk::YLeaf routebits; //type: string
        ydk::YLeaf rttimeoutinvtl; //type: uint32
        ydk::YLeaf jpholdtime; //type: uint32
        class OifItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems> oif_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems : public ydk::Entity
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

        class OifList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList : public ydk::Entity
{
    public:
        OifList();
        ~OifList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oifname; //type: string
        ydk::YLeaf oifuptime; //type: string
        ydk::YLeaf oifrpf; //type: boolean
        ydk::YLeaf oiflispencapentries; //type: uint32

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::GroupList::SourceItems::SourceList::OifItems::OifList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems : public ydk::Entity
{
    public:
        IfrecItems();
        ~IfrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfRecList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList

        ydk::YList ifrec_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList : public ydk::Entity
{
    public:
        IfRecList();
        ~IfRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pim6ifname; //type: string
        ydk::YLeaf pim6dr; //type: string
        ydk::YLeaf pim6drprio; //type: uint32
        ydk::YLeaf pim6nbrholdtime; //type: uint32
        ydk::YLeaf pim6genid; //type: uint32
        ydk::YLeaf pim6nexthello; //type: string
        ydk::YLeaf pim6ipaddr; //type: string
        ydk::YLeaf pim6border; //type: boolean
        ydk::YLeaf pim6sparsemode; //type: boolean
        class AdjrecItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems
        class IfstatsItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems> adjrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems> ifstats_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems : public ydk::Entity
{
    public:
        AdjrecItems();
        ~AdjrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjEpRecList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList

        ydk::YList adjeprec_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList : public ydk::Entity
{
    public:
        AdjEpRecList();
        ~AdjEpRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf nbrname; //type: string
        ydk::YLeaf drprio; //type: uint32
        ydk::YLeaf learntime; //type: string
        ydk::YLeaf expirytime; //type: string
        ydk::YLeaf genid; //type: uint32
        ydk::YLeaf bfdst; //type: RtdmcBfdOperSt
        ydk::YLeaf operst; //type: RtdmcAdjOperSt
        ydk::YLeaf flags; //type: string
        class AdjstatsItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems> adjstats_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lasthellorcvd; //type: string
        ydk::YLeaf longhelloitvl; //type: uint32
        ydk::YLeaf lastholdtime; //type: uint16
        ydk::YLeaf nonhelloexpresets; //type: uint32

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::AdjrecItems::AdjEpRecList::AdjstatsItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems : public ydk::Entity
{
    public:
        IfstatsItems();
        ~IfstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hellosent; //type: uint32
        ydk::YLeaf hellorcvd; //type: uint32
        ydk::YLeaf jpsent; //type: uint32
        ydk::YLeaf jprcvd; //type: uint32
        ydk::YLeaf assertsent; //type: uint32
        ydk::YLeaf assertrcvd; //type: uint32
        ydk::YLeaf graftssent; //type: uint32
        ydk::YLeaf graftsrcvd; //type: uint32
        ydk::YLeaf grftacksent; //type: uint32
        ydk::YLeaf grftackrcvd; //type: uint32
        ydk::YLeaf dfoffersent; //type: uint32
        ydk::YLeaf dfofferrcvd; //type: uint32
        ydk::YLeaf dfwinnersent; //type: uint32
        ydk::YLeaf dfwinnerrcvd; //type: uint32
        ydk::YLeaf dfbackoffsent; //type: uint32
        ydk::YLeaf dfbackoffrcvd; //type: uint32
        ydk::YLeaf dfpassessent; //type: uint32
        ydk::YLeaf dfpassesrcvd; //type: uint32
        ydk::YLeaf chksumerr; //type: uint32
        ydk::YLeaf invalidpktsent; //type: uint32
        ydk::YLeaf invalidpktrcvd; //type: uint32
        ydk::YLeaf authfail; //type: uint32
        ydk::YLeaf pktlenerr; //type: uint32
        ydk::YLeaf badverpkt; //type: uint32
        ydk::YLeaf pktfrmself; //type: uint32
        ydk::YLeaf pktfrmnonnbr; //type: uint32
        ydk::YLeaf pktonpassiveif; //type: uint32
        ydk::YLeaf jprcvdonrpf; //type: uint32
        ydk::YLeaf joinnorp; //type: uint32
        ydk::YLeaf joinwrongrp; //type: uint32
        ydk::YLeaf jpssmrcvd; //type: uint32
        ydk::YLeaf jpbidirrcvd; //type: uint32
        ydk::YLeaf jpfilterin; //type: uint32
        ydk::YLeaf jpfilterout; //type: uint32

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::IfrecItems::IfRecList::IfstatsItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems : public ydk::Entity
{
    public:
        RpItems();
        ~RpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpInfoRecList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList

        ydk::YList rpinforec_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList : public ydk::Entity
{
    public:
        RpInfoRecList();
        ~RpInfoRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpaddr; //type: string
        ydk::YLeaf rplocal; //type: boolean
        ydk::YLeaf rpuptime; //type: string
        ydk::YLeaf rppriority; //type: uint32
        ydk::YLeaf rpdisctype; //type: string
        ydk::YLeaf rpdfordinal; //type: uint32
        ydk::YLeaf rpmetricpref; //type: uint32
        ydk::YLeaf rpmetric; //type: uint32
        class RpifItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems> rpif_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems : public ydk::Entity
{
    public:
        RpifItems();
        ~RpifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RpIfList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList

        ydk::YList rpif_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList : public ydk::Entity
{
    public:
        RpIfList();
        ~RpIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ifname; //type: string
        ydk::YLeaf dfwinner; //type: string
        ydk::YLeaf dfstate; //type: RtdmcDfStates
        ydk::YLeaf dfuptime; //type: string
        ydk::YLeaf isrpf; //type: boolean
        ydk::YLeaf winnermetricpref; //type: uint32
        ydk::YLeaf winnermetric; //type: uint32

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::RpItems::RpInfoRecList::RpifItems::RpIfList


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems : public ydk::Entity
{
    public:
        TrstatsItems();
        ~TrstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lastclearts; //type: string
        ydk::YLeaf regrcvd; //type: uint32
        ydk::YLeaf nullregrcvd; //type: uint32
        ydk::YLeaf regstoprcvd; //type: uint32
        ydk::YLeaf bsrcvd; //type: uint32
        ydk::YLeaf candrprcvd; //type: uint32
        ydk::YLeaf autorpannrcvd; //type: uint32
        ydk::YLeaf autorpdiscrcvd; //type: uint32
        ydk::YLeaf nullregsent; //type: uint32
        ydk::YLeaf regstopsent; //type: uint32
        ydk::YLeaf bssent; //type: uint32
        ydk::YLeaf candrpsent; //type: uint32
        ydk::YLeaf autorpannsent; //type: uint32
        ydk::YLeaf autorpdiscsent; //type: uint32
        ydk::YLeaf autorprpfsent; //type: uint32
        ydk::YLeaf autorpbrddeny; //type: uint32
        ydk::YLeaf autorrpnolistn; //type: uint32
        ydk::YLeaf autorpttlexp; //type: uint32
        ydk::YLeaf autorpinvtype; //type: uint32
        ydk::YLeaf bsnonbr; //type: uint32
        ydk::YLeaf bsborddeny; //type: uint32
        ydk::YLeaf bslenerr; //type: uint32
        ydk::YLeaf bsrpffail; //type: uint32
        ydk::YLeaf bsnolis; //type: uint32
        ydk::YLeaf candrpnolis; //type: uint32
        ydk::YLeaf candrpborddeny; //type: uint32
        ydk::YLeaf regrcvdnorp; //type: uint32
        ydk::YLeaf regrcvdforssm; //type: uint32
        ydk::YLeaf regrcvdforbd; //type: uint32
        ydk::YLeaf noroute; //type: uint32

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::TrstatsItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems : public ydk::Entity
{
    public:
        VrfdetailItems();
        ~VrfdetailItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stlmt; //type: uint64
        ydk::YLeaf availstlmt; //type: uint64
        ydk::YLeaf rsvlmt; //type: uint64
        ydk::YLeaf availrsvlmt; //type: uint64
        ydk::YLeaf rsvpolname; //type: string
        ydk::YLeaf regratelmt; //type: uint64
        ydk::YLeaf sharedtrpolname; //type: string
        class GrangeItems; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems> grange_items;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems : public ydk::Entity
{
    public:
        GrangeItems();
        ~GrangeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SharedRouteRangeList; //type: System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList

        ydk::YList sharedrouterange_list;
        
}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems


class System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList : public ydk::Entity
{
    public:
        SharedRouteRangeList();
        ~SharedRouteRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grangeip; //type: string

}; // System::Pim6Items::InstItems::RoutedbItems::VrfItems::VrfList::VrfdetailItems::GrangeItems::SharedRouteRangeList


class System::SegrtItems : public ydk::Entity
{
    public:
        SegrtItems();
        ~SegrtItems();

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
        class InstItems; //type: System::SegrtItems::InstItems
        class TeItems; //type: System::SegrtItems::TeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems> te_items;
        
}; // System::SegrtItems


class System::SegrtItems::InstItems : public ydk::Entity
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

        ydk::YLeaf srgbcleanupintvl; //type: uint16
        ydk::YLeaf srgballocretryintvl; //type: uint16
        ydk::YLeaf operst; //type: SegrtOperSt
        ydk::YLeaf operstqual; //type: SegrtOperStQual
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class DomItems; //type: System::SegrtItems::InstItems::DomItems
        class SrgbItems; //type: System::SegrtItems::InstItems::SrgbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems> srgb_items;
        
}; // System::SegrtItems::InstItems


class System::SegrtItems::InstItems::DomItems : public ydk::Entity
{
    public:
        DomItems();
        ~DomItems();

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

        class DomList; //type: System::SegrtItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::SegrtItems::InstItems::DomItems


class System::SegrtItems::InstItems::DomItems::DomList : public ydk::Entity
{
    public:
        DomList();
        ~DomList();

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
        class AfItems; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::DomItems::DomList::AfItems> af_items;
        
}; // System::SegrtItems::InstItems::DomItems::DomList


class System::SegrtItems::InstItems::DomItems::DomList::AfItems : public ydk::Entity
{
    public:
        AfItems();
        ~AfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomAfList; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList

        ydk::YList domaf_list;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList : public ydk::Entity
{
    public:
        DomAfList();
        ~DomAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aftype; //type: SegrtAfType
        ydk::YLeaf name; //type: string
        class PfxsidItems; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems> pfxsid_items;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrefixSidList; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList

        ydk::YList prefixsid_list;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList : public ydk::Entity
{
    public:
        PrefixSidList();
        ~PrefixSidList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SegrtSrDpType
        class MplspfxsidItems; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems> mplspfxsid_items;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems : public ydk::Entity
{
    public:
        MplspfxsidItems();
        ~MplspfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MplsPrefixSidList; //type: System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList

        ydk::YList mplsprefixsid_list;
        
}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems


class System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList : public ydk::Entity
{
    public:
        MplsPrefixSidList();
        ~MplsPrefixSidList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf sidvaluetype; //type: SegrtSidValueType
        ydk::YLeaf sidvalue; //type: uint32

}; // System::SegrtItems::InstItems::DomItems::DomList::AfItems::DomAfList::PfxsidItems::PrefixSidList::MplspfxsidItems::MplsPrefixSidList


class System::SegrtItems::InstItems::SrgbItems : public ydk::Entity
{
    public:
        SrgbItems();
        ~SrgbItems();

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

        class CfgsrgbItems; //type: System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems
        class OpersrgbItems; //type: System::SegrtItems::InstItems::SrgbItems::OpersrgbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems> cfgsrgb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems::OpersrgbItems> opersrgb_items;
        
}; // System::SegrtItems::InstItems::SrgbItems


class System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems : public ydk::Entity
{
    public:
        CfgsrgbItems();
        ~CfgsrgbItems();

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

        class ConfigSrgbList; //type: System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList

        ydk::YList configsrgb_list;
        
}; // System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems


class System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList : public ydk::Entity
{
    public:
        ConfigSrgbList();
        ~ConfigSrgbList();

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

        ydk::YLeaf type; //type: SegrtSrDpType
        class LblblockItems; //type: System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems> lblblock_items;
        
}; // System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList


class System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems : public ydk::Entity
{
    public:
        LblblockItems();
        ~LblblockItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LblBlockList; //type: System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList

        ydk::YList lblblock_list;
        
}; // System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems


class System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList : public ydk::Entity
{
    public:
        LblBlockList();
        ~LblBlockList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localid; //type: string
        ydk::YLeaf srlblmin; //type: uint32
        ydk::YLeaf srlblmax; //type: uint32
        ydk::YLeaf operst; //type: SegrtSRGBOperSt
        ydk::YLeaf numallocretries; //type: uint32

}; // System::SegrtItems::InstItems::SrgbItems::CfgsrgbItems::ConfigSrgbList::LblblockItems::LblBlockList


class System::SegrtItems::InstItems::SrgbItems::OpersrgbItems : public ydk::Entity
{
    public:
        OpersrgbItems();
        ~OpersrgbItems();

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

        ydk::YLeaf type; //type: SegrtSrDpType
        class OperlblblockItems; //type: System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems> operlblblock_items;
        
}; // System::SegrtItems::InstItems::SrgbItems::OpersrgbItems


class System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems : public ydk::Entity
{
    public:
        OperlblblockItems();
        ~OperlblblockItems();

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

        class OperLblBlockList; //type: System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList

        ydk::YList operlblblock_list;
        
}; // System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems


class System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList : public ydk::Entity
{
    public:
        OperLblBlockList();
        ~OperLblBlockList();

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

        ydk::YLeaf localid; //type: string
        ydk::YLeaf srlblmin; //type: uint32
        ydk::YLeaf srlblmax; //type: uint32
        ydk::YLeaf operst; //type: SegrtSRGBOperSt
        ydk::YLeaf numallocretries; //type: uint32

}; // System::SegrtItems::InstItems::SrgbItems::OpersrgbItems::OperlblblockItems::OperLblBlockList


class System::SegrtItems::TeItems : public ydk::Entity
{
    public:
        TeItems();
        ~TeItems();

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
        class ColorItems; //type: System::SegrtItems::TeItems::ColorItems
        class EncapItems; //type: System::SegrtItems::TeItems::EncapItems
        class ExppathItems; //type: System::SegrtItems::TeItems::ExppathItems
        class PccItems; //type: System::SegrtItems::TeItems::PccItems
        class PolicyItems; //type: System::SegrtItems::TeItems::PolicyItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ColorItems> color_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::EncapItems> encap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ExppathItems> exppath_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PccItems> pcc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems> policy_items;
        
}; // System::SegrtItems::TeItems


class System::SegrtItems::TeItems::ColorItems : public ydk::Entity
{
    public:
        ColorItems();
        ~ColorItems();

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

        class ColorList; //type: System::SegrtItems::TeItems::ColorItems::ColorList

        ydk::YList color_list;
        
}; // System::SegrtItems::TeItems::ColorItems


class System::SegrtItems::TeItems::ColorItems::ColorList : public ydk::Entity
{
    public:
        ColorList();
        ~ColorList();

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

        ydk::YLeaf color; //type: uint64
        ydk::YLeaf metric; //type: SrteMetric

}; // System::SegrtItems::TeItems::ColorItems::ColorList


class System::SegrtItems::TeItems::EncapItems : public ydk::Entity
{
    public:
        EncapItems();
        ~EncapItems();

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

        class EncapsulationList; //type: System::SegrtItems::TeItems::EncapItems::EncapsulationList

        ydk::YList encapsulation_list;
        
}; // System::SegrtItems::TeItems::EncapItems


class System::SegrtItems::TeItems::EncapItems::EncapsulationList : public ydk::Entity
{
    public:
        EncapsulationList();
        ~EncapsulationList();

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

        ydk::YLeaf encaptype; //type: SrteEncapsulationType
        ydk::YLeaf srcaddress; //type: string

}; // System::SegrtItems::TeItems::EncapItems::EncapsulationList


class System::SegrtItems::TeItems::ExppathItems : public ydk::Entity
{
    public:
        ExppathItems();
        ~ExppathItems();

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

        class ExpPathList; //type: System::SegrtItems::TeItems::ExppathItems::ExpPathList

        ydk::YList exppath_list;
        
}; // System::SegrtItems::TeItems::ExppathItems


class System::SegrtItems::TeItems::ExppathItems::ExpPathList : public ydk::Entity
{
    public:
        ExpPathList();
        ~ExpPathList();

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
        class NxtlblItems; //type: System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems> nxtlbl_items;
        
}; // System::SegrtItems::TeItems::ExppathItems::ExpPathList


class System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems : public ydk::Entity
{
    public:
        NxtlblItems();
        ~NxtlblItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NxtLblList; //type: System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList

        ydk::YList nxtlbl_list;
        
}; // System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems


class System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList : public ydk::Entity
{
    public:
        NxtLblList();
        ~NxtLblList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint32
        ydk::YLeaf lbl; //type: uint32

}; // System::SegrtItems::TeItems::ExppathItems::ExpPathList::NxtlblItems::NxtLblList


class System::SegrtItems::TeItems::PccItems : public ydk::Entity
{
    public:
        PccItems();
        ~PccItems();

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

        ydk::YLeaf srcaddress; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class PceItems; //type: System::SegrtItems::TeItems::PccItems::PceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PccItems::PceItems> pce_items;
        
}; // System::SegrtItems::TeItems::PccItems


class System::SegrtItems::TeItems::PccItems::PceItems : public ydk::Entity
{
    public:
        PceItems();
        ~PceItems();

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

        class PceList; //type: System::SegrtItems::TeItems::PccItems::PceItems::PceList

        ydk::YList pce_list;
        
}; // System::SegrtItems::TeItems::PccItems::PceItems


class System::SegrtItems::TeItems::PccItems::PceItems::PceList : public ydk::Entity
{
    public:
        PceList();
        ~PceList();

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

        ydk::YLeaf pceaddress; //type: string
        ydk::YLeaf precedence; //type: uint32

}; // System::SegrtItems::TeItems::PccItems::PceItems::PceList


class System::SegrtItems::TeItems::PolicyItems : public ydk::Entity
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

        class PolicyList; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList

        ydk::YList policy_list;
        
}; // System::SegrtItems::TeItems::PolicyItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf endpoint; //type: string
        ydk::YLeaf color; //type: uint64
        class PrefItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems> pref_items;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList


class System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems : public ydk::Entity
{
    public:
        PrefItems();
        ~PrefItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolPrefList; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList

        ydk::YList polpref_list;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList : public ydk::Entity
{
    public:
        PolPrefList();
        ~PolPrefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pref; //type: uint32
        class ExpItems; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems> exp_items;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList


class System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems : public ydk::Entity
{
    public:
        ExpItems();
        ~ExpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolExpList; //type: System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList

        ydk::YList polexp_list;
        
}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems


class System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList : public ydk::Entity
{
    public:
        PolExpList();
        ~PolExpList();

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

}; // System::SegrtItems::TeItems::PolicyItems::PolicyList::PrefItems::PolPrefList::ExpItems::PolExpList


class System::VrrpItems : public ydk::Entity
{
    public:
        VrrpItems();
        ~VrrpItems();

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
        class InstItems; //type: System::VrrpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems> inst_items;
        
}; // System::VrrpItems


class System::VrrpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class IfItems; //type: System::VrrpItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems> if_items;
        
}; // System::VrrpItems::InstItems


class System::VrrpItems::InstItems::IfItems : public ydk::Entity
{
    public:
        IfItems();
        ~IfItems();

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

        class InterfaceList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList

        ydk::YList interface_list;
        
}; // System::VrrpItems::InstItems::IfItems


class System::VrrpItems::InstItems::IfItems::InterfaceList : public ydk::Entity
{
    public:
        InterfaceList();
        ~InterfaceList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class IdItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems
        class RtvrfMbrItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems> id_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems : public ydk::Entity
{
    public:
        IdItems();
        ~IdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IdList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList

        ydk::YList id_list;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList : public ydk::Entity
{
    public:
        IdList();
        ~IdList();

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
        ydk::YLeaf primary; //type: string
        ydk::YLeaf advintvl; //type: uint8
        ydk::YLeaf authtext; //type: string
        ydk::YLeaf authtype; //type: VrrpAuthType
        ydk::YLeaf preempt; //type: VrrpPreempt
        ydk::YLeaf pricfg; //type: uint8
        ydk::YLeaf bfdpeeraddr; //type: string
        ydk::YLeaf fwdlwrthrld; //type: uint8
        ydk::YLeaf fwduprthrld; //type: uint8
        ydk::YLeaf adminst; //type: VrrpAdminSt
        ydk::YLeaf groupst; //type: VrrpGroupSt
        ydk::YLeaf groupstqual; //type: VrrpGroupStQual
        ydk::YLeaf mac; //type: string
        ydk::YLeaf masteraddr; //type: string
        ydk::YLeaf bfdsessionst; //type: VrrpBfdSessionSt
        class SecondaryItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems
        class TrackItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems> secondary_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems> track_items;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems : public ydk::Entity
{
    public:
        SecondaryItems();
        ~SecondaryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SecondaryList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList

        ydk::YList secondary_list;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList : public ydk::Entity
{
    public:
        SecondaryList();
        ~SecondaryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secondary; //type: string

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::SecondaryItems::SecondaryList


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems : public ydk::Entity
{
    public:
        TrackItems();
        ~TrackItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NativeTrackItems; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems
        class TrackItems_; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems> nativetrack_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_> track_items;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems : public ydk::Entity
{
    public:
        NativeTrackItems();
        ~NativeTrackItems();

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
        ydk::YLeaf priority; //type: uint16

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::NativeTrackItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_ : public ydk::Entity
{
    public:
        TrackItems_();
        ~TrackItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ObjectTrackList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList

        ydk::YList objecttrack_list;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_


class System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList : public ydk::Entity
{
    public:
        ObjectTrackList();
        ~ObjectTrackList();

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
        ydk::YLeaf decrementpriority; //type: uint16

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::IdItems::IdList::TrackItems::TrackItems_::ObjectTrackList


class System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems : public ydk::Entity
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

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::RtvrfMbrItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems


class System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::VrrpItems::InstItems::IfItems::InterfaceList::RtnwPathToIfItems::RtNwPathToIfList


class System::Vrrpv3Items : public ydk::Entity
{
    public:
        Vrrpv3Items();
        ~Vrrpv3Items();

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
        class InstItems; //type: System::Vrrpv3Items::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems> inst_items;
        
}; // System::Vrrpv3Items


class System::Vrrpv3Items::InstItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class IfItems; //type: System::Vrrpv3Items::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::Vrrpv3Items::InstItems::IfItems> if_items;
        
}; // System::Vrrpv3Items::InstItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_44_ */

