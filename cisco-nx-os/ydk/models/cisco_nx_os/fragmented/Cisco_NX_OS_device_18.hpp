#ifndef _CISCO_NX_OS_DEVICE_18_
#define _CISCO_NX_OS_DEVICE_18_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BrItems : public ydk::Entity
{
    public:
        BrItems();
        ~BrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class BrIfList; //type: System::BrItems::BrIfList

        ydk::YList brif_list;
        
}; // System::BrItems


class System::BrItems::BrIfList : public ydk::Entity
{
    public:
        BrIfList();
        ~BrIfList();

        bool has_data() const override;
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
        class DepItems; //type: System::BrItems::BrIfList::DepItems
        class VnodeItems; //type: System::BrItems::BrIfList::VnodeItems
        class IdepItems; //type: System::BrItems::BrIfList::IdepItems
        class OdevItems; //type: System::BrItems::BrIfList::OdevItems
        class RsbrConfItems; //type: System::BrItems::BrIfList::RsbrConfItems
        class RtvrfMbrItems; //type: System::BrItems::BrIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::BrItems::BrIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::DepItems> dep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::IdepItems> idep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::OdevItems> odev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::RsbrConfItems> rsbrconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::BrItems::BrIfList


class System::BrItems::BrIfList::DepItems : public ydk::Entity
{
    public:
        DepItems();
        ~DepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DEpList; //type: System::BrItems::BrIfList::DepItems::DEpList

        ydk::YList dep_list;
        
}; // System::BrItems::BrIfList::DepItems


class System::BrItems::BrIfList::DepItems::DEpList : public ydk::Entity
{
    public:
        DEpList();
        ~DEpList();

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
        ydk::YLeaf encap; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string

}; // System::BrItems::BrIfList::DepItems::DEpList


class System::BrItems::BrIfList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::BrItems::BrIfList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::BrItems::BrIfList::VnodeItems


class System::BrItems::BrIfList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::BrItems::BrIfList::VnodeItems::VNodeList


class System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems


class System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

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

}; // System::BrItems::BrIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems


class System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

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

}; // System::BrItems::BrIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::BrItems::BrIfList::IdepItems : public ydk::Entity
{
    public:
        IdepItems();
        ~IdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpList; //type: System::BrItems::BrIfList::IdepItems::IDEpList

        ydk::YList idep_list;
        
}; // System::BrItems::BrIfList::IdepItems


class System::BrItems::BrIfList::IdepItems::IDEpList : public ydk::Entity
{
    public:
        IDEpList();
        ~IDEpList();

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
        ydk::YLeaf encap; //type: string
        ydk::YLeaf eppdn; //type: string
        ydk::YLeaf compvmdn; //type: string
        ydk::YLeaf comphvdn; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf ephostaddr; //type: string
        ydk::YLeaf hypervisorname; //type: string
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf containername; //type: string
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf eppdownloadhint; //type: OpflexEppDownloadHint
        ydk::YLeaf handle; //type: uint64
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string
        class IdepcntrItems; //type: System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems
        class VdepItems; //type: System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems> idepcntr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems> vdep_items;
        
}; // System::BrItems::BrIfList::IdepItems::IDEpList


class System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems : public ydk::Entity
{
    public:
        IdepcntrItems();
        ~IdepcntrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IDEpCntrList; //type: System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList

        ydk::YList idepcntr_list;
        
}; // System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems


class System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList : public ydk::Entity
{
    public:
        IDEpCntrList();
        ~IDEpCntrList();

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
        ydk::YLeaf encap; //type: string
        ydk::YLeaf direction; //type: OpflexDirection
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::BrItems::BrIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList


class System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems : public ydk::Entity
{
    public:
        VdepItems();
        ~VdepItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VDEpList; //type: System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList

        ydk::YList vdep_list;
        
}; // System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems


class System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList : public ydk::Entity
{
    public:
        VDEpList();
        ~VDEpList();

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
        ydk::YLeaf encap; //type: string
        ydk::YLeaf brifid; //type: string
        ydk::YLeaf epgid; //type: string
        ydk::YLeaf insttype; //type: CompInstType_
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        ydk::YLeaf uuid; //type: string
        class RsvNodeItems; //type: System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems> rsvnode_items;
        
}; // System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList


class System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems : public ydk::Entity
{
    public:
        RsvNodeItems();
        ~RsvNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsVNodeList; //type: System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList

        ydk::YList rsvnode_list;
        
}; // System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems


class System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList : public ydk::Entity
{
    public:
        RsVNodeList();
        ~RsVNodeList();

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

}; // System::BrItems::BrIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList


class System::BrItems::BrIfList::OdevItems : public ydk::Entity
{
    public:
        OdevItems();
        ~OdevItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ODevList; //type: System::BrItems::BrIfList::OdevItems::ODevList

