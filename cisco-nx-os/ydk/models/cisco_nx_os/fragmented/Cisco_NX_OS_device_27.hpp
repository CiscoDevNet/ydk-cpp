#ifndef _CISCO_NX_OS_DEVICE_27_
#define _CISCO_NX_OS_DEVICE_27_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_25.hpp"
#include "Cisco_NX_OS_device_26.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::IpqosItems::DfltItems::PItems::NameItems : public ydk::Entity
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

        class PMapInstList; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList

        ydk::YList pmapinst_list;
        
}; // System::IpqosItems::DfltItems::PItems::NameItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList : public ydk::Entity
{
    public:
        PMapInstList();
        ~PMapInstList();

        bool has_data() const override;
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
        ydk::YLeaf matchtype; //type: IpqosQoSMatchType
        ydk::YLeaf refcount; //type: uint32
        ydk::YLeaf configstatus; //type: uint32
        class CmapItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems
        class DescriptionItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems
        class RtipqosPolicyInstToPMapItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems
        class RtclassMapToPolicyMapItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems> description_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems> rtipqospolicyinsttopmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems> rtclassmaptopolicymap_items;
        
}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems : public ydk::Entity
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

        class MatchCMapList; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList

        ydk::YList matchcmap_list;
        
}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList : public ydk::Entity
{
    public:
        MatchCMapList();
        ~MatchCMapList();

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
        ydk::YLeaf prevcmap; //type: string
        ydk::YLeaf nextcmap; //type: string
        ydk::YLeaf configstatus; //type: uint32
        class SetCosItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems
        class MtuItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems
        class SetPrecedenceItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems
        class SetDscpItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems
        class SetGrpItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems
        class SetDlbDisableItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems
        class QueueLimitItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems
        class PauseItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems
        class DppItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems
        class SetBWItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems
        class SetRemBWItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems
        class ShapeItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems
        class PoliceItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems
        class PrioItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems
        class RandDetItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems
        class RandDetNonEcnItems; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems> setcos_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems> mtu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems> setprecedence_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems> setdscp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems> setgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems> setdlbdisable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems> queuelimit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems> pause_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems> dpp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems> setbw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems> setrembw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems> shape_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems> police_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems> prio_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems> randdet_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems> randdetnonecn_items;
        
}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems : public ydk::Entity
{
    public:
        SetCosItems();
        ~SetCosItems();

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

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems : public ydk::Entity
{
    public:
        MtuItems();
        ~MtuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems : public ydk::Entity
{
    public:
        SetPrecedenceItems();
        ~SetPrecedenceItems();

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
        ydk::YLeaf tunnel; //type: boolean
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems : public ydk::Entity
{
    public:
        SetDscpItems();
        ~SetDscpItems();

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
        ydk::YLeaf tunnel; //type: boolean
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems : public ydk::Entity
{
    public:
        SetGrpItems();
        ~SetGrpItems();

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
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems : public ydk::Entity
{
    public:
        SetDlbDisableItems();
        ~SetDlbDisableItems();

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

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems : public ydk::Entity
{
    public:
        QueueLimitItems();
        ~QueueLimitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queuelimitval; //type: uint64
        ydk::YLeaf queuelimitunit; //type: IpqosQueueLimitUnit
        ydk::YLeaf dynamic; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems : public ydk::Entity
{
    public:
        PauseItems();
        ~PauseItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffersize; //type: uint64
        ydk::YLeaf pausethreshold; //type: uint64
        ydk::YLeaf resumethreshold; //type: uint64
        ydk::YLeaf pfccos0; //type: boolean
        ydk::YLeaf pfccos1; //type: boolean
        ydk::YLeaf pfccos2; //type: boolean
        ydk::YLeaf pfccos3; //type: boolean
        ydk::YLeaf pfccos4; //type: boolean
        ydk::YLeaf pfccos5; //type: boolean
        ydk::YLeaf pfccos6; //type: boolean
        ydk::YLeaf pfccos7; //type: boolean
        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems : public ydk::Entity
{
    public:
        DppItems();
        ~DppItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setqosgroup; //type: uint16

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems : public ydk::Entity
{
    public:
        SetBWItems();
        ~SetBWItems();

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

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems : public ydk::Entity
{
    public:
        SetRemBWItems();
        ~SetRemBWItems();

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

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems : public ydk::Entity
{
    public:
        ShapeItems();
        ~ShapeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint64
        ydk::YLeaf minrateunit; //type: IpqosRateUnit
        ydk::YLeaf max; //type: uint64
        ydk::YLeaf maxrateunit; //type: IpqosRateUnit
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems : public ydk::Entity
{
    public:
        PoliceItems();
        ~PoliceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cirrate; //type: uint64
        ydk::YLeaf cirunit; //type: IpqosRateUnit
        ydk::YLeaf bcrate; //type: uint64
        ydk::YLeaf bcunit; //type: IpqosBurstRateUnit
        ydk::YLeaf pirrate; //type: uint64
        ydk::YLeaf pirunit; //type: IpqosRateUnit
        ydk::YLeaf berate; //type: uint64
        ydk::YLeaf beunit; //type: IpqosBurstRateUnit
        ydk::YLeaf conformaction; //type: IpqosPoliceAction
        ydk::YLeaf conformsetcostransmit; //type: uint8
        ydk::YLeaf conformsetdscptransmit; //type: uint8
        ydk::YLeaf conformsetprectransmit; //type: IpqosPrec
        ydk::YLeaf conformsetqosgrptransmit; //type: uint16
        ydk::YLeaf exceedaction; //type: IpqosPoliceAction
        ydk::YLeaf exceedsetcostransmit; //type: uint8
        ydk::YLeaf exceedsetdscptransmit; //type: uint8
        ydk::YLeaf exceedsetprectransmit; //type: IpqosPrec
        ydk::YLeaf exceedsetqosgrptransmit; //type: uint16
        ydk::YLeaf violateaction; //type: IpqosPoliceAction
        ydk::YLeaf violatesetcostransmit; //type: uint8
        ydk::YLeaf violatesetdscptransmit; //type: uint8
        ydk::YLeaf violatesetprectransmit; //type: IpqosPrec
        ydk::YLeaf violatesetqosgrptransmit; //type: uint16
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems : public ydk::Entity
{
    public:
        PrioItems();
        ~PrioItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems : public ydk::Entity
{
    public:
        RandDetItems();
        ~RandDetItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minthreshold; //type: uint32
        ydk::YLeaf minthresholdunit; //type: IpqosThreshUnit
        ydk::YLeaf maxthreshold; //type: uint32
        ydk::YLeaf maxthresholdunit; //type: IpqosThreshUnit
        ydk::YLeaf dropavail; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf capaverage; //type: boolean
        ydk::YLeaf optimization; //type: uint8
        ydk::YLeaf ecn; //type: boolean

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems : public ydk::Entity
{
    public:
        RandDetNonEcnItems();
        ~RandDetNonEcnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minthresholdnonecn; //type: uint32
        ydk::YLeaf minthresholdunitnonecn; //type: IpqosThreshUnit
        ydk::YLeaf maxthresholdnonecn; //type: uint32
        ydk::YLeaf maxthresholdunitnonecn; //type: IpqosThreshUnit
        ydk::YLeaf dropavailnonecn; //type: uint8

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems : public ydk::Entity
{
    public:
        DescriptionItems();
        ~DescriptionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: string

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems : public ydk::Entity
{
    public:
        RtipqosPolicyInstToPMapItems();
        ~RtipqosPolicyInstToPMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtIpqosPolicyInstToPMapList; //type: System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList

        ydk::YList rtipqospolicyinsttopmap_list;
        
}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList : public ydk::Entity
{
    public:
        RtIpqosPolicyInstToPMapList();
        ~RtIpqosPolicyInstToPMapList();

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

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList


class System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems : public ydk::Entity
{
    public:
        RtclassMapToPolicyMapItems();
        ~RtclassMapToPolicyMapItems();

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

}; // System::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems


class System::IpqosItems::DfltItems::CopyPMapItems : public ydk::Entity
{
    public:
        CopyPMapItems();
        ~CopyPMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf lastfrom; //type: string
        ydk::YLeaf lastto; //type: string

}; // System::IpqosItems::DfltItems::CopyPMapItems


class System::MonitorItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class DbItems; //type: System::MonitorItems::DbItems
        class SessionItems; //type: System::MonitorItems::SessionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MonitorItems::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MonitorItems::SessionItems> session_items;
        
}; // System::MonitorItems


class System::MonitorItems::DbItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class DbList; //type: System::MonitorItems::DbItems::DbList

        ydk::YList db_list;
        
}; // System::MonitorItems::DbItems


class System::MonitorItems::DbItems::DbList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: MonitorDbT
        ydk::YLeaf name; //type: string
        class EprItems; //type: System::MonitorItems::DbItems::DbList::EprItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MonitorItems::DbItems::DbList::EprItems> epr_items;
        
}; // System::MonitorItems::DbItems::DbList


class System::MonitorItems::DbItems::DbList::EprItems : public ydk::Entity
{
    public:
        EprItems();
        ~EprItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpRecList; //type: System::MonitorItems::DbItems::DbList::EprItems::EpRecList

        ydk::YList eprec_list;
        
}; // System::MonitorItems::DbItems::DbList::EprItems


class System::MonitorItems::DbItems::DbList::EprItems::EpRecList : public ydk::Entity
{
    public:
        EpRecList();
        ~EpRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vnid; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf name; //type: string

}; // System::MonitorItems::DbItems::DbList::EprItems::EpRecList


class System::MonitorItems::SessionItems : public ydk::Entity
{
    public:
        SessionItems();
        ~SessionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SessionList; //type: System::MonitorItems::SessionItems::SessionList

        ydk::YList session_list;
        
}; // System::MonitorItems::SessionItems


class System::MonitorItems::SessionItems::SessionList : public ydk::Entity
{
    public:
        SessionList();
        ~SessionList();

        bool has_data() const override;
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
        ydk::YLeaf id; //type: uint8
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: MonitorOperSt
        ydk::YLeaf descr; //type: string
        class SrcItems; //type: System::MonitorItems::SessionItems::SessionList::SrcItems
        class ErdstItems; //type: System::MonitorItems::SessionItems::SessionList::ErdstItems
        class LdstItems; //type: System::MonitorItems::SessionItems::SessionList::LdstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MonitorItems::SessionItems::SessionList::SrcItems> src_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MonitorItems::SessionItems::SessionList::ErdstItems> erdst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MonitorItems::SessionItems::SessionList::LdstItems> ldst_items;
        
}; // System::MonitorItems::SessionItems::SessionList


class System::MonitorItems::SessionItems::SessionList::SrcItems : public ydk::Entity
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

        class SourceList; //type: System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList

        ydk::YList source_list;
        
}; // System::MonitorItems::SessionItems::SessionList::SrcItems


class System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList : public ydk::Entity
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

        ydk::YLeaf type; //type: MonitorSrcT
        ydk::YLeaf mode; //type: MonitorMode
        ydk::YLeaf dir; //type: MonitorDirection
        ydk::YLeaf from; //type: string
        ydk::YLeaf to; //type: string
        ydk::YLeaf port; //type: string
        ydk::YLeaf id; //type: uint16
        ydk::YLeaf operst; //type: MonitorOperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::MonitorItems::SessionItems::SessionList::SrcItems::SourceList


class System::MonitorItems::SessionItems::SessionList::ErdstItems : public ydk::Entity
{
    public:
        ErdstItems();
        ~ErdstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: MonitorDestEncapT
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf ver; //type: MonitorErSpanVer
        ydk::YLeaf flowid; //type: uint16
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf vnid; //type: string
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf operst; //type: MonitorOperSt

}; // System::MonitorItems::SessionItems::SessionList::ErdstItems


class System::MonitorItems::SessionItems::SessionList::LdstItems : public ydk::Entity
{
    public:
        LdstItems();
        ~LdstItems();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf operst; //type: MonitorOperSt

}; // System::MonitorItems::SessionItems::SessionList::LdstItems


class System::FlowItems : public ydk::Entity
{
    public:
        FlowItems();
        ~FlowItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FrItems; //type: System::FlowItems::FrItems
        class FeItems; //type: System::FlowItems::FeItems
        class FmItems; //type: System::FlowItems::FmItems
        class SItems; //type: System::FlowItems::SItems
        class CmapItems; //type: System::FlowItems::CmapItems
        class PmapItems; //type: System::FlowItems::PmapItems
        class HpItems; //type: System::FlowItems::HpItems
        class FitItems; //type: System::FlowItems::FitItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FrItems> fr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FeItems> fe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FmItems> fm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::SItems> s_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::HpItems> hp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FitItems> fit_items;
        
}; // System::FlowItems


class System::FlowItems::FrItems : public ydk::Entity
{
    public:
        FrItems();
        ~FrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RecordList; //type: System::FlowItems::FrItems::RecordList

        ydk::YList record_list;
        
}; // System::FlowItems::FrItems


class System::FlowItems::FrItems::RecordList : public ydk::Entity
{
    public:
        RecordList();
        ~RecordList();

        bool has_data() const override;
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf matchparams; //type: string
        ydk::YLeaf collectparams; //type: string

}; // System::FlowItems::FrItems::RecordList


class System::FlowItems::FeItems : public ydk::Entity
{
    public:
        FeItems();
        ~FeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExporterList; //type: System::FlowItems::FeItems::ExporterList

        ydk::YList exporter_list;
        
}; // System::FlowItems::FeItems


class System::FlowItems::FeItems::ExporterList : public ydk::Entity
{
    public:
        ExporterList();
        ~ExporterList();

        bool has_data() const override;
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf destinationip; //type: string
        ydk::YLeaf destinationport; //type: uint32
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf sourceinterface; //type: string
        ydk::YLeaf version; //type: FlowExportVersion

}; // System::FlowItems::FeItems::ExporterList


class System::FlowItems::FmItems : public ydk::Entity
{
    public:
        FmItems();
        ~FmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MonitorList; //type: System::FlowItems::FmItems::MonitorList

        ydk::YList monitor_list;
        
}; // System::FlowItems::FmItems


class System::FlowItems::FmItems::MonitorList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf description; //type: string
        class FebItems; //type: System::FlowItems::FmItems::MonitorList::FebItems
        class RsrecordItems; //type: System::FlowItems::FmItems::MonitorList::RsrecordItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FmItems::MonitorList::FebItems> feb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FmItems::MonitorList::RsrecordItems> rsrecord_items;
        
}; // System::FlowItems::FmItems::MonitorList


class System::FlowItems::FmItems::MonitorList::FebItems : public ydk::Entity
{
    public:
        FebItems();
        ~FebItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExporterBucketList; //type: System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList

        ydk::YList exporterbucket_list;
        
}; // System::FlowItems::FmItems::MonitorList::FebItems


class System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList : public ydk::Entity
{
    public:
        ExporterBucketList();
        ~ExporterBucketList();

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
        ydk::YLeaf description; //type: string
        ydk::YLeaf hashlo; //type: uint32
        ydk::YLeaf hashhi; //type: uint32
        class Rsexporter1Items; //type: System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items
        class Rsexporter2Items; //type: System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items> rsexporter1_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items> rsexporter2_items;
        
}; // System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList


class System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items : public ydk::Entity
{
    public:
        Rsexporter1Items();
        ~Rsexporter1Items();

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

}; // System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter1Items


class System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items : public ydk::Entity
{
    public:
        Rsexporter2Items();
        ~Rsexporter2Items();

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

}; // System::FlowItems::FmItems::MonitorList::FebItems::ExporterBucketList::Rsexporter2Items


class System::FlowItems::FmItems::MonitorList::RsrecordItems : public ydk::Entity
{
    public:
        RsrecordItems();
        ~RsrecordItems();

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

}; // System::FlowItems::FmItems::MonitorList::RsrecordItems


class System::FlowItems::SItems : public ydk::Entity
{
    public:
        SItems();
        ~SItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SamplerList; //type: System::FlowItems::SItems::SamplerList

        ydk::YList sampler_list;
        
}; // System::FlowItems::SItems


class System::FlowItems::SItems::SamplerList : public ydk::Entity
{
    public:
        SamplerList();
        ~SamplerList();

        bool has_data() const override;
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf mode; //type: FlowSamplerMode
        ydk::YLeaf param1; //type: uint32
        ydk::YLeaf param2; //type: uint32

}; // System::FlowItems::SItems::SamplerList


class System::FlowItems::CmapItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ClassMapList; //type: System::FlowItems::CmapItems::ClassMapList

        ydk::YList classmap_list;
        
}; // System::FlowItems::CmapItems


class System::FlowItems::CmapItems::ClassMapList : public ydk::Entity
{
    public:
        ClassMapList();
        ~ClassMapList();

        bool has_data() const override;
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
        class AclItems; //type: System::FlowItems::CmapItems::ClassMapList::AclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::CmapItems::ClassMapList::AclItems> acl_items;
        
}; // System::FlowItems::CmapItems::ClassMapList


class System::FlowItems::CmapItems::ClassMapList::AclItems : public ydk::Entity
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

        class MatchAclList; //type: System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList

        ydk::YList matchacl_list;
        
}; // System::FlowItems::CmapItems::ClassMapList::AclItems


class System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList : public ydk::Entity
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

}; // System::FlowItems::CmapItems::ClassMapList::AclItems::MatchAclList


class System::FlowItems::PmapItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PolicyMapList; //type: System::FlowItems::PmapItems::PolicyMapList

        ydk::YList policymap_list;
        
}; // System::FlowItems::PmapItems


class System::FlowItems::PmapItems::PolicyMapList : public ydk::Entity
{
    public:
        PolicyMapList();
        ~PolicyMapList();

        bool has_data() const override;
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
        class CmapItems; //type: System::FlowItems::PmapItems::PolicyMapList::CmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::PmapItems::PolicyMapList::CmapItems> cmap_items;
        
}; // System::FlowItems::PmapItems::PolicyMapList


class System::FlowItems::PmapItems::PolicyMapList::CmapItems : public ydk::Entity
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

        class MatchClassMapList; //type: System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList

        ydk::YList matchclassmap_list;
        
}; // System::FlowItems::PmapItems::PolicyMapList::CmapItems


class System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList : public ydk::Entity
{
    public:
        MatchClassMapList();
        ~MatchClassMapList();

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
        class FmItems; //type: System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems> fm_items;
        
}; // System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList


class System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems : public ydk::Entity
{
    public:
        FmItems();
        ~FmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsmonitorItems; //type: System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems> rsmonitor_items;
        
}; // System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems


class System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems : public ydk::Entity
{
    public:
        RsmonitorItems();
        ~RsmonitorItems();

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

}; // System::FlowItems::PmapItems::PolicyMapList::CmapItems::MatchClassMapList::FmItems::RsmonitorItems


class System::FlowItems::HpItems : public ydk::Entity
{
    public:
        HpItems();
        ~HpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class HwProfileList; //type: System::FlowItems::HpItems::HwProfileList

        ydk::YList hwprofile_list;
        
}; // System::FlowItems::HpItems


class System::FlowItems::HpItems::HwProfileList : public ydk::Entity
{
    public:
        HwProfileList();
        ~HwProfileList();

        bool has_data() const override;
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf exportinterval; //type: uint32
        ydk::YLeaf sourceport; //type: uint32
        ydk::YLeaf ippacketidshift; //type: uint8
        ydk::YLeaf burstintervalshift; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        class SngtItems; //type: System::FlowItems::HpItems::HwProfileList::SngtItems
        class PlbItems; //type: System::FlowItems::HpItems::HwProfileList::PlbItems
        class TohlbItems; //type: System::FlowItems::HpItems::HwProfileList::TohlbItems
        class RwsbItems; //type: System::FlowItems::HpItems::HwProfileList::RwsbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::HpItems::HwProfileList::SngtItems> sngt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::HpItems::HwProfileList::PlbItems> plb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::HpItems::HwProfileList::TohlbItems> tohlb_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::HpItems::HwProfileList::RwsbItems> rwsb_items;
        
}; // System::FlowItems::HpItems::HwProfileList


class System::FlowItems::HpItems::HwProfileList::SngtItems : public ydk::Entity
{
    public:
        SngtItems();
        ~SngtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32

}; // System::FlowItems::HpItems::HwProfileList::SngtItems


class System::FlowItems::HpItems::HwProfileList::PlbItems : public ydk::Entity
{
    public:
        PlbItems();
        ~PlbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PayloadLenBinList; //type: System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList

        ydk::YList payloadlenbin_list;
        
}; // System::FlowItems::HpItems::HwProfileList::PlbItems


class System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList : public ydk::Entity
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32

}; // System::FlowItems::HpItems::HwProfileList::PlbItems::PayloadLenBinList


class System::FlowItems::HpItems::HwProfileList::TohlbItems : public ydk::Entity
{
    public:
        TohlbItems();
        ~TohlbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TCPOptHdrLenBinList; //type: System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList

        ydk::YList tcpopthdrlenbin_list;
        
}; // System::FlowItems::HpItems::HwProfileList::TohlbItems


class System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList : public ydk::Entity
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32

}; // System::FlowItems::HpItems::HwProfileList::TohlbItems::TCPOptHdrLenBinList


class System::FlowItems::HpItems::HwProfileList::RwsbItems : public ydk::Entity
{
    public:
        RwsbItems();
        ~RwsbItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ReceiveWindowSizeBinList; //type: System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList

        ydk::YList receivewindowsizebin_list;
        
}; // System::FlowItems::HpItems::HwProfileList::RwsbItems


class System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList : public ydk::Entity
{
    public:
        ReceiveWindowSizeBinList();
        ~ReceiveWindowSizeBinList();

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
        ydk::YLeaf description; //type: string
        ydk::YLeaf lo; //type: uint32
        ydk::YLeaf hi; //type: uint32

}; // System::FlowItems::HpItems::HwProfileList::RwsbItems::ReceiveWindowSizeBinList


class System::FlowItems::FitItems : public ydk::Entity
{
    public:
        FitItems();
        ~FitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FwdInstTargetList; //type: System::FlowItems::FitItems::FwdInstTargetList

        ydk::YList fwdinsttarget_list;
        
}; // System::FlowItems::FitItems


class System::FlowItems::FitItems::FwdInstTargetList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf slot; //type: uint8
        ydk::YLeaf asic; //type: uint8
        ydk::YLeaf slice; //type: uint8
        ydk::YLeaf exporterid; //type: uint32
        class SpItems; //type: System::FlowItems::FitItems::FwdInstTargetList::SpItems
        class RshwProfileItems; //type: System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FitItems::FwdInstTargetList::SpItems> sp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems> rshwprofile_items;
        
}; // System::FlowItems::FitItems::FwdInstTargetList


class System::FlowItems::FitItems::FwdInstTargetList::SpItems : public ydk::Entity
{
    public:
        SpItems();
        ~SpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicyList; //type: System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList

        ydk::YList servicepolicy_list;
        
}; // System::FlowItems::FitItems::FwdInstTargetList::SpItems


class System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList : public ydk::Entity
{
    public:
        ServicePolicyList();
        ~ServicePolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: FlowDirection
        class RspmapItems; //type: System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems> rspmap_items;
        
}; // System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList


class System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems : public ydk::Entity
{
    public:
        RspmapItems();
        ~RspmapItems();

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

}; // System::FlowItems::FitItems::FwdInstTargetList::SpItems::ServicePolicyList::RspmapItems


class System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems : public ydk::Entity
{
    public:
        RshwProfileItems();
        ~RshwProfileItems();

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

}; // System::FlowItems::FitItems::FwdInstTargetList::RshwProfileItems


class System::NgoamItems : public ydk::Entity
{
    public:
        NgoamItems();
        ~NgoamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class XconItems; //type: System::NgoamItems::XconItems
        class ProfileItems; //type: System::NgoamItems::ProfileItems
        class InstallaclItems; //type: System::NgoamItems::InstallaclItems
        class AuthenticationItems; //type: System::NgoamItems::AuthenticationItems
        class CcItems; //type: System::NgoamItems::CcItems
        class XconnectItems; //type: System::NgoamItems::XconnectItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::XconItems> xcon_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::ProfileItems> profile_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::InstallaclItems> installacl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::AuthenticationItems> authentication_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::CcItems> cc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::XconnectItems> xconnect_items;
        
}; // System::NgoamItems


class System::NgoamItems::XconItems : public ydk::Entity
{
    public:
        XconItems();
        ~XconItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BdItems; //type: System::NgoamItems::XconItems::BdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::XconItems::BdItems> bd_items;
        
}; // System::NgoamItems::XconItems


class System::NgoamItems::XconItems::BdItems : public ydk::Entity
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

        class XConnectList; //type: System::NgoamItems::XconItems::BdItems::XConnectList

        ydk::YList xconnect_list;
        
}; // System::NgoamItems::XconItems::BdItems


class System::NgoamItems::XconItems::BdItems::XConnectList : public ydk::Entity
{
    public:
        XConnectList();
        ~XConnectList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf swbd; //type: uint16
        ydk::YLeaf xcstate; //type: NgoamXcState
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf localport; //type: string
        ydk::YLeaf localportstate; //type: NgoamXcPortState
        ydk::YLeaf localvpcport; //type: string
        ydk::YLeaf localvpcportstate; //type: NgoamXcPortState
        ydk::YLeaf remoteport; //type: string
        ydk::YLeaf remoteportstate; //type: NgoamXcPortState
        ydk::YLeaf remotevpcport; //type: string
        ydk::YLeaf remotevpcportstate; //type: NgoamXcPortState
        ydk::YLeaf lastchgts; //type: string

}; // System::NgoamItems::XconItems::BdItems::XConnectList


class System::NgoamItems::ProfileItems : public ydk::Entity
{
    public:
        ProfileItems();
        ~ProfileItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ProfileList; //type: System::NgoamItems::ProfileItems::ProfileList

        ydk::YList profile_list;
        
}; // System::NgoamItems::ProfileItems


class System::NgoamItems::ProfileItems::ProfileList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf profid; //type: uint16
        ydk::YLeaf desc; //type: string
        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf dot1qif; //type: string
        ydk::YLeaf hop; //type: uint8
        ydk::YLeaf interface; //type: string
        ydk::YLeaf oamchannel; //type: NgoamOamChannel
        ydk::YLeaf payloadpad; //type: uint16
        ydk::YLeaf srcport; //type: string
        class FlowfwdItems; //type: System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems> flowfwd_items;
        
}; // System::NgoamItems::ProfileItems::ProfileList


class System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems : public ydk::Entity
{
    public:
        FlowfwdItems();
        ~FlowfwdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forward; //type: boolean
        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf ipdest; //type: string
        ydk::YLeaf ipsrc; //type: string
        ydk::YLeaf ipv6dest; //type: string
        ydk::YLeaf ipv6src; //type: string
        ydk::YLeaf macdest; //type: string
        ydk::YLeaf macsrc; //type: string
        ydk::YLeaf portdest; //type: uint16
        ydk::YLeaf portsrc; //type: uint16
        ydk::YLeaf protocol; //type: uint16
        ydk::YLeaf packet; //type: string

}; // System::NgoamItems::ProfileItems::ProfileList::FlowfwdItems


class System::NgoamItems::InstallaclItems : public ydk::Entity
{
    public:
        InstallaclItems();
        ~InstallaclItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf enabled; //type: boolean

}; // System::NgoamItems::InstallaclItems


class System::NgoamItems::AuthenticationItems : public ydk::Entity
{
    public:
        AuthenticationItems();
        ~AuthenticationItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf key; //type: string

}; // System::NgoamItems::AuthenticationItems


class System::NgoamItems::CcItems : public ydk::Entity
{
    public:
        CcItems();
        ~CcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConnectCheckList; //type: System::NgoamItems::CcItems::ConnectCheckList

        ydk::YList connectcheck_list;
        
}; // System::NgoamItems::CcItems


class System::NgoamItems::CcItems::ConnectCheckList : public ydk::Entity
{
    public:
        ConnectCheckList();
        ~ConnectCheckList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ccid; //type: uint16
        ydk::YLeaf profileid; //type: uint16
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf dstipv6; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf dstunknown; //type: boolean
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf srcipv6; //type: string
        ydk::YLeaf dot1q; //type: uint16
        ydk::YLeaf srcport; //type: string
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf timeout; //type: uint8
        ydk::YLeaf interval; //type: uint8
        ydk::YLeaf datapattern; //type: uint16
        ydk::YLeaf packetsz; //type: uint16
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf vni; //type: uint32
        ydk::YLeaf egressif; //type: string
        ydk::YLeaf macsrcif; //type: string
        ydk::YLeaf verifyhost; //type: boolean
        ydk::YLeaf payload_dot1q; //type: uint16
        ydk::YLeaf payload_srcip; //type: string
        ydk::YLeaf payload_srcipv6; //type: string
        ydk::YLeaf payload_srcmac; //type: string
        ydk::YLeaf payload_dstip; //type: string
        ydk::YLeaf payload_dstipv6; //type: string
        ydk::YLeaf payload_dstmac; //type: string
        ydk::YLeaf payload_srcport; //type: uint16
        ydk::YLeaf payload_dstport; //type: uint16
        ydk::YLeaf payload_protocol; //type: uint16
        ydk::YLeaf payload_srcif; //type: string
        class PingnversltItems; //type: System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems> pingnverslt_items;
        
}; // System::NgoamItems::CcItems::ConnectCheckList


class System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems : public ydk::Entity
{
    public:
        PingnversltItems();
        ~PingnversltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PingNveRsltList; //type: System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList

        ydk::YList pingnverslt_list;
        
}; // System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems


class System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList : public ydk::Entity
{
    public:
        PingNveRsltList();
        ~PingNveRsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sessionid; //type: uint16
        ydk::YLeaf descr; //type: string
        ydk::YLeaf startts; //type: string
        ydk::YLeaf type; //type: ActionType
        ydk::YLeaf rsz; //type: uint16
        ydk::YLeaf rtm; //type: string
        ydk::YLeaf peerclassid; //type: string
        ydk::YLeaf qual; //type: string
        ydk::YLeaf ack; //type: boolean
        ydk::YLeaf endts; //type: string
        ydk::YLeaf operst; //type: ActionOperSt
        ydk::YLeaf replyip; //type: string
        ydk::YLeaf replyipv6; //type: string
        ydk::YLeaf nodename; //type: string
        ydk::YLeaf errorcode; //type: string
        ydk::YLeaf failreason; //type: string
        ydk::YLeaf sport; //type: uint16
        ydk::YLeaf packetsz; //type: uint16
        ydk::YLeaf sentpkts; //type: uint32
        ydk::YLeaf notsentpkts; //type: uint32
        ydk::YLeaf rcvdpkts; //type: uint32
        ydk::YLeaf minrtt; //type: uint32
        ydk::YLeaf avgrtt; //type: uint32
        ydk::YLeaf maxrtt; //type: uint32
        ydk::YLeaf totalrtt; //type: uint32

}; // System::NgoamItems::CcItems::ConnectCheckList::PingnversltItems::PingNveRsltList


class System::NgoamItems::XconnectItems : public ydk::Entity
{
    public:
        XconnectItems();
        ~XconnectItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf hbinterval; //type: uint32

}; // System::NgoamItems::XconnectItems


class System::NxapiItems : public ydk::Entity
{
    public:
        NxapiItems();
        ~NxapiItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf httpport; //type: int32
        ydk::YLeaf httpsport; //type: int32
        ydk::YLeaf usevrf; //type: string
        ydk::YLeaf certfile; //type: string
        ydk::YLeaf keyfile; //type: string
        ydk::YLeaf certenable; //type: boolean
        ydk::YLeaf sslciphersweak; //type: boolean
        ydk::YLeaf sslprotocols; //type: string

}; // System::NxapiItems


class System::PoeItems : public ydk::Entity
{
    public:
        PoeItems();
        ~PoeItems();

        bool has_data() const override;
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
        class InstItems; //type: System::PoeItems::InstItems
        class PhysifItems; //type: System::PoeItems::PhysifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PoeItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PoeItems::PhysifItems> physif_items;
        
}; // System::PoeItems


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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string

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
        ydk::YLeaf admin; //type: NwAdminSt_
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

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::CompressionItems> compression_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::SourceinterfaceItems> sourceinterface_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::DestprofItems::RetryItems> retry_items;
        
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


}
}

#endif /* _CISCO_NX_OS_DEVICE_27_ */

