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


class System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems : public ydk::Entity
{
    public:
        DbgEgrTepItems();
        ~DbgEgrTepItems();

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

}; // System::TunnelItems::IfList::PortifItems::PortIfList::BankItems::BankList::DbgEgrTepItems


class System::TunnelItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::TunnelItems::IfList::RtvrfMbrItems


class System::TunnelItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::TunnelItems::IfList::RtnwPathToIfItems


class System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::TunnelItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::TunnelItems::IfList::RstunnelMbrIfsItems : public ydk::Entity
{
    public:
        RstunnelMbrIfsItems();
        ~RstunnelMbrIfsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsTunnelMbrIfsList; //type: System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList

        ydk::YList rstunnelmbrifs_list;
        
}; // System::TunnelItems::IfList::RstunnelMbrIfsItems


class System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList : public ydk::Entity
{
    public:
        RsTunnelMbrIfsList();
        ~RsTunnelMbrIfsList();

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

}; // System::TunnelItems::IfList::RstunnelMbrIfsItems::RsTunnelMbrIfsList


class System::TunnelItems::IfList::RstunnelToLooseNodeItems : public ydk::Entity
{
    public:
        RstunnelToLooseNodeItems();
        ~RstunnelToLooseNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsTunnelToLooseNodeList; //type: System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList

        ydk::YList rstunneltoloosenode_list;
        
}; // System::TunnelItems::IfList::RstunnelToLooseNodeItems


class System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList : public ydk::Entity
{
    public:
        RsTunnelToLooseNodeList();
        ~RsTunnelToLooseNodeList();

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

}; // System::TunnelItems::IfList::RstunnelToLooseNodeItems::RsTunnelToLooseNodeList


class System::VtpItems : public ydk::Entity
{
    public:
        VtpItems();
        ~VtpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::VtpItems::InstItems
        class IntfItems; //type: System::VtpItems::IntfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VtpItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VtpItems::IntfItems> intf_items;
        
}; // System::VtpItems


class System::VtpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf domain; //type: string
        ydk::YLeaf version; //type: uint32
        ydk::YLeaf password; //type: string
        ydk::YLeaf filepath; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf opererr; //type: string

}; // System::VtpItems::InstItems


class System::VtpItems::IntfItems : public ydk::Entity
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

        class IntfList; //type: System::VtpItems::IntfItems::IntfList

        ydk::YList intf_list;
        
}; // System::VtpItems::IntfItems


class System::VtpItems::IntfItems::IntfList : public ydk::Entity
{
    public:
        IntfList();
        ~IntfList();

        bool has_data() const override;
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

}; // System::VtpItems::IntfItems::IntfList


class System::WedgeItems : public ydk::Entity
{
    public:
        WedgeItems();
        ~WedgeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf ipenabled; //type: WedgeBmcIPEnabled
        ydk::YLeaf ipaddr; //type: string

}; // System::WedgeItems


class System::NbmItems : public ydk::Entity
{
    public:
        NbmItems();
        ~NbmItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ConfItems; //type: System::NbmItems::ConfItems
        class ShowItems; //type: System::NbmItems::ShowItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems> conf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems> show_items;
        
}; // System::NbmItems


class System::NbmItems::ConfItems : public ydk::Entity
{
    public:
        ConfItems();
        ~ConfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class FlowsItems; //type: System::NbmItems::ConfItems::FlowsItems
        class GrouprangelistItems; //type: System::NbmItems::ConfItems::GrouprangelistItems
        class InterfacesItems; //type: System::NbmItems::ConfItems::InterfacesItems
        class GlobalItems; //type: System::NbmItems::ConfItems::GlobalItems
        class FlowpolicytableItems; //type: System::NbmItems::ConfItems::FlowpolicytableItems
        class HostpolicytableItems; //type: System::NbmItems::ConfItems::HostpolicytableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowsItems> flows_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::GrouprangelistItems> grouprangelist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::InterfacesItems> interfaces_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::GlobalItems> global_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowpolicytableItems> flowpolicytable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems> hostpolicytable_items;
        
}; // System::NbmItems::ConfItems


class System::NbmItems::ConfItems::FlowsItems : public ydk::Entity
{
    public:
        FlowsItems();
        ~FlowsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ConfItems::FlowsItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowsItems::DomItems> dom_items;
        
}; // System::NbmItems::ConfItems::FlowsItems


class System::NbmItems::ConfItems::FlowsItems::DomItems : public ydk::Entity
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

        class ConfFlowsDomList; //type: System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList

        ydk::YList confflowsdom_list;
        
}; // System::NbmItems::ConfItems::FlowsItems::DomItems


class System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList : public ydk::Entity
{
    public:
        ConfFlowsDomList();
        ~ConfFlowsDomList();

        bool has_data() const override;
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
        class SItems; //type: System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems> s_items;
        
}; // System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList


class System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems : public ydk::Entity
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

        class ConfFlowList; //type: System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList

        ydk::YList confflow_list;
        
}; // System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems


