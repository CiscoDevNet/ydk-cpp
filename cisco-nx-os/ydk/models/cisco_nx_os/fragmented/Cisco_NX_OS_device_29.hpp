#ifndef _CISCO_NX_OS_DEVICE_29_
#define _CISCO_NX_OS_DEVICE_29_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::QosmItems : public ydk::Entity
{
    public:
        QosmItems();
        ~QosmItems();

        bool has_data() const override;
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
        class ClassItems; //type: System::QosmItems::ClassItems
        class IfItems; //type: System::QosmItems::IfItems
        class ClasspItems; //type: System::QosmItems::ClasspItems
        class DscpItems; //type: System::QosmItems::DscpItems
        class Dot1pItems; //type: System::QosmItems::Dot1pItems
        class IpItems; //type: System::QosmItems::IpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::ClassItems> class_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::ClasspItems> classp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::DscpItems> dscp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::Dot1pItems> dot1p_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::IpItems> ip_items;
        
}; // System::QosmItems


class System::QosmItems::ClassItems : public ydk::Entity
{
    public:
        ClassItems();
        ~ClassItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ClassList; //type: System::QosmItems::ClassItems::ClassList

        ydk::YList class_list;
        
}; // System::QosmItems::ClassItems


class System::QosmItems::ClassItems::ClassList : public ydk::Entity
{
    public:
        ClassList();
        ~ClassList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf qosgrp; //type: QosPrio

}; // System::QosmItems::ClassItems::ClassList


class System::QosmItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::QosmItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::QosmItems::IfItems


class System::QosmItems::IfItems::IfList : public ydk::Entity
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
        class ClassItems; //type: System::QosmItems::IfItems::IfList::ClassItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::IfItems::IfList::ClassItems> class_items;
        
}; // System::QosmItems::IfItems::IfList


class System::QosmItems::IfItems::IfList::ClassItems : public ydk::Entity
{
    public:
        ClassItems();
        ~ClassItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfClassList; //type: System::QosmItems::IfItems::IfList::ClassItems::IfClassList

        ydk::YList ifclass_list;
        
}; // System::QosmItems::IfItems::IfList::ClassItems


class System::QosmItems::IfItems::IfList::ClassItems::IfClassList : public ydk::Entity
{
    public:
        IfClassList();
        ~IfClassList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: QosPrio

}; // System::QosmItems::IfItems::IfList::ClassItems::IfClassList


class System::QosmItems::ClasspItems : public ydk::Entity
{
    public:
        ClasspItems();
        ~ClasspItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ClassList; //type: System::QosmItems::ClasspItems::ClassList

        ydk::YList class_list;
        
}; // System::QosmItems::ClasspItems


class System::QosmItems::ClasspItems::ClassList : public ydk::Entity
{
    public:
        ClassList();
        ~ClassList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf qosgrp; //type: QosPrio
        ydk::YLeaf admin; //type: NwAdminSt___
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf operst; //type: QospOperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class CongItems; //type: System::QosmItems::ClasspItems::ClassList::CongItems
        class QueueItems; //type: System::QosmItems::ClasspItems::ClassList::QueueItems
        class BufferItems; //type: System::QosmItems::ClasspItems::ClassList::BufferItems
        class SchedItems; //type: System::QosmItems::ClasspItems::ClassList::SchedItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::ClasspItems::ClassList::CongItems> cong_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::ClasspItems::ClassList::QueueItems> queue_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::ClasspItems::ClassList::BufferItems> buffer_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::QosmItems::ClasspItems::ClassList::SchedItems> sched_items;
        
}; // System::QosmItems::ClasspItems::ClassList


class System::QosmItems::ClasspItems::ClassList::CongItems : public ydk::Entity
{
    public:
        CongItems();
        ~CongItems();

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
        ydk::YLeaf algo; //type: QospCongAlgo
        ydk::YLeaf ecn; //type: QospECN

}; // System::QosmItems::ClasspItems::ClassList::CongItems


class System::QosmItems::ClasspItems::ClassList::QueueItems : public ydk::Entity
{
    public:
        QueueItems();
        ~QueueItems();

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
        ydk::YLeaf meth; //type: QospCtrlMeth
        ydk::YLeaf limit; //type: uint16

}; // System::QosmItems::ClasspItems::ClassList::QueueItems


class System::QosmItems::ClasspItems::ClassList::BufferItems : public ydk::Entity
{
    public:
        BufferItems();
        ~BufferItems();

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
        ydk::YLeaf min; //type: uint8

}; // System::QosmItems::ClasspItems::ClassList::BufferItems


class System::QosmItems::ClasspItems::ClassList::SchedItems : public ydk::Entity
{
    public:
        SchedItems();
        ~SchedItems();

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
        ydk::YLeaf meth; //type: QospSchedAlgo
        ydk::YLeaf bw; //type: uint8

}; // System::QosmItems::ClasspItems::ClassList::SchedItems


class System::QosmItems::DscpItems : public ydk::Entity
{
    public:
        DscpItems();
        ~DscpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DscpRuleList; //type: System::QosmItems::DscpItems::DscpRuleList

        ydk::YList dscprule_list;
        
}; // System::QosmItems::DscpItems


class System::QosmItems::DscpItems::DscpRuleList : public ydk::Entity
{
    public:
        DscpRuleList();
        ~DscpRuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf from; //type: uint8
        ydk::YLeaf to; //type: uint8
        ydk::YLeaf qosgrp; //type: QosPrio
        ydk::YLeaf markdscp; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf operst; //type: QospOperSt

}; // System::QosmItems::DscpItems::DscpRuleList


class System::QosmItems::Dot1pItems : public ydk::Entity
{
    public:
        Dot1pItems();
        ~Dot1pItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Dot1pRuleList; //type: System::QosmItems::Dot1pItems::Dot1pRuleList

