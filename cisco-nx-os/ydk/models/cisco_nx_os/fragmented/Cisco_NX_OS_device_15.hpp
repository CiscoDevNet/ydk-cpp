#ifndef _CISCO_NX_OS_DEVICE_15_
#define _CISCO_NX_OS_DEVICE_15_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_14.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BgpItems::InstItems::EvthistItems::EvtHistList : public ydk::Entity
{
    public:
        EvtHistList();
        ~EvtHistList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: BgpEhType
        ydk::YLeaf size; //type: uint32

}; // System::BgpItems::InstItems::EvthistItems::EvtHistList


class System::BgpItems::InstItems::OperItems : public ydk::Entity
{
    public:
        OperItems();
        ~OperItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class L2Items; //type: System::BgpItems::InstItems::OperItems::L2Items
        class L3Items; //type: System::BgpItems::InstItems::OperItems::L3Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems::L2Items> l2_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems::L3Items> l3_items;
        
}; // System::BgpItems::InstItems::OperItems


class System::BgpItems::InstItems::OperItems::L2Items : public ydk::Entity
{
    public:
        L2Items();
        ~L2Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OperRtctrlL2List; //type: System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List

        ydk::YList operrtctrll2_list;
        
}; // System::BgpItems::InstItems::OperItems::L2Items


class System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List : public ydk::Entity
{
    public:
        OperRtctrlL2List();
        ~OperRtctrlL2List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf rd; //type: string
        class RttpItems; //type: System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems> rttp_items;
        
}; // System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List


class System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems : public ydk::Entity
{
    public:
        RttpItems();
        ~RttpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OperRttPList; //type: System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList

        ydk::YList operrttp_list;
        
}; // System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems


class System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList : public ydk::Entity
{
    public:
        OperRttPList();
        ~OperRttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RtctrlRttPType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class EntryItems; //type: System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems> entry_items;
        
}; // System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList


class System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems : public ydk::Entity
{
    public:
        EntryItems();
        ~EntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OperRttEntryList; //type: System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList

        ydk::YList operrttentry_list;
        
}; // System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems


class System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList : public ydk::Entity
{
    public:
        OperRttEntryList();
        ~OperRttEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtt; //type: string

}; // System::BgpItems::InstItems::OperItems::L2Items::OperRtctrlL2List::RttpItems::OperRttPList::EntryItems::OperRttEntryList


class System::BgpItems::InstItems::OperItems::L3Items : public ydk::Entity
{
    public:
        L3Items();
        ~L3Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OperRtctrlL3List; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List

        ydk::YList operrtctrll3_list;
        
}; // System::BgpItems::InstItems::OperItems::L3Items


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List : public ydk::Entity
{
    public:
        OperRtctrlL3List();
        ~OperRtctrlL3List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf rd; //type: string
        class AfItems; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems> af_items;
        
}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems : public ydk::Entity
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

        class OperDomAfList; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList

        ydk::YList operdomaf_list;
        
}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList : public ydk::Entity
{
    public:
        OperDomAfList();
        ~OperDomAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
        ydk::YLeaf name; //type: string
        class CtrlItems; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems> ctrl_items;
        
}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems : public ydk::Entity
{
    public:
        CtrlItems();
        ~CtrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OperAfCtrlList; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList

        ydk::YList operafctrl_list;
        
}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList : public ydk::Entity
{
    public:
        OperAfCtrlList();
        ~OperAfCtrlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
        ydk::YLeaf name; //type: string
        class RttpItems; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems> rttp_items;
        
}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems : public ydk::Entity
{
    public:
        RttpItems();
        ~RttpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OperRttPList; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList

        ydk::YList operrttp_list;
        
}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList : public ydk::Entity
{
    public:
        OperRttPList();
        ~OperRttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: RtctrlRttPType
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class EntryItems; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems> entry_items;
        
}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems : public ydk::Entity
{
    public:
        EntryItems();
        ~EntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OperRttEntryList; //type: System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList

        ydk::YList operrttentry_list;
        
}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems


class System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList : public ydk::Entity
{
    public:
        OperRttEntryList();
        ~OperRttEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtt; //type: string

}; // System::BgpItems::InstItems::OperItems::L3Items::OperRtctrlL3List::AfItems::OperDomAfList::CtrlItems::OperAfCtrlList::RttpItems::OperRttPList::EntryItems::OperRttEntryList


class System::CallhomeItems : public ydk::Entity
{
    public:
        CallhomeItems();
        ~CallhomeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::CallhomeItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems> inst_items;
        
}; // System::CallhomeItems


class System::CallhomeItems::InstItems : public ydk::Entity
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

        ydk::YLeaf callhomeenable; //type: CallhomeBoolean
        ydk::YLeaf dupmsgthrottle; //type: CallhomeBoolean
        ydk::YLeaf contractid; //type: string
        ydk::YLeaf customerid; //type: string
        ydk::YLeaf emailid; //type: string
        ydk::YLeaf phonecontact; //type: string
        ydk::YLeaf siteid; //type: string
        ydk::YLeaf streetaddress; //type: string
        ydk::YLeaf switchpri; //type: uint16
        ydk::YLeaf periodicinvnotif; //type: CallhomeBoolean
        ydk::YLeaf periodinvnotifinterval; //type: uint32
        ydk::YLeaf periodinvnotiftimeofdayhour; //type: uint32
        ydk::YLeaf periodinvnotiftimeofdayminute; //type: uint32
        class AlertgroupItems; //type: System::CallhomeItems::InstItems::AlertgroupItems
        class DestprofItems; //type: System::CallhomeItems::InstItems::DestprofItems
        class TransportItems; //type: System::CallhomeItems::InstItems::TransportItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::AlertgroupItems> alertgroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::DestprofItems> destprof_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::TransportItems> transport_items;
        
}; // System::CallhomeItems::InstItems


class System::CallhomeItems::InstItems::AlertgroupItems : public ydk::Entity
{
    public:
        AlertgroupItems();
        ~AlertgroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AlertGroupList; //type: System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList

        ydk::YList alertgroup_list;
        
}; // System::CallhomeItems::InstItems::AlertgroupItems


class System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList : public ydk::Entity
{
    public:
        AlertGroupList();
        ~AlertGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf alertgroup; //type: CallhomeAlertGroupName
        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf userdefcmd; //type: string

}; // System::CallhomeItems::InstItems::AlertgroupItems::AlertGroupList


