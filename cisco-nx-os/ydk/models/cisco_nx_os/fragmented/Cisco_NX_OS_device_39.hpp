#ifndef _CISCO_NX_OS_DEVICE_39_
#define _CISCO_NX_OS_DEVICE_39_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_38.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


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
        class LportItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::LportItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::LportItems> lport_items;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::LportItems : public ydk::Entity
{
    public:
        LportItems();
        ~LportItems();

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

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::LportItems


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
        class LportItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::LportItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::LportItems> lport_items;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::LportItems : public ydk::Entity
{
    public:
        LportItems();
        ~LportItems();

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

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::LportItems


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
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
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
        ydk::YLeaf mfgtm; //type: string
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
        ydk::YLeaf mfgtm; //type: string
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
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems : public ydk::Entity
{
    public:
        FpgaItems();
        ~FpgaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FpgaList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems::FpgaList

        ydk::YList fpga_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems::FpgaList : public ydk::Entity
{
    public:
        FpgaList();
        ~FpgaList();

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
        ydk::YLeaf type; //type: EqptFpgaT
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        class RunningItems; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems::FpgaList::RunningItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems::FpgaList::RunningItems> running_items;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems::FpgaList


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems::FpgaList::RunningItems : public ydk::Entity
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

        ydk::YLeaf expectedver; //type: string
        ydk::YLeaf operst; //type: FirmwareRunningOperSt
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FpgaItems::FpgaList::RunningItems


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
        ydk::YLeaf mfgtm; //type: string
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
        ydk::YLeaf mfgtm; //type: string
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
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RstrecItems : public ydk::Entity
{
    public:
        RstrecItems();
        ~RstrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtChCardRstRecList; //type: System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RstrecItems::ExtChCardRstRecList

        ydk::YList extchcardrstrec_list;
        
}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RstrecItems


class System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RstrecItems::ExtChCardRstRecList : public ydk::Entity
{
    public:
        ExtChCardRstRecList();
        ~ExtChCardRstRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ts; //type: string
        ydk::YLeaf reason; //type: SyshistRstRsn
        ydk::YLeaf reasonqual; //type: string
        ydk::YLeaf ver; //type: string

}; // System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RstrecItems::ExtChCardRstRecList


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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
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
        ydk::YLeaf almreg; //type: uint16
        ydk::YLeaf fanopst; //type: EqptOpSt
        ydk::YLeaf inputcurr; //type: decimal64
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        class FanItems; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::FanItems
        class IndledItems; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::IndledItems
        class SppsuItems; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::FanItems> fan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::IndledItems> indled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems> sppsu_items;
        
}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::FanItems : public ydk::Entity
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

        class FanList; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::FanItems::FanList

        ydk::YList fan_list;
        
}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::FanItems


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::FanItems::FanList : public ydk::Entity
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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::FanItems::FanList


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::IndledItems : public ydk::Entity
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

        class IndLedList; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::IndledItems::IndLedList

        ydk::YList indled_list;
        
}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::IndledItems


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::IndledItems::IndLedList : public ydk::Entity
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

}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::IndledItems::IndLedList


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems : public ydk::Entity
{
    public:
        SppsuItems();
        ~SppsuItems();

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
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf errrsn; //type: EqptSpErrRsn
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SpcmnItems
        class SppsublkItems; //type: System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SppsublkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SppsublkItems> sppsublk_items;
        
}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SpcmnItems : public ydk::Entity
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
        ydk::YLeaf hwrevmaj; //type: uint16
        ydk::YLeaf hwrevmin; //type: uint16
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf ramfl; //type: string
        ydk::YLeaf clei; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SpcmnItems


class System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SppsublkItems : public ydk::Entity
{
    public:
        SppsublkItems();
        ~SppsublkItems();

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
        ydk::YLeaf c110v; //type: uint16
        ydk::YLeaf c220v; //type: uint16
        ydk::YLeaf smoid; //type: uint16
        ydk::YLeaf pscmd1; //type: uint16
        ydk::YLeaf pscmd2; //type: uint16
        ydk::YLeaf pscmd3; //type: uint16
        ydk::YLeaf pscmd4; //type: uint16
        ydk::YLeaf pscmxmd1; //type: uint16
        ydk::YLeaf pscmxmd2; //type: uint16
        ydk::YLeaf pscmxmd3; //type: uint16
        ydk::YLeaf pscmxmd4; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::SppsuItems::SppsublkItems


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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf cardoperst; //type: EqptSlotCardOpSt
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
        ydk::YLeaf fanletfailstring; //type: string
        ydk::YLeaf fanname; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        class EjItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems
        class FanItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems
        class IndledItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::IndledItems
        class LocledItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::LocledItems
        class SpfanItems; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems> ej_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems> fan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::IndledItems> indled_items;
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
        ydk::YLeaf mfgtm; //type: string
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
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::IndledItems : public ydk::Entity
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

        class IndLedList; //type: System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::IndledItems::IndLedList

        ydk::YList indled_list;
        
}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::IndledItems