class System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList : public ydk::Entity
{
    public:
        ConfFlowList();
        ~ConfFlowList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        class IfItems; //type: System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::IfItems
        class HostItems; //type: System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::HostItems> host_items;
        
}; // System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList


class System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::IfItems : public ydk::Entity
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

        class ConfFlowIfList; //type: System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::IfItems::ConfFlowIfList

        ydk::YList confflowif_list;
        
}; // System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::IfItems


class System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::IfItems::ConfFlowIfList : public ydk::Entity
{
    public:
        ConfFlowIfList();
        ~ConfFlowIfList();

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

}; // System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::IfItems::ConfFlowIfList


class System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::HostItems : public ydk::Entity
{
    public:
        HostItems();
        ~HostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfFlowHostList; //type: System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::HostItems::ConfFlowHostList

        ydk::YList confflowhost_list;
        
}; // System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::HostItems


class System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::HostItems::ConfFlowHostList : public ydk::Entity
{
    public:
        ConfFlowHostList();
        ~ConfFlowHostList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: string

}; // System::NbmItems::ConfItems::FlowsItems::DomItems::ConfFlowsDomList::SItems::ConfFlowList::HostItems::ConfFlowHostList


class System::NbmItems::ConfItems::GrouprangelistItems : public ydk::Entity
{
    public:
        GrouprangelistItems();
        ~GrouprangelistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ConfItems::GrouprangelistItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::GrouprangelistItems::DomItems> dom_items;
        
}; // System::NbmItems::ConfItems::GrouprangelistItems


class System::NbmItems::ConfItems::GrouprangelistItems::DomItems : public ydk::Entity
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

        class GroupRangeDomList; //type: System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList

        ydk::YList grouprangedom_list;
        
}; // System::NbmItems::ConfItems::GrouprangelistItems::DomItems


class System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList : public ydk::Entity
{
    public:
        GroupRangeDomList();
        ~GroupRangeDomList();

        bool has_data() const override;
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
        class GItems; //type: System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems> g_items;
        
}; // System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList


class System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems : public ydk::Entity
{
    public:
        GItems();
        ~GItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupRangeList; //type: System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList

        ydk::YList grouprange_list;
        
}; // System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems


class System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList : public ydk::Entity
{
    public:
        GroupRangeList();
        ~GroupRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        ydk::YLeaf groupmask; //type: uint16
        ydk::YLeaf rangetype; //type: NbmNbmGroupRangeType

}; // System::NbmItems::ConfItems::GrouprangelistItems::DomItems::GroupRangeDomList::GItems::GroupRangeList


class System::NbmItems::ConfItems::InterfacesItems : public ydk::Entity
{
    public:
        InterfacesItems();
        ~InterfacesItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ConfItems::InterfacesItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::InterfacesItems::DomItems> dom_items;
        
}; // System::NbmItems::ConfItems::InterfacesItems


class System::NbmItems::ConfItems::InterfacesItems::DomItems : public ydk::Entity
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

        class InterfacesDomList; //type: System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList

        ydk::YList interfacesdom_list;
        
}; // System::NbmItems::ConfItems::InterfacesItems::DomItems


class System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList : public ydk::Entity
{
    public:
        InterfacesDomList();
        ~InterfacesDomList();

        bool has_data() const override;
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
        class IfItems; //type: System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems> if_items;
        
}; // System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList


class System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems


class System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList : public ydk::Entity
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

        ydk::YLeaf if_; //type: uint32
        ydk::YLeaf role; //type: NbmNbmLinkRole

}; // System::NbmItems::ConfItems::InterfacesItems::DomItems::InterfacesDomList::IfItems::IfList


class System::NbmItems::ConfItems::GlobalItems : public ydk::Entity
{
    public:
        GlobalItems();
        ~GlobalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ConfItems::GlobalItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::GlobalItems::DomItems> dom_items;
        
}; // System::NbmItems::ConfItems::GlobalItems


class System::NbmItems::ConfItems::GlobalItems::DomItems : public ydk::Entity
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

        class GlobalConfDomList; //type: System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList

        ydk::YList globalconfdom_list;
        
}; // System::NbmItems::ConfItems::GlobalItems::DomItems


class System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList : public ydk::Entity
{
    public:
        GlobalConfDomList();
        ~GlobalConfDomList();

        bool has_data() const override;
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
        class GlobalItems_; //type: System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_> global_items;
        
}; // System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList


class System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_ : public ydk::Entity
{
    public:
        GlobalItems_();
        ~GlobalItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opermode; //type: NbmNbmOperationalMode
        ydk::YLeaf defaultsenderhostpolicy; //type: NbmNbmPermit
        ydk::YLeaf defaultreceiverhostpolicy; //type: NbmNbmPermit
        ydk::YLeaf defaultpimhostpolicy; //type: NbmNbmPermit
        ydk::YLeaf defaultflowbw; //type: uint32
        ydk::YLeaf defaultflowbwunit; //type: NbmNbmBwUnitEn
        ydk::YLeaf defaultdscp; //type: uint32
        ydk::YLeaf unicastbwpercent; //type: uint8
        ydk::YLeaf beaconack; //type: string
        ydk::YLeaf subscriptionid; //type: uint32
        ydk::YLeaf defaultflowpolicer; //type: NbmNbmFlowPolicerEn
        ydk::YLeaf immediatebwrecovery; //type: NbmNbmBwRecoveryEn

}; // System::NbmItems::ConfItems::GlobalItems::DomItems::GlobalConfDomList::GlobalItems_