class System::CallhomeItems::InstItems::DestprofItems : public ydk::Entity
{
    public:
        DestprofItems();
        ~DestprofItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PredefprofileItems; //type: System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems
        class CustprofItems; //type: System::CallhomeItems::InstItems::DestprofItems::CustprofItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems> predefprofile_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::DestprofItems::CustprofItems> custprof_items;
        
}; // System::CallhomeItems::InstItems::DestprofItems


class System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems : public ydk::Entity
{
    public:
        PredefprofileItems();
        ~PredefprofileItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PredefinedProfileList; //type: System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList

        ydk::YList predefinedprofile_list;
        
}; // System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems


class System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList : public ydk::Entity
{
    public:
        PredefinedProfileList();
        ~PredefinedProfileList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf predefprofile; //type: CallhomePredefProfileName
        ydk::YLeaf transportmethodemail; //type: CallhomeBoolean
        ydk::YLeaf transportmethodhttp; //type: CallhomeBoolean
        ydk::YLeaf messagelevel; //type: uint32
        ydk::YLeaf messagesize; //type: uint32
        ydk::YLeaf format; //type: CallhomeFormat
        ydk::YLeaf alertgrpciscotac1; //type: CallhomeBoolean
        ydk::YLeaf alertgrpconfiguration; //type: CallhomeBoolean
        ydk::YLeaf alertgrpdiagnostic; //type: CallhomeBoolean
        ydk::YLeaf alertgrpeem; //type: CallhomeBoolean
        ydk::YLeaf alertgrpenvironmental; //type: CallhomeBoolean
        ydk::YLeaf alertgrpinventory; //type: CallhomeBoolean
        ydk::YLeaf alertgrplinecard; //type: CallhomeBoolean
        ydk::YLeaf alertgrpsupervisor; //type: CallhomeBoolean
        ydk::YLeaf alertgrpsyslogport; //type: CallhomeBoolean
        ydk::YLeaf alertgrpsystem; //type: CallhomeBoolean
        ydk::YLeaf alertgrptest; //type: CallhomeBoolean
        ydk::YLeaf alertgrplicense; //type: CallhomeBoolean
        ydk::YLeaf alertgrpall; //type: CallhomeBoolean
        class PdprofemailItems; //type: System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems
        class PdprofhttpItems; //type: System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems> pdprofemail_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems> pdprofhttp_items;
        
}; // System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList


class System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems : public ydk::Entity
{
    public:
        PdprofemailItems();
        ~PdprofemailItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PredefProfEmailList; //type: System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList

        ydk::YList predefprofemail_list;
        
}; // System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems


class System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList : public ydk::Entity
{
    public:
        PredefProfEmailList();
        ~PredefProfEmailList();

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
        ydk::YLeaf emailaddr; //type: string

}; // System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofemailItems::PredefProfEmailList


class System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems : public ydk::Entity
{
    public:
        PdprofhttpItems();
        ~PdprofhttpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PredefProfHttpList; //type: System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList

        ydk::YList predefprofhttp_list;
        
}; // System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems


class System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList : public ydk::Entity
{
    public:
        PredefProfHttpList();
        ~PredefProfHttpList();

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
        ydk::YLeaf http; //type: string

}; // System::CallhomeItems::InstItems::DestprofItems::PredefprofileItems::PredefinedProfileList::PdprofhttpItems::PredefProfHttpList


class System::CallhomeItems::InstItems::DestprofItems::CustprofItems : public ydk::Entity
{
    public:
        CustprofItems();
        ~CustprofItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CustomProfileList; //type: System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList

        ydk::YList customprofile_list;
        
}; // System::CallhomeItems::InstItems::DestprofItems::CustprofItems


class System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList : public ydk::Entity
{
    public:
        CustomProfileList();
        ~CustomProfileList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf profilename; //type: string
        ydk::YLeaf transportmethodemail; //type: CallhomeBoolean
        ydk::YLeaf transportmethodhttp; //type: CallhomeBoolean
        ydk::YLeaf messagelevel; //type: uint32
        ydk::YLeaf messagesize; //type: uint32
        ydk::YLeaf format; //type: CallhomeFormat
        ydk::YLeaf alertgrpciscotac1; //type: CallhomeBoolean
        ydk::YLeaf alertgrpconfiguration; //type: CallhomeBoolean
        ydk::YLeaf alertgrpdiagnostic; //type: CallhomeBoolean
        ydk::YLeaf alertgrpeem; //type: CallhomeBoolean
        ydk::YLeaf alertgrpenvironmental; //type: CallhomeBoolean
        ydk::YLeaf alertgrpinventory; //type: CallhomeBoolean
        ydk::YLeaf alertgrplinecard; //type: CallhomeBoolean
        ydk::YLeaf alertgrpsupervisor; //type: CallhomeBoolean
        ydk::YLeaf alertgrpsyslogport; //type: CallhomeBoolean
        ydk::YLeaf alertgrpsystem; //type: CallhomeBoolean
        ydk::YLeaf alertgrptest; //type: CallhomeBoolean
        ydk::YLeaf alertgrplicense; //type: CallhomeBoolean
        ydk::YLeaf alertgrpall; //type: CallhomeBoolean
        class CustemailItems; //type: System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems
        class CusthttpItems; //type: System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems> custemail_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems> custhttp_items;
        
}; // System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList


class System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems : public ydk::Entity
{
    public:
        CustemailItems();
        ~CustemailItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CustomEmailList; //type: System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList

        ydk::YList customemail_list;
        
}; // System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems


class System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList : public ydk::Entity
{
    public:
        CustomEmailList();
        ~CustomEmailList();

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
        ydk::YLeaf emailaddr; //type: string

}; // System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CustemailItems::CustomEmailList


class System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems : public ydk::Entity
{
    public:
        CusthttpItems();
        ~CusthttpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CustomHttpList; //type: System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList

        ydk::YList customhttp_list;
        
}; // System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems


class System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList : public ydk::Entity
{
    public:
        CustomHttpList();
        ~CustomHttpList();

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
        ydk::YLeaf http; //type: string

}; // System::CallhomeItems::InstItems::DestprofItems::CustprofItems::CustomProfileList::CusthttpItems::CustomHttpList