class System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::IndledItems::IndLedList : public ydk::Entity
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

}; // System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::IndledItems::IndLedList


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
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf errrsn; //type: EqptSpErrRsn
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
        ydk::YLeaf hwrevmaj; //type: uint16
        ydk::YLeaf hwrevmin; //type: uint16
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf ramfl; //type: string
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf errrsn; //type: EqptSpErrRsn
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ExtchItems::ExtChList::SpbpItems::SpcmnItems
        class SpbpblkItems; //type: System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems
        class BpspwwnItems; //type: System::ExtchItems::ExtChList::SpbpItems::BpspwwnItems
        class BpsplicItems; //type: System::ExtchItems::ExtChList::SpbpItems::BpsplicItems
        class BpspssnItems; //type: System::ExtchItems::ExtChList::SpbpItems::BpspssnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems> spbpblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems::BpspwwnItems> bpspwwn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems::BpsplicItems> bpsplic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtchItems::ExtChList::SpbpItems::BpspssnItems> bpspssn_items;
        
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
        ydk::YLeaf hwrevmaj; //type: uint16
        ydk::YLeaf hwrevmin; //type: uint16
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf ramfl; //type: string
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
        ydk::YLeaf coolcoe; //type: uint16
        ydk::YLeaf maxcpwr; //type: uint16
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems


class System::ExtchItems::ExtChList::SpbpItems::BpspwwnItems : public ydk::Entity
{
    public:
        BpspwwnItems();
        ~BpspwwnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ubits; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::SpbpItems::BpspwwnItems


class System::ExtchItems::ExtChList::SpbpItems::BpsplicItems : public ydk::Entity
{
    public:
        BpsplicItems();
        ~BpsplicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ubits; //type: string
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

}; // System::ExtchItems::ExtChList::SpbpItems::BpsplicItems


class System::ExtchItems::ExtChList::SpbpItems::BpspssnItems : public ydk::Entity
{
    public:
        BpspssnItems();
        ~BpspssnItems();

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

}; // System::ExtchItems::ExtChList::SpbpItems::BpspssnItems


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
        ydk::YLeaf mfgtm; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf errrsn; //type: EqptSpErrRsn
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
        ydk::YLeaf hwrevmaj; //type: uint16
        ydk::YLeaf hwrevmin; //type: uint16
        ydk::YLeaf mfgbits; //type: uint16
        ydk::YLeaf engbits; //type: uint16
        ydk::YLeaf pwrcon; //type: int16
        ydk::YLeaf ramfl; //type: string
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
        ydk::YLeaf epldv; //type: uint16
        ydk::YLeaf sramsz; //type: uint16
        ydk::YLeaf maxcpwr; //type: uint16
        ydk::YLeaf coolrq; //type: uint16
        ydk::YLeaf ambt; //type: uint16
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
        ydk::YLeaf mfgtm; //type: string
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
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

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
        ydk::YLeaf sig; //type: uint16
        ydk::YLeaf ver; //type: uint16
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf cksum; //type: uint16

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
        ydk::YLeaf mfgtm; //type: string
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
        ydk::YLeaf mfgtm; //type: string
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
        class PsgpItems; //type: System::OpsItems::PsgpItems
        class SlotItems; //type: System::OpsItems::SlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::OpsItems::ConsolepItems> consolep_items;
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
        ydk::YLeaf nrdnrsn; //type: EqptNRdnRsn
        ydk::YLeaf tc; //type: uint32
        ydk::YLeaf rsdpwr; //type: uint32
        ydk::YLeaf alpwr; //type: uint32
        ydk::YLeaf avpwr; //type: uint32
        ydk::YLeaf nrdncap; //type: uint32
        ydk::YLeaf psrdncap; //type: uint32
        ydk::YLeaf acrdncap; //type: uint32
        ydk::YLeaf grdrdncap; //type: uint32
        ydk::YLeaf flrdncap; //type: uint32
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
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
        ydk::YLeaf freq; //type: string
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
        ydk::YLeaf operstqual; //type: string
        ydk::YLeaf lastexecfailqual; //type: string
        ydk::YLeaf lastexects; //type: string
        ydk::YLeaf nextexects; //type: string
        ydk::YLeaf lastexecpassts; //type: string
        ydk::YLeaf firstexecfailts; //type: string
        ydk::YLeaf lastexecfailts; //type: string
        ydk::YLeaf numexec; //type: uint32
        ydk::YLeaf numexecfail; //type: uint32
        ydk::YLeaf numexecconsfail; //type: uint32
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

        ydk::YLeaf ts; //type: string
        ydk::YLeaf trig; //type: TestTrig
        ydk::YLeaf operst; //type: TestOperSt
        ydk::YLeaf qual; //type: string
        ydk::YLeaf operstqual; //type: string
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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf tcl; //type: RelnClassId

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
        ydk::YLeaf profiletuple; //type: PlatformTuple
        ydk::YLeaf unicastsyslogthreshold; //type: uint16
        ydk::YLeaf lpmmaxlimit; //type: uint16
        ydk::YLeaf unicastmaxlimit; //type: uint16
        ydk::YLeaf multicastmaxlimit; //type: uint16
        ydk::YLeaf multicastsyslogthreshold; //type: uint16
        ydk::YLeaf ipv6alpmcarvevalue; //type: uint16
        ydk::YLeaf routingmode; //type: PlatformRoutingMode
        ydk::YLeaf pclbalgo; //type: PlatformPcLbAlgo
        ydk::YLeaf urpfstatus; //type: NwAdminSt_
        ydk::YLeaf qosminbuffer; //type: PlatformQosMinBuffer
        class UnbindItems; //type: System::PltfmItems::UnbindItems
        class BdItems; //type: System::PltfmItems::BdItems
        class IntfItems; //type: System::PltfmItems::IntfItems
        class TcamRegionItems; //type: System::PltfmItems::TcamRegionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::UnbindItems> unbind_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::TcamRegionItems> tcamregion_items;
        
}; // System::PltfmItems


