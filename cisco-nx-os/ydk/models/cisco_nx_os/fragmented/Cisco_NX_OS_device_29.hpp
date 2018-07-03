#ifndef _CISCO_NX_OS_DEVICE_29_
#define _CISCO_NX_OS_DEVICE_29_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_28.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::PoeItems::InstItems : public ydk::Entity
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

        ydk::YLeaf error; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::PoeItems::InstItems


class System::PoeItems::PhysifItems : public ydk::Entity
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

        class PhysIfList; //type: System::PoeItems::PhysifItems::PhysIfList

        ydk::YList physif_list;
        
}; // System::PoeItems::PhysifItems


class System::PoeItems::PhysifItems::PhysIfList : public ydk::Entity
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
        ydk::YLeaf portmode; //type: PoePoePortmode
        ydk::YLeaf maxconsumption; //type: uint64
        ydk::YLeaf portpriority; //type: PoePoePriority
        ydk::YLeaf portpolice; //type: PoePoePolice
        ydk::YLeaf portdefaultconsumption; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class RtvrfMbrItems; //type: System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::PoeItems::PhysifItems::PhysIfList


class System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::PoeItems::PhysifItems::PhysIfList::RtvrfMbrItems


class System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems


class System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::PoeItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf ppfinstid; //type: uint32
        ydk::YLeaf ppfstartid; //type: uint32
        ydk::YLeaf stateid; //type: QosmStateId

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
        ydk::YLeaf admin; //type: NwAdminSt_
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf operst; //type: QospOperSt
        ydk::YLeaf operstqual; //type: QospOperStQual
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
        ydk::YLeaf operstqual; //type: QospOperStQual

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
        ydk::YLeaf operstqual; //type: QospOperStQual

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
        ydk::YLeaf operstqual; //type: QospOperStQual

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
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf adminst; //type: NwAdminSt_
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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


class System::StsItems : public ydk::Entity
{
    public:
        StsItems();
        ~StsItems();

        bool has_data() const override;
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
        class InstItems; //type: System::StsItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems> inst_items;
        
}; // System::StsItems


class System::StsItems::InstItems : public ydk::Entity
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
        ydk::YLeaf opererr; //type: string
        class ChainItems; //type: System::StsItems::InstItems::ChainItems
        class NodeItems; //type: System::StsItems::InstItems::NodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems> chain_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::NodeItems> node_items;
        
}; // System::StsItems::InstItems


class System::StsItems::InstItems::ChainItems : public ydk::Entity
{
    public:
        ChainItems();
        ~ChainItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ChainList; //type: System::StsItems::InstItems::ChainItems::ChainList

        ydk::YList chain_list;
        
}; // System::StsItems::InstItems::ChainItems


class System::StsItems::InstItems::ChainItems::ChainList : public ydk::Entity
{
    public:
        ChainList();
        ~ChainList();