        ydk::YList odev_list;
        
}; // System::BrItems::BrIfList::OdevItems


class System::BrItems::BrIfList::OdevItems::ODevList : public ydk::Entity
{
    public:
        ODevList();
        ~ODevList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf hostname; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf numhb; //type: uint32
        ydk::YLeaf lastnumhb; //type: uint32
        ydk::YLeaf hbstatus; //type: OpflexHbStatus
        ydk::YLeaf operst; //type: OpflexDevOperState
        ydk::YLeaf maxmisshb; //type: uint32
        ydk::YLeaf pcifid; //type: uint32
        ydk::YLeaf transitionstatus; //type: OpflexEpTransitionStatus
        ydk::YLeaf portid; //type: uint32
        ydk::YLeaf state; //type: CompHostState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class OdevcapItems; //type: System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems
        class VnodeItems; //type: System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems
        class OpnicItems; //type: System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems> odevcap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems> opnic_items;
        
}; // System::BrItems::BrIfList::OdevItems::ODevList


class System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems : public ydk::Entity
{
    public:
        OdevcapItems();
        ~OdevcapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: string
        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::BrItems::BrIfList::OdevItems::ODevList::OdevcapItems


class System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems : public ydk::Entity
{
    public:
        VnodeItems();
        ~VnodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VNodeList; //type: System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems


class System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList : public ydk::Entity
{
    public:
        VNodeList();
        ~VNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf devid; //type: uint32
        ydk::YLeaf devtype; //type: OpflexDeviceType
        ydk::YLeaf lnodedn; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64
        class RtfvVNodeItems; //type: System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList


class System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
{
    public:
        RtfvVNodeItems();
        ~RtfvVNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtFvVNodeList; //type: System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems


class System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
{
    public:
        RtFvVNodeList();
        ~RtFvVNodeList();

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

}; // System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
{
    public:
        RslNodeItems();
        ~RslNodeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsLNodeList; //type: System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems


class System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
{
    public:
        RsLNodeList();
        ~RsLNodeList();

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

}; // System::BrItems::BrIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems : public ydk::Entity
{
    public:
        OpnicItems();
        ~OpnicItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OPNicList; //type: System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList

        ydk::YList opnic_list;
        
}; // System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems


class System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList : public ydk::Entity
{
    public:
        OPNicList();
        ~OPNicList();

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
        ydk::YLeaf state; //type: CompNicState
        ydk::YLeaf name; //type: string
        ydk::YLeaf id; //type: uint64

}; // System::BrItems::BrIfList::OdevItems::ODevList::OpnicItems::OPNicList


class System::BrItems::BrIfList::RsbrConfItems : public ydk::Entity
{
    public:
        RsbrConfItems();
        ~RsbrConfItems();

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

}; // System::BrItems::BrIfList::RsbrConfItems


class System::BrItems::BrIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::BrItems::BrIfList::RtvrfMbrItems


class System::BrItems::BrIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::BrItems::BrIfList::RtnwPathToIfItems


class System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::BrItems::BrIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::MacItems : public ydk::Entity
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

        ydk::YLeaf aging; //type: uint32
        class StaticItems; //type: System::MacItems::StaticItems
        class TableItems; //type: System::MacItems::TableItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacItems::StaticItems> static_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacItems::TableItems> table_items;
        
}; // System::MacItems


class System::MacItems::StaticItems : public ydk::Entity
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

        class VlanItems; //type: System::MacItems::StaticItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacItems::StaticItems::VlanItems> vlan_items;
        
}; // System::MacItems::StaticItems


class System::MacItems::StaticItems::VlanItems : public ydk::Entity
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

        class StaticEntryList; //type: System::MacItems::StaticItems::VlanItems::StaticEntryList

        ydk::YList staticentry_list;
        
}; // System::MacItems::StaticItems::VlanItems


class System::MacItems::StaticItems::VlanItems::StaticEntryList : public ydk::Entity
{
    public:
        StaticEntryList();
        ~StaticEntryList();

        bool has_data() const override;
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
        ydk::YLeaf staticmacaddress; //type: string
        ydk::YLeaf dropaction; //type: boolean
        ydk::YLeaf interface; //type: string

}; // System::MacItems::StaticItems::VlanItems::StaticEntryList


class System::MacItems::TableItems : public ydk::Entity
{
    public:
        TableItems();
        ~TableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanItems; //type: System::MacItems::TableItems::VlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::MacItems::TableItems::VlanItems> vlan_items;
        
}; // System::MacItems::TableItems


class System::MacItems::TableItems::VlanItems : public ydk::Entity
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

        class MacAddressEntryList; //type: System::MacItems::TableItems::VlanItems::MacAddressEntryList

        ydk::YList macaddressentry_list;
        
}; // System::MacItems::TableItems::VlanItems


class System::MacItems::TableItems::VlanItems::MacAddressEntryList : public ydk::Entity
{
    public:
        MacAddressEntryList();
        ~MacAddressEntryList();