class System::PltfmItems::UnbindItems : public ydk::Entity
{
    public:
        UnbindItems();
        ~UnbindItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class UnbindPortListList; //type: System::PltfmItems::UnbindItems::UnbindPortListList

        ydk::YList unbindportlist_list;
        
}; // System::PltfmItems::UnbindItems


class System::PltfmItems::UnbindItems::UnbindPortListList : public ydk::Entity
{
    public:
        UnbindPortListList();
        ~UnbindPortListList();

        bool has_data() const override;
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
        class PortItems; //type: System::PltfmItems::UnbindItems::UnbindPortListList::PortItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::UnbindItems::UnbindPortListList::PortItems> port_items;
        
}; // System::PltfmItems::UnbindItems::UnbindPortListList


class System::PltfmItems::UnbindItems::UnbindPortListList::PortItems : public ydk::Entity
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

        class UnbindPortList; //type: System::PltfmItems::UnbindItems::UnbindPortListList::PortItems::UnbindPortList

        ydk::YList unbindport_list;
        
}; // System::PltfmItems::UnbindItems::UnbindPortListList::PortItems


class System::PltfmItems::UnbindItems::UnbindPortListList::PortItems::UnbindPortList : public ydk::Entity
{
    public:
        UnbindPortList();
        ~UnbindPortList();

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

}; // System::PltfmItems::UnbindItems::UnbindPortListList::PortItems::UnbindPortList


class System::PltfmItems::BdItems : public ydk::Entity
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
        class BdItems_; //type: System::PltfmItems::BdItems::BdItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::BdItems::BdItems_> bd_items;
        
}; // System::PltfmItems::BdItems


class System::PltfmItems::BdItems::BdItems_ : public ydk::Entity
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

        class BdList; //type: System::PltfmItems::BdItems::BdItems_::BdList

        ydk::YList bd_list;
        
}; // System::PltfmItems::BdItems::BdItems_


class System::PltfmItems::BdItems::BdItems_::BdList : public ydk::Entity
{
    public:
        BdList();
        ~BdList();

        bool has_data() const override;
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
        class EltmBdItems; //type: System::PltfmItems::BdItems::BdItems_::BdList::EltmBdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::BdItems::BdItems_::BdList::EltmBdItems> eltmbd_items;
        
}; // System::PltfmItems::BdItems::BdItems_::BdList


class System::PltfmItems::BdItems::BdItems_::BdList::EltmBdItems : public ydk::Entity
{
    public:
        EltmBdItems();
        ~EltmBdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hwbdid; //type: uint32

}; // System::PltfmItems::BdItems::BdItems_::BdList::EltmBdItems


class System::PltfmItems::IntfItems : public ydk::Entity
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

        ydk::YLeaf descr; //type: string
        class IfItems; //type: System::PltfmItems::IntfItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems> if_items;
        
}; // System::PltfmItems::IntfItems


class System::PltfmItems::IntfItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::PltfmItems::IntfItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::PltfmItems::IntfItems::IfItems


class System::PltfmItems::IntfItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class EltmIfItems; //type: System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems
        class RtvrfMbrItems; //type: System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems> eltmif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::PltfmItems::IntfItems::IfItems::IfList


class System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems : public ydk::Entity
{
    public:
        EltmIfItems();
        ~EltmIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hwbdid; //type: uint32

}; // System::PltfmItems::IntfItems::IfItems::IfList::EltmIfItems


class System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::PltfmItems::IntfItems::IfItems::IfList::RtvrfMbrItems


class System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems


class System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::PltfmItems::IntfItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::PltfmItems::TcamRegionItems : public ydk::Entity
{
    public:
        TcamRegionItems();
        ~TcamRegionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf eraclsize; //type: uint32
        ydk::YLeaf vpcconvergencesize; //type: uint32
        ydk::YLeaf racllitesize; //type: uint32
        ydk::YLeaf ipv6ifaclsize; //type: uint32
        ydk::YLeaf eipv6raclsize; //type: uint32
        ydk::YLeaf ifacllitesize; //type: uint32
        ydk::YLeaf vaclsize; //type: uint32
        ydk::YLeaf ifaclsize; //type: uint32
        ydk::YLeaf evaclsize; //type: uint32
        ydk::YLeaf qossize; //type: uint32
        ydk::YLeaf raclsize; //type: uint32
        ydk::YLeaf ingflowsize; //type: uint32

}; // System::PltfmItems::TcamRegionItems


class System::SatmItems : public ydk::Entity
{
    public:
        SatmItems();
        ~SatmItems();

        bool has_data() const override;
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
        class DextchItems; //type: System::SatmItems::DextchItems
        class FabpItems; //type: System::SatmItems::FabpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::DextchItems> dextch_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FabpItems> fabp_items;
        
}; // System::SatmItems


class System::SatmItems::DextchItems : public ydk::Entity
{
    public:
        DextchItems();
        ~DextchItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DExtChList; //type: System::SatmItems::DextchItems::DExtChList

        ydk::YList dextch_list;
        
}; // System::SatmItems::DextchItems


