#ifndef _CISCO_NX_OS_DEVICE_40_
#define _CISCO_NX_OS_DEVICE_40_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_39.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList : public ydk::Entity
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
        class CoreItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems : public ydk::Entity
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

        class CoreList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems : public ydk::Entity
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

        class DimmList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems


class System::ChItems::SupslotItems::SupCSlotList::RstrecItems : public ydk::Entity
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

        class CardRstRecList; //type: System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList

        ydk::YList cardrstrec_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::RstrecItems


class System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList : public ydk::Entity
{
    public:
        CardRstRecList();
        ~CardRstRecList();

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
        ydk::YLeaf reason; //type: SyshistRstRsn
        ydk::YLeaf reasonqual; //type: string
        ydk::YLeaf ver; //type: string
        ydk::YLeaf service; //type: string

}; // System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList


class System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems


class System::ChItems::LcslotItems : public ydk::Entity
{
    public:
        LcslotItems();
        ~LcslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LCSlotList; //type: System::ChItems::LcslotItems::LCSlotList

        ydk::YList lcslot_list;
        
}; // System::ChItems::LcslotItems


class System::ChItems::LcslotItems::LCSlotList : public ydk::Entity
{
    public:
        LCSlotList();
        ~LCSlotList();

        bool has_data() const override;
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
        ydk::YLeaf purgecfg; //type: boolean
        ydk::YLeaf poweroff; //type: EqptPoweroffSt
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class LcItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems
        class RstrecItems; //type: System::ChItems::LcslotItems::LCSlotList::RstrecItems
        class RtoosSlotItems; //type: System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems> lc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::RstrecItems> rstrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::LcslotItems::LCSlotList


class System::ChItems::LcslotItems::LCSlotList::LcItems : public ydk::Entity
{
    public:
        LcItems();
        ~LcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf breakoutfactor; //type: uint32
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf macb; //type: string
        ydk::YLeaf mace; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf poweractualdraw; //type: uint32
        ydk::YLeaf powerallocated; //type: uint32
        class RunningItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems
        class EjItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems
        class LocledItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems
        class EobcItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems
        class FabportItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems
        class LeafportItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems
        class HostextportItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems
        class LeafextportItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems
        class SensorItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems
        class SplcItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems
        class AsicItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems
        class CpuItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems
        class DimmItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems
        class FlashItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems
        class ObflItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems> ej_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems> eobc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems> fabport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems> leafport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems> hostextport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems> leafextport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems> splc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems> obfl_items;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems : public ydk::Entity
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
        ydk::YLeaf ts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems : public ydk::Entity
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

        class EjecList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList

        ydk::YList ejec_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList


class System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList


class System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems : public ydk::Entity
{
    public:
        EobcItems();
        ~EobcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EobcPList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList

        ydk::YList eobcp_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList : public ydk::Entity
{
    public:
        EobcPList();
        ~EobcPList();

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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList


class System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems : public ydk::Entity
{
    public:
        FabportItems();
        ~FabportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FabPList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList

        ydk::YList fabp_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptPortT
        ydk::YLeaf speed; //type: uint64
        class RemotePortItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems
        class LocledItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems> remoteport_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems> locled_items;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList


class System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems : public ydk::Entity
{
    public:
        RemotePortItems();
        ~RemotePortItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePortList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList

        ydk::YList remoteport_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList : public ydk::Entity
{
    public:
        RemotePortList();
        ~RemotePortList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldpadjepinstid; //type: string
        ydk::YLeaf remoteportdesc; //type: string
        ydk::YLeaf remotesysdesc; //type: string
        ydk::YLeaf remoteip; //type: string
        ydk::YLeaf localifid; //type: string

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList


class System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList


class System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems : public ydk::Entity
{
    public:
        LeafportItems();
        ~LeafportItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LeafPList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList

        ydk::YList leafp_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList : public ydk::Entity
{
    public:
        LeafPList();
        ~LeafPList();

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
        class LocledItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems> locled_items;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList


class System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList


class System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems : public ydk::Entity
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

        class ExtChHPList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList

        ydk::YList extchhp_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList


class System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems : public ydk::Entity
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

        class ExtChFPList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList

        ydk::YList extchfp_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList


class System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems : public ydk::Entity
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

        class SensorList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems : public ydk::Entity
{
    public:
        SplcItems();
        ~SplcItems();

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
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems
        class SplcblkItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems
        class SppdItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems
        class SpsdItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems
        class SpsensorblkItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems> splcblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems> sppd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems> spsensorblk_items;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems : public ydk::Entity
{
    public:
        SplcblkItems();
        ~SplcblkItems();

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
        class SpsdItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems
        class SppdItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems> sppd_items;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems : public ydk::Entity
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
        class SpsdItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems> spsd_items;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList


class System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems : public ydk::Entity
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

        class AsicList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList


class System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems : public ydk::Entity
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

        class CPUList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList : public ydk::Entity
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
        class CoreItems; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList


class System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems : public ydk::Entity
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

        class CoreList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems : public ydk::Entity
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

        class DimmList; //type: System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList


class System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems


class System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems


class System::ChItems::LcslotItems::LCSlotList::RstrecItems : public ydk::Entity
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

        class CardRstRecList; //type: System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList

        ydk::YList cardrstrec_list;
        
}; // System::ChItems::LcslotItems::LCSlotList::RstrecItems


class System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList : public ydk::Entity
{
    public:
        CardRstRecList();
        ~CardRstRecList();

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
        ydk::YLeaf reason; //type: SyshistRstRsn
        ydk::YLeaf reasonqual; //type: string
        ydk::YLeaf ver; //type: string
        ydk::YLeaf service; //type: string

}; // System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList


class System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems : public ydk::Entity
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

}; // System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems


class System::ChItems::FcslotItems : public ydk::Entity
{
    public:
        FcslotItems();
        ~FcslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FCSlotList; //type: System::ChItems::FcslotItems::FCSlotList

        ydk::YList fcslot_list;
        
}; // System::ChItems::FcslotItems


class System::ChItems::FcslotItems::FCSlotList : public ydk::Entity
{
    public:
        FCSlotList();
        ~FCSlotList();

        bool has_data() const override;
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
        ydk::YLeaf poweroff; //type: EqptPoweroffSt
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class FcItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems
        class RstrecItems; //type: System::ChItems::FcslotItems::FCSlotList::RstrecItems
        class RtoosSlotItems; //type: System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems> fc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::RstrecItems> rstrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::FcslotItems::FCSlotList


class System::ChItems::FcslotItems::FCSlotList::FcItems : public ydk::Entity
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

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf poweractualdraw; //type: uint32
        ydk::YLeaf powerallocated; //type: uint32
        class RunningItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems
        class EjItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems
        class LocledItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems
        class EobcItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems
        class EpcItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems
        class SensorItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems
        class SplcItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems
        class AsicItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems
        class CpuItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems
        class DimmItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems
        class FlashItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems
        class ObflItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems> ej_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems> eobc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems> epc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems> splc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems> obfl_items;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems : public ydk::Entity
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
        ydk::YLeaf ts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems : public ydk::Entity
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

        class EjecList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList

        ydk::YList ejec_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList


class System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList


class System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems : public ydk::Entity
{
    public:
        EobcItems();
        ~EobcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EobcPList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList

        ydk::YList eobcp_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList : public ydk::Entity
{
    public:
        EobcPList();
        ~EobcPList();

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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList


class System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems : public ydk::Entity
{
    public:
        EpcItems();
        ~EpcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpcPList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList

        ydk::YList epcp_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList : public ydk::Entity
{
    public:
        EpcPList();
        ~EpcPList();

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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList


class System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems : public ydk::Entity
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

        class SensorList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems : public ydk::Entity
{
    public:
        SplcItems();
        ~SplcItems();

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
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems
        class SplcblkItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems
        class SppdItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems
        class SpsdItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems
        class SpsensorblkItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems> splcblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems> sppd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems> spsensorblk_items;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems : public ydk::Entity
{
    public:
        SplcblkItems();
        ~SplcblkItems();

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
        class SpsdItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems
        class SppdItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems> sppd_items;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems : public ydk::Entity
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
        class SpsdItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems> spsd_items;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList


class System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems : public ydk::Entity
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

        class AsicList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList


class System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems : public ydk::Entity
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

        class CPUList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList : public ydk::Entity
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
        class CoreItems; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList


class System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems : public ydk::Entity
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

        class CoreList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems : public ydk::Entity
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

        class DimmList; //type: System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList


class System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems


class System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems


class System::ChItems::FcslotItems::FCSlotList::RstrecItems : public ydk::Entity
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

        class CardRstRecList; //type: System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList

        ydk::YList cardrstrec_list;
        
}; // System::ChItems::FcslotItems::FCSlotList::RstrecItems


class System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList : public ydk::Entity
{
    public:
        CardRstRecList();
        ~CardRstRecList();

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
        ydk::YLeaf reason; //type: SyshistRstRsn
        ydk::YLeaf reasonqual; //type: string
        ydk::YLeaf ver; //type: string
        ydk::YLeaf service; //type: string

}; // System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList


class System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems : public ydk::Entity
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

}; // System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems


class System::ChItems::ScslotItems : public ydk::Entity
{
    public:
        ScslotItems();
        ~ScslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SysCSlotList; //type: System::ChItems::ScslotItems::SysCSlotList

        ydk::YList syscslot_list;
        
}; // System::ChItems::ScslotItems


class System::ChItems::ScslotItems::SysCSlotList : public ydk::Entity
{
    public:
        SysCSlotList();
        ~SysCSlotList();

        bool has_data() const override;
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
        class ScItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems
        class RstrecItems; //type: System::ChItems::ScslotItems::SysCSlotList::RstrecItems
        class RtoosSlotItems; //type: System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems> sc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::RstrecItems> rstrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList


class System::ChItems::ScslotItems::SysCSlotList::ScItems : public ydk::Entity
{
    public:
        ScItems();
        ~ScItems();

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
        ydk::YLeaf hwver; //type: string
        ydk::YLeaf type; //type: EqptCardT
        ydk::YLeaf operst; //type: EqptCOpSt
        ydk::YLeaf rdst; //type: EqptRdSt
        ydk::YLeaf swcid; //type: uint32
        ydk::YLeaf nump; //type: uint16
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf poweractualdraw; //type: uint32
        ydk::YLeaf powerallocated; //type: uint32
        class RunningItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems
        class LocledItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems
        class EobcItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems
        class EpcItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems
        class SensorItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems
        class SplcItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems
        class AsicItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems
        class CpuItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems
        class DimmItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems
        class FlashItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems
        class ObflItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems> eobc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems> epc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems> splc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems> obfl_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems : public ydk::Entity
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
        ydk::YLeaf ts; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems : public ydk::Entity
{
    public:
        EobcItems();
        ~EobcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EobcPList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList

        ydk::YList eobcp_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList : public ydk::Entity
{
    public:
        EobcPList();
        ~EobcPList();

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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems : public ydk::Entity
{
    public:
        EpcItems();
        ~EpcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpcPList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList

        ydk::YList epcp_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList : public ydk::Entity
{
    public:
        EpcPList();
        ~EpcPList();

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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems : public ydk::Entity
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

        class SensorList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems : public ydk::Entity
{
    public:
        SplcItems();
        ~SplcItems();

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
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf type; //type: EqptMemT
        ydk::YLeaf cap; //type: uint32
        ydk::YLeaf acc; //type: EqptAcc
        ydk::YLeaf operst; //type: EqptOpSt
        ydk::YLeaf numblk; //type: uint16
        class SpcmnItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems
        class SplcblkItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems
        class SppdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems
        class SpsdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems
        class SpsensorblkItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems> splcblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems> sppd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems> spsensorblk_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems : public ydk::Entity
{
    public:
        SplcblkItems();
        ~SplcblkItems();

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
        class SpsdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems
        class SppdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems> sppd_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems : public ydk::Entity
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
        class SpsdItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems> spsd_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems : public ydk::Entity
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

        class AsicList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems : public ydk::Entity
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

        class CPUList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList : public ydk::Entity
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
        class CoreItems; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems> core_items;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems : public ydk::Entity
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

        class CoreList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList

        ydk::YList core_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems : public ydk::Entity
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

        class DimmList; //type: System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList

        ydk::YList dimm_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList


class System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems


class System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems


class System::ChItems::ScslotItems::SysCSlotList::RstrecItems : public ydk::Entity
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

        class CardRstRecList; //type: System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList

        ydk::YList cardrstrec_list;
        
}; // System::ChItems::ScslotItems::SysCSlotList::RstrecItems


class System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList : public ydk::Entity
{
    public:
        CardRstRecList();
        ~CardRstRecList();

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
        ydk::YLeaf reason; //type: SyshistRstRsn
        ydk::YLeaf reasonqual; //type: string
        ydk::YLeaf ver; //type: string
        ydk::YLeaf service; //type: string

}; // System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList


class System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems : public ydk::Entity
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

}; // System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems


class System::ChItems::PsuslotItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class PsuSlotList; //type: System::ChItems::PsuslotItems::PsuSlotList

        ydk::YList psuslot_list;
        
}; // System::ChItems::PsuslotItems


class System::ChItems::PsuslotItems::PsuSlotList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class PsuItems; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems
        class RtoosSlotItems; //type: System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::PsuItems> psu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::PsuslotItems::PsuSlotList


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems : public ydk::Entity
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
        class PsfanItems; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems> psfan_items;
        
}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems : public ydk::Entity
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

        class PsFanList; //type: System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList

        ydk::YList psfan_list;
        
}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems


class System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList : public ydk::Entity
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

}; // System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList


class System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems : public ydk::Entity
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

}; // System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems


class System::ChItems::FtslotItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class FtSlotList; //type: System::ChItems::FtslotItems::FtSlotList

        ydk::YList ftslot_list;
        
}; // System::ChItems::FtslotItems


class System::ChItems::FtslotItems::FtSlotList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf physid; //type: uint32
        ydk::YLeaf type; //type: EqptSlotT
        ydk::YLeaf operst; //type: EqptSlotOpSt
        ydk::YLeaf loc; //type: EqptSlotLoc
        class FtItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems
        class RtoosSlotItems; //type: System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems> ft_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::FtslotItems::FtSlotList


class System::ChItems::FtslotItems::FtSlotList::FtItems : public ydk::Entity
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
        class EjItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems
        class FanItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems
        class LocledItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems
        class SpfanItems; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems> ej_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems> fan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems> spfan_items;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems : public ydk::Entity
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

        class EjecList; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList

        ydk::YList ejec_list;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList : public ydk::Entity
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

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList


class System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems : public ydk::Entity
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

        class FanList; //type: System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList

        ydk::YList fan_list;
        
}; // System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems


class System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList : public ydk::Entity
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

}; // System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList


}
}

#endif /* _CISCO_NX_OS_DEVICE_40_ */

