#ifndef _CISCO_NX_OS_DEVICE_24_
#define _CISCO_NX_OS_DEVICE_24_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_23.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList : public ydk::Entity
{
    public:
        CounterList();
        ~CounterList();

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
        ydk::YLeaf start; //type: uint64
        ydk::YLeaf end; //type: uint64
        ydk::YLeaf ownerkey; //type: string
        ydk::YLeaf ownertag; //type: string
        ydk::YLeaf descr; //type: string

}; // System::MockrootItems::SessionItems::MockSessionList::StatItems::StatsList::CounterItems::CounterList


class System::StpItems : public ydk::Entity
{
    public:
        StpItems();
        ~StpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::StpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems> inst_items;
        
}; // System::StpItems


class System::StpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf mode; //type: string
        ydk::YLeaf lcissu; //type: StpLcIssu
        ydk::YLeaf pathcostop; //type: StpPathcostOp
        ydk::YLeaf fcoe; //type: NwAdminSt_
        ydk::YLeaf bridge; //type: StpAdminSt
        ydk::YLeaf loopguard; //type: StpAdminSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::StpItems::InstItems::IfItems
        class MstentItems; //type: System::StpItems::InstItems::MstentItems
        class PseudoItems; //type: System::StpItems::InstItems::PseudoItems
        class VlanItems; //type: System::StpItems::InstItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::MstentItems> mstent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::PseudoItems> pseudo_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::VlanItems> vlan_items;
        
}; // System::StpItems::InstItems


class System::StpItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::StpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::StpItems::InstItems::IfItems


class System::StpItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf mode; //type: StpIfMode
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf cost; //type: uint32
        ydk::YLeaf guard; //type: StpGuard
        ydk::YLeaf bpdufilter; //type: StpBpdufilter
        ydk::YLeaf bpduguard; //type: StpBPDUGuard
        ydk::YLeaf lcissu; //type: StpLcIssu
        ydk::YLeaf linktype; //type: StpLinkType
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf portfast; //type: StpPortFast
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class VlanItems; //type: System::StpItems::InstItems::IfItems::IfList::VlanItems
        class RtvrfMbrItems; //type: System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems::IfList::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::StpItems::InstItems::IfItems::IfList


class System::StpItems::InstItems::IfItems::IfList::VlanItems : public ydk::Entity
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

        class VlanCfgList; //type: System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList

        ydk::YList vlancfg_list;
        
}; // System::StpItems::InstItems::IfItems::IfList::VlanItems


class System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList : public ydk::Entity
{
    public:
        VlanCfgList();
        ~VlanCfgList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlanid; //type: uint16
        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf cost; //type: uint32

}; // System::StpItems::InstItems::IfItems::IfList::VlanItems::VlanCfgList


class System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::StpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::StpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::StpItems::InstItems::MstentItems : public ydk::Entity
{
    public:
        MstentItems();
        ~MstentItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf simulate; //type: StpSimulate
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf fwdtime; //type: uint8
        ydk::YLeaf hellotime; //type: uint8
        ydk::YLeaf maxage; //type: uint8
        class MstItems; //type: System::StpItems::InstItems::MstentItems::MstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::MstentItems::MstItems> mst_items;
        
}; // System::StpItems::InstItems::MstentItems


class System::StpItems::InstItems::MstentItems::MstItems : public ydk::Entity
{
    public:
        MstItems();
        ~MstItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RegionList; //type: System::StpItems::InstItems::MstentItems::MstItems::RegionList

        ydk::YList region_list;
        
}; // System::StpItems::InstItems::MstentItems::MstItems


class System::StpItems::InstItems::MstentItems::MstItems::RegionList : public ydk::Entity
{
    public:
        RegionList();
        ~RegionList();

        bool has_data() const override;
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
        ydk::YLeaf regname; //type: string
        ydk::YLeaf rev; //type: uint16
        class MstItems_; //type: System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_> mst_items;
        
}; // System::StpItems::InstItems::MstentItems::MstItems::RegionList


class System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_ : public ydk::Entity
{
    public:
        MstItems_();
        ~MstItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MstDomList; //type: System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList

        ydk::YList mstdom_list;
        
}; // System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_


class System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList : public ydk::Entity
{
    public:
        MstDomList();
        ~MstDomList();

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
        ydk::YLeaf root; //type: StpRoot
        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf hellotime; //type: uint8
        ydk::YLeaf priority; //type: uint16
        ydk::YLeaf name; //type: string
        class VlanItems; //type: System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems> vlan_items;
        
}; // System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList


class System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems : public ydk::Entity
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

        class VlanRangeList; //type: System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList

        ydk::YList vlanrange_list;
        
}; // System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems


class System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList : public ydk::Entity
{
    public:
        VlanRangeList();
        ~VlanRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: uint16
        ydk::YLeaf end; //type: uint16

}; // System::StpItems::InstItems::MstentItems::MstItems::RegionList::MstItems_::MstDomList::VlanItems::VlanRangeList


class System::StpItems::InstItems::PseudoItems : public ydk::Entity
{
    public:
        PseudoItems();
        ~PseudoItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // System::StpItems::InstItems::PseudoItems


class System::StpItems::InstItems::VlanItems : public ydk::Entity
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

        class VlanList; //type: System::StpItems::InstItems::VlanItems::VlanList

        ydk::YList vlan_list;
        
}; // System::StpItems::InstItems::VlanItems


class System::StpItems::InstItems::VlanItems::VlanList : public ydk::Entity
{
    public:
        VlanList();
        ~VlanList();