        ydk::YList dot1prule_list;
        
}; // System::QosmItems::Dot1pItems


class System::QosmItems::Dot1pItems::Dot1pRuleList : public ydk::Entity
{
    public:
        Dot1pRuleList();
        ~Dot1pRuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf from; //type: uint8
        ydk::YLeaf to; //type: uint8
        ydk::YLeaf qosgrp; //type: QosPrio
        ydk::YLeaf markdscp; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf operst; //type: QospOperSt

}; // System::QosmItems::Dot1pItems::Dot1pRuleList


class System::QosmItems::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IpRuleList; //type: System::QosmItems::IpItems::IpRuleList

        ydk::YList iprule_list;
        
}; // System::QosmItems::IpItems


class System::QosmItems::IpItems::IpRuleList : public ydk::Entity
{
    public:
        IpRuleList();
        ~IpRuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf qosgrp; //type: QosPrio
        ydk::YLeaf markdscp; //type: uint8
        ydk::YLeaf operst; //type: QospOperSt

}; // System::QosmItems::IpItems::IpRuleList


class System::SisfItems : public ydk::Entity
{
    public:
        SisfItems();
        ~SisfItems();

        bool has_data() const override;
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
        ydk::YLeaf opererr; //type: string
        class SnoopingItems; //type: System::SisfItems::SnoopingItems
        class NeighborbindingItems; //type: System::SisfItems::NeighborbindingItems
        class DhcpguardItems; //type: System::SisfItems::DhcpguardItems
        class RaguardItems; //type: System::SisfItems::RaguardItems
        class FhsifItems; //type: System::SisfItems::FhsifItems
        class FhsvlanItems; //type: System::SisfItems::FhsvlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::SnoopingItems> snooping_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::NeighborbindingItems> neighborbinding_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::DhcpguardItems> dhcpguard_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::RaguardItems> raguard_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::FhsifItems> fhsif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::FhsvlanItems> fhsvlan_items;
        
}; // System::SisfItems


class System::SisfItems::SnoopingItems : public ydk::Entity
{
    public:
        SnoopingItems();
        ~SnoopingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstSnoopingList; //type: System::SisfItems::SnoopingItems::InstSnoopingList

        ydk::YList instsnooping_list;
        
}; // System::SisfItems::SnoopingItems


class System::SisfItems::SnoopingItems::InstSnoopingList : public ydk::Entity
{
    public:
        InstSnoopingList();
        ~InstSnoopingList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf policyname; //type: string
        ydk::YLeaf trustedportenabled; //type: boolean
        ydk::YLeaf devicerole; //type: SisfDeviceRole
        ydk::YLeaf ndpprotocol; //type: SisfNdpflag
        ydk::YLeaf dhcpprotocol; //type: SisfDhcpflag
        ydk::YLeaf securitylevel; //type: SisfSecurityLevel
        ydk::YLeaf limitaddresscount; //type: uint16
        ydk::YLeaf tracking; //type: SisfNonGlobalTracking
        ydk::YLeaf reachablelifetimer; //type: uint64
        ydk::YLeaf stalelifetimer; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::SisfItems::SnoopingItems::InstSnoopingList


class System::SisfItems::NeighborbindingItems : public ydk::Entity
{
    public:
        NeighborbindingItems();
        ~NeighborbindingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logging; //type: boolean
        ydk::YLeaf maxentries; //type: uint32
        ydk::YLeaf vlanlimit; //type: uint32
        ydk::YLeaf maclimit; //type: uint32
        ydk::YLeaf portlimit; //type: uint32
        ydk::YLeaf reachablelifetimer; //type: uint64
        ydk::YLeaf stalelifetimer; //type: uint64
        ydk::YLeaf downlifetimer; //type: uint64
        ydk::YLeaf tracking; //type: boolean
        ydk::YLeaf retryinterval; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class BindingipItems; //type: System::SisfItems::NeighborbindingItems::BindingipItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::NeighborbindingItems::BindingipItems> bindingip_items;
        
}; // System::SisfItems::NeighborbindingItems


class System::SisfItems::NeighborbindingItems::BindingipItems : public ydk::Entity
{
    public:
        BindingipItems();
        ~BindingipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class StaticBindingList; //type: System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList

        ydk::YList staticbinding_list;
        
}; // System::SisfItems::NeighborbindingItems::BindingipItems


class System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList : public ydk::Entity
{
    public:
        StaticBindingList();
        ~StaticBindingList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf v6addr; //type: string
        ydk::YLeaf vlanid; //type: uint16
        ydk::YLeaf interface; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf tracking; //type: SisfNonGlobalTracking
        ydk::YLeaf retryinterval; //type: int16
        ydk::YLeaf reachablelifetimer; //type: int32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::SisfItems::NeighborbindingItems::BindingipItems::StaticBindingList


class System::SisfItems::DhcpguardItems : public ydk::Entity
{
    public:
        DhcpguardItems();
        ~DhcpguardItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstDhcpGuardList; //type: System::SisfItems::DhcpguardItems::InstDhcpGuardList

        ydk::YList instdhcpguard_list;
        
}; // System::SisfItems::DhcpguardItems


class System::SisfItems::DhcpguardItems::InstDhcpGuardList : public ydk::Entity
{
    public:
        InstDhcpGuardList();
        ~InstDhcpGuardList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf policyname; //type: string
        ydk::YLeaf devicerole; //type: SisfDhcpGuardDeviceRole
        ydk::YLeaf trustedportenabled; //type: boolean
        ydk::YLeaf preferencemax; //type: uint16
        ydk::YLeaf preferencemin; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::SisfItems::DhcpguardItems::InstDhcpGuardList


class System::SisfItems::RaguardItems : public ydk::Entity
{
    public:
        RaguardItems();
        ~RaguardItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstRaGuardList; //type: System::SisfItems::RaguardItems::InstRaGuardList