class System::SatmItems::DextchItems::DExtChList : public ydk::Entity
{
    public:
        DExtChList();
        ~DExtChList();

        bool has_data() const override;
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
        ydk::YLeaf ser; //type: string
        ydk::YLeaf operst; //type: SatmExtChOperSt
        ydk::YLeaf ver; //type: string
        ydk::YLeaf swver; //type: string
        ydk::YLeaf intver; //type: string
        ydk::YLeaf swintver; //type: string
        ydk::YLeaf swgen; //type: uint16
        ydk::YLeaf controlfport; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf descr; //type: string

}; // System::SatmItems::DextchItems::DExtChList


class System::SatmItems::FabpItems : public ydk::Entity
{
    public:
        FabpItems();
        ~FabpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FabPList; //type: System::SatmItems::FabpItems::FabPList

        ydk::YList fabp_list;
        
}; // System::SatmItems::FabpItems


class System::SatmItems::FabpItems::FabPList : public ydk::Entity
{
    public:
        FabPList();
        ~FabPList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: SatmOperSt
        ydk::YLeaf extchid; //type: uint16
        ydk::YLeaf fsmst; //type: SatmFpFsmSt
        ydk::YLeaf remotelinkid; //type: uint16
        ydk::YLeaf flags; //type: string
        class HostpItems; //type: System::SatmItems::FabpItems::FabPList::HostpItems
        class RemotefcotItems; //type: System::SatmItems::FabpItems::FabPList::RemotefcotItems
        class Remotefcotx2Items; //type: System::SatmItems::FabpItems::FabPList::Remotefcotx2Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FabpItems::FabPList::HostpItems> hostp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FabpItems::FabPList::RemotefcotItems> remotefcot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SatmItems::FabpItems::FabPList::Remotefcotx2Items> remotefcotx2_items;
        
}; // System::SatmItems::FabpItems::FabPList


class System::SatmItems::FabpItems::FabPList::HostpItems : public ydk::Entity
{
    public:
        HostpItems();
        ~HostpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HostPList; //type: System::SatmItems::FabpItems::FabPList::HostpItems::HostPList

        ydk::YList hostp_list;
        
}; // System::SatmItems::FabpItems::FabPList::HostpItems


class System::SatmItems::FabpItems::FabPList::HostpItems::HostPList : public ydk::Entity
{
    public:
        HostPList();
        ~HostPList();

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
        ydk::YLeaf operst; //type: SatmHpOperSt
        ydk::YLeaf fabricport; //type: string

}; // System::SatmItems::FabpItems::FabPList::HostpItems::HostPList


class System::SatmItems::FabpItems::FabPList::RemotefcotItems : public ydk::Entity
{
    public:
        RemotefcotItems();
        ~RemotefcotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fcotstatus; //type: uint8
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf versionid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf xcvrid; //type: uint8
        ydk::YLeaf xcvrextid; //type: uint8
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf xcvrcode; //type: string
        ydk::YLeaf encoding; //type: uint8
        ydk::YLeaf brin100mhz; //type: uint8
        ydk::YLeaf baseresvd1; //type: uint8
        ydk::YLeaf distinkmfor9u; //type: uint8
        ydk::YLeaf distin100mfor9u; //type: uint8
        ydk::YLeaf distin10mfor50u; //type: uint8
        ydk::YLeaf distin10mfor60u; //type: uint8
        ydk::YLeaf distin1mforcu; //type: uint8
        ydk::YLeaf baseresvd2; //type: uint8
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf baseresvd3; //type: uint8
        ydk::YLeaf vendorid; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf baseresvd4; //type: string
        ydk::YLeaf ccid; //type: uint8
        ydk::YLeaf extoption; //type: string
        ydk::YLeaf brmaxmargin; //type: uint8
        ydk::YLeaf brminmargin; //type: uint8
        ydk::YLeaf vendorsn; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf diagmontype; //type: uint8
        ydk::YLeaf enhoption; //type: uint8
        ydk::YLeaf sff8472compl; //type: uint8
        ydk::YLeaf ccex; //type: uint8
        ydk::YLeaf vendordata; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf fcottype; //type: uint8
        ydk::YLeaf gigethcc; //type: uint8
        ydk::YLeaf fctxtype; //type: uint8

}; // System::SatmItems::FabpItems::FabPList::RemotefcotItems