class System::NbmItems::ConfItems::FlowpolicytableItems : public ydk::Entity
{
    public:
        FlowpolicytableItems();
        ~FlowpolicytableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ConfItems::FlowpolicytableItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowpolicytableItems::DomItems> dom_items;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems


class System::NbmItems::ConfItems::FlowpolicytableItems::DomItems : public ydk::Entity
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

        class FlowPolicyDomList; //type: System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList

        ydk::YList flowpolicydom_list;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems::DomItems


class System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList : public ydk::Entity
{
    public:
        FlowPolicyDomList();
        ~FlowPolicyDomList();

        bool has_data() const override;
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
        class NameItems; //type: System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems> name_items;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList


class System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems : public ydk::Entity
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

        class FlowPolicyList; //type: System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList

        ydk::YList flowpolicy_list;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems


class System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList : public ydk::Entity
{
    public:
        FlowPolicyList();
        ~FlowPolicyList();

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
        ydk::YLeaf bw; //type: uint64
        ydk::YLeaf bwunit; //type: NbmNbmBwUnitEn
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf policer; //type: NbmNbmFlowPolicerEn
        class BgnItems; //type: System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems> bgn_items;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList


class System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems : public ydk::Entity
{
    public:
        BgnItems();
        ~BgnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlowPolicyRangeList; //type: System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList

        ydk::YList flowpolicyrange_list;
        
}; // System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems


class System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList : public ydk::Entity
{
    public:
        FlowPolicyRangeList();
        ~FlowPolicyRangeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf groupbegin; //type: string
        ydk::YLeaf groupend; //type: string

}; // System::NbmItems::ConfItems::FlowpolicytableItems::DomItems::FlowPolicyDomList::NameItems::FlowPolicyList::BgnItems::FlowPolicyRangeList


class System::NbmItems::ConfItems::HostpolicytableItems : public ydk::Entity
{
    public:
        HostpolicytableItems();
        ~HostpolicytableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::DomItems> dom_items;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems : public ydk::Entity
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

        class HostPolicyDomList; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList

        ydk::YList hostpolicydom_list;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList : public ydk::Entity
{
    public:
        HostPolicyDomList();
        ~HostPolicyDomList();

        bool has_data() const override;
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
        class SenderItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems
        class ReceiverItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems
        class PimItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems> sender_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems> receiver_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems> pim_items;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems : public ydk::Entity
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

        class SeqItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems> seq_items;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems : public ydk::Entity
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

        class SenderHostPolicyList; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList

        ydk::YList senderhostpolicy_list;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList : public ydk::Entity
{
    public:
        SenderHostPolicyList();
        ~SenderHostPolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf host; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf groupmask; //type: uint16
        ydk::YLeaf permission; //type: NbmNbmPermit

}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::SenderItems::SeqItems::SenderHostPolicyList


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems : public ydk::Entity
{
    public:
        ReceiverItems();
        ~ReceiverItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SeqItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems> seq_items;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems : public ydk::Entity
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

        class ReceiverHostPolicyList; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList

        ydk::YList receiverhostpolicy_list;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList : public ydk::Entity
{
    public:
        ReceiverHostPolicyList();
        ~ReceiverHostPolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf host; //type: string
        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf groupmask; //type: uint16
        ydk::YLeaf permission; //type: NbmNbmPermit

}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::ReceiverItems::SeqItems::ReceiverHostPolicyList


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems : public ydk::Entity
{
    public:
        PimItems();
        ~PimItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SeqItems; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems> seq_items;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems : public ydk::Entity
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

        class PimHostPolicyList; //type: System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList

        ydk::YList pimhostpolicy_list;
        
}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems


class System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList : public ydk::Entity
{
    public:
        PimHostPolicyList();
        ~PimHostPolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf groupmask; //type: uint16
        ydk::YLeaf permission; //type: NbmNbmPermit

}; // System::NbmItems::ConfItems::HostpolicytableItems::DomItems::HostPolicyDomList::PimItems::SeqItems::PimHostPolicyList


class System::NbmItems::ShowItems : public ydk::Entity
{
    public:
        ShowItems();
        ~ShowItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AppliedpoliciesItems; //type: System::NbmItems::ShowItems::AppliedpoliciesItems
        class FlowsItems; //type: System::NbmItems::ShowItems::FlowsItems
        class StatsItems; //type: System::NbmItems::ShowItems::StatsItems
        class GlobalItems; //type: System::NbmItems::ShowItems::GlobalItems
        class EndpointsItems; //type: System::NbmItems::ShowItems::EndpointsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::AppliedpoliciesItems> appliedpolicies_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::FlowsItems> flows_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::StatsItems> stats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::GlobalItems> global_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::EndpointsItems> endpoints_items;
        
}; // System::NbmItems::ShowItems


class System::NbmItems::ShowItems::AppliedpoliciesItems : public ydk::Entity
{
    public:
        AppliedpoliciesItems();
        ~AppliedpoliciesItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems> dom_items;
        
}; // System::NbmItems::ShowItems::AppliedpoliciesItems


class System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems : public ydk::Entity
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

        class AppliedPolicyDomList; //type: System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList

        ydk::YList appliedpolicydom_list;
        
}; // System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems


class System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList : public ydk::Entity
{
    public:
        AppliedPolicyDomList();
        ~AppliedPolicyDomList();

        bool has_data() const override;
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
        class HostItems; //type: System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems> host_items;
        
}; // System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList


class System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems : public ydk::Entity
{
    public:
        HostItems();
        ~HostItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SeqItems; //type: System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems> seq_items;
        
}; // System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems


class System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems : public ydk::Entity
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

        class AppliedPolicyList; //type: System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList

        ydk::YList appliedpolicy_list;
        
}; // System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems


class System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList : public ydk::Entity
{
    public:
        AppliedPolicyList();
        ~AppliedPolicyList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seqnum; //type: uint64
        ydk::YLeaf policytype; //type: NbmNbmPolicyType
        ydk::YLeaf if_; //type: uint32
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf isactive; //type: NbmNbmNoYes
        ydk::YLeaf tstamp; //type: uint64

}; // System::NbmItems::ShowItems::AppliedpoliciesItems::DomItems::AppliedPolicyDomList::HostItems::SeqItems::AppliedPolicyList


class System::NbmItems::ShowItems::FlowsItems : public ydk::Entity
{
    public:
        FlowsItems();
        ~FlowsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ShowItems::FlowsItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::FlowsItems::DomItems> dom_items;
        
}; // System::NbmItems::ShowItems::FlowsItems


class System::NbmItems::ShowItems::FlowsItems::DomItems : public ydk::Entity
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

