#ifndef _CISCO_NX_OS_DEVICE_19_
#define _CISCO_NX_OS_DEVICE_19_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_18.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems : public ydk::Entity
{
    public:
        SsmxlateItems();
        ~SsmxlateItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SSMXlateList; //type: System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList

        ydk::YList ssmxlate_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems


class System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList : public ydk::Entity
{
    public:
        SSMXlateList();
        ~SSMXlateList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf grppfx; //type: string

}; // System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems::SSMXlateList


class System::IgmpItems::InstItems::RoutedbItems : public ydk::Entity
{
    public:
        RoutedbItems();
        ~RoutedbItems();

        bool has_data() const override;
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
        ydk::YLeaf type; //type: RtdmcDbT
        class VrfItems; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems::VrfItems> vrf_items;
        
}; // System::IgmpItems::InstItems::RoutedbItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems : public ydk::Entity
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

        class VrfList; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList

        ydk::YList vrf_list;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList : public ydk::Entity
{
    public:
        VrfList();
        ~VrfList();

        bool has_data() const override;
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
        class GroupItems; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems> group_items;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems : public ydk::Entity
{
    public:
        GroupItems();
        ~GroupItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteGroupList; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList

        ydk::YList routegroup_list;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList : public ydk::Entity
{
    public:
        RouteGroupList();
        ~RouteGroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grpaddr; //type: string
        class SourceItems; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems> source_items;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems : public ydk::Entity
{
    public:
        SourceItems();
        ~SourceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteSourceList; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList

        ydk::YList routesource_list;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList : public ydk::Entity
{
    public:
        RouteSourceList();
        ~RouteSourceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf srcaddr; //type: string
        ydk::YLeaf oifcount; //type: uint32
        class OifItems; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems> oif_items;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems : public ydk::Entity
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

        class RouteOifList; //type: System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList

        ydk::YList routeoif_list;
        
}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems


class System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList : public ydk::Entity
{
    public:
        RouteOifList();
        ~RouteOifList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oif; //type: string
        ydk::YLeaf local; //type: boolean
        ydk::YLeaf static_; //type: boolean
        ydk::YLeaf hostproxy; //type: boolean
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf expiryts; //type: string
        ydk::YLeaf createts; //type: string
        ydk::YLeaf lastrep; //type: string
        ydk::YLeaf type; //type: string

}; // System::IgmpItems::InstItems::RoutedbItems::VrfItems::VrfList::GroupItems::RouteGroupList::SourceItems::RouteSourceList::OifItems::RouteOifList


class System::CtrlrfwstatuscontItems : public ydk::Entity
{
    public:
        CtrlrfwstatuscontItems();
        ~CtrlrfwstatuscontItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CtrlrrunningItems; //type: System::CtrlrfwstatuscontItems::CtrlrrunningItems
        class UpgjobItems; //type: System::CtrlrfwstatuscontItems::UpgjobItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems::CtrlrrunningItems> ctrlrrunning_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems::UpgjobItems> upgjob_items;
        
}; // System::CtrlrfwstatuscontItems


class System::CtrlrfwstatuscontItems::CtrlrrunningItems : public ydk::Entity
{
    public:
        CtrlrrunningItems();
        ~CtrlrrunningItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::CtrlrfwstatuscontItems::CtrlrrunningItems


class System::CtrlrfwstatuscontItems::UpgjobItems : public ydk::Entity
{
    public:
        UpgjobItems();
        ~UpgjobItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf grpprikey; //type: string
        ydk::YLeaf internallabel; //type: string
        class NodeItems; //type: System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems
        class UpgjobfaultItems; //type: System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems> upgjobfault_items;
        
}; // System::CtrlrfwstatuscontItems::UpgjobItems


class System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems : public ydk::Entity
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

        class NodeInMaintList; //type: System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList

        ydk::YList nodeinmaint_list;
        
}; // System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems


class System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList : public ydk::Entity
{
    public:
        NodeInMaintList();
        ~NodeInMaintList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nodeid; //type: uint32
        ydk::YLeaf windowstarttime; //type: string
        ydk::YLeaf windowtimecap; //type: string

}; // System::CtrlrfwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList


class System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems : public ydk::Entity
{
    public:
        UpgjobfaultItems();
        ~UpgjobfaultItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf faultdelegatekey; //type: string

}; // System::CtrlrfwstatuscontItems::UpgjobItems::UpgjobfaultItems


class System::FwstatuscontItems : public ydk::Entity
{
    public:
        FwstatuscontItems();
        ~FwstatuscontItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class RunningItems; //type: System::FwstatuscontItems::RunningItems
        class UpgjobItems; //type: System::FwstatuscontItems::UpgjobItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems::RunningItems> running_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems::UpgjobItems> upgjob_items;
        
}; // System::FwstatuscontItems


class System::FwstatuscontItems::RunningItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf pever; //type: string
        ydk::YLeaf biosver; //type: string
        ydk::YLeaf biosts; //type: string
        ydk::YLeaf ksfile; //type: string
        ydk::YLeaf sysfile; //type: string
        ydk::YLeaf version; //type: string
        ydk::YLeaf internallabel; //type: string
        ydk::YLeaf type; //type: FirmwareType
        ydk::YLeaf mode; //type: FirmwareRunningMode
        ydk::YLeaf ts; //type: string
        ydk::YLeaf descr; //type: string

}; // System::FwstatuscontItems::RunningItems


class System::FwstatuscontItems::UpgjobItems : public ydk::Entity
{
    public:
        UpgjobItems();
        ~UpgjobItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf grpprikey; //type: string
        ydk::YLeaf internallabel; //type: string
        class NodeItems; //type: System::FwstatuscontItems::UpgjobItems::NodeItems
        class UpgjobfaultItems; //type: System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems::UpgjobItems::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems> upgjobfault_items;
        
}; // System::FwstatuscontItems::UpgjobItems


class System::FwstatuscontItems::UpgjobItems::NodeItems : public ydk::Entity
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

        class NodeInMaintList; //type: System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList

        ydk::YList nodeinmaint_list;
        
}; // System::FwstatuscontItems::UpgjobItems::NodeItems


class System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList : public ydk::Entity
{
    public:
        NodeInMaintList();
        ~NodeInMaintList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf nodeid; //type: uint32
        ydk::YLeaf windowstarttime; //type: string
        ydk::YLeaf windowtimecap; //type: string

}; // System::FwstatuscontItems::UpgjobItems::NodeItems::NodeInMaintList


class System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems : public ydk::Entity
{
    public:
        UpgjobfaultItems();
        ~UpgjobfaultItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf faultdelegatekey; //type: string

}; // System::FwstatuscontItems::UpgjobItems::UpgjobfaultItems


class System::CatfwstatuscontItems : public ydk::Entity
{
    public:
        CatfwstatuscontItems();
        ~CatfwstatuscontItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CatupgjobItems; //type: System::CatfwstatuscontItems::CatupgjobItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CatfwstatuscontItems::CatupgjobItems> catupgjob_items;
        
}; // System::CatfwstatuscontItems


class System::CatfwstatuscontItems::CatupgjobItems : public ydk::Entity
{
    public:
        CatupgjobItems();
        ~CatupgjobItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;


}; // System::CatfwstatuscontItems::CatupgjobItems


class System::IsisItems : public ydk::Entity
{
    public:
        IsisItems();
        ~IsisItems();

        bool has_data() const override;
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
        class InstItems; //type: System::IsisItems::InstItems
        class IfItems; //type: System::IsisItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems> inst_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems> if_items;
        
}; // System::IsisItems


class System::IsisItems::InstItems : public ydk::Entity
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

        class InstList; //type: System::IsisItems::InstItems::InstList

        ydk::YList inst_list;
        
}; // System::IsisItems::InstItems


class System::IsisItems::InstItems::InstList : public ydk::Entity
{
    public:
        InstList();
        ~InstList();

        bool has_data() const override;
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
        ydk::YLeaf operst; //type: IsisOperSt
        ydk::YLeaf flushroutes; //type: boolean
        ydk::YLeaf isolate; //type: boolean
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class DomItems; //type: System::IsisItems::InstItems::InstList::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems> dom_items;
        
}; // System::IsisItems::InstItems::InstList


class System::IsisItems::InstItems::InstList::DomItems : public ydk::Entity
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

        class DomList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems


class System::IsisItems::InstItems::InstList::DomItems::DomList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf net; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf bwref; //type: uint32
        ydk::YLeaf bwrefunit; //type: IsisBwRefUnit
        ydk::YLeaf metricstyle; //type: IsisMetricStyle
        ydk::YLeaf istype; //type: IsisIsT
        ydk::YLeaf lsplifetime; //type: uint32
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf authchecklvl1; //type: boolean
        ydk::YLeaf authchecklvl2; //type: boolean
        ydk::YLeaf operst; //type: IsisOperSt
        class DbItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems
        class OverloadItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems
        class LvlItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems
        class FmtreeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems
        class GrItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems
        class IfItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems
        class DefrtleakItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems
        class InterleakItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems> overload_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems> lvl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems> fmtree_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems> gr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems> interleak_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: IsisDbT
        ydk::YLeaf name; //type: string
        class GrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems
        class LspItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems
        class NhItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems
        class RtItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems
        class DtepItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems> grp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems> lsp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems> dtep_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems : public ydk::Entity
{
    public:
        GrpItems();
        ~GrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GrpRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList

        ydk::YList grprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList : public ydk::Entity
{
    public:
        GrpRecList();
        ~GrpRecList();

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
        class FtagoifItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems
        class BdItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems> ftagoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems : public ydk::Entity
{
    public:
        FtagoifItems();
        ~FtagoifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FtagOifRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList

        ydk::YList ftagoifrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList : public ydk::Entity
{
    public:
        FtagOifRecList();
        ~FtagOifRecList();

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
        ydk::YLeaf name; //type: string
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems : public ydk::Entity
{
    public:
        OifleafItems();
        ~OifleafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList : public ydk::Entity
{
    public:
        OifListLeafList();
        ~OifListLeafList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems : public ydk::Entity
{
    public:
        OifspineItems();
        ~OifspineItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList : public ydk::Entity
{
    public:
        OifListSpineList();
        ~OifListSpineList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems : public ydk::Entity
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

        class BdIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList

        ydk::YList bdidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList : public ydk::Entity
{
    public:
        BdIdRecList();
        ~BdIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems : public ydk::Entity
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

        class NodeIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList

        ydk::YList nodeidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList : public ydk::Entity
{
    public:
        NodeIdRecList();
        ~NodeIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems : public ydk::Entity
{
    public:
        OifleafItems();
        ~OifleafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList : public ydk::Entity
{
    public:
        OifListLeafList();
        ~OifListLeafList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems : public ydk::Entity
{
    public:
        OifspineItems();
        ~OifspineItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList : public ydk::Entity
{
    public:
        OifListSpineList();
        ~OifListSpineList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems : public ydk::Entity
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

        class NodeRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList

        ydk::YList noderec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList : public ydk::Entity
{
    public:
        NodeRecList();
        ~NodeRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysid; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        class GrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems> grp_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems : public ydk::Entity
{
    public:
        GrpItems();
        ~GrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GrpIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList

        ydk::YList grpidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList : public ydk::Entity
{
    public:
        GrpIdRecList();
        ~GrpIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems : public ydk::Entity
{
    public:
        LspItems();
        ~LspItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList

        ydk::YList lsprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList : public ydk::Entity
{
    public:
        LspRecList();
        ~LspRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysid; //type: string
        ydk::YLeaf lanid; //type: uint8
        ydk::YLeaf frag; //type: uint8
        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf name; //type: string
        class ExtisrecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems
        class TlvRecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems
        class IprecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems> extisrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems> tlvrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems> iprec_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems : public ydk::Entity
{
    public:
        ExtisrecItems();
        ~ExtisrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtIsRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList

        ydk::YList extisrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList : public ydk::Entity
{
    public:
        ExtIsRecList();
        ~ExtIsRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems : public ydk::Entity
{
    public:
        TlvRecItems();
        ~TlvRecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TlvRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList

        ydk::YList tlvrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList : public ydk::Entity
{
    public:
        TlvRecList();
        ~TlvRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf value_; //type: string
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems : public ydk::Entity
{
    public:
        IprecItems();
        ~IprecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList

        ydk::YList iprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList : public ydk::Entity
{
    public:
        IpRecList();
        ~IpRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems : public ydk::Entity
{
    public:
        NhItems();
        ~NhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NexthopList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList : public ydk::Entity
{
    public:
        NexthopList();
        ~NexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhif; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf if_; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::NhItems::NexthopList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf name; //type: string
        class RsnhAttItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems> rsnhatt_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems : public ydk::Entity
{
    public:
        RsnhAttItems();
        ~RsnhAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsNhAttList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList

        ydk::YList rsnhatt_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList : public ydk::Entity
{
    public:
        RsNhAttList();
        ~RsNhAttList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems : public ydk::Entity
{
    public:
        DtepItems();
        ~DtepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DTEpList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList

        ydk::YList dtep_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList : public ydk::Entity
{
    public:
        DTEpList();
        ~DTEpList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf encapt; //type: TunnelEncapT
        ydk::YLeaf type; //type: string
        ydk::YLeaf role; //type: TopNodeRole

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DbItems::DbList::DtepItems::DTEpList


class System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems : public ydk::Entity
{
    public:
        OverloadItems();
        ~OverloadItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adminst; //type: IsisOverloadAdminSt
        ydk::YLeaf startuptime; //type: uint32
        ydk::YLeaf bgpasnum; //type: uint16
        ydk::YLeaf suppress; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::OverloadItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems : public ydk::Entity
{
    public:
        LvlItems();
        ~LvlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DomLvlList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList

        ydk::YList domlvl_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList : public ydk::Entity
{
    public:
        DomLvlList();
        ~DomLvlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf authtypelvl1; //type: IsisAuthT
        ydk::YLeaf authtypelvl2; //type: IsisAuthT
        ydk::YLeaf authkeylvl1; //type: string
        ydk::YLeaf authkeylvl2; //type: string
        ydk::YLeaf name; //type: string
        class DbItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems
        class LspgenItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems
        class SpfcompItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems> lspgen_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems> spfcomp_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems : public ydk::Entity
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

        class DbList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: IsisDbT
        ydk::YLeaf name; //type: string
        class GrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems
        class LspItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems
        class NhItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems
        class RtItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems
        class DtepItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems> grp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems> lsp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems> nh_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems> dtep_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems : public ydk::Entity
{
    public:
        GrpItems();
        ~GrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GrpRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList

        ydk::YList grprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList : public ydk::Entity
{
    public:
        GrpRecList();
        ~GrpRecList();

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
        class FtagoifItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems
        class BdItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems> ftagoif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems : public ydk::Entity
{
    public:
        FtagoifItems();
        ~FtagoifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FtagOifRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList

        ydk::YList ftagoifrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList : public ydk::Entity
{
    public:
        FtagOifRecList();
        ~FtagOifRecList();

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
        ydk::YLeaf name; //type: string
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems : public ydk::Entity
{
    public:
        OifleafItems();
        ~OifleafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList : public ydk::Entity
{
    public:
        OifListLeafList();
        ~OifListLeafList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems : public ydk::Entity
{
    public:
        OifspineItems();
        ~OifspineItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList : public ydk::Entity
{
    public:
        OifListSpineList();
        ~OifListSpineList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::FtagoifItems::FtagOifRecList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems : public ydk::Entity
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

        class BdIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList

        ydk::YList bdidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList : public ydk::Entity
{
    public:
        BdIdRecList();
        ~BdIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::BdItems::BdIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems : public ydk::Entity
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

        class NodeIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList

        ydk::YList nodeidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList : public ydk::Entity
{
    public:
        NodeIdRecList();
        ~NodeIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::NodeItems::NodeIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems : public ydk::Entity
{
    public:
        OifleafItems();
        ~OifleafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList : public ydk::Entity
{
    public:
        OifListLeafList();
        ~OifListLeafList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems : public ydk::Entity
{
    public:
        OifspineItems();
        ~OifspineItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList : public ydk::Entity
{
    public:
        OifListSpineList();
        ~OifListSpineList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::GrpItems::GrpRecList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems : public ydk::Entity
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

        class NodeRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList

        ydk::YList noderec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList : public ydk::Entity
{
    public:
        NodeRecList();
        ~NodeRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysid; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf name; //type: string
        class GrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems> grp_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems : public ydk::Entity
{
    public:
        GrpItems();
        ~GrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GrpIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList

        ydk::YList grpidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList : public ydk::Entity
{
    public:
        GrpIdRecList();
        ~GrpIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NodeItems::NodeRecList::GrpItems::GrpIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems : public ydk::Entity
{
    public:
        LspItems();
        ~LspItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LspRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList

        ydk::YList lsprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList : public ydk::Entity
{
    public:
        LspRecList();
        ~LspRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sysid; //type: string
        ydk::YLeaf lanid; //type: uint8
        ydk::YLeaf frag; //type: uint8
        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf name; //type: string
        class ExtisrecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems
        class TlvRecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems
        class IprecItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems> extisrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems> tlvrec_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems> iprec_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems : public ydk::Entity
{
    public:
        ExtisrecItems();
        ~ExtisrecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtIsRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList

        ydk::YList extisrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList : public ydk::Entity
{
    public:
        ExtIsRecList();
        ~ExtIsRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::ExtisrecItems::ExtIsRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems : public ydk::Entity
{
    public:
        TlvRecItems();
        ~TlvRecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TlvRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList

        ydk::YList tlvrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList : public ydk::Entity
{
    public:
        TlvRecList();
        ~TlvRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint8
        ydk::YLeaf value_; //type: string
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::TlvRecItems::TlvRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems : public ydk::Entity
{
    public:
        IprecItems();
        ~IprecItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList

        ydk::YList iprec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList : public ydk::Entity
{
    public:
        IpRecList();
        ~IpRecList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::LspItems::LspRecList::IprecItems::IpRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems : public ydk::Entity
{
    public:
        NhItems();
        ~NhItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NexthopList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList

        ydk::YList nexthop_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList : public ydk::Entity
{
    public:
        NexthopList();
        ~NexthopList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhif; //type: string
        ydk::YLeaf addr; //type: string
        ydk::YLeaf if_; //type: uint32
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::NhItems::NexthopList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems : public ydk::Entity
{
    public:
        RtItems();
        ~RtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RouteList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList : public ydk::Entity
{
    public:
        RouteList();
        ~RouteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfx; //type: string
        ydk::YLeaf name; //type: string
        class RsnhAttItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems> rsnhatt_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems : public ydk::Entity
{
    public:
        RsnhAttItems();
        ~RsnhAttItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsNhAttList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList

        ydk::YList rsnhatt_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList : public ydk::Entity
{
    public:
        RsNhAttList();
        ~RsNhAttList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::RtItems::RouteList::RsnhAttItems::RsNhAttList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems : public ydk::Entity
{
    public:
        DtepItems();
        ~DtepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DTEpList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList

        ydk::YList dtep_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList : public ydk::Entity
{
    public:
        DTEpList();
        ~DTEpList();

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
        ydk::YLeaf name; //type: string
        ydk::YLeaf encapt; //type: TunnelEncapT
        ydk::YLeaf type; //type: string
        ydk::YLeaf role; //type: TopNodeRole

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::DbItems::DbList::DtepItems::DTEpList


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems : public ydk::Entity
{
    public:
        LspgenItems();
        ~LspgenItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initintvl; //type: uint32
        ydk::YLeaf secintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::LspgenItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems : public ydk::Entity
{
    public:
        SpfcompItems();
        ~SpfcompItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initintvl; //type: uint32
        ydk::YLeaf secintvl; //type: uint32
        ydk::YLeaf maxintvl; //type: uint32

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::LvlItems::DomLvlList::SpfcompItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems : public ydk::Entity
{
    public:
        FmtreeItems();
        ~FmtreeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FmcastTreeList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList

        ydk::YList fmcasttree_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList : public ydk::Entity
{
    public:
        FmcastTreeList();
        ~FmcastTreeList();

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
        ydk::YLeaf operst; //type: FmcastOperSt
        ydk::YLeaf name; //type: string
        class NodeItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems
        class OifleafItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems
        class OifspineItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems> node_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems> oifleaf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems> oifspine_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems : public ydk::Entity
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

        class NodeIdRecList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList

        ydk::YList nodeidrec_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList : public ydk::Entity
{
    public:
        NodeIdRecList();
        ~NodeIdRecList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::NodeItems::NodeIdRecList


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems : public ydk::Entity
{
    public:
        OifleafItems();
        ~OifleafItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListLeafList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList

        ydk::YList oiflistleaf_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList : public ydk::Entity
{
    public:
        OifListLeafList();
        ~OifListLeafList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifleafItems::OifListLeafList


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems : public ydk::Entity
{
    public:
        OifspineItems();
        ~OifspineItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OifListSpineList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList

        ydk::YList oiflistspine_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList : public ydk::Entity
{
    public:
        OifListSpineList();
        ~OifListSpineList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf idx; //type: uint8
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::FmtreeItems::FmcastTreeList::OifspineItems::OifListSpineList


class System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems : public ydk::Entity
{
    public:
        GrItems();
        ~GrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf grt3intvl; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::GrItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf cktt; //type: IsisIsT
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf v4enable; //type: boolean
        ydk::YLeaf v6enable; //type: boolean
        ydk::YLeaf authchecklvl1; //type: boolean
        ydk::YLeaf authchecklvl2; //type: boolean
        ydk::YLeaf authcheck; //type: boolean
        ydk::YLeaf networktypep2p; //type: boolean
        ydk::YLeaf lsprefreshintvl; //type: uint32
        ydk::YLeaf retransinterval; //type: uint16
        ydk::YLeaf retransthrottleinterval; //type: uint16
        ydk::YLeaf passive; //type: IsisPassiveIntfT
        ydk::YLeaf hellopad; //type: IsisHelloPadT
        class AdjItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems
        class MeshgrpItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems
        class LvlItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems
        class TrafficItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems
        class RtvrfMbrItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems> meshgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems> lvl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems> traffic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf sysid; //type: string
        ydk::YLeaf operst; //type: IsisAdjOperSt
        ydk::YLeaf name; //type: string
        class AddrItems; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems> addr_items;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems : public ydk::Entity
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

        class PeerIpAddrList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList

        ydk::YList peeripaddr_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList : public ydk::Entity
{
    public:
        PeerIpAddrList();
        ~PeerIpAddrList();

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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::AdjItems::AdjEpList::AddrItems::PeerIpAddrList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems : public ydk::Entity
{
    public:
        MeshgrpItems();
        ~MeshgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MeshGrpList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList

        ydk::YList meshgrp_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList : public ydk::Entity
{
    public:
        MeshGrpList();
        ~MeshGrpList();

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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::MeshgrpItems::MeshGrpList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems : public ydk::Entity
{
    public:
        LvlItems();
        ~LvlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfLvlList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList

        ydk::YList iflvl_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList : public ydk::Entity
{
    public:
        IfLvlList();
        ~IfLvlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf prioritylvl1; //type: uint8
        ydk::YLeaf prioritylvl2; //type: uint8
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf hellointvllvl1; //type: uint16
        ydk::YLeaf hellointvllvl2; //type: uint16
        ydk::YLeaf hellomult; //type: uint16
        ydk::YLeaf hellomultlvl1; //type: uint16
        ydk::YLeaf hellomultlvl2; //type: uint16
        ydk::YLeaf csnpintvllvl1; //type: uint16
        ydk::YLeaf mt0metriclvl1; //type: uint32
        ydk::YLeaf mt0metriclvl2; //type: uint32
        ydk::YLeaf mt2metriclvl1; //type: uint32
        ydk::YLeaf mt2metriclvl2; //type: uint32
        ydk::YLeaf authtype; //type: IsisAuthT
        ydk::YLeaf authtypelvl1; //type: IsisAuthT
        ydk::YLeaf authtypelvl2; //type: IsisAuthT
        ydk::YLeaf authkey; //type: string
        ydk::YLeaf authkeylvl1; //type: string
        ydk::YLeaf authkeylvl2; //type: string
        ydk::YLeaf name; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::LvlItems::IfLvlList


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems : public ydk::Entity
{
    public:
        TrafficItems();
        ~TrafficItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::TrafficItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems : public ydk::Entity
{
    public:
        DefrtleakItems();
        ~DefrtleakItems();

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
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::DefrtleakItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems : public ydk::Entity
{
    public:
        InterleakItems();
        ~InterleakItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InterLeakPList; //type: System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems


class System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList : public ydk::Entity
{
    public:
        InterLeakPList();
        ~InterLeakPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto; //type: RtleakProto
        ydk::YLeaf inst; //type: string
        ydk::YLeaf asn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string

}; // System::IsisItems::InstItems::InstList::DomItems::DomList::InterleakItems::InterLeakPList


class System::IsisItems::IfItems : public ydk::Entity
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

        class InternalIfList; //type: System::IsisItems::IfItems::InternalIfList

        ydk::YList internalif_list;
        
}; // System::IsisItems::IfItems


class System::IsisItems::IfItems::InternalIfList : public ydk::Entity
{
    public:
        InternalIfList();
        ~InternalIfList();

        bool has_data() const override;
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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf cktt; //type: IsisIsT
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf v4enable; //type: boolean
        ydk::YLeaf v6enable; //type: boolean
        ydk::YLeaf authchecklvl1; //type: boolean
        ydk::YLeaf authchecklvl2; //type: boolean
        ydk::YLeaf authcheck; //type: boolean
        ydk::YLeaf networktypep2p; //type: boolean
        ydk::YLeaf lsprefreshintvl; //type: uint32
        ydk::YLeaf retransinterval; //type: uint16
        ydk::YLeaf retransthrottleinterval; //type: uint16
        ydk::YLeaf passive; //type: IsisPassiveIntfT
        ydk::YLeaf hellopad; //type: IsisHelloPadT
        ydk::YLeaf instance; //type: string
        ydk::YLeaf dom; //type: string
        class MeshgrpItems; //type: System::IsisItems::IfItems::InternalIfList::MeshgrpItems
        class LvlItems; //type: System::IsisItems::IfItems::InternalIfList::LvlItems
        class TrafficItems; //type: System::IsisItems::IfItems::InternalIfList::TrafficItems
        class RtvrfMbrItems; //type: System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::MeshgrpItems> meshgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::LvlItems> lvl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::TrafficItems> traffic_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IsisItems::IfItems::InternalIfList


class System::IsisItems::IfItems::InternalIfList::MeshgrpItems : public ydk::Entity
{
    public:
        MeshgrpItems();
        ~MeshgrpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MeshGrpList; //type: System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList

        ydk::YList meshgrp_list;
        
}; // System::IsisItems::IfItems::InternalIfList::MeshgrpItems


class System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList : public ydk::Entity
{
    public:
        MeshGrpList();
        ~MeshGrpList();

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
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string

}; // System::IsisItems::IfItems::InternalIfList::MeshgrpItems::MeshGrpList


class System::IsisItems::IfItems::InternalIfList::LvlItems : public ydk::Entity
{
    public:
        LvlItems();
        ~LvlItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IfLvlList; //type: System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList

        ydk::YList iflvl_list;
        
}; // System::IsisItems::IfItems::InternalIfList::LvlItems


class System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList : public ydk::Entity
{
    public:
        IfLvlList();
        ~IfLvlList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IsisLvlT
        ydk::YLeaf prioritylvl1; //type: uint8
        ydk::YLeaf prioritylvl2; //type: uint8
        ydk::YLeaf hellointvl; //type: uint16
        ydk::YLeaf hellointvllvl1; //type: uint16
        ydk::YLeaf hellointvllvl2; //type: uint16
        ydk::YLeaf hellomult; //type: uint16
        ydk::YLeaf hellomultlvl1; //type: uint16
        ydk::YLeaf hellomultlvl2; //type: uint16
        ydk::YLeaf csnpintvllvl1; //type: uint16
        ydk::YLeaf mt0metriclvl1; //type: uint32
        ydk::YLeaf mt0metriclvl2; //type: uint32
        ydk::YLeaf mt2metriclvl1; //type: uint32
        ydk::YLeaf mt2metriclvl2; //type: uint32
        ydk::YLeaf authtype; //type: IsisAuthT
        ydk::YLeaf authtypelvl1; //type: IsisAuthT
        ydk::YLeaf authtypelvl2; //type: IsisAuthT
        ydk::YLeaf authkey; //type: string
        ydk::YLeaf authkeylvl1; //type: string
        ydk::YLeaf authkeylvl2; //type: string
        ydk::YLeaf name; //type: string

}; // System::IsisItems::IfItems::InternalIfList::LvlItems::IfLvlList


class System::IsisItems::IfItems::InternalIfList::TrafficItems : public ydk::Entity
{
    public:
        TrafficItems();
        ~TrafficItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // System::IsisItems::IfItems::InternalIfList::TrafficItems


class System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IsisItems::IfItems::InternalIfList::RtvrfMbrItems


class System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems


class System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IsisItems::IfItems::InternalIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::LacpItems : public ydk::Entity
{
    public:
        LacpItems();
        ~LacpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::LacpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LacpItems::InstItems> inst_items;
        
}; // System::LacpItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_19_ */