        bool has_data() const override;
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
        class StageItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems> stage_items;
        
}; // System::StsItems::InstItems::ChainItems::ChainList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems : public ydk::Entity
{
    public:
        StageItems();
        ~StageItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StageList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList

        ydk::YList stage_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList : public ydk::Entity
{
    public:
        StageList();
        ~StageList();

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
        ydk::YLeaf ctrl; //type: string
        class VnodeItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems> vnode_items;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems : public ydk::Entity
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

        class VNodeList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vrfencap; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf rwmac; //type: string
        ydk::YLeaf nwreachst; //type: StsNwReachSt
        class ExtinItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems
        class ExtoutItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems
        class FabinItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems
        class FabinrevItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems
        class FaboutItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems
        class FaboutrevItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems
        class RsnodeAttItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems> extin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems> extout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems> fabin_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems> fabinrev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems> fabout_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems> faboutrev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems> rsnodeatt_items;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems : public ydk::Entity
{
    public:
        ExtinItems();
        ~ExtinItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtInList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList

        ydk::YList extin_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList : public ydk::Entity
{
    public:
        ExtInList();
        ~ExtInList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vrfencap; //type: string
        ydk::YLeaf ip; //type: string

}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtinItems::ExtInList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems : public ydk::Entity
{
    public:
        ExtoutItems();
        ~ExtoutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtOutList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList

        ydk::YList extout_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList : public ydk::Entity
{
    public:
        ExtOutList();
        ~ExtOutList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vrfencap; //type: string
        ydk::YLeaf ip; //type: string

}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::ExtoutItems::ExtOutList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems : public ydk::Entity
{
    public:
        FabinItems();
        ~FabinItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FabInList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList

        ydk::YList fabin_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList : public ydk::Entity
{
    public:
        FabInList();
        ~FabInList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf id; //type: uint32
        class TapItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems> tap_items;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems : public ydk::Entity
{
    public:
        TapItems();
        ~TapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TapList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList

        ydk::YList tap_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList : public ydk::Entity
{
    public:
        TapList();
        ~TapList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: string
        ydk::YLeaf encap; //type: string

}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinItems::FabInList::TapItems::TapList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems : public ydk::Entity
{
    public:
        FabinrevItems();
        ~FabinrevItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FabInRevList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList

        ydk::YList fabinrev_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList : public ydk::Entity
{
    public:
        FabInRevList();
        ~FabInRevList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf id; //type: uint32

}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FabinrevItems::FabInRevList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems : public ydk::Entity
{
    public:
        FaboutItems();
        ~FaboutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FabOutList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList

        ydk::YList fabout_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList : public ydk::Entity
{
    public:
        FabOutList();
        ~FabOutList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf spctag; //type: uint32
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vrfencap; //type: string
        ydk::YLeaf ip; //type: string
        class TapItems; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems> tap_items;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems : public ydk::Entity
{
    public:
        TapItems();
        ~TapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TapList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList

        ydk::YList tap_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList : public ydk::Entity
{
    public:
        TapList();
        ~TapList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: string
        ydk::YLeaf encap; //type: string

}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutItems::FabOutList::TapItems::TapList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems : public ydk::Entity
{
    public:
        FaboutrevItems();
        ~FaboutrevItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FabOutRevList; //type: System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList

        ydk::YList faboutrev_list;
        
}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList : public ydk::Entity
{
    public:
        FabOutRevList();
        ~FabOutRevList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf spctag; //type: uint32
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vrfencap; //type: string
        ydk::YLeaf ip; //type: string

}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::FaboutrevItems::FabOutRevList


class System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems : public ydk::Entity
{
    public:
        RsnodeAttItems();
        ~RsnodeAttItems();

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

}; // System::StsItems::InstItems::ChainItems::ChainList::StageItems::StageList::VnodeItems::VNodeList::RsnodeAttItems


class System::StsItems::InstItems::NodeItems : public ydk::Entity
{
    public:
        NodeItems();
        ~NodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NodeList; //type: System::StsItems::InstItems::NodeItems::NodeList

        ydk::YList node_list;
        
}; // System::StsItems::InstItems::NodeItems


class System::StsItems::InstItems::NodeItems::NodeList : public ydk::Entity
{
    public:
        NodeList();
        ~NodeList();

        bool has_data() const override;
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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf tepdst; //type: string

}; // System::StsItems::InstItems::NodeItems::NodeList


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

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::CompressionItems> compression_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::SourceinterfaceItems> sourceinterface_items;
        
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
        ydk::YLeaf excludefilter; //type: string
        ydk::YLeaf secondarypath; //type: string
        ydk::YLeaf secondarygroup; //type: uint64
        ydk::YLeaf depth; //type: uint32
        class IncludeItems; //type: System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems> include_items;
        
}; // System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList


class System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems : public ydk::Entity
{
    public:
        IncludeItems();
        ~IncludeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IncludeFilterList; //type: System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList

        ydk::YList includefilter_list;
        
}; // System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems


class System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList : public ydk::Entity
{
    public:
        IncludeFilterList();
        ~IncludeFilterList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filter; //type: string

}; // System::TmItems::SensorItems::SensorGroupList::PathItems::SensorPathList::IncludeItems::IncludeFilterList


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

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestItems::DestGroupList::AddrItems> addr_items;
        
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
        ydk::YLeaf tcl; //type: RelnClassId
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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList


class System::TopoctrlItems : public ydk::Entity
{
    public:
        TopoctrlItems();
        ~TopoctrlItems();

        bool has_data() const override;
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
        class LbpItems; //type: System::TopoctrlItems::LbpItems
        class ShrdnpItems; //type: System::TopoctrlItems::ShrdnpItems
        class VirtdomItems; //type: System::TopoctrlItems::VirtdomItems
        class VxlanpItems; //type: System::TopoctrlItems::VxlanpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TopoctrlItems::LbpItems> lbp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TopoctrlItems::ShrdnpItems> shrdnp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TopoctrlItems::VirtdomItems> virtdom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TopoctrlItems::VxlanpItems> vxlanp_items;
        
}; // System::TopoctrlItems


class System::TopoctrlItems::LbpItems : public ydk::Entity
{
    public:
        LbpItems();
        ~LbpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mode; //type: TopoctrlLbMode
        ydk::YLeaf dlbmode; //type: TopoctrlDLbMode
        ydk::YLeaf pri; //type: TopoctrlPrioritization
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::TopoctrlItems::LbpItems


class System::TopoctrlItems::ShrdnpItems : public ydk::Entity
{
    public:
        ShrdnpItems();
        ~ShrdnpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf factor; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::TopoctrlItems::ShrdnpItems


class System::TopoctrlItems::VirtdomItems : public ydk::Entity
{
    public:
        VirtdomItems();
        ~VirtdomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mcastaddr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class FromItems; //type: System::TopoctrlItems::VirtdomItems::FromItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TopoctrlItems::VirtdomItems::FromItems> from_items;
        
}; // System::TopoctrlItems::VirtdomItems


class System::TopoctrlItems::VirtdomItems::FromItems : public ydk::Entity
{
    public:
        FromItems();
        ~FromItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EncapBlkList; //type: System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList

        ydk::YList encapblk_list;
        
}; // System::TopoctrlItems::VirtdomItems::FromItems


class System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList : public ydk::Entity
{
    public:
        EncapBlkList();
        ~EncapBlkList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf from; //type: string
        ydk::YLeaf to; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::TopoctrlItems::VirtdomItems::FromItems::EncapBlkList


class System::TopoctrlItems::VxlanpItems : public ydk::Entity
{
    public:
        VxlanpItems();
        ~VxlanpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf udpport; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::TopoctrlItems::VxlanpItems


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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf linkstate; //type: UdldOperSt
        ydk::YLeaf currbidirstate; //type: UdldNeighborState
        ydk::YLeaf bidirdetectstate; //type: UdldNeighborState
        ydk::YLeaf fsmstate; //type: UdldFsmState
        ydk::YLeaf deeppktinspcnt; //type: uint64
        ydk::YLeaf pktmismatchcnt; //type: uint64
        ydk::YLeaf pktdropcnt; //type: uint64
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
        ydk::YLeaf total; //type: string
        ydk::YLeaf probe; //type: string
        ydk::YLeaf echo; //type: string
        ydk::YLeaf flush; //type: string

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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

        ydk::YLeaf interval; //type: string
        ydk::YLeaf matchlevel; //type: uint8
        ydk::YLeaf loglevel; //type: uint8

}; // System::AcllogItems::InstItems::LogItems


class System::AibItems : public ydk::Entity
{
    public:
        AibItems();
        ~AibItems();

        bool has_data() const override;
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
        class DomItems; //type: System::AibItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AibItems::DomItems> dom_items;
        
}; // System::AibItems


class System::AibItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::AibItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::AibItems::DomItems


class System::AibItems::DomItems::DomList : public ydk::Entity
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
        class DbItems; //type: System::AibItems::DomItems::DomList::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AibItems::DomItems::DomList::DbItems> db_items;
        
}; // System::AibItems::DomItems::DomList


class System::AibItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::AibItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::AibItems::DomItems::DomList::DbItems


class System::AibItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: AibDbT
        ydk::YLeaf name; //type: string
        class AdjItems; //type: System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems> adj_items;
        
}; // System::AibItems::DomItems::DomList::DbItems::DbList


class System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems : public ydk::Entity
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

        class AdjList; //type: System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList

        ydk::YList adj_list;
        
}; // System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems


class System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList : public ydk::Entity
{
    public:
        AdjList();
        ~AdjList();

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
        ydk::YLeaf if_; //type: string
        ydk::YLeaf name; //type: string
        class OwnerItems; //type: System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems> owner_items;
        
}; // System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList


class System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems : public ydk::Entity
{
    public:
        OwnerItems();
        ~OwnerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AdjOwnerList; //type: System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList

        ydk::YList adjowner_list;
        
}; // System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems


class System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList : public ydk::Entity
{
    public:
        AdjOwnerList();
        ~AdjOwnerList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf owner; //type: string
        ydk::YLeaf updatets; //type: string
        ydk::YLeaf pref; //type: uint16
        ydk::YLeaf mac; //type: string
        ydk::YLeaf l2if; //type: string
        ydk::YLeaf active; //type: boolean
        ydk::YLeaf name; //type: string

}; // System::AibItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjList::OwnerItems::AdjOwnerList


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

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems> vlanconfig_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems> vxlan_items;
        
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

}; // System::BdItems::VlanconfigItems::VlanConfigList


class System::BdItems::BdItems_ : public ydk::Entity
{
    public:
        BdItems_();
        ~BdItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BDList; //type: System::BdItems::BdItems_::BDList

        ydk::YList bd_list;
        
}; // System::BdItems::BdItems_


class System::BdItems::BdItems_::BDList : public ydk::Entity
{
    public:
        BDList();
        ~BDList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fabencap; //type: string
        ydk::YLeaf accencap; //type: string
        ydk::YLeaf fwdmode; //type: string
        ydk::YLeaf bridgemode; //type: L2BridgeMode
        ydk::YLeaf fwdctrl; //type: string
        ydk::YLeaf unkmacucastact; //type: L2UnkMacUcastAct
        ydk::YLeaf unkmcastact; //type: L2UnkMcastAct
        ydk::YLeaf pctag; //type: uint32
        ydk::YLeaf epoperst; //type: string
        ydk::YLeaf bddefdn; //type: string
        ydk::YLeaf controllerid; //type: string
        ydk::YLeaf media; //type: L2BdMedia
        ydk::YLeaf bdstate; //type: L2DomAdminSt
        ydk::YLeaf bdopername; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: L2DomType
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf hwid; //type: uint32
        ydk::YLeaf mode; //type: L2DomMode
        ydk::YLeaf adminst; //type: L2DomAdminSt
        ydk::YLeaf operst; //type: L2DomOperSt
        ydk::YLeaf createts; //type: string
        ydk::YLeaf ctrl; //type: string
        class EpretItems; //type: System::BdItems::BdItems_::BDList::EpretItems
        class FmgrpItems; //type: System::BdItems::BdItems_::BDList::FmgrpItems
        class DbItems; //type: System::BdItems::BdItems_::BDList::DbItems
        class VlanItems; //type: System::BdItems::BdItems_::BDList::VlanItems
        class VxlanItems; //type: System::BdItems::BdItems_::BDList::VxlanItems
        class RsextBDItems; //type: System::BdItems::BdItems_::BDList::RsextBDItems
        class RsbdVsanMapItems; //type: System::BdItems::BdItems_::BDList::RsbdVsanMapItems
        class RtfvDomIfConnItems; //type: System::BdItems::BdItems_::BDList::RtfvDomIfConnItems
        class DbgVlanStatsItems; //type: System::BdItems::BdItems_::BDList::DbgVlanStatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::EpretItems> epret_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::FmgrpItems> fmgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems> vxlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::RsextBDItems> rsextbd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::RsbdVsanMapItems> rsbdvsanmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::RtfvDomIfConnItems> rtfvdomifconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbgVlanStatsItems> dbgvlanstats_items;
        
}; // System::BdItems::BdItems_::BDList


class System::BdItems::BdItems_::BDList::EpretItems : public ydk::Entity
{
    public:
        EpretItems();
        ~EpretItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localepageintvl; //type: uint16
        ydk::YLeaf remoteepageintvl; //type: uint16
        ydk::YLeaf bounceageintvl; //type: uint16
        ydk::YLeaf bouncetrig; //type: string
        ydk::YLeaf movefreq; //type: uint16
        ydk::YLeaf holdintvl; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::BdItems::BdItems_::BDList::EpretItems


class System::BdItems::BdItems_::BDList::FmgrpItems : public ydk::Entity
{
    public:
        FmgrpItems();
        ~FmgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GrpList; //type: System::BdItems::BdItems_::BDList::FmgrpItems::GrpList

        ydk::YList grp_list;
        
}; // System::BdItems::BdItems_::BDList::FmgrpItems


class System::BdItems::BdItems_::BDList::FmgrpItems::GrpList : public ydk::Entity
{
    public:
        GrpList();
        ~GrpList();

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

}; // System::BdItems::BdItems_::BDList::FmgrpItems::GrpList


class System::BdItems::BdItems_::BDList::DbItems : public ydk::Entity
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

        class DbList; //type: System::BdItems::BdItems_::BDList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::BdItems::BdItems_::BDList::DbItems


class System::BdItems::BdItems_::BDList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: EpmDbT
        ydk::YLeaf name; //type: string
        class IpItems; //type: System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems
        class MacItems; //type: System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems> mac_items;
        
}; // System::BdItems::BdItems_::BDList::DbItems::DbList


class System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems : public ydk::Entity
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

        class IpEpList; //type: System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList

        ydk::YList ipep_list;
        
}; // System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems


class System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList : public ydk::Entity
{
    public:
        IpEpList();
        ~IpEpList();

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
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf createts; //type: string
        class RtIpEpRslttoIpEpAttItems; //type: System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems
        class RtMacEpRslttoIpEpAttItems; //type: System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems> rtipeprslttoipepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems> rtmaceprslttoipepatt_items;
        
}; // System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList


class System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RtIpEpRslttoIpEpAttItems();
        ~RtIpEpRslttoIpEpAttItems();

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

}; // System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems


class System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems : public ydk::Entity
{
    public:
        RtMacEpRslttoIpEpAttItems();
        ~RtMacEpRslttoIpEpAttItems();

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

}; // System::BdItems::BdItems_::BDList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems


class System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems : public ydk::Entity
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

        class MacEpList; //type: System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems


class System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList : public ydk::Entity
{
    public:
        MacEpList();
        ~MacEpList();

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
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf createts; //type: string
        class RsmacEpToIpEpAttItems; //type: System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems> rsmaceptoipepatt_items;
        
}; // System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList


class System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems : public ydk::Entity
{
    public:
        RsmacEpToIpEpAttItems();
        ~RsmacEpToIpEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMacEpToIpEpAttList; //type: System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList

        ydk::YList rsmaceptoipepatt_list;
        
}; // System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems


class System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList : public ydk::Entity
{
    public:
        RsMacEpToIpEpAttList();
        ~RsMacEpToIpEpAttList();

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

}; // System::BdItems::BdItems_::BDList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList


class System::BdItems::BdItems_::BDList::VlanItems : public ydk::Entity
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

        class CktEpList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList

        ydk::YList cktep_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList : public ydk::Entity
{
    public:
        CktEpList();
        ~CktEpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf fabencap; //type: string
        ydk::YLeaf operstate; //type: QospOperSt
        ydk::YLeaf operstqual; //type: QospOperStQual
        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: L2DomType
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf hwid; //type: uint32
        ydk::YLeaf mode; //type: L2DomMode
        ydk::YLeaf adminst; //type: L2DomAdminSt
        ydk::YLeaf operst; //type: L2DomOperSt
        ydk::YLeaf createts; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf enfpref; //type: L2EnfPref
        ydk::YLeaf pctag; //type: uint32
        ydk::YLeaf qosprio; //type: QosTenantPrio
        ydk::YLeaf epgdn; //type: string
        class MacItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems
        class DbItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems
        class RtspanSpanSrcToL2CktEpAttItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems
        class RtfvDomIfConnItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems
        class RsvlanEppAttItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems> rtspanspansrctol2cktepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems> rtfvdomifconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems> rsvlaneppatt_items;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems : public ydk::Entity
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

        class MacEpList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList : public ydk::Entity
{
    public:
        MacEpList();
        ~MacEpList();

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
        ydk::YLeaf if_; //type: string
        ydk::YLeaf operst; //type: EpmEpOperSt
        ydk::YLeaf operstqual; //type: EpmEpOperStQual
        ydk::YLeaf name; //type: string
        class RtfvEpDefRefToL2MacEpItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems> rtfvepdefreftol2macep_items;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList


}
}

#endif /* _CISCO_NX_OS_DEVICE_29_ */