        bool has_data() const override;
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
        ydk::YLeaf macaddress; //type: string
        ydk::YLeaf type; //type: L2MacType
        ydk::YLeaf static_; //type: boolean
        ydk::YLeaf secure; //type: boolean
        ydk::YLeaf ntfy; //type: boolean
        ydk::YLeaf routed; //type: boolean
        ydk::YLeaf age; //type: uint32
        ydk::YLeaf port; //type: string
        ydk::YLeaf macinfo; //type: L2MacInfo

}; // System::MacItems::TableItems::VlanItems::MacAddressEntryList


class System::CdpItems : public ydk::Entity
{
    public:
        CdpItems();
        ~CdpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::CdpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems> inst_items;
        
}; // System::CdpItems


class System::CdpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf ver; //type: CdpVer
        ydk::YLeaf devidtype; //type: CdpDevIdT
        ydk::YLeaf holdintvl; //type: uint16
        ydk::YLeaf txfreq; //type: uint16
        ydk::YLeaf sysname; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string
        class IfItems; //type: System::CdpItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems> if_items;
        
}; // System::CdpItems::InstItems


class System::CdpItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::CdpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::CdpItems::InstItems::IfItems


class System::CdpItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf portdesc; //type: string
        ydk::YLeaf locdesc; //type: string
        ydk::YLeaf operst; //type: CdpOperSt
        ydk::YLeaf operstqual; //type: CdpOperStQual
        ydk::YLeaf nativevlan; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class AdjItems; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems
        class IfstatsItems; //type: System::CdpItems::InstItems::IfItems::IfList::IfstatsItems
        class RtvrfMbrItems; //type: System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::CdpItems::InstItems::IfItems::IfList


class System::CdpItems::InstItems::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf ver; //type: string
        ydk::YLeaf devid; //type: string
        ydk::YLeaf portid; //type: string
        ydk::YLeaf platid; //type: string
        ydk::YLeaf cap; //type: string
        ydk::YLeaf duplex; //type: CdpDuplex
        ydk::YLeaf nativevlan; //type: uint16
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf sysname; //type: string
        ydk::YLeaf sysloc; //type: string
        ydk::YLeaf name; //type: string
        class MgmtItems; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems
        class IntfItems; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems
        class AdjstatsItems; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        
}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems : public ydk::Entity
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

        class MgmtAddrList; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList

        ydk::YList mgmtaddr_list;
        
}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList : public ydk::Entity
{
    public:
        MgmtAddrList();
        ~MgmtAddrList();

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

}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::MgmtItems::MgmtAddrList


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems : public ydk::Entity
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

        class IntfAddrList; //type: System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList

        ydk::YList intfaddr_list;
        
}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList : public ydk::Entity
{
    public:
        IntfAddrList();
        ~IntfAddrList();

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

}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::IntfItems::IntfAddrList


class System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjexpts; //type: string

}; // System::CdpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::CdpItems::InstItems::IfItems::IfList::IfstatsItems : public ydk::Entity
{
    public:
        IfstatsItems();
        ~IfstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf v1sent; //type: uint32
        ydk::YLeaf v2sent; //type: uint32
        ydk::YLeaf failedsent; //type: uint32
        ydk::YLeaf validv1rcvd; //type: uint32
        ydk::YLeaf validv2rcvd; //type: uint32
        ydk::YLeaf unsupverrcvd; //type: uint32
        ydk::YLeaf cksumerrrcvd; //type: uint32
        ydk::YLeaf malformrcvd; //type: uint32

}; // System::CdpItems::InstItems::IfItems::IfList::IfstatsItems


class System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::CdpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::CdpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::LldpItems : public ydk::Entity
{
    public:
        LldpItems();
        ~LldpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::LldpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems> inst_items;
        
}; // System::LldpItems


class System::LldpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf initdelaytime; //type: uint16
        ydk::YLeaf txfreq; //type: uint16
        ydk::YLeaf opttlvsel; //type: string
        ydk::YLeaf sysdesc; //type: string
        ydk::YLeaf portidsubtype; //type: LldpPortIdSubType
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class MgmtItems; //type: System::LldpItems::InstItems::MgmtItems
        class IfItems; //type: System::LldpItems::InstItems::IfItems
        class InststatsItems; //type: System::LldpItems::InstItems::InststatsItems
        class RslldpInstPolConsItems; //type: System::LldpItems::InstItems::RslldpInstPolConsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::MgmtItems> mgmt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::InststatsItems> inststats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::RslldpInstPolConsItems> rslldpinstpolcons_items;
        
}; // System::LldpItems::InstItems


class System::LldpItems::InstItems::MgmtItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class MgmtAddrList; //type: System::LldpItems::InstItems::MgmtItems::MgmtAddrList

        ydk::YList mgmtaddr_list;
        
}; // System::LldpItems::InstItems::MgmtItems


class System::LldpItems::InstItems::MgmtItems::MgmtAddrList : public ydk::Entity
{
    public:
        MgmtAddrList();
        ~MgmtAddrList();

        bool has_data() const override;
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

}; // System::LldpItems::InstItems::MgmtItems::MgmtAddrList


class System::LldpItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::LldpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::LldpItems::InstItems::IfItems