        ydk::YList instraguard_list;
        
}; // System::SisfItems::RaguardItems


class System::SisfItems::RaguardItems::InstRaGuardList : public ydk::Entity
{
    public:
        InstRaGuardList();
        ~InstRaGuardList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf policyname; //type: string
        ydk::YLeaf devicerole; //type: SisfRaGuardDeviceRole
        ydk::YLeaf trustedportenabled; //type: boolean
        ydk::YLeaf routerpreferencemaximum; //type: SisfRaGuardRouterPreferenceMaximum
        ydk::YLeaf hoplimitmax; //type: uint16
        ydk::YLeaf hoplimitmin; //type: uint16
        ydk::YLeaf managedconfig; //type: SisfRaGuardManagedConfig
        ydk::YLeaf otherconfig; //type: SisfRaGuardOtherConfig
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::SisfItems::RaguardItems::InstRaGuardList


class System::SisfItems::FhsifItems : public ydk::Entity
{
    public:
        FhsifItems();
        ~FhsifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FhsIfList; //type: System::SisfItems::FhsifItems::FhsIfList

        ydk::YList fhsif_list;
        
}; // System::SisfItems::FhsifItems


class System::SisfItems::FhsifItems::FhsIfList : public ydk::Entity
{
    public:
        FhsIfList();
        ~FhsIfList();

        bool has_data() const override;
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
        ydk::YLeaf snoopingpolicyname; //type: string
        ydk::YLeaf dhcpguardpolicyname; //type: string
        ydk::YLeaf raguardpolicyname; //type: string
        ydk::YLeaf deleted; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        class RtvrfMbrItems; //type: System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::SisfItems::FhsifItems::FhsIfList


class System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::SisfItems::FhsifItems::FhsIfList::RtvrfMbrItems


class System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems


class System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::SisfItems::FhsifItems::FhsIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::SisfItems::FhsvlanItems : public ydk::Entity
{
    public:
        FhsvlanItems();
        ~FhsvlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FhsVlanList; //type: System::SisfItems::FhsvlanItems::FhsVlanList

        ydk::YList fhsvlan_list;
        
}; // System::SisfItems::FhsvlanItems


class System::SisfItems::FhsvlanItems::FhsVlanList : public ydk::Entity
{
    public:
        FhsVlanList();
        ~FhsVlanList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vlanid; //type: uint16
        ydk::YLeaf snoopingpolicyname; //type: string
        ydk::YLeaf dhcpguardpolicyname; //type: string
        ydk::YLeaf raguardpolicyname; //type: string
        ydk::YLeaf deleted; //type: boolean

}; // System::SisfItems::FhsvlanItems::FhsVlanList


class System::SlaItems : public ydk::Entity
{
    public:
        SlaItems();
        ~SlaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::SlaItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems> inst_items;
        
}; // System::SlaItems


class System::SlaItems::InstItems : public ydk::Entity
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

        class SenderItems; //type: System::SlaItems::InstItems::SenderItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems> sender_items;
        
}; // System::SlaItems::InstItems


class System::SlaItems::InstItems::SenderItems : public ydk::Entity
{
    public:
        SenderItems();
        ~SenderItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf resetsender; //type: boolean
        class OperationItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems
        class GroupscheduleItems; //type: System::SlaItems::InstItems::SenderItems::GroupscheduleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems> operation_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::GroupscheduleItems> groupschedule_items;
        
}; // System::SlaItems::InstItems::SenderItems


class System::SlaItems::InstItems::SenderItems::OperationItems : public ydk::Entity
{
    public:
        OperationItems();
        ~OperationItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProbeList; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList

        ydk::YList probe_list;
        
}; // System::SlaItems::InstItems::SenderItems::OperationItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList : public ydk::Entity
{
    public:
        ProbeList();
        ~ProbeList();

        bool has_data() const override;
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
        ydk::YLeaf restart; //type: boolean
        class IcmpechoItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems
        class TcpconnectItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems
        class HttpItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems
        class UdpechoItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems
        class UdpjitterItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems
        class DnsItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems
        class ScheduleItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems
        class TriggerItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems
        class ReactionItems; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems> icmpecho_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems> tcpconnect_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems> http_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems> udpecho_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems> udpjitter_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems> dns_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems> schedule_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems> trigger_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems> reaction_items;
        
}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems : public ydk::Entity
{
    public:
        IcmpechoItems();
        ~IcmpechoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf verifydata; //type: boolean
        ydk::YLeaf reqdatasize; //type: uint32
        ydk::YLeaf srcinterface; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf iptos; //type: uint32
        ydk::YLeaf ipv6trafficclass; //type: uint32
        ydk::YLeaf srchostname; //type: string
        ydk::YLeaf desthostname; //type: string

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::IcmpechoItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems : public ydk::Entity
{
    public:
        TcpconnectItems();
        ~TcpconnectItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf srcport; //type: uint32
        ydk::YLeaf dstport; //type: uint32
        ydk::YLeaf control; //type: boolean
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf iptos; //type: uint32
        ydk::YLeaf ipv6trafficclass; //type: uint32
        ydk::YLeaf srchostname; //type: string
        ydk::YLeaf desthostname; //type: string

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TcpconnectItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems : public ydk::Entity
{
    public:
        HttpItems();
        ~HttpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf httpmethod; //type: SlaHttpMethodVal
        ydk::YLeaf httpurl; //type: string
        ydk::YLeaf proxy; //type: string
        ydk::YLeaf cache; //type: boolean
        ydk::YLeaf srcport; //type: uint32
        ydk::YLeaf version; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf iptos; //type: uint32
        ydk::YLeaf ipv6trafficclass; //type: uint32
        ydk::YLeaf srchostname; //type: string
        ydk::YLeaf desthostname; //type: string

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::HttpItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems : public ydk::Entity
{
    public:
        UdpechoItems();
        ~UdpechoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dstport; //type: uint32
        ydk::YLeaf srcport; //type: uint32
        ydk::YLeaf control; //type: boolean
        ydk::YLeaf datapattern; //type: string
        ydk::YLeaf verifydata; //type: boolean
        ydk::YLeaf reqdatasize; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf iptos; //type: uint32
        ydk::YLeaf ipv6trafficclass; //type: uint32
        ydk::YLeaf srchostname; //type: string
        ydk::YLeaf desthostname; //type: string

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpechoItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems : public ydk::Entity
{
    public:
        UdpjitterItems();
        ~UdpjitterItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf dstport; //type: uint32
        ydk::YLeaf srcport; //type: uint32
        ydk::YLeaf control; //type: boolean
        ydk::YLeaf numpkts; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf codectype; //type: SlaCodecType
        ydk::YLeaf codecnumpkts; //type: uint32
        ydk::YLeaf codecsize; //type: uint32
        ydk::YLeaf codecinterval; //type: uint32
        ydk::YLeaf advfactor; //type: uint8
        ydk::YLeaf verifydata; //type: boolean
        ydk::YLeaf reqdatasize; //type: uint32
        ydk::YLeaf precision; //type: SlaPrecision
        ydk::YLeaf operationpktpriority; //type: SlaOpPktPriority
        ydk::YLeaf absoluteclocktolerance; //type: uint32
        ydk::YLeaf percentclocktolerance; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf iptos; //type: uint32
        ydk::YLeaf ipv6trafficclass; //type: uint32
        ydk::YLeaf srchostname; //type: string
        ydk::YLeaf desthostname; //type: string

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::UdpjitterItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems : public ydk::Entity
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

        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf srcport; //type: uint32
        ydk::YLeaf nameserverhostname; //type: string
        ydk::YLeaf nameserverip; //type: string
        ydk::YLeaf targetentry; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf owner; //type: string
        ydk::YLeaf tag; //type: string
        ydk::YLeaf iptos; //type: uint32
        ydk::YLeaf ipv6trafficclass; //type: uint32
        ydk::YLeaf srchostname; //type: string
        ydk::YLeaf desthostname; //type: string

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::DnsItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems : public ydk::Entity
{
    public:
        ScheduleItems();
        ~ScheduleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf life; //type: uint64
        ydk::YLeaf ageout; //type: uint32
        ydk::YLeaf startprobe; //type: StartProbe
        ydk::YLeaf dayofthemonth; //type: uint16
        ydk::YLeaf month; //type: Month
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf recurring; //type: boolean
        class StartProbe;
        class Month;

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems : public ydk::Entity
{
    public:
        TriggerItems();
        ~TriggerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReactionTriggerList; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList

        ydk::YList reactiontrigger_list;
        
}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList : public ydk::Entity
{
    public:
        ReactionTriggerList();
        ~ReactionTriggerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf targetprobe; //type: uint32

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::TriggerItems::ReactionTriggerList


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems : public ydk::Entity
{
    public:
        ReactionItems();
        ~ReactionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReactionList; //type: System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList

        ydk::YList reaction_list;
        
}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems


class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList : public ydk::Entity
{
    public:
        ReactionList();
        ~ReactionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reacton; //type: SlaReactionVariable
        ydk::YLeaf reactiontype; //type: SlaActionType
        ydk::YLeaf thresholdtype; //type: SlaThresholdType
        ydk::YLeaf thresholdcountx; //type: uint16
        ydk::YLeaf thresholdcounty; //type: uint16
        ydk::YLeaf upperthreshold; //type: uint32
        ydk::YLeaf lowerthreshold; //type: uint32

}; // System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ReactionItems::ReactionList


class System::SlaItems::InstItems::SenderItems::GroupscheduleItems : public ydk::Entity
{
    public:
        GroupscheduleItems();
        ~GroupscheduleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class GrpSchedulerList; //type: System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList

        ydk::YList grpscheduler_list;
        
}; // System::SlaItems::InstItems::SenderItems::GroupscheduleItems


class System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList : public ydk::Entity
{
    public:
        GrpSchedulerList();
        ~GrpSchedulerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf grpschedulerid; //type: uint32
        ydk::YLeaf probelist; //type: string
        ydk::YLeaf scheduleperiod; //type: uint32
        ydk::YLeaf life; //type: uint32
        ydk::YLeaf ageout; //type: uint32
        ydk::YLeaf frequency; //type: uint32
        ydk::YLeaf frequencyrange; //type: string
        ydk::YLeaf startprobe; //type: StartProbe
        ydk::YLeaf dayofthemonth; //type: uint16
        ydk::YLeaf month; //type: Month
        ydk::YLeaf starttime; //type: string
        ydk::YLeaf modifygrpschedule; //type: ModifyGrpSchedule
        ydk::YLeaf reschedule; //type: boolean
        class StartProbe;
        class Month;
        class ModifyGrpSchedule;

}; // System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList


class System::TmItems : public ydk::Entity
{
    public:
        TmItems();
        ~TmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: TelemetryAdminState
        class CertificateItems; //type: System::TmItems::CertificateItems
        class DestprofItems; //type: System::TmItems::DestprofItems
        class SensorItems; //type: System::TmItems::SensorItems
        class DestItems; //type: System::TmItems::DestItems
        class SubsItems; //type: System::TmItems::SubsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::CertificateItems> certificate_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems> destprof_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestItems> dest_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::SubsItems> subs_items;
        
}; // System::TmItems


class System::TmItems::CertificateItems : public ydk::Entity
{
    public:
        CertificateItems();
        ~CertificateItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf filename; //type: string
        ydk::YLeaf hostname; //type: string

}; // System::TmItems::CertificateItems


class System::TmItems::DestprofItems : public ydk::Entity
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

        ydk::YLeaf adminst; //type: TelemetryAdminState
        class VrfItems; //type: System::TmItems::DestprofItems::VrfItems
        class CompressionItems; //type: System::TmItems::DestprofItems::CompressionItems
        class SourceinterfaceItems; //type: System::TmItems::DestprofItems::SourceinterfaceItems
        class RetryItems; //type: System::TmItems::DestprofItems::RetryItems
        class NodeidItems; //type: System::TmItems::DestprofItems::NodeidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::CompressionItems> compression_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::SourceinterfaceItems> sourceinterface_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::RetryItems> retry_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::NodeidItems> nodeid_items;
        
}; // System::TmItems::DestprofItems


class System::TmItems::DestprofItems::VrfItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string

}; // System::TmItems::DestprofItems::VrfItems


class System::TmItems::DestprofItems::CompressionItems : public ydk::Entity
{
    public:
        CompressionItems();
        ~CompressionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf name; //type: TelemetryCompression

}; // System::TmItems::DestprofItems::CompressionItems


class System::TmItems::DestprofItems::SourceinterfaceItems : public ydk::Entity
{
    public:
        SourceinterfaceItems();
        ~SourceinterfaceItems();

        bool has_data() const override;
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

}; // System::TmItems::DestprofItems::SourceinterfaceItems


class System::TmItems::DestprofItems::RetryItems : public ydk::Entity
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

        ydk::YLeaf size; //type: uint32

}; // System::TmItems::DestprofItems::RetryItems


class System::TmItems::DestprofItems::NodeidItems : public ydk::Entity
{
    public:
        NodeidItems();
        ~NodeidItems();

        bool has_data() const override;
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

}; // System::TmItems::DestprofItems::NodeidItems


class System::TmItems::SensorItems : public ydk::Entity
{
    public:
        SensorItems();
        ~SensorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SensorGroupList; //type: System::TmItems::SensorItems::SensorGroupList

        ydk::YList sensorgroup_list;
        
}; // System::TmItems::SensorItems


class System::TmItems::SensorItems::SensorGroupList : public ydk::Entity
{
    public:
        SensorGroupList();
        ~SensorGroupList();

        bool has_data() const override;
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
        ydk::YLeaf datasrc; //type: TelemetryDataSource
        class PathItems; //type: System::TmItems::SensorItems::SensorGroupList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::SensorItems::SensorGroupList::PathItems> path_items;
        
}; // System::TmItems::SensorItems::SensorGroupList


class System::TmItems::SensorItems::SensorGroupList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SensorPathList; //type: System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList

        ydk::YList sensorpath_list;
        
}; // System::TmItems::SensorItems::SensorGroupList::PathItems


class System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList : public ydk::Entity
{
    public:
        SensorPathList();
        ~SensorPathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path; //type: string
        ydk::YLeaf querycondition; //type: string
        ydk::YLeaf filtercondition; //type: string
        ydk::YLeaf depth; //type: uint32

}; // System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList


class System::TmItems::DestItems : public ydk::Entity
{
    public:
        DestItems();
        ~DestItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DestGroupList; //type: System::TmItems::DestItems::DestGroupList

        ydk::YList destgroup_list;
        
}; // System::TmItems::DestItems


class System::TmItems::DestItems::DestGroupList : public ydk::Entity
{
    public:
        DestGroupList();
        ~DestGroupList();

        bool has_data() const override;
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
        class AddrItems; //type: System::TmItems::DestItems::DestGroupList::AddrItems
        class ChunkingItems; //type: System::TmItems::DestItems::DestGroupList::ChunkingItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestItems::DestGroupList::AddrItems> addr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestItems::DestGroupList::ChunkingItems> chunking_items;
        
}; // System::TmItems::DestItems::DestGroupList


class System::TmItems::DestItems::DestGroupList::AddrItems : public ydk::Entity
{
    public:
        AddrItems();
        ~AddrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DestList; //type: System::TmItems::DestItems::DestGroupList::AddrItems::DestList

        ydk::YList dest_list;
        
}; // System::TmItems::DestItems::DestGroupList::AddrItems


class System::TmItems::DestItems::DestGroupList::AddrItems::DestList : public ydk::Entity
{
    public:
        DestList();
        ~DestList();

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
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf proto; //type: TelemetryProtocol
        ydk::YLeaf enc; //type: TelemetryEncoding

}; // System::TmItems::DestItems::DestGroupList::AddrItems::DestList


class System::TmItems::DestItems::DestGroupList::ChunkingItems : public ydk::Entity
{
    public:
        ChunkingItems();
        ~ChunkingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chunksize; //type: uint32

}; // System::TmItems::DestItems::DestGroupList::ChunkingItems


class System::TmItems::SubsItems : public ydk::Entity
{
    public:
        SubsItems();
        ~SubsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SubscriptionList; //type: System::TmItems::SubsItems::SubscriptionList

        ydk::YList subscription_list;
        
}; // System::TmItems::SubsItems


class System::TmItems::SubsItems::SubscriptionList : public ydk::Entity
{
    public:
        SubscriptionList();
        ~SubscriptionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint64
        class RssensorGroupRelItems; //type: System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems
        class RsdestGroupRelItems; //type: System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems> rssensorgrouprel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems> rsdestgrouprel_items;
        
}; // System::TmItems::SubsItems::SubscriptionList


class System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems : public ydk::Entity
{
    public:
        RssensorGroupRelItems();
        ~RssensorGroupRelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsSensorGroupRelList; //type: System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList

        ydk::YList rssensorgrouprel_list;
        
}; // System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems


class System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList : public ydk::Entity
{
    public:
        RsSensorGroupRelList();
        ~RsSensorGroupRelList();

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
        ydk::YLeaf sampleintvl; //type: uint64

}; // System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList


class System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems : public ydk::Entity
{
    public:
        RsdestGroupRelItems();
        ~RsdestGroupRelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsDestGroupRelList; //type: System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList

        ydk::YList rsdestgrouprel_list;
        
}; // System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems


class System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList : public ydk::Entity
{
    public:
        RsDestGroupRelList();
        ~RsDestGroupRelList();

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

}; // System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList


class System::TrackItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ObjectItems; //type: System::TrackItems::ObjectItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems> object_items;
        
}; // System::TrackItems


class System::TrackItems::ObjectItems : public ydk::Entity
{
    public:
        ObjectItems();
        ~ObjectItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ObjectList; //type: System::TrackItems::ObjectItems::ObjectList

        ydk::YList object_list;
        
}; // System::TrackItems::ObjectItems


class System::TrackItems::ObjectItems::ObjectList : public ydk::Entity
{
    public:
        ObjectList();
        ~ObjectList();

        bool has_data() const override;
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
        ydk::YLeaf clients; //type: uint16
        class IfItems; //type: System::TrackItems::ObjectItems::ObjectList::IfItems
        class IprtItems; //type: System::TrackItems::ObjectItems::ObjectList::IprtItems
        class IpslaItems; //type: System::TrackItems::ObjectItems::ObjectList::IpslaItems
        class ListItems; //type: System::TrackItems::ObjectItems::ObjectList::ListItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::IprtItems> iprt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::IpslaItems> ipsla_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::ListItems> list_items;
        
}; // System::TrackItems::ObjectItems::ObjectList


class System::TrackItems::ObjectItems::ObjectList::IfItems : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf protocoltype; //type: TrackIntfProtocolType

}; // System::TrackItems::ObjectItems::ObjectList::IfItems


class System::TrackItems::ObjectItems::ObjectList::IprtItems : public ydk::Entity
{
    public:
        IprtItems();
        ~IprtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: TrackAf
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf routestate; //type: TrackRouteState
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf routeowner; //type: TrackRouteOwner

}; // System::TrackItems::ObjectItems::ObjectList::IprtItems


class System::TrackItems::ObjectItems::ObjectList::IpslaItems : public ydk::Entity
{
    public:
        IpslaItems();
        ~IpslaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probeid; //type: uint32
        ydk::YLeaf probestate; //type: TrackProbeState

}; // System::TrackItems::ObjectItems::ObjectList::IpslaItems


class System::TrackItems::ObjectItems::ObjectList::ListItems : public ydk::Entity
{
    public:
        ListItems();
        ~ListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TrackListObj
        ydk::YLeaf percentageup; //type: uint16
        ydk::YLeaf percentagedown; //type: uint16
        ydk::YLeaf weightup; //type: uint16
        ydk::YLeaf weightdown; //type: uint16
        class ObjItems; //type: System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems> obj_items;
        
}; // System::TrackItems::ObjectItems::ObjectList::ListItems


class System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems : public ydk::Entity
{
    public:
        ObjItems();
        ~ObjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberList; //type: System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList

        ydk::YList member_list;
        
}; // System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems


class System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList : public ydk::Entity
{
    public:
        MemberList();
        ~MemberList();

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
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf not_; //type: boolean

}; // System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList


class System::UdldItems : public ydk::Entity
{
    public:
        UdldItems();
        ~UdldItems();

        bool has_data() const override;
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
        class InstItems; //type: System::UdldItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems> inst_items;
        
}; // System::UdldItems


class System::UdldItems::InstItems : public ydk::Entity
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

        ydk::YLeaf aggressive; //type: UdldAdminSt
        ydk::YLeaf msgintvl; //type: uint8
        ydk::YLeaf error; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf ctrl; //type: string
        class PhysifItems; //type: System::UdldItems::InstItems::PhysifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems::PhysifItems> physif_items;
        
}; // System::UdldItems::InstItems


class System::UdldItems::InstItems::PhysifItems : public ydk::Entity
{
    public:
        PhysifItems();
        ~PhysifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PhysIfList; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList

        ydk::YList physif_list;
        
}; // System::UdldItems::InstItems::PhysifItems


class System::UdldItems::InstItems::PhysifItems::PhysIfList : public ydk::Entity
{
    public:
        PhysIfList();
        ~PhysIfList();

        bool has_data() const override;
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
        ydk::YLeaf aggressive; //type: UdldAdminSt
        ydk::YLeaf bidirdetect; //type: UdldPortEnable
        ydk::YLeaf fiber; //type: UdldOperSt
        ydk::YLeaf error; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class PtimestItems; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems
        class RtvrfMbrItems; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems> ptimest_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::UdldItems::InstItems::PhysifItems::PhysIfList


class System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems : public ydk::Entity
{
    public:
        PtimestItems();
        ~PtimestItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PktTsList; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList

        ydk::YList pktts_list;
        
}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems


class System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList : public ydk::Entity
{
    public:
        PktTsList();
        ~PktTsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dir; //type: UdldPktDirection

}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList


class System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems


class System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems


class System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::AcllogItems : public ydk::Entity
{
    public:
        AcllogItems();
        ~AcllogItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::AcllogItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcllogItems::InstItems> inst_items;
        
}; // System::AcllogItems


class System::AcllogItems::InstItems : public ydk::Entity
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

