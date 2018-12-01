#ifndef _CISCO_NX_OS_DEVICE_30_
#define _CISCO_NX_OS_DEVICE_30_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_28.hpp"
#include "Cisco_NX_OS_device_29.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList : public ydk::Entity
{
    public:
        RsClassMapToPolicyMapList();
        ~RsClassMapToPolicyMapList();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems : public ydk::Entity
{
    public:
        PItems();
        ~PItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems> name_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems : public ydk::Entity
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

        class PMapInstList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList

        ydk::YList pmapinst_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf matchtype; //type: IpqosQoSMatchType
        ydk::YLeaf refcount; //type: uint32
        ydk::YLeaf configstatus; //type: uint32
        class CmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems
        class DescriptionItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems
        class RtipqosPolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems
        class RtclassMapToPolicyMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems> description_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems> rtipqospolicyinsttopmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems> rtclassmaptopolicymap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems : public ydk::Entity
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

        class MatchCMapList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList

        ydk::YList matchcmap_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList : public ydk::Entity
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
        class SetCosItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems
        class MtuItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems
        class SetPrecedenceItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems
        class SetDscpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems
        class SetGrpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems
        class SetDlbDisableItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems
        class QueueLimitItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems
        class PauseItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems
        class DppItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems
        class SetBWItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems
        class SetRemBWItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems
        class ShapeItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems
        class PoliceItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems
        class PrioItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems
        class RandDetItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems
        class RandDetNonEcnItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems> setcos_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems> mtu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems> setprecedence_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems> setdscp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems> setgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems> setdlbdisable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems> queuelimit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems> pause_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems> dpp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems> setbw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems> setrembw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems> shape_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems> police_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems> prio_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems> randdet_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems> randdetnonecn_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::DescriptionItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems : public ydk::Entity
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

        class RtIpqosPolicyInstToPMapList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList

        ydk::YList rtipqospolicyinsttopmap_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems : public ydk::Entity
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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems : public ydk::Entity
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

        ydk::YLeaf lastfrom; //type: string
        ydk::YLeaf lastto; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems::CopyPMapItems


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
        ydk::YLeaf xconnect; //type: L2XConnect
        ydk::YLeaf fwdmode; //type: string
        ydk::YLeaf bridgemode; //type: L2BridgeMode
        ydk::YLeaf fwdctrl; //type: string
        ydk::YLeaf bddefdn; //type: string
        ydk::YLeaf controllerid; //type: string
        ydk::YLeaf bdstate; //type: L2DomAdminSt
        ydk::YLeaf bdopername; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf hwid; //type: uint32
        ydk::YLeaf mode; //type: L2DomMode
        ydk::YLeaf adminst; //type: L2DomAdminSt
        ydk::YLeaf operst; //type: L2DomOperSt
        ydk::YLeaf createts; //type: string
        ydk::YLeaf ctrl; //type: string
        class MemberItems; //type: System::BdItems::BdItems_::BDList::MemberItems
        class FmgrpItems; //type: System::BdItems::BdItems_::BDList::FmgrpItems
        class DbItems; //type: System::BdItems::BdItems_::BDList::DbItems
        class VlanItems; //type: System::BdItems::BdItems_::BDList::VlanItems
        class VxlanItems; //type: System::BdItems::BdItems_::BDList::VxlanItems
        class RsextBDItems; //type: System::BdItems::BdItems_::BDList::RsextBDItems
        class RsbdVsanMapItems; //type: System::BdItems::BdItems_::BDList::RsbdVsanMapItems
        class RtfvDomIfConnItems; //type: System::BdItems::BdItems_::BDList::RtfvDomIfConnItems
        class DbgVlanStatsItems; //type: System::BdItems::BdItems_::BDList::DbgVlanStatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::MemberItems> member_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::FmgrpItems> fmgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems> vxlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::RsextBDItems> rsextbd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::RsbdVsanMapItems> rsbdvsanmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::RtfvDomIfConnItems> rtfvdomifconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::DbgVlanStatsItems> dbgvlanstats_items;
        
}; // System::BdItems::BdItems_::BDList


class System::BdItems::BdItems_::BDList::MemberItems : public ydk::Entity
{
    public:
        MemberItems();
        ~MemberItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanMemberIfList; //type: System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList

        ydk::YList vlanmemberif_list;
        
}; // System::BdItems::BdItems_::BDList::MemberItems


class System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList : public ydk::Entity
{
    public:
        VlanMemberIfList();
        ~VlanMemberIfList();

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
        ydk::YLeaf vlan; //type: uint32

}; // System::BdItems::BdItems_::BDList::MemberItems::VlanMemberIfList


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
        ydk::YLeaf name; //type: string
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
        ydk::YLeaf name; //type: string
        class RtfvEpDefRefToL2MacEpItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems> rtfvepdefreftol2macep_items;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems : public ydk::Entity
{
    public:
        RtfvEpDefRefToL2MacEpItems();
        ~RtfvEpDefRefToL2MacEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvEpDefRefToL2MacEpList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList

        ydk::YList rtfvepdefreftol2macep_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList : public ydk::Entity
{
    public:
        RtFvEpDefRefToL2MacEpList();
        ~RtFvEpDefRefToL2MacEpList();

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

}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems : public ydk::Entity
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

        class DbList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList : public ydk::Entity
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
        class IpItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems
        class MacItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems> mac_items;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems : public ydk::Entity
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

        class IpEpList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList

        ydk::YList ipep_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList : public ydk::Entity
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
        class RtIpEpRslttoIpEpAttItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems
        class RtMacEpRslttoIpEpAttItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems> rtipeprslttoipepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems> rtmaceprslttoipepatt_items;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems : public ydk::Entity
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

}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems : public ydk::Entity
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

}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems : public ydk::Entity
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

        class MacEpList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList : public ydk::Entity
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
        class RsmacEpToIpEpAttItems; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems> rsmaceptoipepatt_items;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems : public ydk::Entity
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

        class RsMacEpToIpEpAttList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList

        ydk::YList rsmaceptoipepatt_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList : public ydk::Entity
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

}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems : public ydk::Entity
{
    public:
        RtspanSpanSrcToL2CktEpAttItems();
        ~RtspanSpanSrcToL2CktEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtSpanSpanSrcToL2CktEpAttList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList

        ydk::YList rtspanspansrctol2cktepatt_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList : public ydk::Entity
{
    public:
        RtSpanSpanSrcToL2CktEpAttList();
        ~RtSpanSpanSrcToL2CktEpAttList();

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

}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems : public ydk::Entity
{
    public:
        RtfvDomIfConnItems();
        ~RtfvDomIfConnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvDomIfConnList; //type: System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList

        ydk::YList rtfvdomifconn_list;
        
}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList : public ydk::Entity
{
    public:
        RtFvDomIfConnList();
        ~RtFvDomIfConnList();

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

}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList


class System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems : public ydk::Entity
{
    public:
        RsvlanEppAttItems();
        ~RsvlanEppAttItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::BdItems::BdItems_::BDList::VlanItems::CktEpList::RsvlanEppAttItems


class System::BdItems::BdItems_::BDList::VxlanItems : public ydk::Entity
{
    public:
        VxlanItems();
        ~VxlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CktEpList; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList

        ydk::YList cktep_list;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList : public ydk::Entity
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
        ydk::YLeaf mcastencap; //type: string
        ydk::YLeaf name; //type: string
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
        class DbItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems
        class RtspanSpanSrcToL2CktEpAttItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems
        class RtfvDomIfConnItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems
        class RsvxlanEppAttItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems> rtspanspansrctol2cktepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems> rtfvdomifconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems> rsvxlaneppatt_items;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems : public ydk::Entity
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

        class DbList; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList : public ydk::Entity
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
        class IpItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems
        class MacItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems> mac_items;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems : public ydk::Entity
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

        class IpEpList; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList

        ydk::YList ipep_list;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList : public ydk::Entity
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
        class RtIpEpRslttoIpEpAttItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems
        class RtMacEpRslttoIpEpAttItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems> rtipeprslttoipepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems> rtmaceprslttoipepatt_items;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems : public ydk::Entity
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

}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems : public ydk::Entity
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

}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems : public ydk::Entity
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

        class MacEpList; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList : public ydk::Entity
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
        class RsmacEpToIpEpAttItems; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems> rsmaceptoipepatt_items;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems : public ydk::Entity
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

        class RsMacEpToIpEpAttList; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList

        ydk::YList rsmaceptoipepatt_list;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList : public ydk::Entity
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

}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems : public ydk::Entity
{
    public:
        RtspanSpanSrcToL2CktEpAttItems();
        ~RtspanSpanSrcToL2CktEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtSpanSpanSrcToL2CktEpAttList; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList

        ydk::YList rtspanspansrctol2cktepatt_list;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList : public ydk::Entity
{
    public:
        RtSpanSpanSrcToL2CktEpAttList();
        ~RtSpanSpanSrcToL2CktEpAttList();

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

}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems : public ydk::Entity
{
    public:
        RtfvDomIfConnItems();
        ~RtfvDomIfConnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvDomIfConnList; //type: System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList

        ydk::YList rtfvdomifconn_list;
        
}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList : public ydk::Entity
{
    public:
        RtFvDomIfConnList();
        ~RtFvDomIfConnList();

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

}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList


class System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems : public ydk::Entity
{
    public:
        RsvxlanEppAttItems();
        ~RsvxlanEppAttItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::BdItems::BdItems_::BDList::VxlanItems::CktEpList::RsvxlanEppAttItems


class System::BdItems::BdItems_::BDList::RsextBDItems : public ydk::Entity
{
    public:
        RsextBDItems();
        ~RsextBDItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsExtBDList; //type: System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList

        ydk::YList rsextbd_list;
        
}; // System::BdItems::BdItems_::BDList::RsextBDItems


class System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList : public ydk::Entity
{
    public:
        RsExtBDList();
        ~RsExtBDList();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::BdItems::BdItems_::BDList::RsextBDItems::RsExtBDList


class System::BdItems::BdItems_::BDList::RsbdVsanMapItems : public ydk::Entity
{
    public:
        RsbdVsanMapItems();
        ~RsbdVsanMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsBdVsanMapList; //type: System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList

        ydk::YList rsbdvsanmap_list;
        
}; // System::BdItems::BdItems_::BDList::RsbdVsanMapItems


class System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList : public ydk::Entity
{
    public:
        RsBdVsanMapList();
        ~RsBdVsanMapList();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean
        ydk::YLeaf assocoperst; //type: L2AssocOperSt

}; // System::BdItems::BdItems_::BDList::RsbdVsanMapItems::RsBdVsanMapList


class System::BdItems::BdItems_::BDList::RtfvDomIfConnItems : public ydk::Entity
{
    public:
        RtfvDomIfConnItems();
        ~RtfvDomIfConnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvDomIfConnList; //type: System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList

        ydk::YList rtfvdomifconn_list;
        
}; // System::BdItems::BdItems_::BDList::RtfvDomIfConnItems


class System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList : public ydk::Entity
{
    public:
        RtFvDomIfConnList();
        ~RtFvDomIfConnList();

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

}; // System::BdItems::BdItems_::BDList::RtfvDomIfConnItems::RtFvDomIfConnList


class System::BdItems::BdItems_::BDList::DbgVlanStatsItems : public ydk::Entity
{
    public:
        DbgVlanStatsItems();
        ~DbgVlanStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inucastoctets; //type: uint64
        ydk::YLeaf inucastpkts; //type: uint64
        ydk::YLeaf inmcastoctets; //type: uint64
        ydk::YLeaf inmcastpkts; //type: uint64
        ydk::YLeaf inbcastoctets; //type: uint64
        ydk::YLeaf inbcastpkts; //type: uint64
        ydk::YLeaf inl3ucastoctets; //type: uint64
        ydk::YLeaf inl3ucastpkts; //type: uint64
        ydk::YLeaf outucastoctets; //type: uint64
        ydk::YLeaf outucastpkts; //type: uint64

}; // System::BdItems::BdItems_::BDList::DbgVlanStatsItems


class System::BdItems::VlanItems : public ydk::Entity
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

        class CktEpList; //type: System::BdItems::VlanItems::CktEpList

        ydk::YList cktep_list;
        
}; // System::BdItems::VlanItems


class System::BdItems::VlanItems::CktEpList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf fabencap; //type: string
        ydk::YLeaf name; //type: string
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
        class MacItems; //type: System::BdItems::VlanItems::CktEpList::MacItems
        class DbItems; //type: System::BdItems::VlanItems::CktEpList::DbItems
        class RtspanSpanSrcToL2CktEpAttItems; //type: System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems
        class RtfvDomIfConnItems; //type: System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems
        class RsvlanEppAttItems; //type: System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems> rtspanspansrctol2cktepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems> rtfvdomifconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems> rsvlaneppatt_items;
        
}; // System::BdItems::VlanItems::CktEpList


class System::BdItems::VlanItems::CktEpList::MacItems : public ydk::Entity
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

        class MacEpList; //type: System::BdItems::VlanItems::CktEpList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::BdItems::VlanItems::CktEpList::MacItems


class System::BdItems::VlanItems::CktEpList::MacItems::MacEpList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        class RtfvEpDefRefToL2MacEpItems; //type: System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems> rtfvepdefreftol2macep_items;
        
}; // System::BdItems::VlanItems::CktEpList::MacItems::MacEpList