class System::CallhomeItems::InstItems::TransportItems : public ydk::Entity
{
    public:
        TransportItems();
        ~TransportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf httpproxyenable; //type: CallhomeBoolean
        ydk::YLeaf proxyserver; //type: string
        ydk::YLeaf proxyserverport; //type: uint32
        ydk::YLeaf httpusevrf; //type: string
        ydk::YLeaf emailfrom; //type: string
        ydk::YLeaf emailreplyto; //type: string
        class EmailserverItems; //type: System::CallhomeItems::InstItems::TransportItems::EmailserverItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CallhomeItems::InstItems::TransportItems::EmailserverItems> emailserver_items;
        
}; // System::CallhomeItems::InstItems::TransportItems


class System::CallhomeItems::InstItems::TransportItems::EmailserverItems : public ydk::Entity
{
    public:
        EmailserverItems();
        ~EmailserverItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EmailServerList; //type: System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList

        ydk::YList emailserver_list;
        
}; // System::CallhomeItems::InstItems::TransportItems::EmailserverItems


class System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList : public ydk::Entity
{
    public:
        EmailServerList();
        ~EmailServerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf emailserver; //type: string
        ydk::YLeaf mailserverport; //type: uint32
        ydk::YLeaf mailserverpriority; //type: uint32
        ydk::YLeaf mailserverusevrf; //type: string

}; // System::CallhomeItems::InstItems::TransportItems::EmailserverItems::EmailServerList


class System::CaploglevelItems : public ydk::Entity
{
    public:
        CaploglevelItems();
        ~CaploglevelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logginglevel; //type: uint16
        ydk::YLeaf loggingtype; //type: CapLoggingType

}; // System::CaploglevelItems


class System::SfwItems : public ydk::Entity
{
    public:
        SfwItems();
        ~SfwItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SuppFwList; //type: System::SfwItems::SuppFwList

        ydk::YList suppfw_list;
        
}; // System::SfwItems


class System::SfwItems::SuppFwList : public ydk::Entity
{
    public:
        SuppFwList();
        ~SuppFwList();

        bool has_data() const override;
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
        ydk::YLeaf version; //type: string

}; // System::SfwItems::SuppFwList


class System::CapabilitiesItems : public ydk::Entity
{
    public:
        CapabilitiesItems();
        ~CapabilitiesItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ActrlcapruleItems; //type: System::CapabilitiesItems::ActrlcapruleItems
        class L1capruleItems; //type: System::CapabilitiesItems::L1capruleItems
        class L2capruleItems; //type: System::CapabilitiesItems::L2capruleItems
        class L3capruleItems; //type: System::CapabilitiesItems::L3capruleItems
        class CardItems; //type: System::CapabilitiesItems::CardItems
        class PortItems; //type: System::CapabilitiesItems::PortItems
        class PsuItems; //type: System::CapabilitiesItems::PsuItems
        class FanItems; //type: System::CapabilitiesItems::FanItems
        class SfpItems; //type: System::CapabilitiesItems::SfpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::ActrlcapruleItems> actrlcaprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::L1capruleItems> l1caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::L2capruleItems> l2caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::L3capruleItems> l3caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::CardItems> card_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PortItems> port_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PsuItems> psu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::FanItems> fan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::SfpItems> sfp_items;
        
}; // System::CapabilitiesItems


class System::CapabilitiesItems::ActrlcapruleItems : public ydk::Entity
{
    public:
        ActrlcapruleItems();
        ~ActrlcapruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleList; //type: System::CapabilitiesItems::ActrlcapruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::ActrlcapruleItems


class System::CapabilitiesItems::ActrlcapruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: ActrlcapSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::ActrlcapruleItems::RuleList


class System::CapabilitiesItems::L1capruleItems : public ydk::Entity
{
    public:
        L1capruleItems();
        ~L1capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleList; //type: System::CapabilitiesItems::L1capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::L1capruleItems


class System::CapabilitiesItems::L1capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L1capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::L1capruleItems::RuleList


class System::CapabilitiesItems::L2capruleItems : public ydk::Entity
{
    public:
        L2capruleItems();
        ~L2capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleList; //type: System::CapabilitiesItems::L2capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::L2capruleItems


class System::CapabilitiesItems::L2capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L2capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::L2capruleItems::RuleList


class System::CapabilitiesItems::L3capruleItems : public ydk::Entity
{
    public:
        L3capruleItems();
        ~L3capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleList; //type: System::CapabilitiesItems::L3capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::L3capruleItems


class System::CapabilitiesItems::L3capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L3capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::L3capruleItems::RuleList


class System::CapabilitiesItems::CardItems : public ydk::Entity
{
    public:
        CardItems();
        ~CardItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CardList; //type: System::CapabilitiesItems::CardItems::CardList

        ydk::YList card_list;
        
}; // System::CapabilitiesItems::CardItems


class System::CapabilitiesItems::CardItems::CardList : public ydk::Entity
{
    public:
        CardList();
        ~CardList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf version; //type: string
        class ActrlcapruleItems; //type: System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems
        class L1capruleItems; //type: System::CapabilitiesItems::CardItems::CardList::L1capruleItems
        class L2capruleItems; //type: System::CapabilitiesItems::CardItems::CardList::L2capruleItems
        class L3capruleItems; //type: System::CapabilitiesItems::CardItems::CardList::L3capruleItems
        class MfgItems; //type: System::CapabilitiesItems::CardItems::CardList::MfgItems
        class PhysItems; //type: System::CapabilitiesItems::CardItems::CardList::PhysItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems> actrlcaprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::CardItems::CardList::L1capruleItems> l1caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::CardItems::CardList::L2capruleItems> l2caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::CardItems::CardList::L3capruleItems> l3caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::CardItems::CardList::MfgItems> mfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::CardItems::CardList::PhysItems> phys_items;
        
}; // System::CapabilitiesItems::CardItems::CardList


class System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems : public ydk::Entity
{
    public:
        ActrlcapruleItems();
        ~ActrlcapruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems


class System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: ActrlcapSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::CardItems::CardList::ActrlcapruleItems::RuleList


class System::CapabilitiesItems::CardItems::CardList::L1capruleItems : public ydk::Entity
{
    public:
        L1capruleItems();
        ~L1capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::CardItems::CardList::L1capruleItems


class System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L1capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::CardItems::CardList::L1capruleItems::RuleList


class System::CapabilitiesItems::CardItems::CardList::L2capruleItems : public ydk::Entity
{
    public:
        L2capruleItems();
        ~L2capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::CardItems::CardList::L2capruleItems


class System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L2capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::CardItems::CardList::L2capruleItems::RuleList


class System::CapabilitiesItems::CardItems::CardList::L3capruleItems : public ydk::Entity
{
    public:
        L3capruleItems();
        ~L3capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::CardItems::CardList::L3capruleItems


class System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L3capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::CardItems::CardList::L3capruleItems::RuleList


class System::CapabilitiesItems::CardItems::CardList::MfgItems : public ydk::Entity
{
    public:
        MfgItems();
        ~MfgItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf partnumber; //type: string

}; // System::CapabilitiesItems::CardItems::CardList::MfgItems


class System::CapabilitiesItems::CardItems::CardList::PhysItems : public ydk::Entity
{
    public:
        PhysItems();
        ~PhysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf height; //type: decimal64
        ydk::YLeaf width; //type: decimal64
        ydk::YLeaf depth; //type: decimal64
        ydk::YLeaf weight; //type: decimal64
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::CardItems::CardList::PhysItems


class System::CapabilitiesItems::PortItems : public ydk::Entity
{
    public:
        PortItems();
        ~PortItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PortList; //type: System::CapabilitiesItems::PortItems::PortList