class System::LldpItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf adminrxst; //type: LldpAdminSt
        ydk::YLeaf admintxst; //type: LldpAdminSt
        ydk::YLeaf sysdesc; //type: string
        ydk::YLeaf tlvsetvlan; //type: uint16
        ydk::YLeaf tlvsetmgmtipv4; //type: string
        ydk::YLeaf tlvsetmgmtipv6; //type: string
        ydk::YLeaf portdesc; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class AdjItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems
        class CtrlradjItems; //type: System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems
        class IfstatsItems; //type: System::LldpItems::InstItems::IfItems::IfList::IfstatsItems
        class RtvrfMbrItems; //type: System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems> adj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems> ctrlradj_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::IfstatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::LldpItems::InstItems::IfItems::IfList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems : public ydk::Entity
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

        class AdjEpList; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList

        ydk::YList adjep_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf chassisidt; //type: uint8
        ydk::YLeaf chassisidv; //type: string
        ydk::YLeaf portidt; //type: uint8
        ydk::YLeaf portidv; //type: string
        ydk::YLeaf sysname; //type: string
        ydk::YLeaf sysdesc; //type: string
        ydk::YLeaf portdesc; //type: string
        ydk::YLeaf capability; //type: string
        ydk::YLeaf encap; //type: string
        ydk::YLeaf mgmtip; //type: string
        ydk::YLeaf portvlan; //type: uint16
        ydk::YLeaf name; //type: string
        class AdjstatsItems; //type: System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems> adjstats_items;
        
}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList


class System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems : public ydk::Entity
{
    public:
        AdjstatsItems();
        ~AdjstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // System::LldpItems::InstItems::IfItems::IfList::AdjItems::AdjEpList::AdjstatsItems


class System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems : public ydk::Entity
{
    public:
        CtrlradjItems();
        ~CtrlradjItems();

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
        class RsctrlrAdjEpToStAdjEpItems; //type: System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems> rsctrlradjeptostadjep_items;
        
}; // System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems


class System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems : public ydk::Entity
{
    public:
        RsctrlrAdjEpToStAdjEpItems();
        ~RsctrlrAdjEpToStAdjEpItems();

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

}; // System::LldpItems::InstItems::IfItems::IfList::CtrlradjItems::RsctrlrAdjEpToStAdjEpItems


class System::LldpItems::InstItems::IfItems::IfList::IfstatsItems : public ydk::Entity
{
    public:
        IfstatsItems();
        ~IfstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pktsent; //type: uint64
        ydk::YLeaf pktrcvd; //type: uint64
        ydk::YLeaf entriesaged; //type: uint64
        ydk::YLeaf errpktrcvd; //type: uint64
        ydk::YLeaf pktdiscarded; //type: uint64
        ydk::YLeaf unrecogtlv; //type: uint64

}; // System::LldpItems::InstItems::IfItems::IfList::IfstatsItems


class System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::LldpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::LldpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::LldpItems::InstItems::InststatsItems : public ydk::Entity
{
    public:
        InststatsItems();
        ~InststatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf pktsent; //type: uint64
        ydk::YLeaf pktrcvd; //type: uint64
        ydk::YLeaf entriesaged; //type: uint64
        ydk::YLeaf errpktrcvd; //type: uint64
        ydk::YLeaf pktdiscarded; //type: uint64
        ydk::YLeaf unrecogtlv; //type: uint64

}; // System::LldpItems::InstItems::InststatsItems


class System::LldpItems::InstItems::RslldpInstPolConsItems : public ydk::Entity
{
    public:
        RslldpInstPolConsItems();
        ~RslldpInstPolConsItems();

        bool has_data() const override;
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

}; // System::LldpItems::InstItems::RslldpInstPolConsItems


class System::McpItems : public ydk::Entity
{
    public:
        McpItems();
        ~McpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::McpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems::InstItems> inst_items;
        
}; // System::McpItems


class System::McpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf txfreq; //type: uint16
        ydk::YLeaf loopdetectmult; //type: uint8
        ydk::YLeaf key; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class IfItems; //type: System::McpItems::InstItems::IfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems::InstItems::IfItems> if_items;
        
}; // System::McpItems::InstItems


class System::McpItems::InstItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::McpItems::InstItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::McpItems::InstItems::IfItems


class System::McpItems::InstItems::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf operst; //type: McpOperSt
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class RtvrfMbrItems; //type: System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::McpItems::InstItems::IfItems::IfList


class System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::McpItems::InstItems::IfItems::IfList::RtvrfMbrItems


class System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems


class System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::McpItems::InstItems::IfItems::IfList::RtnwPathToIfItems::RtNwPathToIfList


class System::VpcItems : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf operst; //type: NwEntOperSt
        ydk::YLeaf opererr; //type: string
        class InstItems; //type: System::VpcItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems> inst_items;
        
}; // System::VpcItems


class System::VpcItems::InstItems : public ydk::Entity
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
        class OrphanItems; //type: System::VpcItems::InstItems::OrphanItems
        class DomItems; //type: System::VpcItems::InstItems::DomItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::OrphanItems> orphan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems> dom_items;
        
}; // System::VpcItems::InstItems


class System::VpcItems::InstItems::OrphanItems : public ydk::Entity
{
    public:
        OrphanItems();
        ~OrphanItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class OrphanPortList; //type: System::VpcItems::InstItems::OrphanItems::OrphanPortList

        ydk::YList orphanport_list;
        
}; // System::VpcItems::InstItems::OrphanItems


class System::VpcItems::InstItems::OrphanItems::OrphanPortList : public ydk::Entity
{
    public:
        OrphanPortList();
        ~OrphanPortList();

        bool has_data() const override;
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
        class RtvrfMbrItems; //type: System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::VpcItems::InstItems::OrphanItems::OrphanPortList


class System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems : public ydk::Entity
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

}; // System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtvrfMbrItems


class System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems


class System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::VpcItems::InstItems::OrphanItems::OrphanPortList::RtnwPathToIfItems::RtNwPathToIfList


class System::VpcItems::InstItems::DomItems : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf sysprio; //type: uint16
        ydk::YLeaf sysmac; //type: string
        ydk::YLeaf roleprio; //type: uint16
        ydk::YLeaf peergwexcludevlan; //type: string
        ydk::YLeaf peergw; //type: NwAdminSt_
        ydk::YLeaf grcflcnstncychck; //type: NwAdminSt_
        ydk::YLeaf track; //type: uint16
        ydk::YLeaf autorecovery; //type: NwAdminSt_
        ydk::YLeaf autorecoveryintvl; //type: uint32
        ydk::YLeaf peerswitch; //type: NwAdminSt_
        ydk::YLeaf delayrestorevpc; //type: uint16
        ydk::YLeaf delayrestoresvi; //type: uint16
        ydk::YLeaf delaypeerlinkbringup; //type: uint16
        ydk::YLeaf excludesvi; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf fastconvergence; //type: NwAdminSt_
        ydk::YLeaf l3peerrouter; //type: NwAdminSt_
        ydk::YLeaf l3peerroutersyslog; //type: NwAdminSt_
        ydk::YLeaf l3peerroutersysloginterval; //type: uint16
        ydk::YLeaf operrole; //type: VpcRole
        ydk::YLeaf oldrole; //type: VpcRole
        ydk::YLeaf lacprole; //type: VpcRole
        ydk::YLeaf summoperrole; //type: VpcSummRole
        ydk::YLeaf localprio; //type: uint16
        ydk::YLeaf peerprio; //type: uint16
        ydk::YLeaf vpcprio; //type: uint16
        ydk::YLeaf localmac; //type: string
        ydk::YLeaf peermac; //type: string
        ydk::YLeaf vpcmac; //type: string
        ydk::YLeaf operst; //type: string
        ydk::YLeaf peerversion; //type: uint32
        ydk::YLeaf batchedvpcinv; //type: string
        ydk::YLeaf issufromver; //type: string
        ydk::YLeaf issutover; //type: string
        ydk::YLeaf peerst; //type: VpcPeerSt
        ydk::YLeaf peerstqual; //type: VpcPeerStQual
        ydk::YLeaf dualactivest; //type: VpcDualActiveSt
        ydk::YLeaf compatst; //type: VpcCompatSt
        ydk::YLeaf compatqual; //type: uint32
        ydk::YLeaf compatqualstr; //type: string
        ydk::YLeaf type2compatst; //type: VpcCompatSt
        ydk::YLeaf type2compatqual; //type: uint32
        ydk::YLeaf type2compatqualstr; //type: string
        ydk::YLeaf name; //type: string
        class IfItems; //type: System::VpcItems::InstItems::DomItems::IfItems
        class KeepaliveItems; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems
        class ParamsItems; //type: System::VpcItems::InstItems::DomItems::ParamsItems
        class RsvpcInstPolConsItems; //type: System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::KeepaliveItems> keepalive_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::ParamsItems> params_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems> rsvpcinstpolcons_items;
        
}; // System::VpcItems::InstItems::DomItems


class System::VpcItems::InstItems::DomItems::IfItems : public ydk::Entity
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

        class IfList; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList

        ydk::YList if_list;
        
}; // System::VpcItems::InstItems::DomItems::IfItems


class System::VpcItems::InstItems::DomItems::IfItems::IfList : public ydk::Entity
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

        ydk::YLeaf id; //type: uint16
        ydk::YLeaf localoperst; //type: VpcOperSt
        ydk::YLeaf remoteoperst; //type: VpcOperSt
        ydk::YLeaf compatst; //type: VpcCompatSt
        ydk::YLeaf compatqual; //type: uint32
        ydk::YLeaf compatqualstr; //type: string
        ydk::YLeaf cfgdvlans; //type: string
        ydk::YLeaf cfgdtrunkvlans; //type: string
        ydk::YLeaf cfgdaccessvlan; //type: string
        ydk::YLeaf upvlans; //type: string
        ydk::YLeaf suspvlans; //type: string
        ydk::YLeaf peercfgdvlans; //type: string
        ydk::YLeaf peerupvlans; //type: string
        class ParamsItems; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems
        class RsvpcConfItems; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems> params_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems> rsvpcconf_items;
        
}; // System::VpcItems::InstItems::DomItems::IfItems::IfList


class System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems : public ydk::Entity
{
    public:
        ParamsItems();
        ~ParamsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AppParamsList; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList

        ydk::YList appparams_list;
        
}; // System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems


class System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList : public ydk::Entity
{
    public:
        AppParamsList();
        ~AppParamsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appid; //type: uint32
        ydk::YLeaf locrsncode; //type: uint32
        ydk::YLeaf locparamlen; //type: uint32
        ydk::YLeaf locparamval; //type: string
        ydk::YLeaf remrsncode; //type: uint32
        ydk::YLeaf remparamlen; //type: uint32
        ydk::YLeaf remparamval; //type: string
        class ParamItems; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems> param_items;
        
}; // System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList


class System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems : public ydk::Entity
{
    public:
        ParamItems();
        ~ParamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AppParamInfoList; //type: System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList

        ydk::YList appparaminfo_list;
        
}; // System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems


class System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList : public ydk::Entity
{
    public:
        AppParamInfoList();
        ~AppParamInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paramname; //type: string
        ydk::YLeaf paramtype; //type: VpcParamType
        ydk::YLeaf locparamval; //type: string
        ydk::YLeaf remparamval; //type: string

}; // System::VpcItems::InstItems::DomItems::IfItems::IfList::ParamsItems::AppParamsList::ParamItems::AppParamInfoList


class System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems : public ydk::Entity
{
    public:
        RsvpcConfItems();
        ~RsvpcConfItems();

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

}; // System::VpcItems::InstItems::DomItems::IfItems::IfList::RsvpcConfItems


class System::VpcItems::InstItems::DomItems::KeepaliveItems : public ydk::Entity
{
    public:
        KeepaliveItems();
        ~KeepaliveItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf srcip; //type: string
        ydk::YLeaf destip; //type: string
        ydk::YLeaf udpport; //type: uint32
        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf toscfgtype; //type: VpcTosCfgType
        ydk::YLeaf tosbyte; //type: uint8
        ydk::YLeaf tosvalue; //type: uint8
        ydk::YLeaf tostype; //type: VpcTosType
        ydk::YLeaf precvalue; //type: uint8
        ydk::YLeaf prectype; //type: VpcPrecType
        ydk::YLeaf flushtout; //type: uint32
        ydk::YLeaf operst; //type: string
        ydk::YLeaf sendif; //type: string
        ydk::YLeaf recvif; //type: string
        ydk::YLeaf sendtime; //type: string
        ydk::YLeaf recvtime; //type: string
        ydk::YLeaf firstrecvtime; //type: string
        ydk::YLeaf name; //type: string
        class PeerlinkItems; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems> peerlink_items;
        
}; // System::VpcItems::InstItems::DomItems::KeepaliveItems


class System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems : public ydk::Entity
{
    public:
        PeerlinkItems();
        ~PeerlinkItems();

        bool has_data() const override;
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
        ydk::YLeaf descr; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class RtvrfMbrItems; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems


class System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtvrfMbrItems


class System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class RtNwPathToIfList; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems


class System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems::RtnwPathToIfItems::RtNwPathToIfList


class System::VpcItems::InstItems::DomItems::ParamsItems : public ydk::Entity
{
    public:
        ParamsItems();
        ~ParamsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AppParamsList; //type: System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList

        ydk::YList appparams_list;
        
}; // System::VpcItems::InstItems::DomItems::ParamsItems


class System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList : public ydk::Entity
{
    public:
        AppParamsList();
        ~AppParamsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf appid; //type: uint32
        ydk::YLeaf locrsncode; //type: uint32
        ydk::YLeaf locparamlen; //type: uint32
        ydk::YLeaf locparamval; //type: string
        ydk::YLeaf remrsncode; //type: uint32
        ydk::YLeaf remparamlen; //type: uint32
        ydk::YLeaf remparamval; //type: string
        class ParamItems; //type: System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems> param_items;
        
}; // System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList


class System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems : public ydk::Entity
{
    public:
        ParamItems();
        ~ParamItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AppParamInfoList; //type: System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList

        ydk::YList appparaminfo_list;
        
}; // System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems


class System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList : public ydk::Entity
{
    public:
        AppParamInfoList();
        ~AppParamInfoList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf paramname; //type: string
        ydk::YLeaf paramtype; //type: VpcParamType
        ydk::YLeaf locparamval; //type: string
        ydk::YLeaf remparamval; //type: string

}; // System::VpcItems::InstItems::DomItems::ParamsItems::AppParamsList::ParamItems::AppParamInfoList


class System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems : public ydk::Entity
{
    public:
        RsvpcInstPolConsItems();
        ~RsvpcInstPolConsItems();

        bool has_data() const override;
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
        ydk::YLeaf protgep; //type: string

}; // System::VpcItems::InstItems::DomItems::RsvpcInstPolConsItems


class System::EpnsItems : public ydk::Entity
{
    public:
        EpnsItems();
        ~EpnsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf epcount; //type: uint32

}; // System::EpnsItems


class System::GoldItems : public ydk::Entity
{
    public:
        GoldItems();
        ~GoldItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf description; //type: string
        class ModuleItems; //type: System::GoldItems::ModuleItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GoldItems::ModuleItems> module_items;
        
}; // System::GoldItems


class System::GoldItems::ModuleItems : public ydk::Entity
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

        class ModuleList; //type: System::GoldItems::ModuleItems::ModuleList

        ydk::YList module_list;
        
}; // System::GoldItems::ModuleItems


class System::GoldItems::ModuleItems::ModuleList : public ydk::Entity
{
    public:
        ModuleList();
        ~ModuleList();

        bool has_data() const override;
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
        ydk::YLeaf description; //type: string
        ydk::YLeaf diagbootlevel; //type: GoldBootLevel
        ydk::YLeaf diagstatus; //type: GoldModuleDiagStatus
        class TestItems; //type: System::GoldItems::ModuleItems::ModuleList::TestItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::GoldItems::ModuleItems::ModuleList::TestItems> test_items;
        
}; // System::GoldItems::ModuleItems::ModuleList