        bool has_data() const override;
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
        ydk::YLeaf priority; //type: StpPriority
        ydk::YLeaf root; //type: StpRoot
        ydk::YLeaf diameter; //type: uint8
        ydk::YLeaf opererr; //type: string
        ydk::YLeaf protocol; //type: StpProtocol
        ydk::YLeaf bridgepriority; //type: uint16
        ydk::YLeaf bridgeaddress; //type: string
        ydk::YLeaf rootpriority; //type: uint16
        ydk::YLeaf rootaddress; //type: string
        ydk::YLeaf rootportpriority; //type: uint16
        ydk::YLeaf rootportnumber; //type: uint16
        ydk::YLeaf rootport; //type: string
        ydk::YLeaf rootpathcost; //type: uint32
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf fwdtime; //type: uint8
        ydk::YLeaf hellotime; //type: uint8
        ydk::YLeaf maxage; //type: uint8
        class IfItems; //type: System::StpItems::InstItems::VlanItems::VlanList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::StpItems::InstItems::VlanItems::VlanList::IfItems> if_items;
        
}; // System::StpItems::InstItems::VlanItems::VlanList


class System::StpItems::InstItems::VlanItems::VlanList::IfItems : public ydk::Entity
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

        class VlanIfList; //type: System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList

        ydk::YList vlanif_list;
        
}; // System::StpItems::InstItems::VlanItems::VlanList::IfItems


class System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList : public ydk::Entity
{
    public:
        VlanIfList();
        ~VlanIfList();

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
        ydk::YLeaf designatedrootpriority; //type: uint16
        ydk::YLeaf designatedrootaddress; //type: string
        ydk::YLeaf designatedrootcost; //type: uint32
        ydk::YLeaf designatedbridgepriority; //type: uint16
        ydk::YLeaf designatedbridgeaddress; //type: string
        ydk::YLeaf designatedportpriority; //type: uint16
        ydk::YLeaf designatedportnumber; //type: uint16
        ydk::YLeaf portpriority; //type: uint16
        ydk::YLeaf portnumber; //type: uint16
        ydk::YLeaf portpathcost; //type: uint32
        ydk::YLeaf portrole; //type: StpPortRole
        ydk::YLeaf portstate; //type: StpPortState

}; // System::StpItems::InstItems::VlanItems::VlanList::IfItems::VlanIfList


class System::BdTableItems : public ydk::Entity
{
    public:
        BdTableItems();
        ~BdTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanItems; //type: System::BdTableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems> vlan_items;
        
}; // System::BdTableItems


class System::BdTableItems::VlanItems : public ydk::Entity
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

        class BdEntryList; //type: System::BdTableItems::VlanItems::BdEntryList

        ydk::YList bdentry_list;
        
}; // System::BdTableItems::VlanItems


class System::BdTableItems::VlanItems::BdEntryList : public ydk::Entity
{
    public:
        BdEntryList();
        ~BdEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vlan; //type: string
        ydk::YLeaf bd; //type: uint32
        ydk::YLeaf vnid; //type: string
        ydk::YLeaf replicationmode; //type: AggregateReplicationModeType
        ydk::YLeaf ingressrepprotocol; //type: AggregateIngressRepProtocolType
        ydk::YLeaf gipo; //type: string
        ydk::YLeaf suppressarp; //type: AggregateBooleanFlag
        ydk::YLeaf resourcestatus; //type: AggregateResourceStatus
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        ydk::YLeaf description; //type: string
        class FloodListItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems
        class AfItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems
        class RtaggregateVlanMemberAttItems; //type: System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems> floodlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems> rtaggregatevlanmemberatt_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems : public ydk::Entity
{
    public:
        FloodListItems();
        ~FloodListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalFloodListItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems
        class RemoteFloodListItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems> localfloodlist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems> remotefloodlist_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems : public ydk::Entity
{
    public:
        LocalFloodListItems();
        ~LocalFloodListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems> intf_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems : public ydk::Entity
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

        class LocalFloodListEntryList; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList

        ydk::YList localfloodlistentry_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList : public ydk::Entity
{
    public:
        LocalFloodListEntryList();
        ~LocalFloodListEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf; //type: string

}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::LocalFloodListItems::IntfItems::LocalFloodListEntryList


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems : public ydk::Entity
{
    public:
        RemoteFloodListItems();
        ~RemoteFloodListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VtepItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems> vtep_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems : public ydk::Entity
{
    public:
        VtepItems();
        ~VtepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteFloodListEntryList; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList

        ydk::YList remotefloodlistentry_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList : public ydk::Entity
{
    public:
        RemoteFloodListEntryList();
        ~RemoteFloodListEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vtep; //type: string
        class RsvtepAttItems; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems> rsvtepatt_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems : public ydk::Entity
{
    public:
        RsvtepAttItems();
        ~RsvtepAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVtepAttList; //type: System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList

        ydk::YList rsvtepatt_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems


class System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList : public ydk::Entity
{
    public:
        RsVtepAttList();
        ~RsVtepAttList();

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

}; // System::BdTableItems::VlanItems::BdEntryList::FloodListItems::RemoteFloodListItems::VtepItems::RemoteFloodListEntryList::RsvtepAttItems::RsVtepAttList


class System::BdTableItems::VlanItems::BdEntryList::AfItems : public ydk::Entity
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

        class DomainAfList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList

        ydk::YList domainaf_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList : public ydk::Entity
{
    public:
        DomainAfList();
        ~DomainAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateAfT
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf rd; //type: string
        class RttpItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems
        class CtrlItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems> rttp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems> ctrl_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList : public ydk::Entity
{
    public:
        RttPList();
        ~RttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateRttPType
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        class EntItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems> ent_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttEntryList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
{
    public:
        RttEntryList();
        ~RttEntryList();

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

}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems : public ydk::Entity
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

        class AfCtrlList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList

        ydk::YList afctrl_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList : public ydk::Entity
{
    public:
        AfCtrlList();
        ~AfCtrlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateAfT
        class RttpItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems> rttp_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList : public ydk::Entity
{
    public:
        RttPList();
        ~RttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateRttPType
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        class EntItems; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems> ent_items;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttEntryList; //type: System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems


class System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
{
    public:
        RttEntryList();
        ~RttEntryList();

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

}; // System::BdTableItems::VlanItems::BdEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList


class System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems : public ydk::Entity
{
    public:
        RtaggregateVlanMemberAttItems();
        ~RtaggregateVlanMemberAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtAggregateVlanMemberAttList; //type: System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList

        ydk::YList rtaggregatevlanmemberatt_list;
        
}; // System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems


class System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList : public ydk::Entity
{
    public:
        RtAggregateVlanMemberAttList();
        ~RtAggregateVlanMemberAttList();

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

}; // System::BdTableItems::VlanItems::BdEntryList::RtaggregateVlanMemberAttItems::RtAggregateVlanMemberAttList


class System::GlobalConfTableItems : public ydk::Entity
{
    public:
        GlobalConfTableItems();
        ~GlobalConfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vxlanmc; //type: AggregateBooleanFlag
        ydk::YLeaf agmac; //type: string

}; // System::GlobalConfTableItems


class System::IntfTableItems : public ydk::Entity
{
    public:
        IntfTableItems();
        ~IntfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::IntfTableItems::IntfItems
        class SviItems; //type: System::IntfTableItems::SviItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::SviItems> svi_items;
        
}; // System::IntfTableItems


class System::IntfTableItems::IntfItems : public ydk::Entity
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

        class IntfEntryList; //type: System::IntfTableItems::IntfItems::IntfEntryList

        ydk::YList intfentry_list;
        
}; // System::IntfTableItems::IntfItems


class System::IntfTableItems::IntfItems::IntfEntryList : public ydk::Entity
{
    public:
        IntfEntryList();
        ~IntfEntryList();

        bool has_data() const override;
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
        ydk::YLeaf type; //type: AggregateIntfType
        ydk::YLeaf adminstate; //type: AggregateAdminState
        ydk::YLeaf operstate; //type: AggregateOperState
        ydk::YLeaf trunkvlans; //type: string
        ydk::YLeaf iscontrollerownedintf; //type: boolean
        ydk::YLeaf ownercontrollersidlist; //type: string
        ydk::YLeaf untaggedvlan; //type: string
        ydk::YLeaf untaggedvlanctrluse; //type: boolean
        ydk::YLeaf untaggedvlanexplicitmap; //type: boolean
        class VlanMemberTableItems; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems
        class RtvpcIntfEntryAttItems; //type: System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems> vlanmembertable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems> rtvpcintfentryatt_items;
        
}; // System::IntfTableItems::IntfItems::IntfEntryList


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems : public ydk::Entity
{
    public:
        VlanMemberTableItems();
        ~VlanMemberTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberItems; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems
        class RsvlanMemberAttItems; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems> member_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems> rsvlanmemberatt_items;
        
}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems : public ydk::Entity
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

        class VlanMemberEntryList; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList

        ydk::YList vlanmemberentry_list;
        
}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList : public ydk::Entity
{
    public:
        VlanMemberEntryList();
        ~VlanMemberEntryList();

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

}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::MemberItems::VlanMemberEntryList


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems : public ydk::Entity
{
    public:
        RsvlanMemberAttItems();
        ~RsvlanMemberAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVlanMemberAttList; //type: System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList

        ydk::YList rsvlanmemberatt_list;
        
}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems


class System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList : public ydk::Entity
{
    public:
        RsVlanMemberAttList();
        ~RsVlanMemberAttList();

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

}; // System::IntfTableItems::IntfItems::IntfEntryList::VlanMemberTableItems::RsvlanMemberAttItems::RsVlanMemberAttList


class System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems : public ydk::Entity
{
    public:
        RtvpcIntfEntryAttItems();
        ~RtvpcIntfEntryAttItems();

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

}; // System::IntfTableItems::IntfItems::IntfEntryList::RtvpcIntfEntryAttItems


class System::IntfTableItems::SviItems : public ydk::Entity
{
    public:
        SviItems();
        ~SviItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SviList; //type: System::IntfTableItems::SviItems::SviList

        ydk::YList svi_list;
        
}; // System::IntfTableItems::SviItems


class System::IntfTableItems::SviItems::SviList : public ydk::Entity
{
    public:
        SviList();
        ~SviList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf intf; //type: string
        ydk::YLeaf adminstate; //type: AggregateAdminState
        ydk::YLeaf operstate; //type: AggregateOperState
        ydk::YLeaf ip; //type: string
        ydk::YLeaf isctrlrownedintf; //type: boolean
        ydk::YLeaf ownerctrlrsidlist; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf bw; //type: uint32
        ydk::YLeaf fwdmode; //type: AggregateFabFwdMode
        ydk::YLeaf vrf; //type: string

}; // System::IntfTableItems::SviItems::SviList


class System::MacTableItems : public ydk::Entity
{
    public:
        MacTableItems();
        ~MacTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DynamicItems; //type: System::MacTableItems::DynamicItems
        class StaticItems; //type: System::MacTableItems::StaticItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::DynamicItems> dynamic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::StaticItems> static_items;
        
}; // System::MacTableItems


class System::MacTableItems::DynamicItems : public ydk::Entity
{
    public:
        DynamicItems();
        ~DynamicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacItems; //type: System::MacTableItems::DynamicItems::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::DynamicItems::MacItems> mac_items;
        
}; // System::MacTableItems::DynamicItems


class System::MacTableItems::DynamicItems::MacItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MacEntryList; //type: System::MacTableItems::DynamicItems::MacItems::MacEntryList

        ydk::YList macentry_list;
        
}; // System::MacTableItems::DynamicItems::MacItems


class System::MacTableItems::DynamicItems::MacItems::MacEntryList : public ydk::Entity
{
    public:
        MacEntryList();
        ~MacEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf vlan; //type: string
        ydk::YLeaf intf; //type: string
        ydk::YLeaf tunneldstip; //type: string
        ydk::YLeaf isintf; //type: boolean
        ydk::YLeaf type; //type: AggregateMacType
        ydk::YLeaf pushedmactobackend; //type: boolean
        class RtmacItems; //type: System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems> rtmac_items;
        
}; // System::MacTableItems::DynamicItems::MacItems::MacEntryList


class System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems : public ydk::Entity
{
    public:
        RtmacItems();
        ~RtmacItems();

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

}; // System::MacTableItems::DynamicItems::MacItems::MacEntryList::RtmacItems


class System::MacTableItems::StaticItems : public ydk::Entity
{
    public:
        StaticItems();
        ~StaticItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class MacItems; //type: System::MacTableItems::StaticItems::MacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::StaticItems::MacItems> mac_items;
        
}; // System::MacTableItems::StaticItems


class System::MacTableItems::StaticItems::MacItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MacEntryList; //type: System::MacTableItems::StaticItems::MacItems::MacEntryList

        ydk::YList macentry_list;
        
}; // System::MacTableItems::StaticItems::MacItems


class System::MacTableItems::StaticItems::MacItems::MacEntryList : public ydk::Entity
{
    public:
        MacEntryList();
        ~MacEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac; //type: string
        ydk::YLeaf vlan; //type: string
        ydk::YLeaf intf; //type: string
        ydk::YLeaf tunneldstip; //type: string
        ydk::YLeaf isintf; //type: boolean
        ydk::YLeaf type; //type: AggregateMacType
        ydk::YLeaf pushedmactobackend; //type: boolean
        class RtmacItems; //type: System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems> rtmac_items;
        
}; // System::MacTableItems::StaticItems::MacItems::MacEntryList


class System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems : public ydk::Entity
{
    public:
        RtmacItems();
        ~RtmacItems();

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

}; // System::MacTableItems::StaticItems::MacItems::MacEntryList::RtmacItems


class System::SystemTableItems : public ydk::Entity
{
    public:
        SystemTableItems();
        ~SystemTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sttime; //type: string
        ydk::YLeaf mgmtip; //type: string
        ydk::YLeaf switchtype; //type: string
        ydk::YLeaf purgedbrequest; //type: string
        ydk::YLeaf iscontrollerconfigured; //type: boolean
        ydk::YLeaf nxdbenabled; //type: boolean
        class ControllerTableItems; //type: System::SystemTableItems::ControllerTableItems
        class CpuTableItems; //type: System::SystemTableItems::CpuTableItems
        class ModuleTableItems; //type: System::SystemTableItems::ModuleTableItems
        class VxlanTableItems; //type: System::SystemTableItems::VxlanTableItems
        class ShadowVxlanTableItems; //type: System::SystemTableItems::ShadowVxlanTableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ControllerTableItems> controllertable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::CpuTableItems> cputable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ModuleTableItems> moduletable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::VxlanTableItems> vxlantable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ShadowVxlanTableItems> shadowvxlantable_items;
        
}; // System::SystemTableItems


class System::SystemTableItems::ControllerTableItems : public ydk::Entity
{
    public:
        ControllerTableItems();
        ~ControllerTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ControllerItems; //type: System::SystemTableItems::ControllerTableItems::ControllerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ControllerTableItems::ControllerItems> controller_items;
        
}; // System::SystemTableItems::ControllerTableItems


class System::SystemTableItems::ControllerTableItems::ControllerItems : public ydk::Entity
{
    public:
        ControllerItems();
        ~ControllerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ControllerEntryList; //type: System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList

        ydk::YList controllerentry_list;
        
}; // System::SystemTableItems::ControllerTableItems::ControllerItems


class System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList : public ydk::Entity
{
    public:
        ControllerEntryList();
        ~ControllerEntryList();

        bool has_data() const override;
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
        ydk::YLeaf readrole; //type: string
        ydk::YLeaf writerole; //type: string
        ydk::YLeaf controllerdescription; //type: string
        ydk::YLeaf controllertype; //type: string
        ydk::YLeaf dedicatedvlans; //type: string
        ydk::YLeaf sharedvlans; //type: string
        ydk::YLeaf configuredvlans; //type: string
        ydk::YLeaf publishedvlans; //type: string
        ydk::YLeaf vlanresourcestatus; //type: AggregateResourceStatus
        ydk::YLeaf intfresourcestatus; //type: AggregateResourceStatus
        ydk::YLeaf issystemreadyforcontroller; //type: AggregateConfigStatus
        ydk::YLeaf controllerconfigmgmt; //type: AggregateConfigMgmtStatus
        ydk::YLeaf type; //type: AggregateCtrlrType
        ydk::YLeaf vrfprefix; //type: string
        ydk::YLeaf numvrf; //type: uint32
        ydk::YLeaf publishvrf; //type: boolean
        ydk::YLeaf publishnumvrf; //type: uint32
        class ControllerAssignedIntfTableItems; //type: System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems> controllerassignedintftable_items;
        
}; // System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList


class System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems : public ydk::Entity
{
    public:
        ControllerAssignedIntfTableItems();
        ~ControllerAssignedIntfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ControllerAssignedIntfEntryItems; //type: System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems> controllerassignedintfentry_items;
        
}; // System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems


class System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems : public ydk::Entity
{
    public:
        ControllerAssignedIntfEntryItems();
        ~ControllerAssignedIntfEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ControllerAssignedIntfEntryList; //type: System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList

        ydk::YList controllerassignedintfentry_list;
        
}; // System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems


class System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList : public ydk::Entity
{
    public:
        ControllerAssignedIntfEntryList();
        ~ControllerAssignedIntfEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intfname; //type: string
        ydk::YLeaf pcid; //type: uint16
        ydk::YLeaf type; //type: AggregateIntfType
        ydk::YLeaf mode; //type: AggregateIntfAssignMode
        ydk::YLeaf published; //type: boolean

}; // System::SystemTableItems::ControllerTableItems::ControllerItems::ControllerEntryList::ControllerAssignedIntfTableItems::ControllerAssignedIntfEntryItems::ControllerAssignedIntfEntryList


class System::SystemTableItems::CpuTableItems : public ydk::Entity
{
    public:
        CpuTableItems();
        ~CpuTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CpuEntryItems; //type: System::SystemTableItems::CpuTableItems::CpuEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::CpuTableItems::CpuEntryItems> cpuentry_items;
        
}; // System::SystemTableItems::CpuTableItems


class System::SystemTableItems::CpuTableItems::CpuEntryItems : public ydk::Entity
{
    public:
        CpuEntryItems();
        ~CpuEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CPUEntryList; //type: System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList

        ydk::YList cpuentry_list;
        
}; // System::SystemTableItems::CpuTableItems::CpuEntryItems


class System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList : public ydk::Entity
{
    public:
        CPUEntryList();
        ~CPUEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: string

}; // System::SystemTableItems::CpuTableItems::CpuEntryItems::CPUEntryList


class System::SystemTableItems::ModuleTableItems : public ydk::Entity
{
    public:
        ModuleTableItems();
        ~ModuleTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleEntryItems; //type: System::SystemTableItems::ModuleTableItems::ModuleEntryItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ModuleTableItems::ModuleEntryItems> moduleentry_items;
        
}; // System::SystemTableItems::ModuleTableItems


class System::SystemTableItems::ModuleTableItems::ModuleEntryItems : public ydk::Entity
{
    public:
        ModuleEntryItems();
        ~ModuleEntryItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ModuleEntryList; //type: System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList

        ydk::YList moduleentry_list;
        
}; // System::SystemTableItems::ModuleTableItems::ModuleEntryItems


class System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList : public ydk::Entity
{
    public:
        ModuleEntryList();
        ~ModuleEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf type; //type: string

}; // System::SystemTableItems::ModuleTableItems::ModuleEntryItems::ModuleEntryList


class System::SystemTableItems::VxlanTableItems : public ydk::Entity
{
    public:
        VxlanTableItems();
        ~VxlanTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::SystemTableItems::VxlanTableItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::VxlanTableItems::IntfItems> intf_items;
        
}; // System::SystemTableItems::VxlanTableItems


class System::SystemTableItems::VxlanTableItems::IntfItems : public ydk::Entity
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

        class VxlanInterfaceEntryList; //type: System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList

        ydk::YList vxlaninterfaceentry_list;
        
}; // System::SystemTableItems::VxlanTableItems::IntfItems


class System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList : public ydk::Entity
{
    public:
        VxlanInterfaceEntryList();
        ~VxlanInterfaceEntryList();

        bool has_data() const override;
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
        ydk::YLeaf mytepstatus; //type: AggregateOperState
        ydk::YLeaf hostreachability; //type: AggregateHostReachabilityMode
        ydk::YLeaf controllerid; //type: uint32
        ydk::YLeaf configsource; //type: AggregateConfigSourceType
        ydk::YLeaf primarytunnelip; //type: string
        ydk::YLeaf secondarytunnelip; //type: string
        class LocalBfdItems; //type: System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems> localbfd_items;
        
}; // System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList


class System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems : public ydk::Entity
{
    public:
        LocalBfdItems();
        ~LocalBfdItems();

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
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16

}; // System::SystemTableItems::VxlanTableItems::IntfItems::VxlanInterfaceEntryList::LocalBfdItems


class System::SystemTableItems::ShadowVxlanTableItems : public ydk::Entity
{
    public:
        ShadowVxlanTableItems();
        ~ShadowVxlanTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::SystemTableItems::ShadowVxlanTableItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::SystemTableItems::ShadowVxlanTableItems::IntfItems> intf_items;
        
}; // System::SystemTableItems::ShadowVxlanTableItems


class System::SystemTableItems::ShadowVxlanTableItems::IntfItems : public ydk::Entity
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

        class ShadowVxlanInterfaceEntryList; //type: System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList

        ydk::YList shadowvxlaninterfaceentry_list;
        
}; // System::SystemTableItems::ShadowVxlanTableItems::IntfItems


class System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList : public ydk::Entity
{
    public:
        ShadowVxlanInterfaceEntryList();
        ~ShadowVxlanInterfaceEntryList();

        bool has_data() const override;
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
        ydk::YLeaf mytepstatus; //type: AggregateOperState
        ydk::YLeaf hostreachability; //type: AggregateHostReachabilityMode
        ydk::YLeaf controllerid; //type: uint32
        ydk::YLeaf configsource; //type: AggregateConfigSourceType
        ydk::YLeaf primarytunnelip; //type: string
        ydk::YLeaf secondarytunnelip; //type: string

}; // System::SystemTableItems::ShadowVxlanTableItems::IntfItems::ShadowVxlanInterfaceEntryList


class System::TunnelIntfTableItems : public ydk::Entity
{
    public:
        TunnelIntfTableItems();
        ~TunnelIntfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class IntfItems; //type: System::TunnelIntfTableItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems> intf_items;
        
}; // System::TunnelIntfTableItems


class System::TunnelIntfTableItems::IntfItems : public ydk::Entity
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

        class TunnelIntfEntryList; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList

        ydk::YList tunnelintfentry_list;
        
}; // System::TunnelIntfTableItems::IntfItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList : public ydk::Entity
{
    public:
        TunnelIntfEntryList();
        ~TunnelIntfEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf destip; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf type; //type: AggregateTunnelType
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf state; //type: AggregateOperState
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf ipvnidbinding; //type: AggregateBooleanFlag
        ydk::YLeaf istunnelcreated; //type: boolean
        ydk::YLeaf istunnelcreatedbycontroller; //type: boolean
        ydk::YLeaf noofmacsseenbeforetunnelcreatedbycontroller; //type: uint32
        ydk::YLeaf eptype; //type: string
        class TunMacTableItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems
        class VnidTableItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems
        class RemoteBfdItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems
        class RtaggregateVtepAttItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems> tunmactable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems> vnidtable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems> remotebfd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems> rtaggregatevtepatt_items;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems : public ydk::Entity
{
    public:
        TunMacTableItems();
        ~TunMacTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsmacItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems> rsmac_items;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems : public ydk::Entity
{
    public:
        RsmacItems();
        ~RsmacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMacList; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList

        ydk::YList rsmac_list;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList : public ydk::Entity
{
    public:
        RsMacList();
        ~RsMacList();

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

}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::TunMacTableItems::RsmacItems::RsMacList


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems : public ydk::Entity
{
    public:
        VnidTableItems();
        ~VnidTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VnidItems; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems> vnid_items;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems : public ydk::Entity
{
    public:
        VnidItems();
        ~VnidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VnidEntryList; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList

        ydk::YList vnidentry_list;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList : public ydk::Entity
{
    public:
        VnidEntryList();
        ~VnidEntryList();

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
        ydk::YLeaf groupaddr; //type: string

}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::VnidTableItems::VnidItems::VnidEntryList


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems : public ydk::Entity
{
    public:
        RemoteBfdItems();
        ~RemoteBfdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bfdstatus; //type: AggregateBfdStatus
        ydk::YLeaf mac; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mintxintvl; //type: uint16
        ydk::YLeaf minrxintvl; //type: uint16

}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RemoteBfdItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems : public ydk::Entity
{
    public:
        RtaggregateVtepAttItems();
        ~RtaggregateVtepAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtAggregateVtepAttList; //type: System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList

        ydk::YList rtaggregatevtepatt_list;
        
}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems


class System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList : public ydk::Entity
{
    public:
        RtAggregateVtepAttList();
        ~RtAggregateVtepAttList();

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

}; // System::TunnelIntfTableItems::IntfItems::TunnelIntfEntryList::RtaggregateVtepAttItems::RtAggregateVtepAttList


class System::VlanTableItems : public ydk::Entity
{
    public:
        VlanTableItems();
        ~VlanTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanItems; //type: System::VlanTableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VlanTableItems::VlanItems> vlan_items;
        
}; // System::VlanTableItems


class System::VlanTableItems::VlanItems : public ydk::Entity
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

        class VlanEntryList; //type: System::VlanTableItems::VlanItems::VlanEntryList

        ydk::YList vlanentry_list;
        
}; // System::VlanTableItems::VlanItems


class System::VlanTableItems::VlanItems::VlanEntryList : public ydk::Entity
{
    public:
        VlanEntryList();
        ~VlanEntryList();

        bool has_data() const override;
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
        ydk::YLeaf adminstate; //type: AggregateAdminState

}; // System::VlanTableItems::VlanItems::VlanEntryList


class System::VpcDomTableItems : public ydk::Entity
{
    public:
        VpcDomTableItems();
        ~VpcDomTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VpcDomItems; //type: System::VpcDomTableItems::VpcDomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems> vpcdom_items;
        
}; // System::VpcDomTableItems


class System::VpcDomTableItems::VpcDomItems : public ydk::Entity
{
    public:
        VpcDomItems();
        ~VpcDomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VpcDomEntryList; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList

        ydk::YList vpcdomentry_list;
        
}; // System::VpcDomTableItems::VpcDomItems


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList : public ydk::Entity
{
    public:
        VpcDomEntryList();
        ~VpcDomEntryList();

        bool has_data() const override;
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
        ydk::YLeaf keepalivedestip; //type: string
        ydk::YLeaf keepalivesrcip; //type: string
        ydk::YLeaf virtualip; //type: string
        ydk::YLeaf keepalivests; //type: AggregateVpcKeepaliveStatus
        ydk::YLeaf peerlinksts; //type: AggregateVpcPeerLinkStatus
        ydk::YLeaf vpcrole; //type: VpcRole
        ydk::YLeaf peergw; //type: boolean
        ydk::YLeaf dualactive; //type: boolean
        ydk::YLeaf peerlinkif; //type: string
        class VpcTableItems; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems> vpctable_items;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems : public ydk::Entity
{
    public:
        VpcTableItems();
        ~VpcTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpcItems; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems> vpc_items;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems : public ydk::Entity
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

        class VpcEntryList; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList

        ydk::YList vpcentry_list;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList : public ydk::Entity
{
    public:
        VpcEntryList();
        ~VpcEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpcnum; //type: uint16
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf operstate; //type: AggregateVpcOperStatus
        ydk::YLeaf conschecksts; //type: VpcCompatSt
        ydk::YLeaf conscheckreason; //type: uint32
        class VpcintfItems; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems> vpcintf_items;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems : public ydk::Entity
{
    public:
        VpcintfItems();
        ~VpcintfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsvpcIntfEntryAttItems; //type: System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems> rsvpcintfentryatt_items;
        
}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems


class System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems : public ydk::Entity
{
    public:
        RsvpcIntfEntryAttItems();
        ~RsvpcIntfEntryAttItems();

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

}; // System::VpcDomTableItems::VpcDomItems::VpcDomEntryList::VpcTableItems::VpcItems::VpcEntryList::VpcintfItems::RsvpcIntfEntryAttItems


class System::VrfTableItems : public ydk::Entity
{
    public:
        VrfTableItems();
        ~VrfTableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VrfItems; //type: System::VrfTableItems::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems> vrf_items;
        
}; // System::VrfTableItems


class System::VrfTableItems::VrfItems : public ydk::Entity
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

        class VrfEntryList; //type: System::VrfTableItems::VrfItems::VrfEntryList

        ydk::YList vrfentry_list;
        
}; // System::VrfTableItems::VrfItems


class System::VrfTableItems::VrfItems::VrfEntryList : public ydk::Entity
{
    public:
        VrfEntryList();
        ~VrfEntryList();

        bool has_data() const override;
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
        ydk::YLeaf genname; //type: string
        ydk::YLeaf ctrlrid; //type: uint32
        ydk::YLeaf vnid; //type: string
        ydk::YLeaf rd; //type: string
        ydk::YLeaf genextrart; //type: boolean
        ydk::YLeaf templatename; //type: string
        ydk::YLeaf templatestatus; //type: AggregateConfTmplStatus
        ydk::YLeaf shdwtemplatename; //type: string
        ydk::YLeaf shdwvrfgenname; //type: string
        class AfItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems> af_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems : public ydk::Entity
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

        class DomainAfList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList

        ydk::YList domainaf_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList : public ydk::Entity
{
    public:
        DomainAfList();
        ~DomainAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateAfT
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf rd; //type: string
        class RttpItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems
        class CtrlItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems> rttp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems> ctrl_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList : public ydk::Entity
{
    public:
        RttPList();
        ~RttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateRttPType
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        class EntItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems> ent_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttEntryList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
{
    public:
        RttEntryList();
        ~RttEntryList();

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

}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::RttpItems::RttPList::EntItems::RttEntryList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems : public ydk::Entity
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

        class AfCtrlList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList

        ydk::YList afctrl_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList : public ydk::Entity
{
    public:
        AfCtrlList();
        ~AfCtrlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateAfT
        class RttpItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems> rttp_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems : public ydk::Entity
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

        class RttPList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList

        ydk::YList rttp_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList : public ydk::Entity
{
    public:
        RttPList();
        ~RttPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AggregateRttPType
        ydk::YLeaf isl3; //type: AggregateBooleanFlag
        class EntItems; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems> ent_items;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems : public ydk::Entity
{
    public:
        EntItems();
        ~EntItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RttEntryList; //type: System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList

        ydk::YList rttentry_list;
        
}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems


class System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList : public ydk::Entity
{
    public:
        RttEntryList();
        ~RttEntryList();

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

}; // System::VrfTableItems::VrfItems::VrfEntryList::AfItems::DomainAfList::CtrlItems::AfCtrlList::RttpItems::RttPList::EntItems::RttEntryList


class System::AcItems : public ydk::Entity
{
    public:
        AcItems();
        ~AcItems();

        bool has_data() const override;
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
        class RuleIpItems; //type: System::AcItems::RuleIpItems
        class RuleMacItems; //type: System::AcItems::RuleMacItems
        class RuleArpItems; //type: System::AcItems::RuleArpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleIpItems> ruleip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleMacItems> rulemac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleArpItems> rulearp_items;
        
}; // System::AcItems


class System::AcItems::RuleIpItems : public ydk::Entity
{
    public:
        RuleIpItems();
        ~RuleIpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleIpList; //type: System::AcItems::RuleIpItems::RuleIpList

        ydk::YList ruleip_list;
        
}; // System::AcItems::RuleIpItems


class System::AcItems::RuleIpItems::RuleIpList : public ydk::Entity
{
    public:
        RuleIpList();
        ~RuleIpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ruleid; //type: uint64
        ydk::YLeaf src; //type: string
        ydk::YLeaf dst; //type: string
        ydk::YLeaf prot; //type: uint8
        ydk::YLeaf flags; //type: string
        ydk::YLeaf flagsmask; //type: string
        ydk::YLeaf ttl; //type: uint8
        ydk::YLeaf dscp; //type: uint8
        ydk::YLeaf dscpmask; //type: uint8
        ydk::YLeaf ecn; //type: uint8
        ydk::YLeaf ecnmask; //type: uint8
        ydk::YLeaf payloadsz; //type: uint8
        ydk::YLeaf spctag; //type: uint32
        ydk::YLeaf dpctag; //type: uint32
        ydk::YLeaf options; //type: string
        ydk::YLeaf optionsmask; //type: string
        ydk::YLeaf icmpflags; //type: uint8
        ydk::YLeaf icmpcode; //type: uint16
        ydk::YLeaf icmptype; //type: uint8
        ydk::YLeaf srcport; //type: uint16
        ydk::YLeaf dstport; //type: uint16
        ydk::YLeaf tcpflags; //type: string
        ydk::YLeaf tcpflagsmask; //type: string
        ydk::YLeaf isext; //type: boolean
        ydk::YLeaf operstate; //type: AcRuleOperSt
        ydk::YLeaf lastoperstate; //type: AcRuleOperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf ctrlmask; //type: string
        ydk::YLeaf fabricport; //type: string
        ydk::YLeaf fabricencap; //type: string
        ydk::YLeaf remotetep; //type: string
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf dot1p; //type: uint8
        ydk::YLeaf dot1pmask; //type: uint8
        ydk::YLeaf policyname; //type: string
        ydk::YLeaf tenantname; //type: string
        ydk::YLeaf vrfname; //type: string
        class BankItems; //type: System::AcItems::RuleIpItems::RuleIpList::BankItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleIpItems::RuleIpList::BankItems> bank_items;
        
}; // System::AcItems::RuleIpItems::RuleIpList


class System::AcItems::RuleIpItems::RuleIpList::BankItems : public ydk::Entity
{
    public:
        BankItems();
        ~BankItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BankList; //type: System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList

        ydk::YList bank_list;
        
}; // System::AcItems::RuleIpItems::RuleIpList::BankItems


class System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList : public ydk::Entity
{
    public:
        BankList();
        ~BankList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AcBankT
        class DbgIngrHitItems; //type: System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems
        class DbgEgrHitItems; //type: System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems> dbgingrhit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems> dbgegrhit_items;
        
}; // System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList


class System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems : public ydk::Entity
{
    public:
        DbgIngrHitItems();
        ~DbgIngrHitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgIngrHitItems


class System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems : public ydk::Entity
{
    public:
        DbgEgrHitItems();
        ~DbgEgrHitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::AcItems::RuleIpItems::RuleIpList::BankItems::BankList::DbgEgrHitItems


class System::AcItems::RuleMacItems : public ydk::Entity
{
    public:
        RuleMacItems();
        ~RuleMacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleMacList; //type: System::AcItems::RuleMacItems::RuleMacList

        ydk::YList rulemac_list;
        
}; // System::AcItems::RuleMacItems


class System::AcItems::RuleMacItems::RuleMacList : public ydk::Entity
{
    public:
        RuleMacList();
        ~RuleMacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ruleid; //type: uint64
        ydk::YLeaf type; //type: uint16
        ydk::YLeaf payloadsz; //type: uint8
        ydk::YLeaf payload; //type: uint64
        ydk::YLeaf spctag; //type: uint32
        ydk::YLeaf dpctag; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf ctrlmask; //type: string
        ydk::YLeaf fabricport; //type: string
        ydk::YLeaf fabricencap; //type: string
        ydk::YLeaf remotetep; //type: string
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf dot1p; //type: uint8
        ydk::YLeaf dot1pmask; //type: uint8
        ydk::YLeaf policyname; //type: string
        ydk::YLeaf tenantname; //type: string
        ydk::YLeaf vrfname; //type: string
        class BankItems; //type: System::AcItems::RuleMacItems::RuleMacList::BankItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleMacItems::RuleMacList::BankItems> bank_items;
        
}; // System::AcItems::RuleMacItems::RuleMacList


class System::AcItems::RuleMacItems::RuleMacList::BankItems : public ydk::Entity
{
    public:
        BankItems();
        ~BankItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BankList; //type: System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList

        ydk::YList bank_list;
        
}; // System::AcItems::RuleMacItems::RuleMacList::BankItems


class System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList : public ydk::Entity
{
    public:
        BankList();
        ~BankList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AcBankT
        class DbgIngrHitItems; //type: System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems
        class DbgEgrHitItems; //type: System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems> dbgingrhit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems> dbgegrhit_items;
        
}; // System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList


class System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems : public ydk::Entity
{
    public:
        DbgIngrHitItems();
        ~DbgIngrHitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgIngrHitItems


class System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems : public ydk::Entity
{
    public:
        DbgEgrHitItems();
        ~DbgEgrHitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::AcItems::RuleMacItems::RuleMacList::BankItems::BankList::DbgEgrHitItems


class System::AcItems::RuleArpItems : public ydk::Entity
{
    public:
        RuleArpItems();
        ~RuleArpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RuleArpList; //type: System::AcItems::RuleArpItems::RuleArpList

        ydk::YList rulearp_list;
        
}; // System::AcItems::RuleArpItems


class System::AcItems::RuleArpItems::RuleArpList : public ydk::Entity
{
    public:
        RuleArpList();
        ~RuleArpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ruleid; //type: uint64
        ydk::YLeaf opc; //type: ArpOpcode
        ydk::YLeaf sendermac; //type: string
        ydk::YLeaf senderip; //type: string
        ydk::YLeaf targetmac; //type: string
        ydk::YLeaf targetip; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf order; //type: uint16
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf ctrlmask; //type: string
        ydk::YLeaf fabricport; //type: string
        ydk::YLeaf fabricencap; //type: string
        ydk::YLeaf remotetep; //type: string
        ydk::YLeaf srcmac; //type: string
        ydk::YLeaf dstmac; //type: string
        ydk::YLeaf dot1p; //type: uint8
        ydk::YLeaf dot1pmask; //type: uint8
        ydk::YLeaf policyname; //type: string
        ydk::YLeaf tenantname; //type: string
        ydk::YLeaf vrfname; //type: string
        class BankItems; //type: System::AcItems::RuleArpItems::RuleArpList::BankItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleArpItems::RuleArpList::BankItems> bank_items;
        
}; // System::AcItems::RuleArpItems::RuleArpList


class System::AcItems::RuleArpItems::RuleArpList::BankItems : public ydk::Entity
{
    public:
        BankItems();
        ~BankItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BankList; //type: System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList

        ydk::YList bank_list;
        
}; // System::AcItems::RuleArpItems::RuleArpList::BankItems


class System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList : public ydk::Entity
{
    public:
        BankList();
        ~BankList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AcBankT
        class DbgIngrHitItems; //type: System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems
        class DbgEgrHitItems; //type: System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems> dbgingrhit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems> dbgegrhit_items;
        
}; // System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList


class System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems : public ydk::Entity
{
    public:
        DbgIngrHitItems();
        ~DbgIngrHitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgIngrHitItems


class System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems : public ydk::Entity
{
    public:
        DbgEgrHitItems();
        ~DbgEgrHitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fwdpkts; //type: uint64
        ydk::YLeaf fwdbytes; //type: uint64
        ydk::YLeaf droppkts; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64

}; // System::AcItems::RuleArpItems::RuleArpList::BankItems::BankList::DbgEgrHitItems


class System::AclItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class ONameItems; //type: System::AclItems::ONameItems
        class VlanItems; //type: System::AclItems::VlanItems
        class MacItems; //type: System::AclItems::MacItems
        class Ipv4Items; //type: System::AclItems::Ipv4Items
        class Ipv6Items; //type: System::AclItems::Ipv6Items

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::ONameItems> oname_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv4Items> ipv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::Ipv6Items> ipv6_items;
        
}; // System::AclItems


class System::AclItems::ONameItems : public ydk::Entity
{
    public:
        ONameItems();
        ~ONameItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PortGroupList; //type: System::AclItems::ONameItems::PortGroupList

        ydk::YList portgroup_list;
        
}; // System::AclItems::ONameItems


class System::AclItems::ONameItems::PortGroupList : public ydk::Entity
{
    public:
        PortGroupList();
        ~PortGroupList();

        bool has_data() const override;
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
        ydk::YLeaf configstatus; //type: uint32
        class SeqItems; //type: System::AclItems::ONameItems::PortGroupList::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AclItems::ONameItems::PortGroupList::SeqItems> seq_items;
        
}; // System::AclItems::ONameItems::PortGroupList


class System::AclItems::ONameItems::PortGroupList::SeqItems : public ydk::Entity
{
    public:
        SeqItems();
        ~SeqItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PortMemberList; //type: System::AclItems::ONameItems::PortGroupList::SeqItems::PortMemberList

        ydk::YList portmember_list;
        
}; // System::AclItems::ONameItems::PortGroupList::SeqItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_24_ */

