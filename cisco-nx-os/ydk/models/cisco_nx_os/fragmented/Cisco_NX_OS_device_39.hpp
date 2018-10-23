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
        ydk::YLeaf multicastservicereflectport; //type: uint32
        ydk::YLeaf multicastsyslogthreshold; //type: uint16
        ydk::YLeaf ipv6alpmcarvevalue; //type: uint16
        ydk::YLeaf routingmode; //type: PlatformRoutingMode
        ydk::YLeaf pclbalgo; //type: PlatformPcLbAlgo
        ydk::YLeaf urpfstatus; //type: NwAdminSt_
        ydk::YLeaf qosminbuffer; //type: PlatformQosMinBuffer
        ydk::YLeaf switchingmode; //type: PlatformSwitchingMode
        ydk::YLeaf switchingfabricspeed; //type: PlatformFabricSpeed
        class ModItems; //type: System::PltfmItems::ModItems
        class NveItems; //type: System::PltfmItems::NveItems
        class BdItems; //type: System::PltfmItems::BdItems
        class IntfItems; //type: System::PltfmItems::IntfItems
        class PoweroffEntityItems; //type: System::PltfmItems::PoweroffEntityItems
        class TcamRegionItems; //type: System::PltfmItems::TcamRegionItems
        class LatencymonitorItems; //type: System::PltfmItems::LatencymonitorItems
        class BuffermonitorItems; //type: System::PltfmItems::BuffermonitorItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ModItems> mod_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::NveItems> nve_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::PoweroffEntityItems> poweroffentity_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::TcamRegionItems> tcamregion_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::LatencymonitorItems> latencymonitor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::BuffermonitorItems> buffermonitor_items;
        
}; // System::PltfmItems


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


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems : public ydk::Entity
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

        class TcamStatsInstList; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList

        ydk::YList tcamstatsinst_list;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList : public ydk::Entity
{
    public:
        TcamStatsInstList();
        ~TcamStatsInstList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance; //type: uint16
        class RegionItems; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems> region_items;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems : public ydk::Entity
{
    public:
        RegionItems();
        ~RegionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TcamStatsRegionList; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList

        ydk::YList tcamstatsregion_list;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList : public ydk::Entity
{
    public:
        TcamStatsRegionList();
        ~TcamStatsRegionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf regionname; //type: string
        ydk::YLeaf regionsize; //type: uint16
        class UtilizationItems; //type: System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems> utilization_items;
        
}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList


class System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems : public ydk::Entity
{
    public:
        UtilizationItems();
        ~UtilizationItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf used; //type: uint16
        ydk::YLeaf free; //type: uint16
        ydk::YLeaf percent; //type: decimal64
        ydk::YLeaf ipv4used; //type: uint16
        ydk::YLeaf ipv4percent; //type: decimal64
        ydk::YLeaf ipv6used; //type: uint16
        ydk::YLeaf ipv6percent; //type: decimal64
        ydk::YLeaf macused; //type: uint16
        ydk::YLeaf macpercent; //type: decimal64
        ydk::YLeaf allused; //type: uint16
        ydk::YLeaf allpercent; //type: decimal64
        ydk::YLeaf otherused; //type: uint16
        ydk::YLeaf otherpercent; //type: decimal64

}; // System::PltfmItems::ModItems::TcamStatsModuleList::InstItems::TcamStatsInstList::RegionItems::TcamStatsRegionList::UtilizationItems


class System::PltfmItems::NveItems : public ydk::Entity
{
    public:
        NveItems();
        ~NveItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NVEList; //type: System::PltfmItems::NveItems::NVEList

        ydk::YList nve_list;
        
}; // System::PltfmItems::NveItems


class System::PltfmItems::NveItems::NVEList : public ydk::Entity
{
    public:
        NVEList();
        ~NVEList();

        bool has_data() const override;
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
        class InfravlanItems; //type: System::PltfmItems::NveItems::NVEList::InfravlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::NveItems::NVEList::InfravlanItems> infravlan_items;
        
}; // System::PltfmItems::NveItems::NVEList


class System::PltfmItems::NveItems::NVEList::InfravlanItems : public ydk::Entity
{
    public:
        InfravlanItems();
        ~InfravlanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InfraVlanList; //type: System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList

        ydk::YList infravlan_list;
        
}; // System::PltfmItems::NveItems::NVEList::InfravlanItems


class System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList : public ydk::Entity
{
    public:
        InfraVlanList();
        ~InfraVlanList();

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
        ydk::YLeaf force; //type: PlatformInfraVlanForce

}; // System::PltfmItems::NveItems::NVEList::InfravlanItems::InfraVlanList


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

}; // System::PltfmItems::BdItems::BdItems_::BdList


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


class System::PltfmItems::PoweroffEntityItems : public ydk::Entity
{
    public:
        PoweroffEntityItems();
        ~PoweroffEntityItems();

        bool has_data() const override;
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
        class PoweroffModuleItems; //type: System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems> poweroffmodule_items;
        
}; // System::PltfmItems::PoweroffEntityItems


class System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems : public ydk::Entity
{
    public:
        PoweroffModuleItems();
        ~PoweroffModuleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PoweroffModuleList; //type: System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList

        ydk::YList poweroffmodule_list;
        
}; // System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems


class System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList : public ydk::Entity
{
    public:
        PoweroffModuleList();
        ~PoweroffModuleList();

        bool has_data() const override;
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
        ydk::YLeaf poweroffstatus; //type: PlatformPoweroffSt

}; // System::PltfmItems::PoweroffEntityItems::PoweroffModuleItems::PoweroffModuleList


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
        ydk::YLeaf natsize; //type: uint32

}; // System::PltfmItems::TcamRegionItems