class System::SatmItems::FabpItems::FabPList::Remotefcotx2Items : public ydk::Entity
{
    public:
        Remotefcotx2Items();
        ~Remotefcotx2Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fcotstatus; //type: uint8
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf versionid; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
        ydk::YLeaf eid; //type: string
        ydk::YLeaf xcvrtype; //type: uint8
        ydk::YLeaf connecttype; //type: uint8
        ydk::YLeaf bitencoding; //type: uint8
        ydk::YLeaf bitratembps; //type: string
        ydk::YLeaf protocoltype; //type: uint8
        ydk::YLeaf xgethcode; //type: string
        ydk::YLeaf sonetsdhcode; //type: string
        ydk::YLeaf xgfccode; //type: string
        ydk::YLeaf range; //type: string
        ydk::YLeaf fibretype; //type: string
        ydk::YLeaf wavelench0; //type: string
        ydk::YLeaf wavelench1; //type: string
        ydk::YLeaf wavelench2; //type: string
        ydk::YLeaf wavelench3; //type: string
        ydk::YLeaf packageoui; //type: string
        ydk::YLeaf vendoroui; //type: string
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf vendorserno; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf lotcode; //type: string
        ydk::YLeaf fivevstressenv; //type: uint8
        ydk::YLeaf threethreevstressenv; //type: uint8
        ydk::YLeaf apsstressenv; //type: uint8
        ydk::YLeaf normalapsvolt; //type: uint8
        ydk::YLeaf diagoptmoncap; //type: uint8
        ydk::YLeaf lowpwrstartupcap; //type: uint8
        ydk::YLeaf reserved; //type: uint8
        ydk::YLeaf checksum; //type: uint8
        ydk::YLeaf ciscopid; //type: string
        ydk::YLeaf ciscovid; //type: string
        ydk::YLeaf ciscosn; //type: string
        ydk::YLeaf ciscopn; //type: string
        ydk::YLeaf ciscorev; //type: string
        ydk::YLeaf extvendorspecific; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
        ydk::YLeaf fcottype; //type: uint8
        ydk::YLeaf gigethcc; //type: uint8
        ydk::YLeaf fctxtype; //type: uint8

}; // System::SatmItems::FabpItems::FabPList::Remotefcotx2Items


class System::AdjacencyItems : public ydk::Entity
{
    public:
        AdjacencyItems();
        ~AdjacencyItems();

        bool has_data() const override;
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
        class InstItems; //type: System::AdjacencyItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems> inst_items;
        
}; // System::AdjacencyItems


class System::AdjacencyItems::InstItems : public ydk::Entity
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
        class DomItems; //type: System::AdjacencyItems::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems> dom_items;
        
}; // System::AdjacencyItems::InstItems


class System::AdjacencyItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::AdjacencyItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::AdjacencyItems::InstItems::DomItems


class System::AdjacencyItems::InstItems::DomItems::DomList : public ydk::Entity
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
        class DbItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems> db_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: AdjacencyDbT
        ydk::YLeaf name; //type: string
        class IfItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems> if_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems : public ydk::Entity
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

        class IfList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList : public ydk::Entity
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

        ydk::YLeaf ifid; //type: string
        class IpItems; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems> ip_items;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems : public ydk::Entity
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

        class AdjEpList; //type: System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems


class System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf ip; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf operst; //type: AdjacencyAdjOperSt
        ydk::YLeaf physifid; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string

}; // System::AdjacencyItems::InstItems::DomItems::DomList::DbItems::DbList::IfItems::IfList::IpItems::AdjEpList


class System::ArpItems : public ydk::Entity
{
    public:
        ArpItems();
        ~ArpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::ArpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems> inst_items;
        
}; // System::ArpItems


class System::ArpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf suppression_timeout; //type: uint16
        ydk::YLeaf offlisttimeout; //type: uint16
        ydk::YLeaf rarpfabricfwding; //type: NwAdminSt_
        ydk::YLeaf rarpfabricfwdingrate; //type: uint16
        ydk::YLeaf cachelimit; //type: uint32
        ydk::YLeaf cachesyslograte; //type: uint32
        ydk::YLeaf logginglevel; //type: ArpLoggingLevel
        ydk::YLeaf adjlogginglevel; //type: ArpLoggingLevel
        ydk::YLeaf ipadjroutedistance; //type: uint32
        ydk::YLeaf allowstaticarpoutsidesubnet; //type: NwAdminSt_
        ydk::YLeaf arpunnumsviswreplication; //type: NwAdminSt_
        ydk::YLeaf configerr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class GlobalstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems
        class DomItems; //type: System::ArpItems::InstItems::DomItems
        class IpgleanthrottleItems; //type: System::ArpItems::InstItems::IpgleanthrottleItems
        class EvtLogsItems; //type: System::ArpItems::InstItems::EvtLogsItems
        class VpcItems; //type: System::ArpItems::InstItems::VpcItems
        class DbItems; //type: System::ArpItems::InstItems::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems> globalstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::IpgleanthrottleItems> ipgleanthrottle_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::EvtLogsItems> evtlogs_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::VpcItems> vpc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DbItems> db_items;
        
}; // System::ArpItems::InstItems


class System::ArpItems::InstItems::GlobalstatsItems : public ydk::Entity
{
    public:
        GlobalstatsItems();
        ~GlobalstatsItems();