        class FlowsDomList; //type: System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList

        ydk::YList flowsdom_list;
        
}; // System::NbmItems::ShowItems::FlowsItems::DomItems


class System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList : public ydk::Entity
{
    public:
        FlowsDomList();
        ~FlowsDomList();

        bool has_data() const override;
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
        class SItems; //type: System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems> s_items;
        
}; // System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList


class System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems : public ydk::Entity
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

        class NbmFlowList; //type: System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList

        ydk::YList nbmflow_list;
        
}; // System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems


class System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList : public ydk::Entity
{
    public:
        NbmFlowList();
        ~NbmFlowList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf ingressif; //type: uint32
        ydk::YLeaf ingressifname; //type: string
        ydk::YLeaf egressifcount; //type: uint32
        ydk::YLeaf flowpol; //type: string
        ydk::YLeaf bwkbps; //type: uint64
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf qid; //type: uint32
        ydk::YLeaf isfhr; //type: NbmNbmNoYes
        ydk::YLeaf policed; //type: NbmNbmNoYes
        ydk::YLeaf tstamp; //type: uint64
        ydk::YLeaf bucket; //type: uint16
        class OifItems; //type: System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems> oif_items;
        
}; // System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList


class System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems : public ydk::Entity
{
    public:
        OifItems();
        ~OifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListList; //type: System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList

        ydk::YList oiflist_list;
        
}; // System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems


class System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList : public ydk::Entity
{
    public:
        OifListList();
        ~OifListList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oif; //type: uint32
        ydk::YLeaf oifname; //type: string
        ydk::YLeaf reporterip; //type: string
        ydk::YLeaf origin; //type: NbmNbmOifOrigin
        ydk::YLeaf oiftstamp; //type: uint64

}; // System::NbmItems::ShowItems::FlowsItems::DomItems::FlowsDomList::SItems::NbmFlowList::OifItems::OifListList


class System::NbmItems::ShowItems::StatsItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ShowItems::StatsItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::StatsItems::DomItems> dom_items;
        
}; // System::NbmItems::ShowItems::StatsItems


class System::NbmItems::ShowItems::StatsItems::DomItems : public ydk::Entity
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

        class StatsDomList; //type: System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList

        ydk::YList statsdom_list;
        
}; // System::NbmItems::ShowItems::StatsItems::DomItems


class System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList : public ydk::Entity
{
    public:
        StatsDomList();
        ~StatsDomList();

        bool has_data() const override;
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
        class SItems; //type: System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems> s_items;
        
}; // System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList


class System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems : public ydk::Entity
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

        class StatsEntryList; //type: System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList

        ydk::YList statsentry_list;
        
}; // System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems


class System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList : public ydk::Entity
{
    public:
        StatsEntryList();
        ~StatsEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf allowedpkts; //type: uint64
        ydk::YLeaf allowedbytes; //type: uint64
        ydk::YLeaf deniedpkts; //type: uint64
        ydk::YLeaf deniedbytes; //type: uint64
        ydk::YLeaf totalpkts; //type: uint64
        ydk::YLeaf totalbytes; //type: uint64
        ydk::YLeaf tstamp; //type: uint64

}; // System::NbmItems::ShowItems::StatsItems::DomItems::StatsDomList::SItems::StatsEntryList


class System::NbmItems::ShowItems::GlobalItems : public ydk::Entity
{
    public:
        GlobalItems();
        ~GlobalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ShowItems::GlobalItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::GlobalItems::DomItems> dom_items;
        
}; // System::NbmItems::ShowItems::GlobalItems


class System::NbmItems::ShowItems::GlobalItems::DomItems : public ydk::Entity
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

        class GlobalShowDomList; //type: System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList

        ydk::YList globalshowdom_list;
        
}; // System::NbmItems::ShowItems::GlobalItems::DomItems


class System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList : public ydk::Entity
{
    public:
        GlobalShowDomList();
        ~GlobalShowDomList();

        bool has_data() const override;
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
        class GlobalItems_; //type: System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_> global_items;
        
}; // System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList


class System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_ : public ydk::Entity
{
    public:
        GlobalItems_();
        ~GlobalItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initbeacon; //type: uint64
        ydk::YLeaf apiver; //type: uint8
        ydk::YLeaf adminst; //type: uint8
        ydk::YLeaf opermode; //type: NbmNbmOperationalMode

}; // System::NbmItems::ShowItems::GlobalItems::DomItems::GlobalShowDomList::GlobalItems_


class System::NbmItems::ShowItems::EndpointsItems : public ydk::Entity
{
    public:
        EndpointsItems();
        ~EndpointsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DomItems; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::EndpointsItems::DomItems> dom_items;
        
}; // System::NbmItems::ShowItems::EndpointsItems


class System::NbmItems::ShowItems::EndpointsItems::DomItems : public ydk::Entity
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

        class EpiDomList; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList

        ydk::YList epidom_list;
        
}; // System::NbmItems::ShowItems::EndpointsItems::DomItems


class System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList : public ydk::Entity
{
    public:
        EpiDomList();
        ~EpiDomList();

        bool has_data() const override;
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
        class HItems; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems> h_items;
        
}; // System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList


class System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems : public ydk::Entity
{
    public:
        HItems();
        ~HItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EndPointList; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList

        ydk::YList endpoint_list;
        
}; // System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems


class System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList : public ydk::Entity
{
    public:
        EndPointList();
        ~EndPointList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hostip; //type: string
        ydk::YLeaf if_; //type: uint32
        ydk::YLeaf ifname; //type: string
        ydk::YLeaf role; //type: NbmNbmEndpointRole
        class ArpItems; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems
        class GItems; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems
        class SItems; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems> arp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems> g_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems> s_items;
        
}; // System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList


class System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems : public ydk::Entity
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

        ydk::YLeaf mac; //type: string
        ydk::YLeaf tstamp; //type: uint64

}; // System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::ArpItems


class System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems : public ydk::Entity
{
    public:
        GItems();
        ~GItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EndPointSenderList; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList

        ydk::YList endpointsender_list;
        
}; // System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems


class System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList : public ydk::Entity
{
    public:
        EndPointSenderList();
        ~EndPointSenderList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: string
        ydk::YLeaf isext; //type: NbmNbmNoYes
        ydk::YLeaf faultreason; //type: NbmNbmFaultType
        ydk::YLeaf tstamp; //type: uint64

}; // System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::GItems::EndPointSenderList


class System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems : public ydk::Entity
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

        class EndPointReceiverList; //type: System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList

        ydk::YList endpointreceiver_list;
        
}; // System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems


class System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList : public ydk::Entity
{
    public:
        EndPointReceiverList();
        ~EndPointReceiverList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: string
        ydk::YLeaf group; //type: string
        ydk::YLeaf isext; //type: NbmNbmNoYes
        ydk::YLeaf faultreason; //type: NbmNbmFaultType
        ydk::YLeaf owner; //type: NbmNbmRcvOwner
        ydk::YLeaf tstamp; //type: uint64

}; // System::NbmItems::ShowItems::EndpointsItems::DomItems::EpiDomList::HItems::EndPointList::SItems::EndPointReceiverList


class System::NbmccItems : public ydk::Entity
{
    public:
        NbmccItems();
        ~NbmccItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EifItems; //type: System::NbmccItems::EifItems
        class SrcipItems; //type: System::NbmccItems::SrcipItems
        class RepipItems; //type: System::NbmccItems::RepipItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmccItems::EifItems> eif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmccItems::SrcipItems> srcip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmccItems::RepipItems> repip_items;
        
}; // System::NbmccItems


class System::NbmccItems::EifItems : public ydk::Entity
{
    public:
        EifItems();
        ~EifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NbmCcFlowEntityList; //type: System::NbmccItems::EifItems::NbmCcFlowEntityList