class System::GoldItems::ModuleItems::ModuleList::TestItems : public ydk::Entity
{
    public:
        TestItems();
        ~TestItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TestList; //type: System::GoldItems::ModuleItems::ModuleList::TestItems::TestList

        ydk::YList test_list;
        
}; // System::GoldItems::ModuleItems::ModuleList::TestItems


class System::GoldItems::ModuleItems::ModuleList::TestItems::TestList : public ydk::Entity
{
    public:
        TestList();
        ~TestList();

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
        ydk::YLeaf firstfailtime; //type: string
        ydk::YLeaf lastfailtime; //type: string
        ydk::YLeaf lastexecutiontime; //type: string
        ydk::YLeaf lastpasstime; //type: string
        ydk::YLeaf nextexecutiontime; //type: string
        ydk::YLeaf result; //type: GoldResult
        ydk::YLeaf resultreason; //type: string
        ydk::YLeaf runcount; //type: uint32
        ydk::YLeaf failcount; //type: uint32
        ydk::YLeaf consecutivefailcount; //type: uint32
        ydk::YLeaf portsaborted; //type: string
        ydk::YLeaf portserrordisabled; //type: string
        ydk::YLeaf portsfailing; //type: string
        ydk::YLeaf portsincomplete; //type: string
        ydk::YLeaf portspassing; //type: string
        ydk::YLeaf portsuntested; //type: string
        ydk::YLeaf testattributes; //type: string
        ydk::YLeaf testinterval; //type: string

}; // System::GoldItems::ModuleItems::ModuleList::TestItems::TestList


class System::IgmpItems : public ydk::Entity
{
    public:
        IgmpItems();
        ~IgmpItems();

        bool has_data() const override;
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
        class InstItems; //type: System::IgmpItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems> inst_items;
        
}; // System::IgmpItems


class System::IgmpItems::InstItems : public ydk::Entity
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

        ydk::YLeaf heavytemplate; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf instctrl; //type: string
        ydk::YLeaf bootupdelay; //type: uint16
        ydk::YLeaf flushroute; //type: boolean
        ydk::YLeaf rtralert; //type: boolean
        ydk::YLeaf anyquerydest; //type: boolean
        class ExtdomItems; //type: System::IgmpItems::InstItems::ExtdomItems
        class DomItems; //type: System::IgmpItems::InstItems::DomItems
        class RoutedbItems; //type: System::IgmpItems::InstItems::RoutedbItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::ExtdomItems> extdom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems> dom_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::RoutedbItems> routedb_items;
        
}; // System::IgmpItems::InstItems


class System::IgmpItems::InstItems::ExtdomItems : public ydk::Entity
{
    public:
        ExtdomItems();
        ~ExtdomItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExtDomList; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList

        ydk::YList extdom_list;
        
}; // System::IgmpItems::InstItems::ExtdomItems


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList : public ydk::Entity
{
    public:
        ExtDomList();
        ~ExtDomList();

        bool has_data() const override;
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
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf name; //type: string
        class ExtifItems; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems> extif_items;
        
}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems : public ydk::Entity
{
    public:
        ExtifItems();
        ~ExtifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtIfList; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList

        ydk::YList extif_list;
        
}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList : public ydk::Entity
{
    public:
        ExtIfList();
        ~ExtIfList();

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
        class RtvrfMbrItems; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtvrfMbrItems


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems


class System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::IgmpItems::InstItems::ExtdomItems::ExtDomList::ExtifItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::IgmpItems::InstItems::DomItems : public ydk::Entity
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

        class DomList; //type: System::IgmpItems::InstItems::DomItems::DomList

        ydk::YList dom_list;
        
}; // System::IgmpItems::InstItems::DomItems


class System::IgmpItems::InstItems::DomItems::DomList : public ydk::Entity
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
        class DbItems; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems
        class EventHistItems; //type: System::IgmpItems::InstItems::DomItems::DomList::EventHistItems
        class IfItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems
        class SsmxlateItems; //type: System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::DbItems> db_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::EventHistItems> eventhist_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::SsmxlateItems> ssmxlate_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList


class System::IgmpItems::InstItems::DomItems::DomList::DbItems : public ydk::Entity
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

        class DbList; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList

        ydk::YList db_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList : public ydk::Entity
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

        ydk::YLeaf type; //type: IgmpDbT
        ydk::YLeaf name; //type: string
        class SrcItems; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems> src_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems : public ydk::Entity
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

        class RouteList; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList

        ydk::YList route_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList : public ydk::Entity
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

        ydk::YLeaf src; //type: string
        ydk::YLeaf grp; //type: string
        class OifItems; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems> oif_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems : public ydk::Entity
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

        class OifList; //type: System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList

        ydk::YList oif_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems


class System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList : public ydk::Entity
{
    public:
        OifList();
        ~OifList();

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
        ydk::YLeaf expiryts; //type: string
        ydk::YLeaf createts; //type: string
        ydk::YLeaf lastrep; //type: string
        ydk::YLeaf type; //type: string

}; // System::IgmpItems::InstItems::DomItems::DomList::DbItems::DbList::SrcItems::RouteList::OifItems::OifList