        ydk::YList port_list;
        
}; // System::CapabilitiesItems::PortItems


class System::CapabilitiesItems::PortItems::PortList : public ydk::Entity
{
    public:
        PortList();
        ~PortList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf version; //type: string
        class ActrlcapruleItems; //type: System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems
        class L1capruleItems; //type: System::CapabilitiesItems::PortItems::PortList::L1capruleItems
        class L2capruleItems; //type: System::CapabilitiesItems::PortItems::PortList::L2capruleItems
        class L3capruleItems; //type: System::CapabilitiesItems::PortItems::PortList::L3capruleItems
        class MfgItems; //type: System::CapabilitiesItems::PortItems::PortList::MfgItems
        class PhysItems; //type: System::CapabilitiesItems::PortItems::PortList::PhysItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems> actrlcaprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PortItems::PortList::L1capruleItems> l1caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PortItems::PortList::L2capruleItems> l2caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PortItems::PortList::L3capruleItems> l3caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PortItems::PortList::MfgItems> mfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PortItems::PortList::PhysItems> phys_items;
        
}; // System::CapabilitiesItems::PortItems::PortList


class System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems : public ydk::Entity
{
    public:
        ActrlcapruleItems();
        ~ActrlcapruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems


class System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: ActrlcapSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PortItems::PortList::ActrlcapruleItems::RuleList


class System::CapabilitiesItems::PortItems::PortList::L1capruleItems : public ydk::Entity
{
    public:
        L1capruleItems();
        ~L1capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::PortItems::PortList::L1capruleItems


class System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L1capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PortItems::PortList::L1capruleItems::RuleList


class System::CapabilitiesItems::PortItems::PortList::L2capruleItems : public ydk::Entity
{
    public:
        L2capruleItems();
        ~L2capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::PortItems::PortList::L2capruleItems


class System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L2capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PortItems::PortList::L2capruleItems::RuleList


class System::CapabilitiesItems::PortItems::PortList::L3capruleItems : public ydk::Entity
{
    public:
        L3capruleItems();
        ~L3capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::PortItems::PortList::L3capruleItems


class System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L3capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PortItems::PortList::L3capruleItems::RuleList


class System::CapabilitiesItems::PortItems::PortList::MfgItems : public ydk::Entity
{
    public:
        MfgItems();
        ~MfgItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf partnumber; //type: string

}; // System::CapabilitiesItems::PortItems::PortList::MfgItems


class System::CapabilitiesItems::PortItems::PortList::PhysItems : public ydk::Entity
{
    public:
        PhysItems();
        ~PhysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf height; //type: decimal64
        ydk::YLeaf width; //type: decimal64
        ydk::YLeaf depth; //type: decimal64
        ydk::YLeaf weight; //type: decimal64
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PortItems::PortList::PhysItems


class System::CapabilitiesItems::PsuItems : public ydk::Entity
{
    public:
        PsuItems();
        ~PsuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PsuList; //type: System::CapabilitiesItems::PsuItems::PsuList

        ydk::YList psu_list;
        
}; // System::CapabilitiesItems::PsuItems


class System::CapabilitiesItems::PsuItems::PsuList : public ydk::Entity
{
    public:
        PsuList();
        ~PsuList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf version; //type: string
        class ActrlcapruleItems; //type: System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems
        class L1capruleItems; //type: System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems
        class L2capruleItems; //type: System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems
        class L3capruleItems; //type: System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems
        class MfgItems; //type: System::CapabilitiesItems::PsuItems::PsuList::MfgItems
        class PhysItems; //type: System::CapabilitiesItems::PsuItems::PsuList::PhysItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems> actrlcaprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems> l1caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems> l2caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems> l3caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PsuItems::PsuList::MfgItems> mfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::PsuItems::PsuList::PhysItems> phys_items;
        
}; // System::CapabilitiesItems::PsuItems::PsuList


class System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems : public ydk::Entity
{
    public:
        ActrlcapruleItems();
        ~ActrlcapruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems


class System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: ActrlcapSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PsuItems::PsuList::ActrlcapruleItems::RuleList


class System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems : public ydk::Entity
{
    public:
        L1capruleItems();
        ~L1capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems


class System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L1capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PsuItems::PsuList::L1capruleItems::RuleList


class System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems : public ydk::Entity
{
    public:
        L2capruleItems();
        ~L2capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems


class System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L2capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PsuItems::PsuList::L2capruleItems::RuleList


class System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems : public ydk::Entity
{
    public:
        L3capruleItems();
        ~L3capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems


class System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L3capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PsuItems::PsuList::L3capruleItems::RuleList


class System::CapabilitiesItems::PsuItems::PsuList::MfgItems : public ydk::Entity
{
    public:
        MfgItems();
        ~MfgItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf partnumber; //type: string

}; // System::CapabilitiesItems::PsuItems::PsuList::MfgItems


class System::CapabilitiesItems::PsuItems::PsuList::PhysItems : public ydk::Entity
{
    public:
        PhysItems();
        ~PhysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf height; //type: decimal64
        ydk::YLeaf width; //type: decimal64
        ydk::YLeaf depth; //type: decimal64
        ydk::YLeaf weight; //type: decimal64
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::PsuItems::PsuList::PhysItems


class System::CapabilitiesItems::FanItems : public ydk::Entity
{
    public:
        FanItems();
        ~FanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FanList; //type: System::CapabilitiesItems::FanItems::FanList