        ydk::YList nbmccflowentity_list;
        
}; // System::NbmccItems::EifItems


class System::NbmccItems::EifItems::NbmCcFlowEntityList : public ydk::Entity
{
    public:
        NbmCcFlowEntityList();
        ~NbmCcFlowEntityList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf egressif; //type: uint32
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf reporterip; //type: string
        ydk::YLeaf ingressif; //type: uint32
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf bandwidthunit; //type: NbmNbmBwUnitEn
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf queueid; //type: uint8

}; // System::NbmccItems::EifItems::NbmCcFlowEntityList


class System::NbmccItems::SrcipItems : public ydk::Entity
{
    public:
        SrcipItems();
        ~SrcipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SenderCcTableList; //type: System::NbmccItems::SrcipItems::SenderCcTableList

        ydk::YList sendercctable_list;
        
}; // System::NbmccItems::SrcipItems


class System::NbmccItems::SrcipItems::SenderCcTableList : public ydk::Entity
{
    public:
        SenderCcTableList();
        ~SenderCcTableList();

        bool has_data() const override;
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
        ydk::YLeaf destip; //type: string
        ydk::YLeaf iif; //type: uint8
        ydk::YLeaf dummyproperty1; //type: uint32
        ydk::YLeaf dummyproperty2; //type: uint32
        ydk::YLeaf dummyproperty3; //type: uint32

}; // System::NbmccItems::SrcipItems::SenderCcTableList


class System::NbmccItems::RepipItems : public ydk::Entity
{
    public:
        RepipItems();
        ~RepipItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ReceiverCcTableList; //type: System::NbmccItems::RepipItems::ReceiverCcTableList

        ydk::YList receivercctable_list;
        
}; // System::NbmccItems::RepipItems


class System::NbmccItems::RepipItems::ReceiverCcTableList : public ydk::Entity
{
    public:
        ReceiverCcTableList();
        ~ReceiverCcTableList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf reporterip; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf oif; //type: uint8
        ydk::YLeaf dummyproperty1; //type: uint32
        ydk::YLeaf dummyproperty2; //type: uint32
        ydk::YLeaf dummyproperty3; //type: uint32

}; // System::NbmccItems::RepipItems::ReceiverCcTableList


class System::NbmFlowsTableItems : public ydk::Entity
{
    public:
        NbmFlowsTableItems();
        ~NbmFlowsTableItems();

        bool has_data() const override;
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
        class FlowOpItems; //type: System::NbmFlowsTableItems::FlowOpItems
        class SrcIPItems; //type: System::NbmFlowsTableItems::SrcIPItems
        class IifItems; //type: System::NbmFlowsTableItems::IifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmFlowsTableItems::FlowOpItems> flowop_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmFlowsTableItems::SrcIPItems> srcip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmFlowsTableItems::IifItems> iif_items;
        
}; // System::NbmFlowsTableItems


class System::NbmFlowsTableItems::FlowOpItems : public ydk::Entity
{
    public:
        FlowOpItems();
        ~FlowOpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NbmFlowEntityList; //type: System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList

        ydk::YList nbmflowentity_list;
        
}; // System::NbmFlowsTableItems::FlowOpItems


class System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList : public ydk::Entity
{
    public:
        NbmFlowEntityList();
        ~NbmFlowEntityList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf flowop; //type: NbmNbmFlowOperEn
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf egressif; //type: uint32
        ydk::YLeaf controllerip; //type: string
        ydk::YLeaf controllervip; //type: string
        ydk::YLeaf reporterip; //type: string
        ydk::YLeaf ingressif; //type: uint32
        ydk::YLeaf egressifcount; //type: uint32
        ydk::YLeaf seqnum; //type: uint32
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf bandwidthunit; //type: NbmNbmBwUnitEn
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf queueid; //type: uint8
        ydk::YLeaf switchiif; //type: uint8

}; // System::NbmFlowsTableItems::FlowOpItems::NbmFlowEntityList


class System::NbmFlowsTableItems::SrcIPItems : public ydk::Entity
{
    public:
        SrcIPItems();
        ~SrcIPItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NbmOifCounterList; //type: System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList

        ydk::YList nbmoifcounter_list;
        
}; // System::NbmFlowsTableItems::SrcIPItems


class System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList : public ydk::Entity
{
    public:
        NbmOifCounterList();
        ~NbmOifCounterList();

        bool has_data() const override;
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
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf oifcount; //type: uint32

}; // System::NbmFlowsTableItems::SrcIPItems::NbmOifCounterList


class System::NbmFlowsTableItems::IifItems : public ydk::Entity
{
    public:
        IifItems();
        ~IifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NbmUpdateIifList; //type: System::NbmFlowsTableItems::IifItems::NbmUpdateIifList

        ydk::YList nbmupdateiif_list;
        
}; // System::NbmFlowsTableItems::IifItems