class System::IgmpItems::InstItems::DomItems::DomList::EventHistItems : public ydk::Entity
{
    public:
        EventHistItems();
        ~EventHistItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventHistoryList; //type: System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList

        ydk::YList eventhistory_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::EventHistItems


class System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList : public ydk::Entity
{
    public:
        EventHistoryList();
        ~EventHistoryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IgmpEhType
        ydk::YLeaf size; //type: uint32

}; // System::IgmpItems::InstItems::DomItems::DomList::EventHistItems::EventHistoryList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems : public ydk::Entity
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

        class IfList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList

        ydk::YList if_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList : public ydk::Entity
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
        ydk::YLeaf ifctrl; //type: string
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf grptimeout; //type: uint16
        ydk::YLeaf actquer; //type: string
        ydk::YLeaf nextquertime; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf entrycount; //type: uint32
        ydk::YLeaf stentrycount; //type: uint32
        ydk::YLeaf querexpiry; //type: string
        ydk::YLeaf reportll; //type: boolean
        ydk::YLeaf immediateleave; //type: boolean
        ydk::YLeaf allowv3asm; //type: boolean
        class IfStatsItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems
        class JointypeItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems
        class LimitItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems
        class ReppolItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems
        class StreppolItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems
        class QuerierpItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems
        class RtvrfMbrItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems> ifstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems> jointype_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems> limit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems> reppol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems> streppol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems> querierp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems : public ydk::Entity
{
    public:
        IfStatsItems();
        ~IfStatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf v2quersent; //type: uint32
        ydk::YLeaf v2querrcvd; //type: uint32
        ydk::YLeaf v3quersent; //type: uint32
        ydk::YLeaf v3querrcvd; //type: uint32
        ydk::YLeaf v2rprtsent; //type: uint32
        ydk::YLeaf v2rprtrcvd; //type: uint32
        ydk::YLeaf v3rprtsent; //type: uint32
        ydk::YLeaf v3rprtrcvd; //type: uint32
        ydk::YLeaf v2leavesent; //type: uint32
        ydk::YLeaf v2leavercvd; //type: uint32

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::IfStatsItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems : public ydk::Entity
{
    public:
        JointypeItems();
        ~JointypeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class JoinTypeList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList

        ydk::YList jointype_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList : public ydk::Entity
{
    public:
        JoinTypeList();
        ~JoinTypeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: IpmcJoinType
        class VerItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems> ver_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems : public ydk::Entity
{
    public:
        VerItems();
        ~VerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VersionList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList

        ydk::YList version_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList : public ydk::Entity
{
    public:
        VersionList();
        ~VersionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version; //type: IpmcVer
        class GroupItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems> group_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems : public ydk::Entity
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

        class GroupList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList

        ydk::YList group_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList : public ydk::Entity
{
    public:
        GroupList();
        ~GroupList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grp; //type: string
        ydk::YLeaf usestaticoif; //type: boolean
        class SourceItems; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems> source_items;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems : public ydk::Entity
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

        class SourceList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList

        ydk::YList source_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList : public ydk::Entity
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

        ydk::YLeaf src; //type: string
        ydk::YLeaf usestaticoif; //type: boolean

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::JointypeItems::JoinTypeList::VerItems::VersionList::GroupItems::GroupList::SourceItems::SourceList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems : public ydk::Entity
{
    public:
        LimitItems();
        ~LimitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rsvdentries; //type: IgmpLimitSt
        ydk::YLeaf regentries; //type: IgmpLimitSt
        ydk::YLeaf availrsvdentries; //type: uint32
        ydk::YLeaf availregentries; //type: uint32
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf max; //type: uint32
        ydk::YLeaf rsvd; //type: uint32
        ydk::YLeaf rtmap; //type: string

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::LimitItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems : public ydk::Entity
{
    public:
        ReppolItems();
        ~ReppolItems();

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
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf useaccessgrpcommand; //type: boolean

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::ReppolItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems : public ydk::Entity
{
    public:
        StreppolItems();
        ~StreppolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StRepPList; //type: System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList

        ydk::YList strepp_list;
        
}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList : public ydk::Entity
{
    public:
        StRepPList();
        ~StRepPList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf jointype; //type: IpmcJoinType
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf pfxlist; //type: string
        ydk::YLeaf useaccessgrpcommand; //type: boolean

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::StreppolItems::StRepPList


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems : public ydk::Entity
{
    public:
        QuerierpItems();
        ~QuerierpItems();

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
        ydk::YLeaf ver; //type: McastVer
        ydk::YLeaf addr; //type: string
        ydk::YLeaf queryintvl; //type: uint16
        ydk::YLeaf rspintvl; //type: uint16
        ydk::YLeaf robustfac; //type: uint8
        ydk::YLeaf startqueryintvl; //type: uint16
        ydk::YLeaf startquerycnt; //type: uint8
        ydk::YLeaf queriertimeout; //type: uint16
        ydk::YLeaf lastmbrcnt; //type: uint16
        ydk::YLeaf lastmbrresptime; //type: uint16

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::QuerierpItems


class System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::IgmpItems::InstItems::DomItems::DomList::IfItems::IfList::RtvrfMbrItems


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


}
}

#endif /* _CISCO_NX_OS_DEVICE_18_ */