class System::PltfmItems::LatencymonitorItems : public ydk::Entity
{
    public:
        LatencymonitorItems();
        ~LatencymonitorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sampling; //type: uint32
        ydk::YLeaf latencymonitorthreshholdavg; //type: uint32
        ydk::YLeaf latencymonitorthreshholdmax; //type: uint32
        ydk::YLeaf latencymonitorstate; //type: PlatformLatencyMonitorSt

}; // System::PltfmItems::LatencymonitorItems


class System::PltfmItems::BuffermonitorItems : public ydk::Entity
{
    public:
        BuffermonitorItems();
        ~BuffermonitorItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sampling; //type: uint32
        ydk::YLeaf buffermonitorthreshhold; //type: uint32
        ydk::YLeaf buffermonitorstate; //type: PlatformBufferMonitorSt
        ydk::YLeaf buffermonitormode; //type: PlatformBufferMonitorMd

}; // System::PltfmItems::BuffermonitorItems


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

        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
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
        ydk::YLeaf ccex; //type: uint8
        ydk::YLeaf vendordata; //type: string
        ydk::YLeaf maxspeed; //type: uint32
        ydk::YLeaf minspeed; //type: uint32
        ydk::YLeaf fcotnum; //type: uint8
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

        ydk::YLeaf isfcotpresent; //type: boolean
        ydk::YLeaf state; //type: EthpmFcotState
        ydk::YLeaf flags; //type: EthpmFcotFlags
        ydk::YLeaf type; //type: EthpmFcotType
        ydk::YLeaf typename_; //type: string
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
        ydk::YLeaf vendorname; //type: string
        ydk::YLeaf vendorpn; //type: string
        ydk::YLeaf vendorrev; //type: string
        ydk::YLeaf vendorserno; //type: string
        ydk::YLeaf datecode; //type: string
        ydk::YLeaf fivevstressenv; //type: uint8
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
        ydk::YLeaf evpn_timeout; //type: uint16
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
        ydk::YLeaf totsyncstopbcastpkt; //type: uint64

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
        class IfItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::DbItems> db_items;
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