class System::NbmFlowsTableItems::IifItems::NbmUpdateIifList : public ydk::Entity
{
    public:
        NbmUpdateIifList();
        ~NbmUpdateIifList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf newingressif; //type: uint32
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf previngressif; //type: uint32
        ydk::YLeaf seqnum; //type: uint32

}; // System::NbmFlowsTableItems::IifItems::NbmUpdateIifList


class System::NbmStatsItems : public ydk::Entity
{
    public:
        NbmStatsItems();
        ~NbmStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SrcIPItems; //type: System::NbmStatsItems::SrcIPItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::NbmStatsItems::SrcIPItems> srcip_items;
        
}; // System::NbmStatsItems


class System::NbmStatsItems::SrcIPItems : public ydk::Entity
{
    public:
        SrcIPItems();
        ~SrcIPItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class NbmStatsEntityList; //type: System::NbmStatsItems::SrcIPItems::NbmStatsEntityList

        ydk::YList nbmstatsentity_list;
        
}; // System::NbmStatsItems::SrcIPItems


class System::NbmStatsItems::SrcIPItems::NbmStatsEntityList : public ydk::Entity
{
    public:
        NbmStatsEntityList();
        ~NbmStatsEntityList();

        bool has_data() const override;
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
        ydk::YLeaf dstip; //type: string
        ydk::YLeaf allowedpkts; //type: uint64
        ydk::YLeaf allowedbytes; //type: uint64
        ydk::YLeaf deniedpkts; //type: uint64
        ydk::YLeaf deniedbytes; //type: uint64
        ydk::YLeaf totalpkts; //type: uint64
        ydk::YLeaf totalbytes; //type: uint64
        ydk::YLeaf tstamp; //type: uint64

}; // System::NbmStatsItems::SrcIPItems::NbmStatsEntityList


class System::BootItems : public ydk::Entity
{
    public:
        BootItems();
        ~BootItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf poap; //type: BootPoap
        ydk::YLeaf order; //type: BootOrder
        ydk::YLeaf mode; //type: BootMode
        ydk::YLeaf dhcp; //type: uint32
        ydk::YLeaf aci; //type: string
        ydk::YLeaf autocopy; //type: BootAutoCopy
        class ImageItems; //type: System::BootItems::ImageItems
        class ModbootorderItems; //type: System::BootItems::ModbootorderItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BootItems::ImageItems> image_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BootItems::ModbootorderItems> modbootorder_items;
        
}; // System::BootItems


class System::BootItems::ImageItems : public ydk::Entity
{
    public:
        ImageItems();
        ~ImageItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf sup1; //type: string
        ydk::YLeaf sup2; //type: string
        ydk::YLeaf imageverification; //type: BootImageVerify
        ydk::YLeaf image_err; //type: string
        ydk::YLeaf sup1nextreload; //type: string
        ydk::YLeaf sup2nextreload; //type: string

}; // System::BootItems::ImageItems


class System::BootItems::ModbootorderItems : public ydk::Entity
{
    public:
        ModbootorderItems();
        ~ModbootorderItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bootorderreverse; //type: BootBootOrderReverse

}; // System::BootItems::ModbootorderItems


class System::ChItems : public ydk::Entity
{
    public:
        ChItems();
        ~ChItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf role; //type: TopNodeRole
        ydk::YLeaf operst; //type: EqptChOperSt
        ydk::YLeaf operstqual; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf descr; //type: string
        class EjpolItems; //type: System::ChItems::EjpolItems
        class LocledItems; //type: System::ChItems::LocledItems
        class SupslotItems; //type: System::ChItems::SupslotItems
        class LcslotItems; //type: System::ChItems::LcslotItems
        class FcslotItems; //type: System::ChItems::FcslotItems
        class ScslotItems; //type: System::ChItems::ScslotItems
        class PsuslotItems; //type: System::ChItems::PsuslotItems
        class FtslotItems; //type: System::ChItems::FtslotItems
        class SpbpItems; //type: System::ChItems::SpbpItems
        class BslotItems; //type: System::ChItems::BslotItems
        class NslotItems; //type: System::ChItems::NslotItems
        class PItems; //type: System::ChItems::PItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::EjpolItems> ejpol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems> supslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::LcslotItems> lcslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FcslotItems> fcslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::ScslotItems> scslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PsuslotItems> psuslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::FtslotItems> ftslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SpbpItems> spbp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::BslotItems> bslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::NslotItems> nslot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::PItems> p_items;
        
}; // System::ChItems


class System::ChItems::EjpolItems : public ydk::Entity
{
    public:
        EjpolItems();
        ~EjpolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EjPolList; //type: System::ChItems::EjpolItems::EjPolList

        ydk::YList ejpol_list;
        
}; // System::ChItems::EjpolItems


class System::ChItems::EjpolItems::EjPolList : public ydk::Entity
{
    public:
        EjPolList();
        ~EjPolList();

        bool has_data() const override;
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
        ydk::YLeaf autosh; //type: EqptAdSt
        ydk::YLeaf vendor; //type: string
        ydk::YLeaf model; //type: string
        ydk::YLeaf rev; //type: string
        ydk::YLeaf ser; //type: string
        ydk::YLeaf mfgtm; //type: one of uint64, string
        ydk::YLeaf descr; //type: string

}; // System::ChItems::EjpolItems::EjPolList