        ydk::YList fan_list;
        
}; // System::CapabilitiesItems::FanItems


class System::CapabilitiesItems::FanItems::FanList : public ydk::Entity
{
    public:
        FanList();
        ~FanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf version; //type: string
        class ActrlcapruleItems; //type: System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems
        class L1capruleItems; //type: System::CapabilitiesItems::FanItems::FanList::L1capruleItems
        class L2capruleItems; //type: System::CapabilitiesItems::FanItems::FanList::L2capruleItems
        class L3capruleItems; //type: System::CapabilitiesItems::FanItems::FanList::L3capruleItems
        class MfgItems; //type: System::CapabilitiesItems::FanItems::FanList::MfgItems
        class PhysItems; //type: System::CapabilitiesItems::FanItems::FanList::PhysItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems> actrlcaprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::FanItems::FanList::L1capruleItems> l1caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::FanItems::FanList::L2capruleItems> l2caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::FanItems::FanList::L3capruleItems> l3caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::FanItems::FanList::MfgItems> mfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::FanItems::FanList::PhysItems> phys_items;
        
}; // System::CapabilitiesItems::FanItems::FanList


class System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems : public ydk::Entity
{
    public:
        ActrlcapruleItems();
        ~ActrlcapruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems


class System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: ActrlcapSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::FanItems::FanList::ActrlcapruleItems::RuleList


class System::CapabilitiesItems::FanItems::FanList::L1capruleItems : public ydk::Entity
{
    public:
        L1capruleItems();
        ~L1capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::FanItems::FanList::L1capruleItems


class System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L1capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::FanItems::FanList::L1capruleItems::RuleList


class System::CapabilitiesItems::FanItems::FanList::L2capruleItems : public ydk::Entity
{
    public:
        L2capruleItems();
        ~L2capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::FanItems::FanList::L2capruleItems


class System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L2capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::FanItems::FanList::L2capruleItems::RuleList


class System::CapabilitiesItems::FanItems::FanList::L3capruleItems : public ydk::Entity
{
    public:
        L3capruleItems();
        ~L3capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::FanItems::FanList::L3capruleItems


class System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L3capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::FanItems::FanList::L3capruleItems::RuleList


class System::CapabilitiesItems::FanItems::FanList::MfgItems : public ydk::Entity
{
    public:
        MfgItems();
        ~MfgItems();

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
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf partnumber; //type: string

}; // System::CapabilitiesItems::FanItems::FanList::MfgItems


class System::CapabilitiesItems::FanItems::FanList::PhysItems : public ydk::Entity
{
    public:
        PhysItems();
        ~PhysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf height; //type: decimal64
        ydk::YLeaf width; //type: decimal64
        ydk::YLeaf depth; //type: decimal64
        ydk::YLeaf weight; //type: decimal64
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::FanItems::FanList::PhysItems


class System::CapabilitiesItems::SfpItems : public ydk::Entity
{
    public:
        SfpItems();
        ~SfpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SfpList; //type: System::CapabilitiesItems::SfpItems::SfpList

        ydk::YList sfp_list;
        
}; // System::CapabilitiesItems::SfpItems


class System::CapabilitiesItems::SfpItems::SfpList : public ydk::Entity
{
    public:
        SfpList();
        ~SfpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf version; //type: string
        class MfgItems; //type: System::CapabilitiesItems::SfpItems::SfpList::MfgItems
        class ActrlcapruleItems; //type: System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems
        class L1capruleItems; //type: System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems
        class L2capruleItems; //type: System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems
        class L3capruleItems; //type: System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems
        class PhysItems; //type: System::CapabilitiesItems::SfpItems::SfpList::PhysItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::SfpItems::SfpList::MfgItems> mfg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems> actrlcaprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems> l1caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems> l2caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems> l3caprule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CapabilitiesItems::SfpItems::SfpList::PhysItems> phys_items;
        
}; // System::CapabilitiesItems::SfpItems::SfpList


class System::CapabilitiesItems::SfpItems::SfpList::MfgItems : public ydk::Entity
{
    public:
        MfgItems();
        ~MfgItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SfpMfgDefList; //type: System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList

        ydk::YList sfpmfgdef_list;
        
}; // System::CapabilitiesItems::SfpItems::SfpList::MfgItems


class System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList : public ydk::Entity
{
    public:
        SfpMfgDefList();
        ~SfpMfgDefList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf pnpattern; //type: string
        ydk::YLeaf intvendorid; //type: uint8
        ydk::YLeaf magickey; //type: string
        ydk::YLeaf xcvr; //type: EqptcapXcvrT
        ydk::YLeaf connector; //type: EqptcapConnT
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::SfpItems::SfpList::MfgItems::SfpMfgDefList


class System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems : public ydk::Entity
{
    public:
        ActrlcapruleItems();
        ~ActrlcapruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems


class System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: ActrlcapSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::SfpItems::SfpList::ActrlcapruleItems::RuleList


class System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems : public ydk::Entity
{
    public:
        L1capruleItems();
        ~L1capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems


class System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L1capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::SfpItems::SfpList::L1capruleItems::RuleList


class System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems : public ydk::Entity
{
    public:
        L2capruleItems();
        ~L2capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems


class System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L2capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::SfpItems::SfpList::L2capruleItems::RuleList


class System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems : public ydk::Entity
{
    public:
        L3capruleItems();
        ~L3capruleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RuleList; //type: System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList

        ydk::YList rule_list;
        
}; // System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems


class System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf subj; //type: L3capSubj
        ydk::YLeaf scope; //type: CapScope
        ydk::YLeaf type; //type: CapRuleT
        ydk::YLeaf faultstate; //type: CapRaiseFaultState
        ydk::YLeaf constraint; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::SfpItems::SfpList::L3capruleItems::RuleList


class System::CapabilitiesItems::SfpItems::SfpList::PhysItems : public ydk::Entity
{
    public:
        PhysItems();
        ~PhysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf height; //type: decimal64
        ydk::YLeaf width; //type: decimal64
        ydk::YLeaf depth; //type: decimal64
        ydk::YLeaf weight; //type: decimal64
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CapabilitiesItems::SfpItems::SfpList::PhysItems


class System::ClockItems : public ydk::Entity
{
    public:
        ClockItems();
        ~ClockItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf protocol; //type: DatetimeClockProtocol
        ydk::YLeaf vdcid; //type: uint16
        ydk::YLeaf format; //type: DatetimeClockFormat
        ydk::YLeaf logginglevel; //type: DatetimeLoggingLevel
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: DatetimeAdminState
        ydk::YLeaf authst; //type: DatetimeAdminState
        class SetItems; //type: System::ClockItems::SetItems
        class TimezoneItems; //type: System::ClockItems::TimezoneItems
        class SummertimeItems; //type: System::ClockItems::SummertimeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ClockItems::SetItems> set_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ClockItems::TimezoneItems> timezone_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ClockItems::SummertimeItems> summertime_items;
        
}; // System::ClockItems


class System::ClockItems::SetItems : public ydk::Entity
{
    public:
        SetItems();
        ~SetItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf time; //type: string
        ydk::YLeaf date; //type: uint16
        ydk::YLeaf month; //type: DatetimeMonth
        ydk::YLeaf year; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ClockItems::SetItems


class System::ClockItems::TimezoneItems : public ydk::Entity
{
    public:
        TimezoneItems();
        ~TimezoneItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hours; //type: int16
        ydk::YLeaf minutes; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf namet; //type: string

}; // System::ClockItems::TimezoneItems


class System::ClockItems::SummertimeItems : public ydk::Entity
{
    public:
        SummertimeItems();
        ~SummertimeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf startweek; //type: uint16
        ydk::YLeaf startday; //type: string
        ydk::YLeaf startmon; //type: string
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf endweek; //type: uint16
        ydk::YLeaf endday; //type: string
        ydk::YLeaf endmon; //type: string
        ydk::YLeaf endtime; //type: string
        ydk::YLeaf offsetmin; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf namet; //type: string

}; // System::ClockItems::SummertimeItems


class System::TimeItems : public ydk::Entity
{
    public:
        TimeItems();
        ~TimeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf leap; //type: uint8
        ydk::YLeaf stratum; //type: uint8
        ydk::YLeaf precision; //type: int32
        ydk::YLeaf rootdelay; //type: int32
        ydk::YLeaf rootdispersion; //type: uint32
        ydk::YLeaf refid; //type: string
        ydk::YLeaf reftime; //type: one of uint64, string
        ydk::YLeaf reftimeraw; //type: uint64
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf peer; //type: uint32
        ydk::YLeaf clock_; //type: one of uint64, string
        ydk::YLeaf clockraw; //type: uint64
        ydk::YLeaf srvstatus; //type: DatetimeNtpSrvStatus
        ydk::YLeaf logging; //type: DatetimeAdminState
        ydk::YLeaf logginglevel; //type: DatetimeLoggingLevel
        ydk::YLeaf master; //type: DatetimeAdminState
        ydk::YLeaf masterstratum; //type: uint8
        ydk::YLeaf passive; //type: DatetimeAdminState
        ydk::YLeaf allowprivate; //type: DatetimeAdminState
        ydk::YLeaf allowcontrol; //type: DatetimeAdminState
        ydk::YLeaf ratelimit; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: DatetimeAdminState
        ydk::YLeaf authst; //type: DatetimeAdminState
        class AuthItems; //type: System::TimeItems::AuthItems
        class ProvItems; //type: System::TimeItems::ProvItems
        class AccessgroupItems; //type: System::TimeItems::AccessgroupItems
        class SrcIpItems; //type: System::TimeItems::SrcIpItems
        class SrcIfItems; //type: System::TimeItems::SrcIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::ProvItems> prov_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::AccessgroupItems> accessgroup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::SrcIpItems> srcip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::SrcIfItems> srcif_items;
        
}; // System::TimeItems


class System::TimeItems::AuthItems : public ydk::Entity
{
    public:
        AuthItems();
        ~AuthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NtpAuthList; //type: System::TimeItems::AuthItems::NtpAuthList

        ydk::YList ntpauth_list;
        
}; // System::TimeItems::AuthItems


class System::TimeItems::AuthItems::NtpAuthList : public ydk::Entity
{
    public:
        NtpAuthList();
        ~NtpAuthList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf encryptedkey; //type: string
        ydk::YLeaf isencrypt; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf trusted; //type: boolean

}; // System::TimeItems::AuthItems::NtpAuthList


class System::TimeItems::ProvItems : public ydk::Entity
{
    public:
        ProvItems();
        ~ProvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NtpProviderList; //type: System::TimeItems::ProvItems::NtpProviderList

        ydk::YList ntpprovider_list;
        
}; // System::TimeItems::ProvItems


class System::TimeItems::ProvItems::NtpProviderList : public ydk::Entity
{
    public:
        NtpProviderList();
        ~NtpProviderList();

        bool has_data() const override;
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
        ydk::YLeaf provt; //type: DatetimeProvT
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf preferred; //type: boolean
        ydk::YLeaf minpoll; //type: uint8
        ydk::YLeaf maxpoll; //type: uint8
        ydk::YLeaf keyid; //type: uint16
        class StatusItems; //type: System::TimeItems::ProvItems::NtpProviderList::StatusItems
        class RsntpProviderToNtpAuthItems; //type: System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::ProvItems::NtpProviderList::StatusItems> status_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems> rsntpprovidertontpauth_items;
        
}; // System::TimeItems::ProvItems::NtpProviderList


class System::TimeItems::ProvItems::NtpProviderList::StatusItems : public ydk::Entity
{
    public:
        StatusItems();
        ~StatusItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flags; //type: string
        ydk::YLeaf mode; //type: DatetimeNTPPeerMode
        ydk::YLeaf stratum; //type: uint8
        ydk::YLeaf peerpoll; //type: int32
        ydk::YLeaf hostpoll; //type: int32
        ydk::YLeaf reach; //type: uint8
        ydk::YLeaf delay; //type: string
        ydk::YLeaf delayraw; //type: int32
        ydk::YLeaf dispersion; //type: uint32

}; // System::TimeItems::ProvItems::NtpProviderList::StatusItems


class System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems : public ydk::Entity
{
    public:
        RsntpProviderToNtpAuthItems();
        ~RsntpProviderToNtpAuthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsNtpProviderToNtpAuthList; //type: System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList

        ydk::YList rsntpprovidertontpauth_list;
        
}; // System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems


class System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList : public ydk::Entity
{
    public:
        RsNtpProviderToNtpAuthList();
        ~RsNtpProviderToNtpAuthList();

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

}; // System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList


class System::TimeItems::AccessgroupItems : public ydk::Entity
{
    public:
        AccessgroupItems();
        ~AccessgroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf serveonly; //type: string
        ydk::YLeaf serve; //type: string
        ydk::YLeaf queryonly; //type: string
        ydk::YLeaf matchall; //type: DatetimeAdminState

}; // System::TimeItems::AccessgroupItems


class System::TimeItems::SrcIpItems : public ydk::Entity
{
    public:
        SrcIpItems();
        ~SrcIpItems();

        bool has_data() const override;
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
        ydk::YLeaf srcipv6; //type: string

}; // System::TimeItems::SrcIpItems


class System::TimeItems::SrcIfItems : public ydk::Entity
{
    public:
        SrcIfItems();
        ~SrcIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srcif; //type: string

}; // System::TimeItems::SrcIfItems


class System::NtpqItems : public ydk::Entity
{
    public:
        NtpqItems();
        ~NtpqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NtpqList; //type: System::NtpqItems::NtpqList

        ydk::YList ntpq_list;
        
}; // System::NtpqItems


class System::NtpqItems::NtpqList : public ydk::Entity
{
    public:
        NtpqList();
        ~NtpqList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf remote; //type: string
        ydk::YLeaf tally; //type: string
        ydk::YLeaf refid; //type: string
        ydk::YLeaf stratum; //type: string
        ydk::YLeaf t; //type: string
        ydk::YLeaf when; //type: string
        ydk::YLeaf poll; //type: string
        ydk::YLeaf reach; //type: string
        ydk::YLeaf delay; //type: string
        ydk::YLeaf offset; //type: string
        ydk::YLeaf jitter; //type: string

}; // System::NtpqItems::NtpqList


class System::AcctItems : public ydk::Entity
{
    public:
        AcctItems();
        ~AcctItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sessionnum; //type: uint32
        ydk::YLeaf sessionid; //type: uint32
        ydk::YLeaf sourceid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt

}; // System::AcctItems


class System::RetryItems : public ydk::Entity
{
    public:
        RetryItems();
        ~RetryItems();

        bool has_data() const override;
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
        class SrcItems; //type: System::RetryItems::SrcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RetryItems::SrcItems> src_items;
        
}; // System::RetryItems


class System::RetryItems::SrcItems : public ydk::Entity
{
    public:
        SrcItems();
        ~SrcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RetrySrcList; //type: System::RetryItems::SrcItems::RetrySrcList

        ydk::YList retrysrc_list;
        
}; // System::RetryItems::SrcItems


class System::RetryItems::SrcItems::RetrySrcList : public ydk::Entity
{
    public:
        RetrySrcList();
        ~RetrySrcList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf srcdn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class TgtItems; //type: System::RetryItems::SrcItems::RetrySrcList::TgtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::RetryItems::SrcItems::RetrySrcList::TgtItems> tgt_items;
        
}; // System::RetryItems::SrcItems::RetrySrcList


class System::RetryItems::SrcItems::RetrySrcList::TgtItems : public ydk::Entity
{
    public:
        TgtItems();
        ~TgtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RetryTargetList; //type: System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList

        ydk::YList retrytarget_list;
        
}; // System::RetryItems::SrcItems::RetrySrcList::TgtItems


class System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList : public ydk::Entity
{
    public:
        RetryTargetList();
        ~RetryTargetList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf targetdn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt

}; // System::RetryItems::SrcItems::RetrySrcList::TgtItems::RetryTargetList


class System::SpanItems : public ydk::Entity
{
    public:
        SpanItems();
        ~SpanItems();

        bool has_data() const override;
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
        class OriginipItems; //type: System::SpanItems::OriginipItems
        class MonitorItems; //type: System::SpanItems::MonitorItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::OriginipItems> originip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::MonitorItems> monitor_items;
        
}; // System::SpanItems


class System::SpanItems::OriginipItems : public ydk::Entity
{
    public:
        OriginipItems();
        ~OriginipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf originip; //type: string

}; // System::SpanItems::OriginipItems


class System::SpanItems::MonitorItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MonitorList; //type: System::SpanItems::MonitorItems::MonitorList

        ydk::YList monitor_list;
        
}; // System::SpanItems::MonitorItems


class System::SpanItems::MonitorItems::MonitorList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf type; //type: SpanType
        ydk::YLeaf operstate; //type: SpanOperStQual
        ydk::YLeaf configstate; //type: SpanState
        ydk::YLeaf description; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf aclname; //type: string
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf allowsharing; //type: boolean
        ydk::YLeaf headertype; //type: SpanHeaderVer
        ydk::YLeaf ismarkerpacket; //type: boolean
        ydk::YLeaf isfwddropsrx; //type: boolean
        ydk::YLeaf isfwddropsrxlowpriority; //type: boolean
        ydk::YLeaf erspanid; //type: uint16
        ydk::YLeaf ipttl; //type: uint16
        ydk::YLeaf ipdscp; //type: uint16
        ydk::YLeaf markerpktint; //type: uint16
        ydk::YLeaf destinationports; //type: string
        ydk::YLeaf destinationip; //type: string
        ydk::YLeaf sourceip; //type: string
        ydk::YLeaf shuterror; //type: uint16
        class SrcintfItems; //type: System::SpanItems::MonitorItems::MonitorList::SrcintfItems
        class FilterItems; //type: System::SpanItems::MonitorItems::MonitorList::FilterItems
        class SrcItems; //type: System::SpanItems::MonitorItems::MonitorList::SrcItems
        class SrcvsanItems; //type: System::SpanItems::MonitorItems::MonitorList::SrcvsanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::MonitorItems::MonitorList::SrcintfItems> srcintf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::MonitorItems::MonitorList::FilterItems> filter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::MonitorItems::MonitorList::SrcItems> src_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SpanItems::MonitorItems::MonitorList::SrcvsanItems> srcvsan_items;
        
}; // System::SpanItems::MonitorItems::MonitorList


class System::SpanItems::MonitorItems::MonitorList::SrcintfItems : public ydk::Entity
{
    public:
        SrcintfItems();
        ~SrcintfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceIntfList; //type: System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList

        ydk::YList sourceintf_list;
        
}; // System::SpanItems::MonitorItems::MonitorList::SrcintfItems


class System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList : public ydk::Entity
{
    public:
        SourceIntfList();
        ~SourceIntfList();

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
        ydk::YLeaf direction; //type: SpanSrcDirection
        ydk::YLeaf error; //type: uint16

}; // System::SpanItems::MonitorItems::MonitorList::SrcintfItems::SourceIntfList


class System::SpanItems::MonitorItems::MonitorList::FilterItems : public ydk::Entity
{
    public:
        FilterItems();
        ~FilterItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FilterVlanList; //type: System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList

        ydk::YList filtervlan_list;
        
}; // System::SpanItems::MonitorItems::MonitorList::FilterItems


class System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList : public ydk::Entity
{
    public:
        FilterVlanList();
        ~FilterVlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: string

}; // System::SpanItems::MonitorItems::MonitorList::FilterItems::FilterVlanList


class System::SpanItems::MonitorItems::MonitorList::SrcItems : public ydk::Entity
{
    public:
        SrcItems();
        ~SrcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceVlanList; //type: System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList

        ydk::YList sourcevlan_list;
        
}; // System::SpanItems::MonitorItems::MonitorList::SrcItems


class System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList : public ydk::Entity
{
    public:
        SourceVlanList();
        ~SourceVlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: string
        ydk::YLeaf direction; //type: SpanSrcDirection

}; // System::SpanItems::MonitorItems::MonitorList::SrcItems::SourceVlanList


class System::SpanItems::MonitorItems::MonitorList::SrcvsanItems : public ydk::Entity
{
    public:
        SrcvsanItems();
        ~SrcvsanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SourceVsanList; //type: System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList

        ydk::YList sourcevsan_list;
        
}; // System::SpanItems::MonitorItems::MonitorList::SrcvsanItems


class System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList : public ydk::Entity
{
    public:
        SourceVsanList();
        ~SourceVsanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vsan; //type: string
        ydk::YLeaf direction; //type: SpanSrcDirection

}; // System::SpanItems::MonitorItems::MonitorList::SrcvsanItems::SourceVsanList


class System::DhcpItems : public ydk::Entity
{
    public:
        DhcpItems();
        ~DhcpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        class InstItems; //type: System::DhcpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems> inst_items;
        
}; // System::DhcpItems


class System::DhcpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf v4relayenabled; //type: boolean
        ydk::YLeaf v6relayenabled; //type: boolean
        ydk::YLeaf snoopingenabled; //type: boolean
        ydk::YLeaf snoopingverifymacaddressenabled; //type: boolean
        ydk::YLeaf snoopinginformationoptionenabled; //type: boolean
        ydk::YLeaf relayinformationoptionenabled; //type: boolean
        ydk::YLeaf relayinformationoptionvpnenabled; //type: boolean
        ydk::YLeaf relayinformationoptiontrustenabled; //type: boolean
        ydk::YLeaf relayinformationtrustallenabled; //type: boolean
        ydk::YLeaf relaysuboptioncircuitidcustomizedenabled; //type: boolean
        ydk::YLeaf relaysuboptioncircuitidformatstring; //type: string
        ydk::YLeaf relaysuboptiontypeciscoenabled; //type: boolean
        ydk::YLeaf smartrelayglobalenabled; //type: boolean
        ydk::YLeaf ipv6relayinformationoptionvpnenabled; //type: boolean
        ydk::YLeaf ipv6relayoptiontypeciscoenabled; //type: boolean
        ydk::YLeaf daivalidatesrc; //type: boolean
        ydk::YLeaf daivalidatedst; //type: boolean
        ydk::YLeaf daivalidateip; //type: boolean
        ydk::YLeaf dailogbufentries; //type: uint16
        ydk::YLeaf pktstrictval; //type: boolean
        class DaivlanItems; //type: System::DhcpItems::InstItems::DaivlanItems
        class DaiifItems; //type: System::DhcpItems::InstItems::DaiifItems
        class ClientifItems; //type: System::DhcpItems::InstItems::ClientifItems
        class RelayifItems; //type: System::DhcpItems::InstItems::RelayifItems
        class ServerifItems; //type: System::DhcpItems::InstItems::ServerifItems
        class SrcifItems; //type: System::DhcpItems::InstItems::SrcifItems
        class V6srcifItems; //type: System::DhcpItems::InstItems::V6srcifItems
        class IpsrcbindipItems; //type: System::DhcpItems::InstItems::IpsrcbindipItems
        class IpsgifItems; //type: System::DhcpItems::InstItems::IpsgifItems
        class IpsgexvlanItems; //type: System::DhcpItems::InstItems::IpsgexvlanItems
        class SnoopvlanItems; //type: System::DhcpItems::InstItems::SnoopvlanItems
        class SnoopifItems; //type: System::DhcpItems::InstItems::SnoopifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaivlanItems> daivlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::DaiifItems> daiif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ClientifItems> clientif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems> relayif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems> serverif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SrcifItems> srcif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::V6srcifItems> v6srcif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsrcbindipItems> ipsrcbindip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems> ipsgif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgexvlanItems> ipsgexvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopvlanItems> snoopvlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::SnoopifItems> snoopif_items;
        
}; // System::DhcpItems::InstItems


class System::DhcpItems::InstItems::DaivlanItems : public ydk::Entity
{
    public:
        DaivlanItems();
        ~DaivlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DAIVlanList; //type: System::DhcpItems::InstItems::DaivlanItems::DAIVlanList

        ydk::YList daivlan_list;
        
}; // System::DhcpItems::InstItems::DaivlanItems


class System::DhcpItems::InstItems::DaivlanItems::DAIVlanList : public ydk::Entity
{
    public:
        DAIVlanList();
        ~DAIVlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf daivlannum; //type: uint16
        ydk::YLeaf dailogtypeonvlan; //type: DhcpDAILogType

}; // System::DhcpItems::InstItems::DaivlanItems::DAIVlanList


}
}

#endif /* _CISCO_NX_OS_DEVICE_15_ */

