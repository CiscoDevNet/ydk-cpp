#ifndef _CISCO_NX_OS_DEVICE_41_
#define _CISCO_NX_OS_DEVICE_41_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_39.hpp"
#include "Cisco_NX_OS_device_40.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf model; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf adminst; //type: EqptAdSt

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList


class System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems : public ydk::Entity
{
    public:
        SpfanItems();
        ~SpfanItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems
        class SpfanblkItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems
        class SpfansnItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems> spfanblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems> spfansn_items;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf rmafl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems : public ydk::Entity
{
    public:
        SpfanblkItems();
        ~SpfanblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf hwcbits; //type: uint64
        ydk::YLeaf stackmib; //type: uint16
        ydk::YLeaf coolcap; //type: uint16
        ydk::YLeaf ambtemp; //type: uint16
        ydk::YLeaf hppwrcon; //type: uint16
        ydk::YLeaf hpcoolcon; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems : public ydk::Entity
{
    public:
        SpfansnItems();
        ~SpfansnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sernum; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems


class System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems


class System::ChItems::SpbpItems : public ydk::Entity
{
    public:
        SpbpItems();
        ~SpbpItems();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::SpbpItems::SpcmnItems
        class SpbpblkItems; //type: System::ChItems::SpbpItems::SpbpblkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems::SpbpblkItems> spbpblk_items;
        
}; // System::ChItems::SpbpItems


class System::ChItems::SpbpItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf rmafl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::SpbpItems::SpcmnItems


class System::ChItems::SpbpItems::SpbpblkItems : public ydk::Entity
{
    public:
        SpbpblkItems();
        ~SpbpblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf hwcbits; //type: uint64
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf stackmib; //type: uint16
        ydk::YLeaf oemeprise; //type: uint16
        ydk::YLeaf oemmib; //type: uint16
        ydk::YLeaf maxcpwr; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ChItems::SpbpItems::SpbpblkItems


class System::ChItems::BslotItems : public ydk::Entity
{
    public:
        BslotItems();
        ~BslotItems();

        bool has_data() const override;
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
        ydk::YLeaf loc; //type: EqptSlotLoc
        class BoardItems; //type: System::ChItems::BslotItems::BoardItems
        class RtoosSlotItems; //type: System::ChItems::BslotItems::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems> board_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::BslotItems


class System::ChItems::BslotItems::BoardItems : public ydk::Entity
{
    public:
        BoardItems();
        ~BoardItems();

        bool has_data() const override;
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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf mace; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf fwver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf poweractualdraw; //type: uint32
        ydk::YLeaf powerallocated; //type: uint32
        class SensorItems; //type: System::ChItems::BslotItems::BoardItems::SensorItems
        class AsicItems; //type: System::ChItems::BslotItems::BoardItems::AsicItems
        class CpuItems; //type: System::ChItems::BslotItems::BoardItems::CpuItems
        class DimmItems; //type: System::ChItems::BslotItems::BoardItems::DimmItems
        class FlashItems; //type: System::ChItems::BslotItems::BoardItems::FlashItems
        class ObflItems; //type: System::ChItems::BslotItems::BoardItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::ObflItems> obfl_items;
        
}; // System::ChItems::BslotItems::BoardItems


class System::ChItems::BslotItems::BoardItems::SensorItems : public ydk::Entity
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

        class SensorList; //type: System::ChItems::BslotItems::BoardItems::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::BslotItems::BoardItems::SensorItems


class System::ChItems::BslotItems::BoardItems::SensorItems::SensorList : public ydk::Entity
{
    public:
        SensorList();
        ~SensorList();

        bool has_data() const override;
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
        ydk::YLeaf type; //type: EqptSensorT
        ydk::YLeaf majorthresh; //type: int16
        ydk::YLeaf minorthresh; //type: int16
        ydk::YLeaf operst; //type: EqptSensorOpSt
        ydk::YLeaf tempvalue; //type: uint16
        ydk::YLeaf unit; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::SensorItems::SensorList


class System::ChItems::BslotItems::BoardItems::AsicItems : public ydk::Entity
{
    public:
        AsicItems();
        ~AsicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AsicList; //type: System::ChItems::BslotItems::BoardItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::BslotItems::BoardItems::AsicItems


class System::ChItems::BslotItems::BoardItems::AsicItems::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

        bool has_data() const override;
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
        ydk::YLeaf type; //type: EqptAsicT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numslices; //type: uint8
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::AsicItems::AsicList


class System::ChItems::BslotItems::BoardItems::CpuItems : public ydk::Entity
{
    public:
        CpuItems();
        ~CpuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CPUList; //type: System::ChItems::BslotItems::BoardItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::BslotItems::BoardItems::CpuItems


class System::ChItems::BslotItems::BoardItems::CpuItems::CPUList : public ydk::Entity
{
    public:
        CPUList();
        ~CPUList();

        bool has_data() const override;
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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sock; //type: EqptSock
        ydk::YLeaf arch; //type: EqptArchCPUArch
        ydk::YLeaf speed; //type: decimal64
        ydk::YLeaf cores; //type: uint16
        ydk::YLeaf coresen; //type: uint16
        ydk::YLeaf thrds; //type: uint16
        class CoreItems; //type: System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::BslotItems::BoardItems::CpuItems::CPUList


class System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems : public ydk::Entity
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

        class CoreList; //type: System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems


class System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
{
    public:
        CoreList();
        ~CoreList();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::BslotItems::BoardItems::DimmItems : public ydk::Entity
{
    public:
        DimmItems();
        ~DimmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DimmList; //type: System::ChItems::BslotItems::BoardItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::BslotItems::BoardItems::DimmItems


class System::ChItems::BslotItems::BoardItems::DimmItems::DimmList : public ydk::Entity
{
    public:
        DimmList();
        ~DimmList();

        bool has_data() const override;
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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::BslotItems::BoardItems::DimmItems::DimmList


class System::ChItems::BslotItems::BoardItems::FlashItems : public ydk::Entity
{
    public:
        FlashItems();
        ~FlashItems();

        bool has_data() const override;
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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::BslotItems::BoardItems::FlashItems


class System::ChItems::BslotItems::BoardItems::ObflItems : public ydk::Entity
{
    public:
        ObflItems();
        ~ObflItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf logt; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::BslotItems::BoardItems::ObflItems


class System::ChItems::BslotItems::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::ChItems::BslotItems::RtoosSlotItems


class System::ChItems::NslotItems : public ydk::Entity
{
    public:
        NslotItems();
        ~NslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NSlotList; //type: System::ChItems::NslotItems::NSlotList

        ydk::YList nslot_list;
        
}; // System::ChItems::NslotItems


class System::ChItems::NslotItems::NSlotList : public ydk::Entity
{
    public:
        NSlotList();
        ~NSlotList();

        bool has_data() const override;
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
        ydk::YLeaf loc; //type: EqptSlotLoc
        class NicItems; //type: System::ChItems::NslotItems::NSlotList::NicItems
        class RtoosSlotItems; //type: System::ChItems::NslotItems::NSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems> nic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::NslotItems::NSlotList


class System::ChItems::NslotItems::NSlotList::NicItems : public ydk::Entity
{
    public:
        NicItems();
        ~NicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NicList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList

        ydk::YList nic_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList : public ydk::Entity
{
    public:
        NicList();
        ~NicList();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf mace; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf fwver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf poweractualdraw; //type: uint32
        ydk::YLeaf powerallocated; //type: uint32
        class EaportItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems
        class SensorItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems
        class AsicItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems
        class CpuItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems
        class DimmItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems
        class FlashItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems
        class ObflItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems> eaport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems> obfl_items;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems : public ydk::Entity
{
    public:
        EaportItems();
        ~EaportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtAPList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList

        ydk::YList extap_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList : public ydk::Entity
{
    public:
        ExtAPList();
        ~ExtAPList();

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
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptPortT

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems : public ydk::Entity
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

        class SensorList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList : public ydk::Entity
{
    public:
        SensorList();
        ~SensorList();

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
        ydk::YLeaf type; //type: EqptSensorT
        ydk::YLeaf majorthresh; //type: int16
        ydk::YLeaf minorthresh; //type: int16
        ydk::YLeaf operst; //type: EqptSensorOpSt
        ydk::YLeaf tempvalue; //type: uint16
        ydk::YLeaf unit; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems : public ydk::Entity
{
    public:
        AsicItems();
        ~AsicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

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
        ydk::YLeaf type; //type: EqptAsicT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numslices; //type: uint8
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems : public ydk::Entity
{
    public:
        CpuItems();
        ~CpuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CPUList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList : public ydk::Entity
{
    public:
        CPUList();
        ~CPUList();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sock; //type: EqptSock
        ydk::YLeaf arch; //type: EqptArchCPUArch
        ydk::YLeaf speed; //type: decimal64
        ydk::YLeaf cores; //type: uint16
        ydk::YLeaf coresen; //type: uint16
        ydk::YLeaf thrds; //type: uint16
        class CoreItems; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems : public ydk::Entity
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

        class CoreList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
{
    public:
        CoreList();
        ~CoreList();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems : public ydk::Entity
{
    public:
        DimmItems();
        ~DimmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DimmList; //type: System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList : public ydk::Entity
{
    public:
        DimmList();
        ~DimmList();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems : public ydk::Entity
{
    public:
        FlashItems();
        ~FlashItems();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems


class System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems : public ydk::Entity
{
    public:
        ObflItems();
        ~ObflItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logt; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems


class System::ChItems::NslotItems::NSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ChItems::NslotItems::NSlotList::RtoosSlotItems


class System::ChItems::PItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class StorageList; //type: System::ChItems::PItems::StorageList

        ydk::YList storage_list;
        
}; // System::ChItems::PItems


class System::ChItems::PItems::StorageList : public ydk::Entity
{
    public:
        StorageList();
        ~StorageList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mount; //type: string
        ydk::YLeaf filesystem; //type: string
        ydk::YLeaf blocks; //type: uint32
        ydk::YLeaf used; //type: uint32
        ydk::YLeaf available; //type: uint32
        ydk::YLeaf caputilized; //type: uint8
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf name; //type: string

}; // System::ChItems::PItems::StorageList


class System::ExtchItems : public ydk::Entity
{
    public:
        ExtchItems();
        ~ExtchItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExtChList; //type: System::ExtchItems::ExtChList

        ydk::YList extch_list;
        
}; // System::ExtchItems


class System::ExtchItems::ExtChList : public ydk::Entity
{
    public:
        ExtChList();
        ~ExtChList();

        bool has_data() const override;
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
        ydk::YLeaf extchst; //type: EqptExtChSt
        ydk::YLeaf partnum; //type: string
        ydk::YLeaf macaddr; //type: string
        ydk::YLeaf nummacs; //type: uint16
        ydk::YLeaf numuplinkp; //type: uint16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        class RunningItems; //type: System::ExtchItems::ExtChList::RunningItems
        class LocledItems; //type: System::ExtchItems::ExtChList::LocledItems
        class ExtchslotItems; //type: System::ExtchItems::ExtChList::ExtchslotItems
        class PsuslotItems; //type: System::ExtchItems::ExtChList::PsuslotItems
        class FtslotItems; //type: System::ExtchItems::ExtChList::FtslotItems
        class SpbpItems; //type: System::ExtchItems::ExtChList::SpbpItems
        class SpsupItems; //type: System::ExtchItems::ExtChList::SpsupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems> extchslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems> psuslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems> ftslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems> spbp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems> spsup_items;
        
}; // System::ExtchItems::ExtChList


class System::ExtchItems::ExtChList::RunningItems : public ydk::Entity
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

        ydk::YLeaf loaderver; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::RunningItems


class System::ExtchItems::ExtChList::LocledItems : public ydk::Entity
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

        class ExtChLocLedList; //type: System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList

        ydk::YList extchlocled_list;
        
}; // System::ExtchItems::ExtChList::LocledItems


class System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList : public ydk::Entity
{
    public:
        ExtChLocLedList();
        ~ExtChLocLedList();

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
        ydk::YLeaf model; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf adminst; //type: EqptAdSt

}; // System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList


class System::ExtchItems::ExtChList::ExtchslotItems : public ydk::Entity
{
    public:
        ExtchslotItems();
        ~ExtchslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtChCardSlotList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList

        ydk::YList extchcardslot_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList : public ydk::Entity
{
    public:
        ExtChCardSlotList();
        ~ExtChCardSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class ExtchcItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems
        class RtoosSlotItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems> extchc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems : public ydk::Entity
{
    public:
        ExtchcItems();
        ~ExtchcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modserial; //type: string
        ydk::YLeaf modvendor; //type: string
        ydk::YLeaf modmodel; //type: string
        ydk::YLeaf partnum; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf rdst; //type: EqptRdSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf mace; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf fwver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf poweractualdraw; //type: uint32
        ydk::YLeaf powerallocated; //type: uint32
        class HostextportItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems
        class LeafextportItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems
        class SensorItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems
        class AsicItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems
        class CpuItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems
        class DimmItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems
        class FlashItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems
        class ObflItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems> hostextport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems> leafextport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems> obfl_items;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems : public ydk::Entity
{
    public:
        HostextportItems();
        ~HostextportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtChHPList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList

        ydk::YList extchhp_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList : public ydk::Entity
{
    public:
        ExtChHPList();
        ~ExtChHPList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptPortT
        ydk::YLeaf speed; //type: uint64

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems : public ydk::Entity
{
    public:
        LeafextportItems();
        ~LeafextportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtChFPList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList

        ydk::YList extchfp_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList : public ydk::Entity
{
    public:
        ExtChFPList();
        ~ExtChFPList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptPortT
        ydk::YLeaf speed; //type: uint64

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems : public ydk::Entity
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

        class SensorList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList : public ydk::Entity
{
    public:
        SensorList();
        ~SensorList();

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
        ydk::YLeaf type; //type: EqptSensorT
        ydk::YLeaf majorthresh; //type: int16
        ydk::YLeaf minorthresh; //type: int16
        ydk::YLeaf operst; //type: EqptSensorOpSt
        ydk::YLeaf tempvalue; //type: uint16
        ydk::YLeaf unit; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems : public ydk::Entity
{
    public:
        AsicItems();
        ~AsicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsicList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList : public ydk::Entity
{
    public:
        AsicList();
        ~AsicList();

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
        ydk::YLeaf type; //type: EqptAsicT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numslices; //type: uint8
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems : public ydk::Entity
{
    public:
        CpuItems();
        ~CpuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CPUList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList : public ydk::Entity
{
    public:
        CPUList();
        ~CPUList();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf sock; //type: EqptSock
        ydk::YLeaf arch; //type: EqptArchCPUArch
        ydk::YLeaf speed; //type: decimal64
        ydk::YLeaf cores; //type: uint16
        ydk::YLeaf coresen; //type: uint16
        ydk::YLeaf thrds; //type: uint16
        class CoreItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems : public ydk::Entity
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

        class CoreList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
{
    public:
        CoreList();
        ~CoreList();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems : public ydk::Entity
{
    public:
        DimmItems();
        ~DimmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DimmList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList : public ydk::Entity
{
    public:
        DimmList();
        ~DimmList();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems : public ydk::Entity
{
    public:
        FlashItems();
        ~FlashItems();

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
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems : public ydk::Entity
{
    public:
        ObflItems();
        ~ObflItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logt; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems


class System::ExtchItems::ExtChList::PsuslotItems : public ydk::Entity
{
    public:
        PsuslotItems();
        ~PsuslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PsuSlotList; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList

        ydk::YList psuslot_list;
        
}; // System::ExtchItems::ExtChList::PsuslotItems


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList : public ydk::Entity
{
    public:
        PsuSlotList();
        ~PsuSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class PsuItems; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems
        class RtoosSlotItems; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems> psu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems : public ydk::Entity
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

        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf cap; //type: decimal64
        ydk::YLeaf drawncurr; //type: decimal64
        ydk::YLeaf vsrc; //type: EqptVSrc
        ydk::YLeaf volt; //type: decimal64
        ydk::YLeaf fanopst; //type: EqptOpSt
        ydk::YLeaf fandirection; //type: EqptAirDir
        ydk::YLeaf inputcurr; //type: decimal64
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf vin; //type: decimal64
        ydk::YLeaf vout; //type: decimal64
        ydk::YLeaf pin; //type: uint32
        ydk::YLeaf pout; //type: uint32
        ydk::YLeaf iin; //type: decimal64
        ydk::YLeaf iout; //type: decimal64
        ydk::YLeaf softwarealarm; //type: boolean
        ydk::YLeaf hardwarealarm; //type: string
        ydk::YLeaf typecordconnected; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        class PsfanItems; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems> psfan_items;
        
}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems : public ydk::Entity
{
    public:
        PsfanItems();
        ~PsfanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PsFanList; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList

        ydk::YList psfan_list;
        
}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList : public ydk::Entity
{
    public:
        PsFanList();
        ~PsFanList();

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
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf dir; //type: EqptPsuFanDir
        ydk::YLeaf speedinrpm; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string

}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems


class System::ExtchItems::ExtChList::FtslotItems : public ydk::Entity
{
    public:
        FtslotItems();
        ~FtslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FtSlotList; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList

        ydk::YList ftslot_list;
        
}; // System::ExtchItems::ExtChList::FtslotItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList : public ydk::Entity
{
    public:
        FtSlotList();
        ~FtSlotList();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class FtItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems
        class RtoosSlotItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems> ft_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems : public ydk::Entity
{
    public:
        FtItems();
        ~FtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf fanname; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf poweractualdraw; //type: uint32
        ydk::YLeaf powerallocated; //type: uint32
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        class EjItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems
        class FanItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems
        class LocledItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems
        class SpfanItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems> ej_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems> fan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems> spfan_items;
        
}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems : public ydk::Entity
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

        class EjecList; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList

        ydk::YList ejec_list;
        
}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList : public ydk::Entity
{
    public:
        EjecList();
        ~EjecList();

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
        ydk::YLeaf operst; //type: EqptEjSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems : public ydk::Entity
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

        class FanList; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList

        ydk::YList fan_list;
        
}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf dir; //type: EqptAirDir
        ydk::YLeaf speedinrpm; //type: uint32
        ydk::YLeaf speedinpercent; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf model; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf adminst; //type: EqptAdSt

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems::LocLedList


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems : public ydk::Entity
{
    public:
        SpfanItems();
        ~SpfanItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems
        class SpfanblkItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems
        class SpfansnItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems> spfanblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems> spfansn_items;
        
}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf rmafl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems : public ydk::Entity
{
    public:
        SpfanblkItems();
        ~SpfanblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf hwcbits; //type: uint64
        ydk::YLeaf stackmib; //type: uint16
        ydk::YLeaf coolcap; //type: uint16
        ydk::YLeaf ambtemp; //type: uint16
        ydk::YLeaf hppwrcon; //type: uint16
        ydk::YLeaf hpcoolcon; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems : public ydk::Entity
{
    public:
        SpfansnItems();
        ~SpfansnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sernum; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems : public ydk::Entity
{
    public:
        RtoosSlotItems();
        ~RtoosSlotItems();

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

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems


class System::ExtchItems::ExtChList::SpbpItems : public ydk::Entity
{
    public:
        SpbpItems();
        ~SpbpItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ExtchItems::ExtChList::SpbpItems::SpcmnItems
        class SpbpblkItems; //type: System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems> spbpblk_items;
        
}; // System::ExtchItems::ExtChList::SpbpItems


class System::ExtchItems::ExtChList::SpbpItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf rmafl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::SpbpItems::SpcmnItems


class System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems : public ydk::Entity
{
    public:
        SpbpblkItems();
        ~SpbpblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf hwcbits; //type: uint64
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf stackmib; //type: uint16
        ydk::YLeaf oemeprise; //type: uint16
        ydk::YLeaf oemmib; //type: uint16
        ydk::YLeaf maxcpwr; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems


class System::ExtchItems::ExtChList::SpsupItems : public ydk::Entity
{
    public:
        SpsupItems();
        ~SpsupItems();

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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ExtchItems::ExtChList::SpsupItems::SpcmnItems
        class SpsupblkItems; //type: System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems
        class SppdItems; //type: System::ExtchItems::ExtChList::SpsupItems::SppdItems
        class SpsdItems; //type: System::ExtchItems::ExtChList::SpsupItems::SpsdItems
        class SpsensorblkItems; //type: System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems> spsupblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems::SppdItems> sppd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems> spsensorblk_items;
        
}; // System::ExtchItems::ExtChList::SpsupItems


class System::ExtchItems::ExtChList::SpsupItems::SpcmnItems : public ydk::Entity
{
    public:
        SpcmnItems();
        ~SpcmnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: uint16
        ydk::YLeaf count; //type: uint16
        ydk::YLeaf major_; //type: uint16
        ydk::YLeaf minor; //type: uint16
        ydk::YLeaf oem; //type: string
        ydk::YLeaf pdnum; //type: string
        ydk::YLeaf sernum; //type: string
        ydk::YLeaf prtnum; //type: string
        ydk::YLeaf prev; //type: string
        ydk::YLeaf mfgdev; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf rmafl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::SpsupItems::SpcmnItems


class System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems : public ydk::Entity
{
    public:
        SpsupblkItems();
        ~SpsupblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fbits; //type: uint64
        ydk::YLeaf hwcbits; //type: uint64
        ydk::YLeaf crdidx; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf macl; //type: uint16
        ydk::YLeaf eobcn; //type: uint16
        ydk::YLeaf epldn; //type: uint16
        ydk::YLeaf maxcpwr; //type: uint16
        ydk::YLeaf coolrq; //type: uint16
        ydk::YLeaf ambt; //type: uint16
        ydk::YLeaf sensor1; //type: string
        ydk::YLeaf sensor2; //type: string
        ydk::YLeaf sensor3; //type: string
        ydk::YLeaf sensor4; //type: string
        ydk::YLeaf sensor5; //type: string
        ydk::YLeaf sensor6; //type: string
        ydk::YLeaf sensor7; //type: string
        ydk::YLeaf sensor8; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16
        class SpsdItems; //type: System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems
        class SppdItems; //type: System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems> sppd_items;
        
}; // System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems


class System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems : public ydk::Entity
{
    public:
        SpsdItems();
        ~SpsdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpSdList; //type: System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems


class System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList : public ydk::Entity
{
    public:
        SpSdList();
        ~SpSdList();

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
        ydk::YLeaf majth; //type: int16
        ydk::YLeaf minth; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList


class System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems : public ydk::Entity
{
    public:
        SppdItems();
        ~SppdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prtty; //type: uint16
        ydk::YLeaf numpts; //type: uint16

}; // System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems


class System::ExtchItems::ExtChList::SpsupItems::SppdItems : public ydk::Entity
{
    public:
        SppdItems();
        ~SppdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prtty; //type: uint16
        ydk::YLeaf numpts; //type: uint16

}; // System::ExtchItems::ExtChList::SpsupItems::SppdItems


class System::ExtchItems::ExtChList::SpsupItems::SpsdItems : public ydk::Entity
{
    public:
        SpsdItems();
        ~SpsdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpSdList; //type: System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ExtchItems::ExtChList::SpsupItems::SpsdItems


class System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList : public ydk::Entity
{
    public:
        SpSdList();
        ~SpSdList();

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
        ydk::YLeaf majth; //type: int16
        ydk::YLeaf minth; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::SpsupItems::SpsdItems::SpSdList


class System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems : public ydk::Entity
{
    public:
        SpsensorblkItems();
        ~SpsensorblkItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor9; //type: string
        ydk::YLeaf sensor10; //type: string
        ydk::YLeaf sensor11; //type: string
        ydk::YLeaf sensor12; //type: string
        ydk::YLeaf sensor13; //type: string
        ydk::YLeaf sensor14; //type: string
        ydk::YLeaf sensor15; //type: string
        ydk::YLeaf sensor16; //type: string
        ydk::YLeaf sensor17; //type: string
        ydk::YLeaf sensor18; //type: string
        ydk::YLeaf sensor19; //type: string
        ydk::YLeaf sensor20; //type: string
        ydk::YLeaf sensor21; //type: string
        ydk::YLeaf sensor22; //type: string
        ydk::YLeaf sensor23; //type: string
        ydk::YLeaf sensor24; //type: string
        ydk::YLeaf sensor25; //type: string
        ydk::YLeaf sensor26; //type: string
        ydk::YLeaf sensor27; //type: string
        ydk::YLeaf sensor28; //type: string
        ydk::YLeaf sensor29; //type: string
        ydk::YLeaf sensor30; //type: string
        ydk::YLeaf sensor31; //type: string
        ydk::YLeaf sensor32; //type: string
        ydk::YLeaf sensor33; //type: string
        ydk::YLeaf sensor34; //type: string
        ydk::YLeaf sensor35; //type: string
        ydk::YLeaf sensor36; //type: string
        ydk::YLeaf sensor37; //type: string
        ydk::YLeaf sensor38; //type: string
        ydk::YLeaf sensor39; //type: string
        ydk::YLeaf sensor40; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16
        class SpsdItems; //type: System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems> spsd_items;
        
}; // System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems


class System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems : public ydk::Entity
{
    public:
        SpsdItems();
        ~SpsdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpSdList; //type: System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems


class System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList : public ydk::Entity
{
    public:
        SpSdList();
        ~SpSdList();

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
        ydk::YLeaf majth; //type: int16
        ydk::YLeaf minth; //type: int16
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList


class System::OpsItems : public ydk::Entity
{
    public:
        OpsItems();
        ~OpsItems();

        bool has_data() const override;
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
        class ConsolepItems; //type: System::OpsItems::ConsolepItems
        class EjectorItems; //type: System::OpsItems::EjectorItems
        class FanzoneItems; //type: System::OpsItems::FanzoneItems
        class PsgpItems; //type: System::OpsItems::PsgpItems
        class SlotItems; //type: System::OpsItems::SlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OpsItems::ConsolepItems> consolep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OpsItems::EjectorItems> ejector_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OpsItems::FanzoneItems> fanzone_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OpsItems::PsgpItems> psgp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OpsItems::SlotItems> slot_items;
        
}; // System::OpsItems


class System::OpsItems::ConsolepItems : public ydk::Entity
{
    public:
        ConsolepItems();
        ~ConsolepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf databits; //type: uint16
        ydk::YLeaf inactiveintvl; //type: uint32
        ydk::YLeaf parity; //type: EqptParity
        ydk::YLeaf baudrate; //type: EqptBaudRate
        ydk::YLeaf stopbits; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::OpsItems::ConsolepItems


class System::OpsItems::EjectorItems : public ydk::Entity
{
    public:
        EjectorItems();
        ~EjectorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf autoshutdown; //type: EqptAutoShutdown
        ydk::YLeaf name; //type: string

}; // System::OpsItems::EjectorItems


class System::OpsItems::FanzoneItems : public ydk::Entity
{
    public:
        FanzoneItems();
        ~FanzoneItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf zonespeed; //type: uint32
        ydk::YLeaf airfilter; //type: EqptAirFilter
        ydk::YLeaf name; //type: string

}; // System::OpsItems::FanzoneItems


class System::OpsItems::PsgpItems : public ydk::Entity
{
    public:
        PsgpItems();
        ~PsgpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminrdnm; //type: EqptPsRdnM
        ydk::YLeaf operrdnm; //type: EqptPsRdnM
        ydk::YLeaf tc; //type: uint32
        ydk::YLeaf rsdpwr; //type: uint32
        ydk::YLeaf alpwr; //type: uint32
        ydk::YLeaf avpwr; //type: uint32
        ydk::YLeaf unit; //type: string
        ydk::YLeaf nrdncap; //type: uint32
        ydk::YLeaf psrdncap; //type: uint32
        ydk::YLeaf acrdncap; //type: uint32
        ydk::YLeaf grdrdncap; //type: uint32
        ydk::YLeaf flrdncap; //type: uint32
        ydk::YLeaf grdacap; //type: uint32
        ydk::YLeaf grdbcap; //type: uint32
        ydk::YLeaf inputdraw; //type: uint32
        ydk::YLeaf outputdraw; //type: uint32
        ydk::YLeaf cordsconnected; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class RspsuInstPolConsItems; //type: System::OpsItems::PsgpItems::RspsuInstPolConsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OpsItems::PsgpItems::RspsuInstPolConsItems> rspsuinstpolcons_items;
        
}; // System::OpsItems::PsgpItems


class System::OpsItems::PsgpItems::RspsuInstPolConsItems : public ydk::Entity
{
    public:
        RspsuInstPolConsItems();
        ~RspsuInstPolConsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string

}; // System::OpsItems::PsgpItems::RspsuInstPolConsItems


class System::OpsItems::SlotItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class SlotPList; //type: System::OpsItems::SlotItems::SlotPList

        ydk::YList slotp_list;
        
}; // System::OpsItems::SlotItems


class System::OpsItems::SlotItems::SlotPList : public ydk::Entity
{
    public:
        SlotPList();
        ~SlotPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::OpsItems::SlotItems::SlotPList


class System::EqptcapacityItems : public ydk::Entity
{
    public:
        EqptcapacityItems();
        ~EqptcapacityItems();

        bool has_data() const override;
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

}; // System::EqptcapacityItems


class System::DiagItems : public ydk::Entity
{
    public:
        DiagItems();
        ~DiagItems();

        bool has_data() const override;
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
        class GrptestsItems; //type: System::DiagItems::GrptestsItems
        class RuleItems; //type: System::DiagItems::RuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DiagItems::GrptestsItems> grptests_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DiagItems::RuleItems> rule_items;
        
}; // System::DiagItems


class System::DiagItems::GrptestsItems : public ydk::Entity
{
    public:
        GrptestsItems();
        ~GrptestsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class GrpTestsList; //type: System::DiagItems::GrptestsItems::GrpTestsList

        ydk::YList grptests_list;
        
}; // System::DiagItems::GrptestsItems


class System::DiagItems::GrptestsItems::GrpTestsList : public ydk::Entity
{
    public:
        GrpTestsList();
        ~GrpTestsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf subjclass; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf grp; //type: EqptdiagAllGrpsT
        ydk::YLeaf testbm; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::DiagItems::GrptestsItems::GrpTestsList


class System::DiagItems::RuleItems : public ydk::Entity
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

        class RuleList; //type: System::DiagItems::RuleItems::RuleList

        ydk::YList rule_list;
        
}; // System::DiagItems::RuleItems


class System::DiagItems::RuleItems::RuleList : public ydk::Entity
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

        ydk::YLeaf type; //type: uint16
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf name; //type: string
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf freq; //type: one of uint64, string
        class SubjItems; //type: System::DiagItems::RuleItems::RuleList::SubjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DiagItems::RuleItems::RuleList::SubjItems> subj_items;
        
}; // System::DiagItems::RuleItems::RuleList


class System::DiagItems::RuleItems::RuleList::SubjItems : public ydk::Entity
{
    public:
        SubjItems();
        ~SubjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubjList; //type: System::DiagItems::RuleItems::RuleList::SubjItems::SubjList

        ydk::YList subj_list;
        
}; // System::DiagItems::RuleItems::RuleList::SubjItems


class System::DiagItems::RuleItems::RuleList::SubjItems::SubjList : public ydk::Entity
{
    public:
        SubjList();
        ~SubjList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odn; //type: string
        ydk::YLeaf opk; //type: string
        ydk::YLeaf osk; //type: string
        ydk::YLeaf operst; //type: TestOperSt
        ydk::YLeaf name; //type: string
        class RsltItems; //type: System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems
        class PortteststatsItems; //type: System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems> rslt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems> portteststats_items;
        
}; // System::DiagItems::RuleItems::RuleList::SubjItems::SubjList


class System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems : public ydk::Entity
{
    public:
        RsltItems();
        ~RsltItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsltList; //type: System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList

        ydk::YList rslt_list;
        
}; // System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems


class System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList : public ydk::Entity
{
    public:
        RsltList();
        ~RsltList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ts; //type: one of uint64, string
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf operst; //type: TestOperSt
        ydk::YLeaf qual; //type: string
        ydk::YLeaf name; //type: string

}; // System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::RsltItems::RsltList


class System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems : public ydk::Entity
{
    public:
        PortteststatsItems();
        ~PortteststatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pktsent; //type: uint32
        ydk::YLeaf pktrcvd; //type: uint32
        ydk::YLeaf pktdrop; //type: uint32

}; // System::DiagItems::RuleItems::RuleList::SubjItems::SubjList::PortteststatsItems


class System::LcmItems : public ydk::Entity
{
    public:
        LcmItems();
        ~LcmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SysmodItems; //type: System::LcmItems::SysmodItems
        class EcmptemplateItems; //type: System::LcmItems::EcmptemplateItems
        class ModloglevelItems; //type: System::LcmItems::ModloglevelItems
        class McastoptItems; //type: System::LcmItems::McastoptItems
        class VxlanmplsaclItems; //type: System::LcmItems::VxlanmplsaclItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LcmItems::SysmodItems> sysmod_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LcmItems::EcmptemplateItems> ecmptemplate_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LcmItems::ModloglevelItems> modloglevel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LcmItems::McastoptItems> mcastopt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LcmItems::VxlanmplsaclItems> vxlanmplsacl_items;
        
}; // System::LcmItems


class System::LcmItems::SysmodItems : public ydk::Entity
{
    public:
        SysmodItems();
        ~SysmodItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf modulefailureaction; //type: LcmModuleFailureAction

}; // System::LcmItems::SysmodItems


class System::LcmItems::EcmptemplateItems : public ydk::Entity
{
    public:
        EcmptemplateItems();
        ~EcmptemplateItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleItems; //type: System::LcmItems::EcmptemplateItems::ModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LcmItems::EcmptemplateItems::ModuleItems> module_items;
        
}; // System::LcmItems::EcmptemplateItems


class System::LcmItems::EcmptemplateItems::ModuleItems : public ydk::Entity
{
    public:
        ModuleItems();
        ~ModuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EcmpTemplateModuleList; //type: System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList

        ydk::YList ecmptemplatemodule_list;
        
}; // System::LcmItems::EcmptemplateItems::ModuleItems


class System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList : public ydk::Entity
{
    public:
        EcmpTemplateModuleList();
        ~EcmpTemplateModuleList();

        bool has_data() const override;
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
        ydk::YLeaf ecmptemplatel3vpn; //type: LcmEcmpTemplateL3vpn

}; // System::LcmItems::EcmptemplateItems::ModuleItems::EcmpTemplateModuleList


class System::LcmItems::ModloglevelItems : public ydk::Entity
{
    public:
        ModloglevelItems();
        ~ModloglevelItems();

        bool has_data() const override;
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
        ydk::YLeaf loggingtype; //type: LcmLoggingType

}; // System::LcmItems::ModloglevelItems


class System::LcmItems::McastoptItems : public ydk::Entity
{
    public:
        McastoptItems();
        ~McastoptItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf multicastoptimization; //type: LcmMulticastOptimization

}; // System::LcmItems::McastoptItems


class System::LcmItems::VxlanmplsaclItems : public ydk::Entity
{
    public:
        VxlanmplsaclItems();
        ~VxlanmplsaclItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleItems; //type: System::LcmItems::VxlanmplsaclItems::ModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LcmItems::VxlanmplsaclItems::ModuleItems> module_items;
        
}; // System::LcmItems::VxlanmplsaclItems


class System::LcmItems::VxlanmplsaclItems::ModuleItems : public ydk::Entity
{
    public:
        ModuleItems();
        ~ModuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VxlanMplsAclModuleList; //type: System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList

        ydk::YList vxlanmplsaclmodule_list;
        
}; // System::LcmItems::VxlanmplsaclItems::ModuleItems


class System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList : public ydk::Entity
{
    public:
        VxlanMplsAclModuleList();
        ~VxlanMplsAclModuleList();

        bool has_data() const override;
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
        ydk::YLeaf profvxlanmpls; //type: LcmProfVxlanMpls
        ydk::YLeaf profaclstats; //type: LcmProfAclStats

}; // System::LcmItems::VxlanmplsaclItems::ModuleItems::VxlanMplsAclModuleList


class System::LsnodeItems : public ydk::Entity
{
    public:
        LsnodeItems();
        ~LsnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LooseNodeList; //type: System::LsnodeItems::LooseNodeList

        ydk::YList loosenode_list;
        
}; // System::LsnodeItems


class System::LsnodeItems::LooseNodeList : public ydk::Entity
{
    public:
        LooseNodeList();
        ~LooseNodeList();

        bool has_data() const override;
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
        ydk::YLeaf sysdesc; //type: string
        ydk::YLeaf sysname; //type: string
        ydk::YLeaf name; //type: string
        class RtfvEpDefToLooseNodeItems; //type: System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems
        class RtfvLsNodeAttItems; //type: System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems
        class RttunnelTunnelToLooseNodeItems; //type: System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems
        class RslsNodeToIfItems; //type: System::LsnodeItems::LooseNodeList::RslsNodeToIfItems
        class RslsAttLinkItems; //type: System::LsnodeItems::LooseNodeList::RslsAttLinkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems> rtfvepdeftoloosenode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems> rtfvlsnodeatt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems> rttunneltunneltoloosenode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LsnodeItems::LooseNodeList::RslsNodeToIfItems> rslsnodetoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LsnodeItems::LooseNodeList::RslsAttLinkItems> rslsattlink_items;
        
}; // System::LsnodeItems::LooseNodeList


class System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems : public ydk::Entity
{
    public:
        RtfvEpDefToLooseNodeItems();
        ~RtfvEpDefToLooseNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvEpDefToLooseNodeList; //type: System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList

        ydk::YList rtfvepdeftoloosenode_list;
        
}; // System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems


class System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList : public ydk::Entity
{
    public:
        RtFvEpDefToLooseNodeList();
        ~RtFvEpDefToLooseNodeList();

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

}; // System::LsnodeItems::LooseNodeList::RtfvEpDefToLooseNodeItems::RtFvEpDefToLooseNodeList


class System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems : public ydk::Entity
{
    public:
        RtfvLsNodeAttItems();
        ~RtfvLsNodeAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvLsNodeAttList; //type: System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList

        ydk::YList rtfvlsnodeatt_list;
        
}; // System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems


class System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList : public ydk::Entity
{
    public:
        RtFvLsNodeAttList();
        ~RtFvLsNodeAttList();

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

}; // System::LsnodeItems::LooseNodeList::RtfvLsNodeAttItems::RtFvLsNodeAttList


class System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems : public ydk::Entity
{
    public:
        RttunnelTunnelToLooseNodeItems();
        ~RttunnelTunnelToLooseNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtTunnelTunnelToLooseNodeList; //type: System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList

        ydk::YList rttunneltunneltoloosenode_list;
        
}; // System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems


class System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList : public ydk::Entity
{
    public:
        RtTunnelTunnelToLooseNodeList();
        ~RtTunnelTunnelToLooseNodeList();

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

}; // System::LsnodeItems::LooseNodeList::RttunnelTunnelToLooseNodeItems::RtTunnelTunnelToLooseNodeList


class System::LsnodeItems::LooseNodeList::RslsNodeToIfItems : public ydk::Entity
{
    public:
        RslsNodeToIfItems();
        ~RslsNodeToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLsNodeToIfList; //type: System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList

        ydk::YList rslsnodetoif_list;
        
}; // System::LsnodeItems::LooseNodeList::RslsNodeToIfItems


class System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList : public ydk::Entity
{
    public:
        RsLsNodeToIfList();
        ~RsLsNodeToIfList();

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

}; // System::LsnodeItems::LooseNodeList::RslsNodeToIfItems::RsLsNodeToIfList


class System::LsnodeItems::LooseNodeList::RslsAttLinkItems : public ydk::Entity
{
    public:
        RslsAttLinkItems();
        ~RslsAttLinkItems();

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

}; // System::LsnodeItems::LooseNodeList::RslsAttLinkItems


class System::PltfmItems : public ydk::Entity
{
    public:
        PltfmItems();
        ~PltfmItems();

        bool has_data() const override;
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
        ydk::YLeaf profilemode; //type: PlatformHwProfile
        ydk::YLeaf profilefrontportmode; //type: PlatformFrontPortmode
        ydk::YLeaf profiletuple; //type: PlatformTuple
        ydk::YLeaf unicastsyslogthreshold; //type: uint16
        ydk::YLeaf lpmmaxlimit; //type: uint16
        ydk::YLeaf unicastmaxlimit; //type: uint16
        ydk::YLeaf multicastmaxlimit; //type: uint16
        ydk::YLeaf multicastservicereflectport; //type: uint32
        ydk::YLeaf multicastrpfcheckoptimization; //type: NwAdminSt___
        ydk::YLeaf highmulticastpriority; //type: NwAdminSt___
        ydk::YLeaf pstatcfg; //type: PlatformPstatCfg
        ydk::YLeaf multicastsyslogthreshold; //type: uint16
        ydk::YLeaf ipv6alpmcarvevalue; //type: uint16
        ydk::YLeaf ipv6lpmmaxentries; //type: uint32
        ydk::YLeaf routingmode; //type: PlatformRoutingMode
        ydk::YLeaf pclbalgo; //type: PlatformPcLbAlgo
        ydk::YLeaf pclbres; //type: PlatformPcLbRes
        ydk::YLeaf dot1qtunneltransit; //type: boolean
        ydk::YLeaf pcmplslblabelip; //type: PlatformPcMplsLbLabelIp
        ydk::YLeaf pcmplslblabelonly; //type: PlatformPcMplsLbLabelOnly
        ydk::YLeaf urpfstatus; //type: NwAdminSt___
        ydk::YLeaf unknownunicastflood; //type: NwAdminSt___
        ydk::YLeaf qosminbuffer; //type: PlatformQosMinBuffer
        ydk::YLeaf switchingmode; //type: PlatformSwitchingMode
        ydk::YLeaf switchingfabricspeed; //type: PlatformFabricSpeed
        ydk::YLeaf mcastnlb; //type: PlatformMcastNlb
        ydk::YLeaf pbrskipselfip; //type: NwAdminSt___
        ydk::YLeaf mcastlpmmaxentries; //type: uint32
        ydk::YLeaf systemfabricmode; //type: PlatformFabricMode
        ydk::YLeaf switchmode; //type: PlatformSwitchMode
        ydk::YLeaf mroutingperfmode; //type: PlatformMroutingPerfMode
        ydk::YLeaf mroutingdisablesecrouteupd; //type: PlatformMroutingDisableSecRouteUpd
        ydk::YLeaf mroutingdisablel2upd; //type: PlatformMroutingDisableL2Upd
        ydk::YLeaf unicasttrace; //type: PlatformUnicastTrace
        ydk::YLeaf hwlouresthreshold; //type: uint16
        ydk::YLeaf mplsadjstatsmode; //type: PlatformMplsStatsType
        ydk::YLeaf mplscfgecmpmode; //type: PlatformMplsEcmpMode
        ydk::YLeaf tcamsyslogthreshold; //type: uint16
        ydk::YLeaf mcastraclbridge; //type: NwAdminSt___
        class ProfileItems; //type: System::PltfmItems::ProfileItems
        class ModItems; //type: System::PltfmItems::ModItems
        class NveItems; //type: System::PltfmItems::NveItems
        class ForwardingmodeItems; //type: System::PltfmItems::ForwardingmodeItems
        class EcmpItems; //type: System::PltfmItems::EcmpItems
        class QosItems; //type: System::PltfmItems::QosItems
        class BdItems; //type: System::PltfmItems::BdItems
        class IntfItems; //type: System::PltfmItems::IntfItems
        class LoglevelItems; //type: System::PltfmItems::LoglevelItems
        class PoweroffEntityItems; //type: System::PltfmItems::PoweroffEntityItems
        class SysmemthItems; //type: System::PltfmItems::SysmemthItems
        class TcamRegionItems; //type: System::PltfmItems::TcamRegionItems
        class LatencymonitorItems; //type: System::PltfmItems::LatencymonitorItems
        class BuffermonitorItems; //type: System::PltfmItems::BuffermonitorItems
        class PfcmmubufferItems; //type: System::PltfmItems::PfcmmubufferItems
        class UdfItems; //type: System::PltfmItems::UdfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ProfileItems> profile_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ModItems> mod_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::NveItems> nve_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ForwardingmodeItems> forwardingmode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::EcmpItems> ecmp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::QosItems> qos_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::LoglevelItems> loglevel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::PoweroffEntityItems> poweroffentity_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::SysmemthItems> sysmemth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::TcamRegionItems> tcamregion_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::LatencymonitorItems> latencymonitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::BuffermonitorItems> buffermonitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::PfcmmubufferItems> pfcmmubuffer_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::UdfItems> udf_items;
        
}; // System::PltfmItems


class System::PltfmItems::ProfileItems : public ydk::Entity
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

        ydk::YLeaf spanbufferthresh; //type: uint8
        ydk::YLeaf qosgrp0bufferthresh; //type: uint8
        ydk::YLeaf qosgrp1bufferthresh; //type: uint8
        ydk::YLeaf qosgrp2bufferthresh; //type: uint8
        ydk::YLeaf qosgrp3bufferthresh; //type: uint8
        ydk::YLeaf qosgrp4bufferthresh; //type: uint8

}; // System::PltfmItems::ProfileItems


class System::PltfmItems::ModItems : public ydk::Entity
{
    public:
        ModItems();
        ~ModItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class TcamStatsModuleList; //type: System::PltfmItems::ModItems::TcamStatsModuleList

        ydk::YList tcamstatsmodule_list;
        
}; // System::PltfmItems::ModItems


class System::PltfmItems::ModItems::TcamStatsModuleList : public ydk::Entity
{
    public:
        TcamStatsModuleList();
        ~TcamStatsModuleList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf module; //type: uint16
        class InstItems; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ModItems::TcamStatsModuleList::InstItems> inst_items;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList


}
}

#endif /* _CISCO_NX_OS_DEVICE_41_ */