        class LogItems; //type: System::AcllogItems::InstItems::LogItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcllogItems::InstItems::LogItems> log_items;
        
}; // System::AcllogItems::InstItems


class System::AcllogItems::InstItems::LogItems : public ydk::Entity
{
    public:
        LogItems();
        ~LogItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: one of uint64, string
        ydk::YLeaf matchlevel; //type: uint8
        ydk::YLeaf loglevel; //type: uint8

}; // System::AcllogItems::InstItems::LogItems


class System::BdItems : public ydk::Entity
{
    public:
        BdItems();
        ~BdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf descr; //type: string
        ydk::YLeaf sysdefaultsviautostate; //type: BdDefaultSVIAutoState
        class VlanconfigItems; //type: System::BdItems::VlanconfigItems
        class BdItems_; //type: System::BdItems::BdItems_
        class VlanItems; //type: System::BdItems::VlanItems
        class VxlanItems; //type: System::BdItems::VxlanItems
        class ResvlanItems; //type: System::BdItems::ResvlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems> vlanconfig_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems> vxlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::ResvlanItems> resvlan_items;
        
}; // System::BdItems


class System::BdItems::VlanconfigItems : public ydk::Entity
{
    public:
        VlanconfigItems();
        ~VlanconfigItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanConfigList; //type: System::BdItems::VlanconfigItems::VlanConfigList