class System::ArpItems::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf timeout; //type: uint16
        ydk::YLeaf gratuitousrequest; //type: NwAdminSt_
        ydk::YLeaf gratuitousupdate; //type: NwAdminSt_
        ydk::YLeaf gratuitoushsrpdup; //type: NwAdminSt_
        ydk::YLeaf proxyarp; //type: NwAdminSt_
        ydk::YLeaf localproxyarp; //type: NwAdminSt_
        ydk::YLeaf localproxyarpnohwflood; //type: NwAdminSt_
        ydk::YLeaf deleteadjonmacdelete; //type: NwAdminSt_
        ydk::YLeaf refreshtimerformacdelete; //type: uint16
        ydk::YLeaf duplicateipdetectionforunnumberedsvi; //type: NwAdminSt_
        ydk::YLeaf configerror; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class SadjItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems
        class IfstatstxItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems
        class IfstatsrxItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems
        class IfstatsadjItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems
        class IfstatsmiscItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems
        class IfstatsmhItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems
        class RtvrfMbrItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems> sadj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems> ifstatstx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems> ifstatsrx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems> ifstatsadj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems> ifstatsmisc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems> ifstatsmh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems : public ydk::Entity
{
    public:
        SadjItems();
        ~SadjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StAdjEpList; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList

        ydk::YList stadjep_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList : public ydk::Entity
{
    public:
        StAdjEpList();
        ~StAdjEpList();

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
        ydk::YLeaf operst; //type: ArpStAdjOperSt
        ydk::YLeaf operstqual; //type: ArpStAdjOperStQual
        ydk::YLeaf name; //type: string
        ydk::YLeaf mac; //type: string
        class RtCtrlrAdjEpToStAdjEpItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems
        class RtfvEpDefRefToStAdjEpItems; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems> rtctrlradjeptostadjep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems> rtfvepdefreftostadjep_items;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems : public ydk::Entity
{
    public:
        RtCtrlrAdjEpToStAdjEpItems();
        ~RtCtrlrAdjEpToStAdjEpItems();

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

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtCtrlrAdjEpToStAdjEpItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems : public ydk::Entity
{
    public:
        RtfvEpDefRefToStAdjEpItems();
        ~RtfvEpDefRefToStAdjEpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvEpDefRefToStAdjEpList; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList

        ydk::YList rtfvepdefreftostadjep_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList : public ydk::Entity
{
    public:
        RtFvEpDefRefToStAdjEpList();
        ~RtFvEpDefRefToStAdjEpList();

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

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::SadjItems::StAdjEpList::RtfvEpDefRefToStAdjEpItems::RtFvEpDefRefToStAdjEpList


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems : public ydk::Entity
{
    public:
        IfstatstxItems();
        ~IfstatstxItems();

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
        ydk::YLeaf pktsendsrvport; //type: uint32
        ydk::YLeaf pktsendfbrcport; //type: uint32
        ydk::YLeaf pktsendfixupcore; //type: uint32
        ydk::YLeaf pktsendfixupserver; //type: uint32
        ydk::YLeaf pktsendfixuprarp; //type: uint32
        ydk::YLeaf pktsendanycastglean; //type: uint32
        ydk::YLeaf pktsentfailinvpkt; //type: uint32
        ydk::YLeaf pktsentfailmbufop; //type: uint32
        ydk::YLeaf pktsentfailnoifindex; //type: uint32
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
        ydk::YLeaf pktskiprespenhancedproxydestnotreach; //type: uint32
        ydk::YLeaf pktskiprespenhancedproxyl2porttrack; //type: uint32
        ydk::YLeaf pktsentfailinvlocalproxy; //type: uint32
        ydk::YLeaf pktsentfailinvproxy; //type: uint32
        ydk::YLeaf pktsentfailvipgroupnotactive; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatstxItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems : public ydk::Entity
{
    public:
        IfstatsrxItems();
        ~IfstatsrxItems();

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
        ydk::YLeaf pktrcvdenhancedproxyarp; //type: uint32
        ydk::YLeaf pktrcvdenhancedproxyanycastarp; //type: uint32
        ydk::YLeaf pktrcvdenhancedproxyl2porttrackarp; //type: uint32
        ydk::YLeaf pktrcvdserverport; //type: uint32
        ydk::YLeaf pktrcvdreql2; //type: uint32
        ydk::YLeaf pktrcvdrspl2; //type: uint32
        ydk::YLeaf pktrcvdtunnel; //type: uint32
        ydk::YLeaf pktrcvdfastpath; //type: uint32
        ydk::YLeaf pktrcvdsnoop; //type: uint32
        ydk::YLeaf pktrcvddrp; //type: uint32
        ydk::YLeaf pktrcvddrpbadif; //type: uint32
        ydk::YLeaf pktrcvddrpbadlen; //type: uint32
        ydk::YLeaf pktrcvddrpbadproto; //type: uint32
        ydk::YLeaf pktrcvddropbadhrd; //type: uint32
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
        ydk::YLeaf pktrcvddrprsponhsrpstbyactivevmac; //type: uint32
        ydk::YLeaf pktrcvdfailimdown; //type: uint32
        ydk::YLeaf pktrcvdgleanreqcount; //type: uint32
        ydk::YLeaf pktrfrshreqrecfrmclients; //type: uint32
        ydk::YLeaf pktrcvdsigfrml2rib; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsrxItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems : public ydk::Entity
{
    public:
        IfstatsadjItems();
        ~IfstatsadjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjadd; //type: uint32
        ydk::YLeaf adjdel; //type: uint32
        ydk::YLeaf adjtimeout; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsadjItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems : public ydk::Entity
{
    public:
        IfstatsmiscItems();
        ~IfstatsmiscItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clientmsg; //type: uint32
        ydk::YLeaf clientmsgfail; //type: uint32
        ydk::YLeaf iftimeoutmsgfail; //type: uint32
        ydk::YLeaf ifstatusmsgfail; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmiscItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems : public ydk::Entity
{
    public:
        IfstatsmhItems();
        ~IfstatsmhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf recvaddfrml2rib; //type: uint32
        ydk::YLeaf processaddfrml2rib; //type: uint32
        ydk::YLeaf recvdelfrml2rib; //type: uint32
        ydk::YLeaf processdelfrml2rib; //type: uint32
        ydk::YLeaf recvpcshutfrml2rib; //type: uint32
        ydk::YLeaf processpcshutfrml2rib; //type: uint32
        ydk::YLeaf recvremoteupdfrml2rib; //type: uint32
        ydk::YLeaf processremoteupdfrml2rib; //type: uint32
        ydk::YLeaf psadderrinvalidflags; //type: uint32
        ydk::YLeaf psdelerrinvalidflags; //type: uint32
        ydk::YLeaf psadderrinvalidcurrstate; //type: uint32
        ydk::YLeaf psdelerrinvalidcurrstate; //type: uint32
        ydk::YLeaf psdelerrmacmismatch; //type: uint32
        ydk::YLeaf psdelerrsecdelfrml2rib; //type: uint32
        ydk::YLeaf psdelerrfortlroute; //type: uint32
        ydk::YLeaf tldelerrforpsroroute; //type: uint32

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::IfstatsmhItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::ArpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::ArpItems::InstItems::IpgleanthrottleItems : public ydk::Entity
{
    public:
        IpgleanthrottleItems();
        ~IpgleanthrottleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf syslog; //type: uint32
        ydk::YLeaf maxpacket; //type: uint32
        ydk::YLeaf timeout; //type: uint16

}; // System::ArpItems::InstItems::IpgleanthrottleItems


class System::ArpItems::InstItems::EvtLogsItems : public ydk::Entity
{
    public:
        EvtLogsItems();
        ~EvtLogsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventLogsList; //type: System::ArpItems::InstItems::EvtLogsItems::EventLogsList

        ydk::YList eventlogs_list;
        
}; // System::ArpItems::InstItems::EvtLogsItems


class System::ArpItems::InstItems::EvtLogsItems::EventLogsList : public ydk::Entity
{
    public:
        EventLogsList();
        ~EventLogsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf eventtype; //type: ArpEventType
        ydk::YLeaf logsize; //type: ArpEventLogSize

}; // System::ArpItems::InstItems::EvtLogsItems::EventLogsList


class System::ArpItems::InstItems::VpcItems : public ydk::Entity
{
    public:
        VpcItems();
        ~VpcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::ArpItems::InstItems::VpcItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::VpcItems::DomItems> dom_items;
        
}; // System::ArpItems::InstItems::VpcItems


class System::ArpItems::InstItems::VpcItems::DomItems : public ydk::Entity
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

        class VpcDomList; //type: System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList

        ydk::YList vpcdom_list;
        
}; // System::ArpItems::InstItems::VpcItems::DomItems


class System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList : public ydk::Entity
{
    public:
        VpcDomList();
        ~VpcDomList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf domainid; //type: uint16
        ydk::YLeaf arpsync; //type: NwAdminSt_

}; // System::ArpItems::InstItems::VpcItems::DomItems::VpcDomList


class System::ArpItems::InstItems::DbItems : public ydk::Entity
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

        class DbSupCacheList; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList

        ydk::YList dbsupcache_list;
        
}; // System::ArpItems::InstItems::DbItems


class System::ArpItems::InstItems::DbItems::DbSupCacheList : public ydk::Entity
{
    public:
        DbSupCacheList();
        ~DbSupCacheList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: ArpDbT
        ydk::YLeaf name; //type: string
        class VlanItems; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems> vlan_items;
        
}; // System::ArpItems::InstItems::DbItems::DbSupCacheList


class System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems : public ydk::Entity
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

        class SupCacheVlanList; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList

        ydk::YList supcachevlan_list;
        
}; // System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems


class System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList : public ydk::Entity
{
    public:
        SupCacheVlanList();
        ~SupCacheVlanList();

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
        ydk::YLeaf suppressarpmode; //type: ArpSuppressArpMode
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        class IpItems; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems> ip_items;
        
}; // System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList


class System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems : public ydk::Entity
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

        class SupCacheEntryList; //type: System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList

        ydk::YList supcacheentry_list;
        
}; // System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems


class System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList : public ydk::Entity
{
    public:
        SupCacheEntryList();
        ~SupCacheEntryList();

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
        ydk::YLeaf flags; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf upts; //type: string
        ydk::YLeaf phyid; //type: string
        ydk::YLeaf remotevtepaddr; //type: string

}; // System::ArpItems::InstItems::DbItems::DbSupCacheList::VlanItems::SupCacheVlanList::IpItems::SupCacheEntryList


class System::BfdItems : public ydk::Entity
{
    public:
        BfdItems();
        ~BfdItems();

        bool has_data() const override;
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
        class InstItems; //type: System::BfdItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems> inst_items;
        
}; // System::BfdItems


class System::BfdItems::InstItems : public ydk::Entity
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

        ydk::YLeaf echoif; //type: string
        ydk::YLeaf startupintvl; //type: uint16
        ydk::YLeaf slowintvl; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class IfItems; //type: System::BfdItems::InstItems::IfItems
        class AfItems; //type: System::BfdItems::InstItems::AfItems
        class KaItems; //type: System::BfdItems::InstItems::KaItems
        class SessionItems; //type: System::BfdItems::InstItems::SessionItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::KaItems> ka_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems> session_items;
        
}; // System::BfdItems::InstItems


class System::BfdItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::BfdItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::BfdItems::InstItems::IfItems


class System::BfdItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf echoadminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf trkmbrlnk; //type: BfdTrkMbrLnk
        ydk::YLeaf sttm; //type: uint32
        ydk::YLeaf dst; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class AuthItems; //type: System::BfdItems::InstItems::IfItems::IfList::AuthItems
        class AfItems; //type: System::BfdItems::InstItems::IfItems::IfList::AfItems
        class NbrItems; //type: System::BfdItems::InstItems::IfItems::IfList::NbrItems
        class IfkaItems; //type: System::BfdItems::InstItems::IfItems::IfList::IfkaItems
        class RtvrfMbrItems; //type: System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::NbrItems> nbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::IfkaItems> ifka_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::BfdItems::InstItems::IfItems::IfList


class System::BfdItems::InstItems::IfItems::IfList::AuthItems : public ydk::Entity
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

        ydk::YLeaf type; //type: BfdAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf hexkeysize; //type: uint8
        ydk::YLeaf hexkey; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::BfdItems::InstItems::IfItems::IfList::AuthItems


class System::BfdItems::InstItems::IfItems::IfList::AfItems : public ydk::Entity
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

        class IfAfList; //type: System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList

        ydk::YList ifaf_list;
        
}; // System::BfdItems::InstItems::IfItems::IfList::AfItems


class System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList : public ydk::Entity
{
    public:
        IfAfList();
        ~IfAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BfdAfT
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf echoadminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        class AuthItems; //type: System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems
        class IfkaItems; //type: System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems> auth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems> ifka_items;
        
}; // System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList


class System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems : public ydk::Entity
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

        ydk::YLeaf type; //type: BfdAuthT
        ydk::YLeaf keyid; //type: uint8
        ydk::YLeaf hexkeysize; //type: uint8
        ydk::YLeaf hexkey; //type: string
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::AuthItems


class System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems : public ydk::Entity
{
    public:
        IfkaItems();
        ~IfkaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf echorxintvl; //type: uint16

}; // System::BfdItems::InstItems::IfItems::IfList::AfItems::IfAfList::IfkaItems


class System::BfdItems::InstItems::IfItems::IfList::NbrItems : public ydk::Entity
{
    public:
        NbrItems();
        ~NbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NbrList; //type: System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList

        ydk::YList nbr_list;
        
}; // System::BfdItems::InstItems::IfItems::IfList::NbrItems


class System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList : public ydk::Entity
{
    public:
        NbrList();
        ~NbrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcip; //type: string
        ydk::YLeaf destip; //type: string

}; // System::BfdItems::InstItems::IfItems::IfList::NbrItems::NbrList


class System::BfdItems::InstItems::IfItems::IfList::IfkaItems : public ydk::Entity
{
    public:
        IfkaItems();
        ~IfkaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf echorxintvl; //type: uint16

}; // System::BfdItems::InstItems::IfItems::IfList::IfkaItems


class System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::BfdItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::BfdItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::BfdItems::InstItems::AfItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class InstAfList; //type: System::BfdItems::InstItems::AfItems::InstAfList

        ydk::YList instaf_list;
        
}; // System::BfdItems::InstItems::AfItems


class System::BfdItems::InstItems::AfItems::InstAfList : public ydk::Entity
{
    public:
        InstAfList();
        ~InstAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: BfdAfT
        ydk::YLeaf slowintvl; //type: uint16
        ydk::YLeaf name; //type: string
        class KaItems; //type: System::BfdItems::InstItems::AfItems::InstAfList::KaItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::AfItems::InstAfList::KaItems> ka_items;
        
}; // System::BfdItems::InstItems::AfItems::InstAfList


class System::BfdItems::InstItems::AfItems::InstAfList::KaItems : public ydk::Entity
{
    public:
        KaItems();
        ~KaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf echorxintvl; //type: uint16

}; // System::BfdItems::InstItems::AfItems::InstAfList::KaItems


class System::BfdItems::InstItems::KaItems : public ydk::Entity
{
    public:
        KaItems();
        ~KaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf echorxintvl; //type: uint16

}; // System::BfdItems::InstItems::KaItems


class System::BfdItems::InstItems::SessionItems : public ydk::Entity
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

        class SessList; //type: System::BfdItems::InstItems::SessionItems::SessList

        ydk::YList sess_list;
        
}; // System::BfdItems::InstItems::SessionItems


class System::BfdItems::InstItems::SessionItems::SessList : public ydk::Entity
{
    public:
        SessList();
        ~SessList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf discr; //type: uint32
        ydk::YLeaf remotediscr; //type: uint32
        ydk::YLeaf asyncport; //type: uint16
        ydk::YLeaf echoport; //type: uint16
        ydk::YLeaf localmac; //type: string
        ydk::YLeaf remotemac; //type: string
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf iod; //type: uint32
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf destaddr; //type: string
        ydk::YLeaf localtxintvl; //type: uint16
        ydk::YLeaf localrxintvl; //type: uint16
        ydk::YLeaf localdetectmult; //type: uint8
        ydk::YLeaf txintvl; //type: uint16
        ydk::YLeaf echotxintvl; //type: uint16
        ydk::YLeaf rxintvl; //type: uint16
        ydk::YLeaf slowintvl; //type: uint16
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf authtype; //type: BfdAuthT
        ydk::YLeaf authseqno; //type: uint32
        ydk::YLeaf operst; //type: BfdOperSt
        ydk::YLeaf remoteoperst; //type: BfdOperSt
        ydk::YLeaf diag; //type: BfdDiagCode
        ydk::YLeaf flags; //type: string
        ydk::YLeaf lasttranstime; //type: string
        ydk::YLeaf lastdiag; //type: BfdDiagCode
        ydk::YLeaf lastdowntime; //type: string
        class StatsItems; //type: System::BfdItems::InstItems::SessionItems::SessList::StatsItems
        class PeervItems; //type: System::BfdItems::InstItems::SessionItems::SessList::PeervItems
        class AppItems; //type: System::BfdItems::InstItems::SessionItems::SessList::AppItems
        class RsmbrSessItems; //type: System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems::SessList::StatsItems> stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems::SessList::PeervItems> peerv_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems::SessList::AppItems> app_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BfdItems::InstItems::SessionItems::SessList::RsmbrSessItems> rsmbrsess_items;
        
}; // System::BfdItems::InstItems::SessionItems::SessList


class System::BfdItems::InstItems::SessionItems::SessList::StatsItems : public ydk::Entity
{
    public:
        StatsItems();
        ~StatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rxcnt; //type: uint64
        ydk::YLeaf rxavg; //type: uint32
        ydk::YLeaf rxmin; //type: uint32
        ydk::YLeaf rxmax; //type: uint32
        ydk::YLeaf lastrxpkt; //type: string
        ydk::YLeaf txcnt; //type: uint64
        ydk::YLeaf txavg; //type: uint32
        ydk::YLeaf txmin; //type: uint32
        ydk::YLeaf txmax; //type: uint32
        ydk::YLeaf lasttxpkt; //type: string
        ydk::YLeaf upcnt; //type: uint32
        ydk::YLeaf downcnt; //type: uint32

}; // System::BfdItems::InstItems::SessionItems::SessList::StatsItems


class System::BfdItems::InstItems::SessionItems::SessList::PeervItems : public ydk::Entity
{
    public:
        PeervItems();
        ~PeervItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf diag; //type: BfdDiagCode
        ydk::YLeaf operst; //type: BfdOperSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf detectmult; //type: uint8
        ydk::YLeaf mydisc; //type: uint32
        ydk::YLeaf yourdisc; //type: uint32
        ydk::YLeaf mintx; //type: uint16
        ydk::YLeaf minrx; //type: uint16
        ydk::YLeaf minecho; //type: uint16

}; // System::BfdItems::InstItems::SessionItems::SessList::PeervItems


class System::BfdItems::InstItems::SessionItems::SessList::AppItems : public ydk::Entity
{
    public:
        AppItems();
        ~AppItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SessAppList; //type: System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList

        ydk::YList sessapp_list;
        
}; // System::BfdItems::InstItems::SessionItems::SessList::AppItems


class System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList : public ydk::Entity
{
    public:
        SessAppList();
        ~SessAppList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf sapid; //type: uint32
        ydk::YLeaf descr; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf data; //type: string
        ydk::YLeaf autoexptime; //type: string

}; // System::BfdItems::InstItems::SessionItems::SessList::AppItems::SessAppList


}
}

#endif /* _CISCO_NX_OS_DEVICE_39_ */