class System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems : public ydk::Entity
{
    public:
        RtfvEpDefRefToL2MacEpItems();
        ~RtfvEpDefRefToL2MacEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvEpDefRefToL2MacEpList; //type: System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList

        ydk::YList rtfvepdefreftol2macep_list;
        
}; // System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems


class System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList : public ydk::Entity
{
    public:
        RtFvEpDefRefToL2MacEpList();
        ~RtFvEpDefRefToL2MacEpList();

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

}; // System::BdItems::VlanItems::CktEpList::MacItems::MacEpList::RtfvEpDefRefToL2MacEpItems::RtFvEpDefRefToL2MacEpList


class System::BdItems::VlanItems::CktEpList::DbItems : public ydk::Entity
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

        class DbList; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::BdItems::VlanItems::CktEpList::DbItems


class System::BdItems::VlanItems::CktEpList::DbItems::DbList : public ydk::Entity
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
        class IpItems; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems
        class MacItems; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems> mac_items;
        
}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList


class System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems : public ydk::Entity
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

        class IpEpList; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList

        ydk::YList ipep_list;
        
}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems


class System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList : public ydk::Entity
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
        class RtIpEpRslttoIpEpAttItems; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems
        class RtMacEpRslttoIpEpAttItems; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems> rtipeprslttoipepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems> rtmaceprslttoipepatt_items;
        
}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList


class System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems : public ydk::Entity
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

}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems


class System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems : public ydk::Entity
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

}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems


class System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems : public ydk::Entity
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

        class MacEpList; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems


class System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList : public ydk::Entity
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
        class RsmacEpToIpEpAttItems; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems> rsmaceptoipepatt_items;
        
}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList


class System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems : public ydk::Entity
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

        class RsMacEpToIpEpAttList; //type: System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList

        ydk::YList rsmaceptoipepatt_list;
        
}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems


class System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList : public ydk::Entity
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

}; // System::BdItems::VlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList


class System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems : public ydk::Entity
{
    public:
        RtspanSpanSrcToL2CktEpAttItems();
        ~RtspanSpanSrcToL2CktEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtSpanSpanSrcToL2CktEpAttList; //type: System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList

        ydk::YList rtspanspansrctol2cktepatt_list;
        
}; // System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems


class System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList : public ydk::Entity
{
    public:
        RtSpanSpanSrcToL2CktEpAttList();
        ~RtSpanSpanSrcToL2CktEpAttList();

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

}; // System::BdItems::VlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList


class System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems : public ydk::Entity
{
    public:
        RtfvDomIfConnItems();
        ~RtfvDomIfConnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvDomIfConnList; //type: System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList

        ydk::YList rtfvdomifconn_list;
        
}; // System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems


class System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList : public ydk::Entity
{
    public:
        RtFvDomIfConnList();
        ~RtFvDomIfConnList();

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

}; // System::BdItems::VlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList


class System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems : public ydk::Entity
{
    public:
        RsvlanEppAttItems();
        ~RsvlanEppAttItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::BdItems::VlanItems::CktEpList::RsvlanEppAttItems


class System::BdItems::VxlanItems : public ydk::Entity
{
    public:
        VxlanItems();
        ~VxlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CktEpList; //type: System::BdItems::VxlanItems::CktEpList

        ydk::YList cktep_list;
        
}; // System::BdItems::VxlanItems


class System::BdItems::VxlanItems::CktEpList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf mcastencap; //type: string
        ydk::YLeaf name; //type: string
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
        class DbItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems
        class RtspanSpanSrcToL2CktEpAttItems; //type: System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems
        class RtfvDomIfConnItems; //type: System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems
        class RsvxlanEppAttItems; //type: System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems> rtspanspansrctol2cktepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems> rtfvdomifconn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems> rsvxlaneppatt_items;
        
}; // System::BdItems::VxlanItems::CktEpList


class System::BdItems::VxlanItems::CktEpList::DbItems : public ydk::Entity
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

        class DbList; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList : public ydk::Entity
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
        class IpItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems
        class MacItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems> mac_items;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems : public ydk::Entity
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

        class IpEpList; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList

        ydk::YList ipep_list;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList : public ydk::Entity
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
        class RtIpEpRslttoIpEpAttItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems
        class RtMacEpRslttoIpEpAttItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems> rtipeprslttoipepatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems> rtmaceprslttoipepatt_items;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems : public ydk::Entity
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

}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtIpEpRslttoIpEpAttItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems : public ydk::Entity
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

}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::IpItems::IpEpList::RtMacEpRslttoIpEpAttItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems : public ydk::Entity
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

        class MacEpList; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList

        ydk::YList macep_list;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList : public ydk::Entity
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
        class RsmacEpToIpEpAttItems; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems> rsmaceptoipepatt_items;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems : public ydk::Entity
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

        class RsMacEpToIpEpAttList; //type: System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList

        ydk::YList rsmaceptoipepatt_list;
        
}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems


class System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList : public ydk::Entity
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

}; // System::BdItems::VxlanItems::CktEpList::DbItems::DbList::MacItems::MacEpList::RsmacEpToIpEpAttItems::RsMacEpToIpEpAttList


class System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems : public ydk::Entity
{
    public:
        RtspanSpanSrcToL2CktEpAttItems();
        ~RtspanSpanSrcToL2CktEpAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtSpanSpanSrcToL2CktEpAttList; //type: System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList

        ydk::YList rtspanspansrctol2cktepatt_list;
        
}; // System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems


class System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList : public ydk::Entity
{
    public:
        RtSpanSpanSrcToL2CktEpAttList();
        ~RtSpanSpanSrcToL2CktEpAttList();

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

}; // System::BdItems::VxlanItems::CktEpList::RtspanSpanSrcToL2CktEpAttItems::RtSpanSpanSrcToL2CktEpAttList


class System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems : public ydk::Entity
{
    public:
        RtfvDomIfConnItems();
        ~RtfvDomIfConnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvDomIfConnList; //type: System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList

        ydk::YList rtfvdomifconn_list;
        
}; // System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems


class System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList : public ydk::Entity
{
    public:
        RtFvDomIfConnList();
        ~RtFvDomIfConnList();

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

}; // System::BdItems::VxlanItems::CktEpList::RtfvDomIfConnItems::RtFvDomIfConnList