        ydk::YList vlanconfig_list;
        
}; // System::BdItems::VlanconfigItems


class System::BdItems::VlanconfigItems::VlanConfigList : public ydk::Entity
{
    public:
        VlanConfigList();
        ~VlanConfigList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf accencap; //type: string
        ydk::YLeaf vlanmaclearn; //type: L2fmLearning
        class IpqosItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems> ipqos_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems : public ydk::Entity
{
    public:
        IpqosItems();
        ~IpqosItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statsstate; //type: IpqosStatsState
        ydk::YLeaf qospoliciesstatsstate; //type: IpqosStatsState
        class StatClearItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems
        class QueuingItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems
        class NwItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems
        class DfltItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems
        class GlobalpriorflowctrlItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::GlobalpriorflowctrlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems> statclear_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems> queuing_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems> nw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems> dflt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::GlobalpriorflowctrlItems> globalpriorflowctrl_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems : public ydk::Entity
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

        ydk::YLeaf pmaptype; //type: IpqosPolicyType
        ydk::YLeaf direction; //type: IpqosPolicyDirection
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf vlan; //type: string
        ydk::YLeaf portchan; //type: string
        ydk::YLeaf timestamp; //type: one of uint64, string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems : public ydk::Entity
{
    public:
        QueuingItems();
        ~QueuingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems
        class CItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems
        class PItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems
        class CopyPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems> c_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems> p_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems> copypmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems : public ydk::Entity
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

        class InItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems
        class OutItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems> in_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems> out_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems : public ydk::Entity
{
    public:
        InItems();
        ~InItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems
        class SysItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems> sys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf delintfbit; //type: boolean
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems
        class CmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems
        class QueCmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems> quecmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems : public ydk::Entity
{
    public:
        CmapItems();
        ~CmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList

        ydk::YList stats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf conformbytes; //type: uint64
        ydk::YLeaf exceedbytes; //type: uint64
        ydk::YLeaf violatebytes; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems : public ydk::Entity
{
    public:
        QueCmapItems();
        ~QueCmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QueuingStatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList

        ydk::YList queuingstats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList : public ydk::Entity
{
    public:
        QueuingStatsList();
        ~QueuingStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf currqueuedepth; //type: uint64
        ydk::YLeaf maxqueuedepth; //type: uint64
        ydk::YLeaf ingqdroppackets; //type: uint64
        ydk::YLeaf ingqdepthbytes; //type: uint64
        ydk::YLeaf randdropbytes; //type: uint64
        ydk::YLeaf randdroppackets; //type: uint64
        ydk::YLeaf randecnmarkedpackets; //type: uint64
        ydk::YLeaf pfctxppp; //type: uint64
        ydk::YLeaf pfcrxppp; //type: uint64
        ydk::YLeaf pfcwdshutdowncount; //type: uint64
        ydk::YLeaf pfcwdrestoredcount; //type: uint64
        ydk::YLeaf pfcwdflushedpackets; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems : public ydk::Entity
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

        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems : public ydk::Entity
{
    public:
        OutItems();
        ~OutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems
        class SysItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems> sys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf delintfbit; //type: boolean
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems
        class CmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems
        class QueCmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems> quecmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems : public ydk::Entity
{
    public:
        CmapItems();
        ~CmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList

        ydk::YList stats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf conformbytes; //type: uint64
        ydk::YLeaf exceedbytes; //type: uint64
        ydk::YLeaf violatebytes; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems : public ydk::Entity
{
    public:
        QueCmapItems();
        ~QueCmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QueuingStatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList

        ydk::YList queuingstats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList : public ydk::Entity
{
    public:
        QueuingStatsList();
        ~QueuingStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf currqueuedepth; //type: uint64
        ydk::YLeaf maxqueuedepth; //type: uint64
        ydk::YLeaf ingqdroppackets; //type: uint64
        ydk::YLeaf ingqdepthbytes; //type: uint64
        ydk::YLeaf randdropbytes; //type: uint64
        ydk::YLeaf randdroppackets; //type: uint64
        ydk::YLeaf randecnmarkedpackets; //type: uint64
        ydk::YLeaf pfctxppp; //type: uint64
        ydk::YLeaf pfcrxppp; //type: uint64
        ydk::YLeaf pfcwdshutdowncount; //type: uint64
        ydk::YLeaf pfcwdrestoredcount; //type: uint64
        ydk::YLeaf pfcwdflushedpackets; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems : public ydk::Entity
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

        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems : public ydk::Entity
{
    public:
        CItems();
        ~CItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems> name_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems : public ydk::Entity
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

        class CMapInstList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList

        ydk::YList cmapinst_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList : public ydk::Entity
{
    public:
        CMapInstList();
        ~CMapInstList();

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
        ydk::YLeaf matchtype; //type: IpqosQoSMatchType
        ydk::YLeaf configstatus; //type: uint32
        class AclItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems
        class DscpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems
        class IpRtpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems
        class PacketLengthItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems
        class CosItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems
        class MplsExperimentalItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems
        class PrecedenceItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems
        class ProtocolItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems
        class DescriptionItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems
        class DscpNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems
        class CosNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems
        class MplsExperimentalNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems
        class PrecedenceNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems
        class ProtocolNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems
        class IpRtpNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems
        class PacketLengthNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems
        class GrpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems
        class RsclassMapToPolicyMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems> dscp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems> iprtp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems> packetlength_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems> cos_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems> mplsexperimental_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems> precedence_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems> protocol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems> description_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems> dscpnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems> cosnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems> mplsexperimentalnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems> precedencenot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems> protocolnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems> iprtpnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems> packetlengthnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems> grp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems> rsclassmaptopolicymap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems : public ydk::Entity
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

        class AclList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList

        ydk::YList acl_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList : public ydk::Entity
{
    public:
        AclList();
        ~AclList();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems : public ydk::Entity
{
    public:
        DscpItems();
        ~DscpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DscpList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList

        ydk::YList dscp_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList : public ydk::Entity
{
    public:
        DscpList();
        ~DscpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems : public ydk::Entity
{
    public:
        IpRtpItems();
        ~IpRtpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf range; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems : public ydk::Entity
{
    public:
        PacketLengthItems();
        ~PacketLengthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf range; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems : public ydk::Entity
{
    public:
        CosItems();
        ~CosItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList

        ydk::YList cos_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList : public ydk::Entity
{
    public:
        CosList();
        ~CosList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems : public ydk::Entity
{
    public:
        MplsExperimentalItems();
        ~MplsExperimentalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MPLSExperimentalList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList

        ydk::YList mplsexperimental_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList : public ydk::Entity
{
    public:
        MPLSExperimentalList();
        ~MPLSExperimentalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems : public ydk::Entity
{
    public:
        PrecedenceItems();
        ~PrecedenceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrecedenceList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList

        ydk::YList precedence_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList : public ydk::Entity
{
    public:
        PrecedenceList();
        ~PrecedenceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: IpqosPrec
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems : public ydk::Entity
{
    public:
        ProtocolItems();
        ~ProtocolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList

        ydk::YList protocol_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList : public ydk::Entity
{
    public:
        ProtocolList();
        ~ProtocolList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: IpqosProtocol
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList

class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::StartProbe : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Now;
        static const ydk::Enum::YLeaf At;
        static const ydk::Enum::YLeaf Pending;
        static const ydk::Enum::YLeaf After;

        static int get_enum_value(const std::string & name) {
            if (name == "Now") return 1;
            if (name == "At") return 2;
            if (name == "Pending") return 3;
            if (name == "After") return 4;
            return -1;
        }
};

class System::SlaItems::InstItems::SenderItems::OperationItems::ProbeList::ScheduleItems::Month : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf None;
        static const ydk::Enum::YLeaf January;
        static const ydk::Enum::YLeaf February;
        static const ydk::Enum::YLeaf March;
        static const ydk::Enum::YLeaf April;
        static const ydk::Enum::YLeaf May;
        static const ydk::Enum::YLeaf June;
        static const ydk::Enum::YLeaf July;
        static const ydk::Enum::YLeaf August;
        static const ydk::Enum::YLeaf September;
        static const ydk::Enum::YLeaf October;
        static const ydk::Enum::YLeaf November;
        static const ydk::Enum::YLeaf December;

        static int get_enum_value(const std::string & name) {
            if (name == "None") return 0;
            if (name == "January") return 1;
            if (name == "February") return 2;
            if (name == "March") return 3;
            if (name == "April") return 4;
            if (name == "May") return 5;
            if (name == "June") return 6;
            if (name == "July") return 7;
            if (name == "August") return 8;
            if (name == "September") return 9;
            if (name == "October") return 10;
            if (name == "November") return 11;
            if (name == "December") return 12;
            return -1;
        }
};

class System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::StartProbe : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Now;
        static const ydk::Enum::YLeaf At;
        static const ydk::Enum::YLeaf Pending;
        static const ydk::Enum::YLeaf After;

        static int get_enum_value(const std::string & name) {
            if (name == "Now") return 1;
            if (name == "At") return 2;
            if (name == "Pending") return 3;
            if (name == "After") return 4;
            return -1;
        }
};

class System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::Month : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf None;
        static const ydk::Enum::YLeaf January;
        static const ydk::Enum::YLeaf February;
        static const ydk::Enum::YLeaf March;
        static const ydk::Enum::YLeaf April;
        static const ydk::Enum::YLeaf May;
        static const ydk::Enum::YLeaf June;
        static const ydk::Enum::YLeaf July;
        static const ydk::Enum::YLeaf August;
        static const ydk::Enum::YLeaf September;
        static const ydk::Enum::YLeaf October;
        static const ydk::Enum::YLeaf November;
        static const ydk::Enum::YLeaf December;

        static int get_enum_value(const std::string & name) {
            if (name == "None") return 0;
            if (name == "January") return 1;
            if (name == "February") return 2;
            if (name == "March") return 3;
            if (name == "April") return 4;
            if (name == "May") return 5;
            if (name == "June") return 6;
            if (name == "July") return 7;
            if (name == "August") return 8;
            if (name == "September") return 9;
            if (name == "October") return 10;
            if (name == "November") return 11;
            if (name == "December") return 12;
            return -1;
        }
};

class System::SlaItems::InstItems::SenderItems::GroupscheduleItems::GrpSchedulerList::ModifyGrpSchedule : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf delete_;

        static int get_enum_value(const std::string & name) {
            if (name == "create") return 0;
            if (name == "add") return 1;
            if (name == "delete") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_NX_OS_DEVICE_29_ */