class System::ChItems::LocledItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class LocLedList; //type: System::ChItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::LocledItems


class System::ChItems::LocledItems::LocLedList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint32
        ydk::YLeaf model; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf color; //type: EqptColor
        ydk::YLeaf operst; //type: EqptLedOpSt
        ydk::YLeaf adminst; //type: EqptAdSt

}; // System::ChItems::LocledItems::LocLedList


class System::ChItems::SupslotItems : public ydk::Entity
{
    public:
        SupslotItems();
        ~SupslotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SupCSlotList; //type: System::ChItems::SupslotItems::SupCSlotList

        ydk::YList supcslot_list;
        
}; // System::ChItems::SupslotItems


class System::ChItems::SupslotItems::SupCSlotList : public ydk::Entity
{
    public:
        SupCSlotList();
        ~SupCSlotList();

        bool has_data() const override;
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
        class SupItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems
        class RstrecItems; //type: System::ChItems::SupslotItems::SupCSlotList::RstrecItems
        class RtoosSlotItems; //type: System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems> sup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::RstrecItems> rstrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems> rtoosslot_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList


class System::ChItems::SupslotItems::SupCSlotList::SupItems : public ydk::Entity
{
    public:
        SupItems();
        ~SupItems();

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
        ydk::YLeaf macb; //type: string
        ydk::YLeaf mace; //type: string
        ydk::YLeaf upts; //type: one of uint64, string
        ydk::YLeaf pwrst; //type: EqptPwrState
        ydk::YLeaf swver; //type: string
        ydk::YLeaf partnumber; //type: string
        ydk::YLeaf vdrid; //type: string
        ydk::YLeaf poweractualdraw; //type: uint32
        ydk::YLeaf powerallocated; //type: uint32
        class RunningItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems
        class EjItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems
        class LocledItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems
        class EobcItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems
        class EpcItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems
        class MgmtItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems
        class ConsoleItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems
        class SensorItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems
        class SpsupItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems
        class AsicItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems
        class CpuItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems
        class DimmItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems
        class FlashItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems
        class ObflItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems> ej_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems> locled_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems> eobc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems> epc_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems> console_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems> sensor_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems> spsup_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems> asic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems> cpu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems> dimm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems> flash_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems> obfl_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::RunningItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems : public ydk::Entity
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

        class EjecList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList

        ydk::YList ejec_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::EjItems::EjecList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems::LocLedList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::LocledItems::LocLedList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems : public ydk::Entity
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

        class EobcPList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList

        ydk::YList eobcp_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::EobcItems::EobcPList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems : public ydk::Entity
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

        class EpcPList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList

        ydk::YList epcp_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::EpcItems::EpcPList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems : public ydk::Entity
{
    public:
        MgmtItems();
        ~MgmtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MgmtPList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList

        ydk::YList mgmtp_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList : public ydk::Entity
{
    public:
        MgmtPList();
        ~MgmtPList();

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
        class LocledItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::LocledItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::LocledItems> locled_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::LocledItems : public ydk::Entity
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

        class LocLedList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::LocledItems::LocLedList

        ydk::YList locled_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::LocledItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::LocledItems::LocLedList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::MgmtItems::MgmtPList::LocledItems::LocLedList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems : public ydk::Entity
{
    public:
        ConsoleItems();
        ~ConsoleItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConsPList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList

        ydk::YList consp_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList : public ydk::Entity
{
    public:
        ConsPList();
        ~ConsPList();

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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::ConsoleItems::ConsPList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems : public ydk::Entity
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

        class SensorList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList

        ydk::YList sensor_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SensorItems::SensorList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems : public ydk::Entity
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
        class SpcmnItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems
        class SpsupblkItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems
        class SppdItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems
        class SpsdItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems
        class SpsensorblkItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems> spcmn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems> spsupblk_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems> sppd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems> spsensorblk_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpcmnItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems : public ydk::Entity
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
        class SpsdItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems
        class SppdItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems> spsd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems> sppd_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SpsdItems::SpSdList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsupblkItems::SppdItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SppdItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsdItems::SpSdList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems : public ydk::Entity
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
        class SpsdItems; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems> spsd_items;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems : public ydk::Entity
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

        class SpSdList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList

        ydk::YList spsd_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::SpsupItems::SpsensorblkItems::SpsdItems::SpSdList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems : public ydk::Entity
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

        class AsicList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList

        ydk::YList asic_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems


class System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList : public ydk::Entity
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

}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::AsicItems::AsicList


class System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems : public ydk::Entity
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

        class CPUList; //type: System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList

        ydk::YList cpu_list;
        
}; // System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_39_ */