        bool has_data() const override;
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
        class ControllerstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems
        class VpcstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems
        class TunnelstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems
        class SupcachestatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems
        class OfastatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems> controllerstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems> vpcstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems> tunnelstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems> supcachestats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems> ofastats_items;
        
}; // System::ArpItems::InstItems::GlobalstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems : public ydk::Entity
{
    public:
        ControllerstatsItems();
        ~ControllerstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adjaddcount; //type: uint64
        ydk::YLeaf adjdelcount; //type: uint64
        ydk::YLeaf adjadderrorcount; //type: uint64
        ydk::YLeaf adjdelerrorcount; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::ControllerstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems : public ydk::Entity
{
    public:
        VpcstatsItems();
        ~VpcstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cfspulldropsinceoff; //type: uint64
        ydk::YLeaf cfspushdropsinceoff; //type: uint64
        ydk::YLeaf sendignorepullreqcfsoe; //type: uint64
        ydk::YLeaf sendignorepushmsgcfsoe; //type: uint64
        ydk::YLeaf imfailcfspayload; //type: uint64
        ydk::YLeaf mcecmfailcfspayload; //type: uint64
        ydk::YLeaf invalidmctpccfspayload; //type: uint64
        ydk::YLeaf ptlookfailcfspayload; //type: uint64
        ydk::YLeaf cfsrspfailinvalidmct; //type: uint64
        ydk::YLeaf cfsrspfailcfspayload; //type: uint64
        ydk::YLeaf retrievevpcfailpushmsg; //type: uint64
        ydk::YLeaf retifindexfrmvpcfail; //type: uint64
        ydk::YLeaf retifindexfrmvpcfailsync; //type: uint64
        ydk::YLeaf rspsentcfsoe; //type: uint64
        ydk::YLeaf rsprecvcfsoe; //type: uint64
        ydk::YLeaf rsprecvcfsoeerr; //type: uint64
        ydk::YLeaf recvcfsoe; //type: uint64
        ydk::YLeaf sentfailcfsoe; //type: uint64
        ydk::YLeaf mcecmsendapifailcfsoe; //type: uint64
        ydk::YLeaf sendcfsoe; //type: uint64
        class SyncstatsItems; //type: System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems> syncstats_items;
        
}; // System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems : public ydk::Entity
{
    public:
        SyncstatsItems();
        ~SyncstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ptaddfailofflist; //type: uint64
        ydk::YLeaf mallocfailofflistdb; //type: uint64
        ydk::YLeaf timercreatefailofflistdb; //type: uint64
        ydk::YLeaf adjaddfailofflistdb; //type: uint64
        ydk::YLeaf ptlookupfailofflistdb; //type: uint64
        ydk::YLeaf vlanmismatchofflistdb; //type: uint64
        ydk::YLeaf invalidsviofflistdb; //type: uint64
        ydk::YLeaf svidownofflistdb; //type: uint64
        ydk::YLeaf mctdownofflistdb; //type: uint64
        ydk::YLeaf ctxtypeinvalidofflistdb; //type: uint64
        ydk::YLeaf vrfinvalidofflistdb; //type: uint64
        ydk::YLeaf invalidipofflistdb; //type: uint64
        ydk::YLeaf ipsanityfailofflistdb; //type: uint64
        ydk::YLeaf macsanityfailofflistdb; //type: uint64
        ydk::YLeaf ownroutermacofflistdb; //type: uint64
        ydk::YLeaf ownipofflistdb; //type: uint64
        ydk::YLeaf ownvipofflistdb; //type: uint64
        ydk::YLeaf adjcreatefailofflistdb; //type: uint64
        ydk::YLeaf subnetmismatchofflistdb; //type: uint64
        ydk::YLeaf dupentryofflistdb; //type: uint64
        ydk::YLeaf ipnotenofflistdb; //type: uint64
        ydk::YLeaf totdropofflistdb; //type: uint64
        ydk::YLeaf totdontdropofflistdb; //type: uint64
        ydk::YLeaf totadjaddofflistdb; //type: uint64
        ydk::YLeaf totadjdelofflistdb; //type: uint64
        ydk::YLeaf totadjignoredofflistdb; //type: uint64
        ydk::YLeaf totadjfrmpeertoadd; //type: uint64
        ydk::YLeaf totadjfrmpeertodel; //type: uint64
        ydk::YLeaf totadjsentperiodically; //type: uint64
        ydk::YLeaf totadjpeertoadd; //type: uint64
        ydk::YLeaf totadjpeertodel; //type: uint64
        ydk::YLeaf totperiodicsyncadj; //type: uint64
        ydk::YLeaf totadjaddfailduringsyncsend; //type: uint64
        ydk::YLeaf totdropduringsyncinvalidsvi; //type: uint64
        ydk::YLeaf totdropsyncsvidown; //type: uint64
        ydk::YLeaf totdropsyncinvalidctxt; //type: uint64
        ydk::YLeaf totdropsyncnulladj; //type: uint64
        ydk::YLeaf totdropsyncnullip; //type: uint64
        ydk::YLeaf totsyncadjaddl2supcache; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::VpcstatsItems::SyncstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems : public ydk::Entity
{
    public:
        TunnelstatsItems();
        ~TunnelstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf tottunnelrcvd; //type: uint64
        ydk::YLeaf rxforingressvpc; //type: uint64
        ydk::YLeaf rxingressforgpc; //type: uint64
        ydk::YLeaf rxingressorphanvpc; //type: uint64
        ydk::YLeaf rxingressorphanvpcplus; //type: uint64
        ydk::YLeaf totpacksent; //type: uint64
        ydk::YLeaf pktsentarpsnoop; //type: uint64
        ydk::YLeaf pktsentnonlocalvip; //type: uint64
        ydk::YLeaf pktsentpeergway; //type: uint64
        ydk::YLeaf txingressvpc; //type: uint64
        ydk::YLeaf txingressgpc; //type: uint64
        ydk::YLeaf txingressorphanvpc; //type: uint64
        ydk::YLeaf txingressorphanvpcplus; //type: uint64
        ydk::YLeaf totrecvdropped; //type: uint64
        ydk::YLeaf totsenddropped; //type: uint64
        ydk::YLeaf sendfaildrop; //type: uint64
        ydk::YLeaf rcvdinvalidver; //type: uint64
        ydk::YLeaf rcvdinvalidpayloadtype; //type: uint64
        ydk::YLeaf rcvdmctif; //type: uint64
        ydk::YLeaf rcvdinvalidingressport; //type: uint64
        ydk::YLeaf dropsentinvalidport; //type: uint64
        ydk::YLeaf droprecvinvalidgpccore; //type: uint64
        ydk::YLeaf droprecvinvalidgpcpeer; //type: uint64
        ydk::YLeaf droprecvfailretrievegpc; //type: uint64
        ydk::YLeaf dropsendfailretrievegpc; //type: uint64
        ydk::YLeaf failretrievevpcid; //type: uint64
        ydk::YLeaf imapifail; //type: uint64
        ydk::YLeaf invalidcontext; //type: uint64
        ydk::YLeaf dropmctdown; //type: uint64
        ydk::YLeaf recvdropmbuffail; //type: uint64
        ydk::YLeaf senddropmbuffail; //type: uint64
        ydk::YLeaf tunnelfailed; //type: uint64
        ydk::YLeaf tunnelfailcenetwork; //type: uint64
        ydk::YLeaf mcecmkeynotfound; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::TunnelstatsItems


class System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems : public ydk::Entity
{
    public:
        SupcachestatsItems();
        ~SupcachestatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf requests; //type: uint64
        ydk::YLeaf requestsl2; //type: uint64
        ydk::YLeaf gratuitous; //type: uint64
        ydk::YLeaf gratuitousl2; //type: uint64
        ydk::YLeaf fwdrequestsl3; //type: uint64
        ydk::YLeaf fwdrepliesl3; //type: uint64
        ydk::YLeaf fwdrequestoncoreport; //type: uint64
        ydk::YLeaf fwdreplyoncoreport; //type: uint64
        ydk::YLeaf sentdrop; //type: uint64
        ydk::YLeaf sentreql2; //type: uint64
        ydk::YLeaf sentreplyl2; //type: uint64
        ydk::YLeaf sentreqcorel2; //type: uint64
        ydk::YLeaf sentreplycorel2; //type: uint64
        ydk::YLeaf sentdropl2; //type: uint64
        ydk::YLeaf recvreql3; //type: uint64
        ydk::YLeaf recvreplyl3; //type: uint64
        ydk::YLeaf recvlocalreql3; //type: uint64
        ydk::YLeaf recvlocalreplyl3; //type: uint64
        ydk::YLeaf recvgratarp; //type: uint64
        ydk::YLeaf recvdrop; //type: uint64
        ydk::YLeaf recvrequestl2; //type: uint64
        ydk::YLeaf recvreplyl2; //type: uint64
        ydk::YLeaf recvgratarpl2; //type: uint64
        ydk::YLeaf recvdropl2; //type: uint64
        ydk::YLeaf localentryadds; //type: uint64
        ydk::YLeaf localentrydel; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::SupcachestatsItems


class System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems : public ydk::Entity
{
    public:
        OfastatsItems();
        ~OfastatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dpadjerrdel; //type: uint64
        ydk::YLeaf cpmacmismatcherrdel; //type: uint64
        ydk::YLeaf cpnullmacerrdel; //type: uint64
        ydk::YLeaf cpnoadjerrdel; //type: uint64
        ydk::YLeaf cpcpnhmismatcherrdel; //type: uint64
        ydk::YLeaf cpadjdelfailureerr; //type: uint64
        ydk::YLeaf cpnullmacerradd; //type: uint64
        ydk::YLeaf cpdpmacmismatcherradd; //type: uint64
        ydk::YLeaf cpcpmacmismatcherradd; //type: uint64
        ydk::YLeaf cpaddfirsterr; //type: uint64
        ydk::YLeaf dpoverwritecperr; //type: uint64
        ydk::YLeaf dpcpnhmismatcherradd; //type: uint64
        ydk::YLeaf cpcpnhmismatcherradd; //type: uint64
        ydk::YLeaf cpdpnhmismatcherradd; //type: uint64
        ydk::YLeaf cpadjaddfailureerr; //type: uint64
        ydk::YLeaf barrierresponseerr; //type: uint64

}; // System::ArpItems::InstItems::GlobalstatsItems::OfastatsItems


class System::ArpItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::ArpItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::ArpItems::InstItems::DomItems


class System::ArpItems::InstItems::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf encap; //type: string
        class DbItems; //type: System::ArpItems::InstItems::DomItems::DomList::DbItems
        class DomstatstxItems; //type: System::ArpItems::InstItems::DomItems::DomList::DomstatstxItems
        class DomstatsrxItems; //type: System::ArpItems::InstItems::DomItems::DomList::DomstatsrxItems
        class DomstatsadjItems; //type: System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems
        class DomstatsmiscItems; //type: System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems
        class IfItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DomstatstxItems> domstatstx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DomstatsrxItems> domstatsrx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DomstatsadjItems> domstatsadj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DomstatsmiscItems> domstatsmisc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems> if_items;
        
}; // System::ArpItems::InstItems::DomItems::DomList


class System::ArpItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::DbItems


class System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: ArpDbT
        ydk::YLeaf name; //type: string
        class AdjItems; //type: System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems> adj_items;
        
}; // System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList


class System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems


class System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf ifid; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf upts; //type: string
        ydk::YLeaf operst; //type: ArpAdjOperSt
        ydk::YLeaf physifid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string

}; // System::ArpItems::InstItems::DomItems::DomList::DbItems::DbList::AdjItems::AdjEpList


class System::ArpItems::InstItems::DomItems::DomList::DomstatstxItems : public ydk::Entity
{
    public:
        DomstatstxItems();
        ~DomstatstxItems();

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
        ydk::YLeaf pktsentreq; //type: uint32
        ydk::YLeaf pktsentrsp; //type: uint32
        ydk::YLeaf pktsentreql2; //type: uint32
        ydk::YLeaf pktsentrspl2; //type: uint32
        ydk::YLeaf pktsentgratreq; //type: uint32
        ydk::YLeaf pktsenttunnel; //type: uint32
        ydk::YLeaf pktsentdrop; //type: uint32
        ydk::YLeaf pktsentfailinvpkt; //type: uint32
        ydk::YLeaf pktsentfailmbufop; //type: uint32
        ydk::YLeaf pktsentfailnoifindex; //type: uint32
        ydk::YLeaf pktsentfailnovlanforsvi; //type: uint32
        ydk::YLeaf pktsentfailunsupportedint; //type: uint32
        ydk::YLeaf pktsentfailimdown; //type: uint32
        ydk::YLeaf pktsentfailinvsrcip; //type: uint32
        ydk::YLeaf pktsentfailinvdstip; //type: uint32
        ydk::YLeaf pktsentfailownip; //type: uint32
        ydk::YLeaf pktsentfailctxtnotcreated; //type: uint32
        ydk::YLeaf pktsentfailbadctxtid; //type: uint32
        ydk::YLeaf pktsentfailunattachedip; //type: uint32
        ydk::YLeaf pktsentfailadjaddfailure; //type: uint32
        ydk::YLeaf pktsentfailnosrcip; //type: uint32
        ydk::YLeaf pktsentfailnomac; //type: uint32
        ydk::YLeaf pktsentfailclientenqfailed; //type: uint32
        ydk::YLeaf pktsentfailproxydstnotrchbl; //type: uint32
        ydk::YLeaf pktsentfailinvlocalproxy; //type: uint32
        ydk::YLeaf pktsentfailinvproxy; //type: uint32
        ydk::YLeaf pktsentfailvipgroupnotactive; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::DomstatstxItems


class System::ArpItems::InstItems::DomItems::DomList::DomstatsrxItems : public ydk::Entity
{
    public:
        DomstatsrxItems();
        ~DomstatsrxItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pktrcvd; //type: uint32
        ydk::YLeaf pktrcvdreq; //type: uint32
        ydk::YLeaf pktrcvdrsp; //type: uint32
        ydk::YLeaf pktrcvdproxyarp; //type: uint32
        ydk::YLeaf pktrcvdlocalproxyarp; //type: uint32
        ydk::YLeaf pktrcvdreql2; //type: uint32
        ydk::YLeaf pktrcvdrspl2; //type: uint32
        ydk::YLeaf pktrcvdtunnel; //type: uint32
        ydk::YLeaf pktrcvdfastpath; //type: uint32
        ydk::YLeaf pktrcvdsnoop; //type: uint32
        ydk::YLeaf pktrcvddrp; //type: uint32
        ydk::YLeaf pktrcvdmbufop; //type: uint32
        ydk::YLeaf pktrcvddrpbadif; //type: uint32
        ydk::YLeaf pktrcvddrpbadlen; //type: uint32
        ydk::YLeaf pktrcvddrpbadproto; //type: uint32
        ydk::YLeaf pktrcvddrpbadl2addrlen; //type: uint32
        ydk::YLeaf pktrcvddrpbadl3addrlen; //type: uint32
        ydk::YLeaf pktrcvddrpinvalsrcip; //type: uint32
        ydk::YLeaf pktrcvddrpdirbcast; //type: uint32
        ydk::YLeaf pktrcvddrpinvaldstip; //type: uint32
        ydk::YLeaf pktrcvddrpbadsrcmac; //type: uint32
        ydk::YLeaf pktrcvddrpownsrcmac; //type: uint32
        ydk::YLeaf pktrcvddrpownsrcip; //type: uint32
        ydk::YLeaf pktrcvddrparpifnomem; //type: uint32
        ydk::YLeaf pktrcvddrpnotforus; //type: uint32
        ydk::YLeaf pktrcvdlearnanddropnotforus; //type: uint32
        ydk::YLeaf pktrcvddrpsubnetmismatch; //type: uint32
        ydk::YLeaf pktrcvddrpnotinit; //type: uint32
        ydk::YLeaf pktrcvddrpbadctxt; //type: uint32
        ydk::YLeaf pktrcvddrpctxtnotcreated; //type: uint32
        ydk::YLeaf pktrcvddrpl2localproxyarp; //type: uint32
        ydk::YLeaf pktrcvddrpl2purel2pkt; //type: uint32
        ydk::YLeaf pktrcvddrpl2prtuntrusted; //type: uint32
        ydk::YLeaf pktrcvddrpstdbyfhrpvip; //type: uint32
        ydk::YLeaf pktrcvddrpgratonproxyarp; //type: uint32
        ydk::YLeaf pktrcvddrparprequestignore; //type: uint32
        ydk::YLeaf pktrcvddrpl2fmqueryfail; //type: uint32
        ydk::YLeaf pktrcvddrptunnelfail; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::DomstatsrxItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_39_ */