class System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems : public ydk::Entity
{
    public:
        RsvxlanEppAttItems();
        ~RsvxlanEppAttItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::BdItems::VxlanItems::CktEpList::RsvxlanEppAttItems


class System::TemplateTableItems : public ydk::Entity
{
    public:
        TemplateTableItems();
        ~TemplateTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TemplateEntryItems; //type: System::TemplateTableItems::TemplateEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TemplateTableItems::TemplateEntryItems> templateentry_items;
        
}; // System::TemplateTableItems


class System::TemplateTableItems::TemplateEntryItems : public ydk::Entity
{
    public:
        TemplateEntryItems();
        ~TemplateEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TemplateEntryList; //type: System::TemplateTableItems::TemplateEntryItems::TemplateEntryList

        ydk::YList templateentry_list;
        
}; // System::TemplateTableItems::TemplateEntryItems


class System::TemplateTableItems::TemplateEntryItems::TemplateEntryList : public ydk::Entity
{
    public:
        TemplateEntryList();
        ~TemplateEntryList();

        bool has_data() const override;
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
        ydk::YLeaf refcount; //type: uint32
        class OpTableItems; //type: System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems> optable_items;
        
}; // System::TemplateTableItems::TemplateEntryItems::TemplateEntryList


class System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems : public ydk::Entity
{
    public:
        OpTableItems();
        ~OpTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf description; //type: string
        class OpEntryItems; //type: System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems> opentry_items;
        
}; // System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems


class System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems : public ydk::Entity
{
    public:
        OpEntryItems();
        ~OpEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpEntryList; //type: System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList

        ydk::YList opentry_list;
        
}; // System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems


class System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList : public ydk::Entity
{
    public:
        OpEntryList();
        ~OpEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operationtype; //type: ConftmplOperationType
        ydk::YLeaf templatetype; //type: ConftmplTemplateType
        ydk::YLeaf substitutestring; //type: string
        ydk::YLeaf configstring; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf refcount; //type: uint32

}; // System::TemplateTableItems::TemplateEntryItems::TemplateEntryList::OpTableItems::OpEntryItems::OpEntryList


class System::FcItems : public ydk::Entity
{
    public:
        FcItems();
        ~FcItems();

        bool has_data() const override;
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
        class VfcItems; //type: System::FcItems::VfcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems> vfc_items;
        
}; // System::FcItems


class System::FcItems::VfcItems : public ydk::Entity
{
    public:
        VfcItems();
        ~VfcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VfcIfList; //type: System::FcItems::VfcItems::VfcIfList

        ydk::YList vfcif_list;
        
}; // System::FcItems::VfcItems


class System::FcItems::VfcItems::VfcIfList : public ydk::Entity
{
    public:
        VfcIfList();
        ~VfcIfList();

        bool has_data() const override;
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
        ydk::YLeaf boundif; //type: string
        ydk::YLeaf boundmac; //type: string
        ydk::YLeaf disablefka; //type: L2Disablefka
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: FcAdminSt
        ydk::YLeaf mode; //type: L2Mode
        ydk::YLeaf trunkmode; //type: L2TrunkMode
        ydk::YLeaf trunkvsans; //type: string
        ydk::YLeaf operportvsan; //type: uint32
        ydk::YLeaf opermode; //type: L2Mode
        ydk::YLeaf operst; //type: string
        ydk::YLeaf operstqual; //type: L1OperStQual_
        ydk::YLeaf opertrunkmode; //type: L2TrunkMode
        ydk::YLeaf trunkportupvsanbmp; //type: string
        ydk::YLeaf trunkisolatedvsanbmp; //type: string
        ydk::YLeaf allowedvsanbmp; //type: string
        ydk::YLeaf portwwn; //type: string
        ydk::YLeaf lastlinkstchg; //type: string
        class RssrvExtIfMapItems; //type: System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems
        class RtVsanIfMapItems; //type: System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems
        class RtvrfMbrItems; //type: System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems> rssrvextifmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems> rtvsanifmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::FcItems::VfcItems::VfcIfList


class System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems : public ydk::Entity
{
    public:
        RssrvExtIfMapItems();
        ~RssrvExtIfMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsSrvExtIfMapList; //type: System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList

        ydk::YList rssrvextifmap_list;
        
}; // System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems


class System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList : public ydk::Entity
{
    public:
        RsSrvExtIfMapList();
        ~RsSrvExtIfMapList();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean
        ydk::YLeaf configstatus; //type: L2TrafficMapCfgSt

}; // System::FcItems::VfcItems::VfcIfList::RssrvExtIfMapItems::RsSrvExtIfMapList


class System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems : public ydk::Entity
{
    public:
        RtVsanIfMapItems();
        ~RtVsanIfMapItems();

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

}; // System::FcItems::VfcItems::VfcIfList::RtVsanIfMapItems


class System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::FcItems::VfcItems::VfcIfList::RtvrfMbrItems


class System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems


class System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::FcItems::VfcItems::VfcIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::FcoeItems : public ydk::Entity
{
    public:
        FcoeItems();
        ~FcoeItems();

        bool has_data() const override;
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
        class InstItems; //type: System::FcoeItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcoeItems::InstItems> inst_items;
        
}; // System::FcoeItems


class System::FcoeItems::InstItems : public ydk::Entity
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

        ydk::YLeaf fipkaintvl; //type: uint32
        ydk::YLeaf enablefex; //type: FcoeAdminSt
        ydk::YLeaf veloopback; //type: FcoeAdminSt
        ydk::YLeaf fcmap; //type: uint32
        ydk::YLeaf fcfprio; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class VfcItems; //type: System::FcoeItems::InstItems::VfcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcoeItems::InstItems::VfcItems> vfc_items;
        
}; // System::FcoeItems::InstItems


class System::FcoeItems::InstItems::VfcItems : public ydk::Entity
{
    public:
        VfcItems();
        ~VfcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VfcIfList; //type: System::FcoeItems::InstItems::VfcItems::VfcIfList

        ydk::YList vfcif_list;
        
}; // System::FcoeItems::InstItems::VfcItems


class System::FcoeItems::InstItems::VfcItems::VfcIfList : public ydk::Entity
{
    public:
        VfcIfList();
        ~VfcIfList();

        bool has_data() const override;
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
        ydk::YLeaf peermac; //type: string
        ydk::YLeaf peerwwn; //type: string
        ydk::YLeaf fipkaintvl; //type: uint32
        ydk::YLeaf fcfprio; //type: uint32
        ydk::YLeaf mode; //type: string
        class FcidItems; //type: System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems> fcid_items;
        
}; // System::FcoeItems::InstItems::VfcItems::VfcIfList


class System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems : public ydk::Entity
{
    public:
        FcidItems();
        ~FcidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VfcLoginList; //type: System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList

        ydk::YList vfclogin_list;
        
}; // System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems


class System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList : public ydk::Entity
{
    public:
        VfcLoginList();
        ~VfcLoginList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fcid; //type: uint32
        ydk::YLeaf wwn; //type: string

}; // System::FcoeItems::InstItems::VfcItems::VfcIfList::FcidItems::VfcLoginList


class System::NpvItems : public ydk::Entity
{
    public:
        NpvItems();
        ~NpvItems();

        bool has_data() const override;
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
        class InstItems; //type: System::NpvItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems> inst_items;
        
}; // System::NpvItems


class System::NpvItems::InstItems : public ydk::Entity
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
        class SrvifItems; //type: System::NpvItems::InstItems::SrvifItems
        class ExtifItems; //type: System::NpvItems::InstItems::ExtifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::SrvifItems> srvif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NpvItems::InstItems::ExtifItems> extif_items;
        
}; // System::NpvItems::InstItems


class System::NpvItems::InstItems::SrvifItems : public ydk::Entity
{
    public:
        SrvifItems();
        ~SrvifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrvIfList; //type: System::NpvItems::InstItems::SrvifItems::SrvIfList

        ydk::YList srvif_list;
        
}; // System::NpvItems::InstItems::SrvifItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_30_ */

