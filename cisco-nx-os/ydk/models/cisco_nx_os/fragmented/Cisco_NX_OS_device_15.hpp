#ifndef _CISCO_NX_OS_DEVICE_15_
#define _CISCO_NX_OS_DEVICE_15_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems : public ydk::Entity
{
    public:
        PolicycontItems();
        ~PolicycontItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyContList; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList

        ydk::YList policycont_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList : public ydk::Entity
{
    public:
        PolicyContList();
        ~PolicyContList();

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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf allowedselfascnt; //type: uint8
        ydk::YLeaf softreconfigbackup; //type: BgpSoftReconfigBackup
        ydk::YLeaf advintvl; //type: uint16
        ydk::YLeaf deforg; //type: BgpAdminSt
        ydk::YLeaf deforgrtmap; //type: string
        ydk::YLeaf capaddlpaths; //type: string
        ydk::YLeaf unsupprmap; //type: string
        ydk::YLeaf asoverride; //type: BgpAdminSt
        ydk::YLeaf nhthirdparty; //type: BgpAdminSt
        ydk::YLeaf wght; //type: string
        ydk::YLeaf soo; //type: string
        ydk::YLeaf sendcomstd; //type: BgpAdminSt
        ydk::YLeaf sendcomext; //type: BgpAdminSt
        ydk::YLeaf inheritcontpeerpolicyctrl; //type: string
        class MaxpfxpItems; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems
        class AdvtmapItems; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems
        class RtctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems
        class PfxctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems
        class FltrctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems
        class PolItems; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems> maxpfxp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems> advtmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems> rtctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems> pfxctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems> fltrctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems> pol_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems : public ydk::Entity
{
    public:
        MaxpfxpItems();
        ~MaxpfxpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maxpfx; //type: uint32
        ydk::YLeaf thresh; //type: uint8
        ydk::YLeaf action; //type: BgpMaxPfxAct
        ydk::YLeaf restarttime; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::MaxpfxpItems


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems : public ydk::Entity
{
    public:
        AdvtmapItems();
        ~AdvtmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf condition; //type: BgpAdvtMapCondition
        ydk::YLeaf condmap; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::AdvtmapItems


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems : public ydk::Entity
{
    public:
        RtctrlItems();
        ~RtctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtCtrlPList; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList

        ydk::YList rtctrlp_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList : public ydk::Entity
{
    public:
        RtCtrlPList();
        ~RtCtrlPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: RtctrlRtCtrlDir
        ydk::YLeaf operst; //type: BgpRtCtrlOperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf rtmap; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::RtctrlItems::RtCtrlPList


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems : public ydk::Entity
{
    public:
        PfxctrlItems();
        ~PfxctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxCtrlPList; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList

        ydk::YList pfxctrlp_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList : public ydk::Entity
{
    public:
        PfxCtrlPList();
        ~PfxCtrlPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: BgpRtCtrlDir
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf list; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PfxctrlItems::PfxCtrlPList


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems : public ydk::Entity
{
    public:
        FltrctrlItems();
        ~FltrctrlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FltrCtrlPList; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList

        ydk::YList fltrctrlp_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList : public ydk::Entity
{
    public:
        FltrCtrlPList();
        ~FltrCtrlPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: BgpRtCtrlDir
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf list; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::FltrctrlItems::FltrCtrlPList


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems : public ydk::Entity
{
    public:
        PolItems();
        ~PolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyInheritRuleList; //type: System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList

        ydk::YList policyinheritrule_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems


class System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList : public ydk::Entity
{
    public:
        PolicyInheritRuleList();
        ~PolicyInheritRuleList();

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
        ydk::YLeaf seq; //type: uint16

}; // System::BgpItems::InstItems::DomItems::DomList::PolicycontItems::PolicyContList::PolItems::PolicyInheritRuleList


class System::BgpItems::InstItems::EvthistItems : public ydk::Entity
{
    public:
        EvthistItems();
        ~EvthistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EvtHistList; //type: System::BgpItems::InstItems::EvthistItems::EvtHistList

        ydk::YList evthist_list;
        
}; // System::BgpItems::InstItems::EvthistItems


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
        ydk::YLeaf filtercheckst; //type: CompatFilterStatus
        ydk::YLeaf message; //type: string

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


class System::CoopItems : public ydk::Entity
{
    public:
        CoopItems();
        ~CoopItems();

        bool has_data() const override;
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
        class InstItems; //type: System::CoopItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems> inst_items;
        
}; // System::CoopItems


class System::CoopItems::InstItems : public ydk::Entity
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

        ydk::YLeaf role; //type: CoopRole
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class DomItems; //type: System::CoopItems::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems> dom_items;
        
}; // System::CoopItems::InstItems


class System::CoopItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::CoopItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::CoopItems::InstItems::DomItems


class System::CoopItems::InstItems::DomItems::DomList : public ydk::Entity
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
        ydk::YLeaf addr; //type: string
        ydk::YLeaf operst; //type: CoopDomOperSt
        ydk::YLeaf operstqual; //type: CoopDomOperStQual
        class OracleItems; //type: System::CoopItems::InstItems::DomItems::DomList::OracleItems
        class CitizenItems; //type: System::CoopItems::InstItems::DomItems::DomList::CitizenItems
        class ShardItems; //type: System::CoopItems::InstItems::DomItems::DomList::ShardItems
        class ReppItems; //type: System::CoopItems::InstItems::DomItems::DomList::ReppItems
        class DbItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::OracleItems> oracle_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::CitizenItems> citizen_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::ShardItems> shard_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::ReppItems> repp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems> db_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList


class System::CoopItems::InstItems::DomItems::DomList::OracleItems : public ydk::Entity
{
    public:
        OracleItems();
        ~OracleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OracleAdjList; //type: System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList

        ydk::YList oracleadj_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::OracleItems


class System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList : public ydk::Entity
{
    public:
        OracleAdjList();
        ~OracleAdjList();

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
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf grtime; //type: uint32
        ydk::YLeaf operst; //type: CoopAdjOperSt
        ydk::YLeaf operstqual; //type: CoopAdjOperStQual
        ydk::YLeaf lastcontact; //type: string
        ydk::YLeaf flags; //type: string
        class ShardItems; //type: System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems> shard_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList


class System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems : public ydk::Entity
{
    public:
        ShardItems();
        ~ShardItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf masterintvlst; //type: uint32
        ydk::YLeaf masterintvlend; //type: uint32
        ydk::YLeaf bkupintvlst; //type: uint32
        ydk::YLeaf bkupintvlend; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::OracleItems::OracleAdjList::ShardItems


class System::CoopItems::InstItems::DomItems::DomList::CitizenItems : public ydk::Entity
{
    public:
        CitizenItems();
        ~CitizenItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CitizenAdjList; //type: System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList

        ydk::YList citizenadj_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::CitizenItems


class System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList : public ydk::Entity
{
    public:
        CitizenAdjList();
        ~CitizenAdjList();

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
        ydk::YLeaf vpcpeer; //type: string
        ydk::YLeaf vip; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf grtime; //type: uint32
        ydk::YLeaf operst; //type: CoopAdjOperSt
        ydk::YLeaf operstqual; //type: CoopAdjOperStQual
        ydk::YLeaf lastcontact; //type: string
        ydk::YLeaf flags; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::CitizenItems::CitizenAdjList


class System::CoopItems::InstItems::DomItems::DomList::ShardItems : public ydk::Entity
{
    public:
        ShardItems();
        ~ShardItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf masterintvlst; //type: uint32
        ydk::YLeaf masterintvlend; //type: uint32
        ydk::YLeaf bkupintvlst; //type: uint32
        ydk::YLeaf bkupintvlend; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::ShardItems


class System::CoopItems::InstItems::DomItems::DomList::ReppItems : public ydk::Entity
{
    public:
        ReppItems();
        ~ReppItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RepPList; //type: System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList

        ydk::YList repp_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::ReppItems


class System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList : public ydk::Entity
{
    public:
        RepPList();
        ~RepPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: CoopRepT
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf refreshintvl; //type: uint32
        ydk::YLeaf dampadminst; //type: NwAdminSt_
        ydk::YLeaf dampaction; //type: CoopDampAction
        ydk::YLeaf dampenpenalty; //type: uint16
        ydk::YLeaf dampthresh; //type: uint16
        ydk::YLeaf dampreusethresh; //type: uint16
        ydk::YLeaf damphalflife; //type: uint16
        ydk::YLeaf dampsatthresh; //type: uint16
        ydk::YLeaf loadfactor; //type: uint16
        ydk::YLeaf maxrepsz; //type: uint32
        ydk::YLeaf synthgen; //type: CoopSynthGen
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class EpItems; //type: System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems> ep_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList


class System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems : public ydk::Entity
{
    public:
        EpItems();
        ~EpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpList; //type: System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList

        ydk::YList ep_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems


class System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList : public ydk::Entity
{
    public:
        EpList();
        ~EpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vnid; //type: uint32
        ydk::YLeaf mac; //type: string
        ydk::YLeaf pubid; //type: string
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        class IpItems; //type: System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems> ip_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList


class System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems : public ydk::Entity
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

        class IpAddrList; //type: System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList

        ydk::YList ipaddr_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems


class System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList : public ydk::Entity
{
    public:
        IpAddrList();
        ~IpAddrList();

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

}; // System::CoopItems::InstItems::DomItems::DomList::ReppItems::RepPList::EpItems::EpList::IpItems::IpAddrList


class System::CoopItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: CoopRepT
        ydk::YLeaf name; //type: string
        class CtxItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems
        class EprItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems
        class VrfItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems
        class LeafItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems
        class Mgv4Items; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items
        class Mgv6Items; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items
        class MrtrItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems
        class RItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems> ctx_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems> epr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems> vrf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems> leaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items> mgv4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items> mgv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems> mrtr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems> r_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems : public ydk::Entity
{
    public:
        CtxItems();
        ~CtxItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CtxRecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList

        ydk::YList ctxrec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList : public ydk::Entity
{
    public:
        CtxRecList();
        ~CtxRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vnid; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf recordts; //type: string
        ydk::YLeaf lastpub; //type: string
        ydk::YLeaf lastdampen; //type: string
        ydk::YLeaf damppenalty; //type: uint16
        class Rsctx2LeafItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems> rsctx2leaf_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems : public ydk::Entity
{
    public:
        Rsctx2LeafItems();
        ~Rsctx2LeafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsCtx2LeafList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList

        ydk::YList rsctx2leaf_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList : public ydk::Entity
{
    public:
        RsCtx2LeafList();
        ~RsCtx2LeafList();

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
        ydk::YLeaf pubid; //type: string
        ydk::YLeaf lastpub; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::CtxItems::CtxRecList::Rsctx2LeafItems::RsCtx2LeafList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems : public ydk::Entity
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

        class EpRecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList

        ydk::YList eprec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList : public ydk::Entity
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

        ydk::YLeaf vnid; //type: uint32
        ydk::YLeaf mac; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf recordts; //type: string
        ydk::YLeaf lastpub; //type: string
        ydk::YLeaf lastdampen; //type: string
        ydk::YLeaf damppenalty; //type: uint16
        ydk::YLeaf vrfvnid; //type: uint32
        ydk::YLeaf pubid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf synthip; //type: string
        ydk::YLeaf synthvrf; //type: uint32
        ydk::YLeaf synthflags; //type: string
        ydk::YLeaf currcitizen; //type: string
        ydk::YLeaf prevcitizen; //type: string
        ydk::YLeaf pprevcitizen; //type: string
        class Epip4Items; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items
        class Epip6Items; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items
        class EpvpcItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items> epip4_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items> epip6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems> epvpc_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items : public ydk::Entity
{
    public:
        Epip4Items();
        ~Epip4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4RecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList

        ydk::YList ipv4rec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList : public ydk::Entity
{
    public:
        Ipv4RecList();
        ~Ipv4RecList();

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
        ydk::YLeaf synthip; //type: string
        ydk::YLeaf synthvrf; //type: uint32
        ydk::YLeaf synthflags; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip4Items::Ipv4RecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items : public ydk::Entity
{
    public:
        Epip6Items();
        ~Epip6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6RecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList

        ydk::YList ipv6rec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList : public ydk::Entity
{
    public:
        Ipv6RecList();
        ~Ipv6RecList();

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
        ydk::YLeaf synthip; //type: string
        ydk::YLeaf synthvrf; //type: uint32
        ydk::YLeaf synthflags; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::Epip6Items::Ipv6RecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems : public ydk::Entity
{
    public:
        EpvpcItems();
        ~EpvpcItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EpVpcRecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList

        ydk::YList epvpcrec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList : public ydk::Entity
{
    public:
        EpVpcRecList();
        ~EpVpcRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf virtswid; //type: string
        ydk::YLeaf vpcportid; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::EprItems::EpRecList::EpvpcItems::EpVpcRecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems : public ydk::Entity
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

        class IpOnlyRecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList

        ydk::YList iponlyrec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList : public ydk::Entity
{
    public:
        IpOnlyRecList();
        ~IpOnlyRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrfvnid; //type: uint32
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf recordts; //type: string
        ydk::YLeaf lastpub; //type: string
        ydk::YLeaf lastdampen; //type: string
        ydk::YLeaf damppenalty; //type: uint16
        ydk::YLeaf pubid; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf synthip; //type: string
        ydk::YLeaf synthvrf; //type: uint32
        ydk::YLeaf synthflags; //type: string
        ydk::YLeaf currcitizen; //type: string
        ydk::YLeaf prevcitizen; //type: string
        ydk::YLeaf pprevcitizen; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::VrfItems::IpOnlyRecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems : public ydk::Entity
{
    public:
        LeafItems();
        ~LeafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LeafRecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList

        ydk::YList leafrec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList : public ydk::Entity
{
    public:
        LeafRecList();
        ~LeafRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pubid; //type: string
        ydk::YLeaf name; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::LeafItems::LeafRecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items : public ydk::Entity
{
    public:
        Mgv4Items();
        ~Mgv4Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McGrpv4RecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList

        ydk::YList mcgrpv4rec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList : public ydk::Entity
{
    public:
        McGrpv4RecList();
        ~McGrpv4RecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf mcgrpip; //type: string
        ydk::YLeaf vnid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf recordts; //type: string
        ydk::YLeaf lastpub; //type: string
        ydk::YLeaf lastdampen; //type: string
        ydk::YLeaf damppenalty; //type: uint16
        ydk::YLeaf flags; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv4Items::McGrpv4RecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items : public ydk::Entity
{
    public:
        Mgv6Items();
        ~Mgv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McGrpv6RecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList

        ydk::YList mcgrpv6rec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList : public ydk::Entity
{
    public:
        McGrpv6RecList();
        ~McGrpv6RecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: uint8
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf mcgrpip; //type: string
        ydk::YLeaf vnid; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf recordts; //type: string
        ydk::YLeaf lastpub; //type: string
        ydk::YLeaf lastdampen; //type: string
        ydk::YLeaf damppenalty; //type: uint16
        ydk::YLeaf flags; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::Mgv6Items::McGrpv6RecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems : public ydk::Entity
{
    public:
        MrtrItems();
        ~MrtrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MrtrRecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList

        ydk::YList mrtrrec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList : public ydk::Entity
{
    public:
        MrtrRecList();
        ~MrtrRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vnid; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf recordts; //type: string
        ydk::YLeaf lastpub; //type: string
        ydk::YLeaf lastdampen; //type: string
        ydk::YLeaf damppenalty; //type: uint16
        class Rsmrtr2LeafItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems> rsmrtr2leaf_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems : public ydk::Entity
{
    public:
        Rsmrtr2LeafItems();
        ~Rsmrtr2LeafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsMrtr2LeafList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList

        ydk::YList rsmrtr2leaf_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList : public ydk::Entity
{
    public:
        RsMrtr2LeafList();
        ~RsMrtr2LeafList();

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
        ydk::YLeaf pubid; //type: string
        ydk::YLeaf lastpub; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::MrtrItems::MrtrRecList::Rsmrtr2LeafItems::RsMrtr2LeafList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems : public ydk::Entity
{
    public:
        RItems();
        ~RItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpcRecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList

        ydk::YList vpcrec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList : public ydk::Entity
{
    public:
        VpcRecList();
        ~VpcRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf swid; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf pubid; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf recordts; //type: string
        ydk::YLeaf lastpub; //type: string
        ydk::YLeaf lastdampen; //type: string
        ydk::YLeaf damppenalty; //type: uint16
        class VpcrItems; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems> vpcr_items;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems : public ydk::Entity
{
    public:
        VpcrItems();
        ~VpcrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpcNodeRecList; //type: System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList

        ydk::YList vpcnoderec_list;
        
}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems


class System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList : public ydk::Entity
{
    public:
        VpcNodeRecList();
        ~VpcNodeRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf swid; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf name; //type: string

}; // System::CoopItems::InstItems::DomItems::DomList::DbItems::DbList::RItems::VpcRecList::VpcrItems::VpcNodeRecList


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
        ydk::YLeaf reftime; //type: string
        ydk::YLeaf reftimeraw; //type: uint64
        ydk::YLeaf poll; //type: int32
        ydk::YLeaf peer; //type: uint32
        ydk::YLeaf clock_; //type: string
        ydk::YLeaf clockraw; //type: uint64
        ydk::YLeaf srvstatus; //type: DatetimeNtpSrvStatus
        ydk::YLeaf logging; //type: DatetimeAdminState
        ydk::YLeaf logginglevel; //type: DatetimeLoggingLevel
        ydk::YLeaf master; //type: DatetimeAdminState
        ydk::YLeaf masterstratum; //type: uint8
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
        class DbgStatisticsItems; //type: System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::ProvItems::NtpProviderList::StatusItems> status_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems> rsntpprovidertontpauth_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems> dbgstatistics_items;
        
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
        ydk::YLeaf associd; //type: uint32
        ydk::YLeaf peeraddress; //type: string
        ydk::YLeaf peerport; //type: uint32
        ydk::YLeaf hostaddress; //type: string
        ydk::YLeaf hostport; //type: uint32
        ydk::YLeaf leap; //type: uint8
        ydk::YLeaf mode; //type: DatetimeNTPPeerMode
        ydk::YLeaf stratum; //type: uint8
        ydk::YLeaf peerpoll; //type: int32
        ydk::YLeaf hostpoll; //type: int32
        ydk::YLeaf hostpollseconds; //type: uint32
        ydk::YLeaf precision; //type: int32
        ydk::YLeaf rootdelay; //type: int32
        ydk::YLeaf rootdispersion; //type: uint32
        ydk::YLeaf refid; //type: string
        ydk::YLeaf reftime; //type: string
        ydk::YLeaf reftimeraw; //type: uint64
        ydk::YLeaf orgtime; //type: string
        ydk::YLeaf orgtimeraw; //type: uint64
        ydk::YLeaf receivetime; //type: string
        ydk::YLeaf receivetimeraw; //type: uint64
        ydk::YLeaf transmittime; //type: string
        ydk::YLeaf transmittimeraw; //type: uint64
        ydk::YLeaf reach; //type: uint8
        ydk::YLeaf timer; //type: uint32
        ydk::YLeaf offset; //type: int32
        ydk::YLeaf delay; //type: string
        ydk::YLeaf delayraw; //type: int32
        ydk::YLeaf dispersion; //type: uint32
        ydk::YLeaf filtervalidentries; //type: uint32
        ydk::YLeaf updatetime; //type: uint32
        ydk::YLeaf updatetimeraw; //type: uint64
        ydk::YLeaf peertype; //type: DatetimeInetAddressType
        ydk::YLeaf peername; //type: string

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
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::TimeItems::ProvItems::NtpProviderList::RsntpProviderToNtpAuthItems::RsNtpProviderToNtpAuthList


class System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems : public ydk::Entity
{
    public:
        DbgStatisticsItems();
        ~DbgStatisticsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timereceived; //type: uint32
        ydk::YLeaf timetosend; //type: uint32
        ydk::YLeaf timereachable; //type: uint32
        ydk::YLeaf numbersent; //type: uint32
        ydk::YLeaf numberprocessed; //type: uint32
        ydk::YLeaf badauth; //type: uint32
        ydk::YLeaf bogusorg; //type: uint32
        ydk::YLeaf duplicate; //type: uint32
        ydk::YLeaf baddispersion; //type: uint32
        ydk::YLeaf badreftime; //type: uint32
        ydk::YLeaf candidateorder; //type: uint8

}; // System::TimeItems::ProvItems::NtpProviderList::DbgStatisticsItems


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


}
}

#endif /* _CISCO_NX_OS_DEVICE_15_ */

