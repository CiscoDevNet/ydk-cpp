#ifndef _CISCO_NX_OS_DEVICE_18_
#define _CISCO_NX_OS_DEVICE_18_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_17.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::InbItems::InbandIfList::IdepItems::IDEpList : public ydk::Entity
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
        class IdepcntrItems; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems
        class VdepItems; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems> idepcntr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems> vdep_items;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList


class System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems : public ydk::Entity
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

        class IDEpCntrList; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList

        ydk::YList idepcntr_list;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems


class System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList : public ydk::Entity
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

}; // System::InbItems::InbandIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList


class System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems : public ydk::Entity
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

        class VDEpList; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList

        ydk::YList vdep_list;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems


class System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList : public ydk::Entity
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
        class RsvNodeItems; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems> rsvnode_items;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList


class System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems : public ydk::Entity
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

        class RsVNodeList; //type: System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList

        ydk::YList rsvnode_list;
        
}; // System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems


class System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList : public ydk::Entity
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

}; // System::InbItems::InbandIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList


class System::InbItems::InbandIfList::OdevItems : public ydk::Entity
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

        class ODevList; //type: System::InbItems::InbandIfList::OdevItems::ODevList

        ydk::YList odev_list;
        
}; // System::InbItems::InbandIfList::OdevItems


class System::InbItems::InbandIfList::OdevItems::ODevList : public ydk::Entity
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
        class OdevcapItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems
        class VnodeItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems
        class OpnicItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems> odevcap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems> opnic_items;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList


class System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems : public ydk::Entity
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

}; // System::InbItems::InbandIfList::OdevItems::ODevList::OdevcapItems


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems : public ydk::Entity
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

        class VNodeList; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList : public ydk::Entity
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
        class RtfvVNodeItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
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

        class RtFvVNodeList; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
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

}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
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

        class RsLNodeList; //type: System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems


class System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
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

}; // System::InbItems::InbandIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems : public ydk::Entity
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

        class OPNicList; //type: System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList

        ydk::YList opnic_list;
        
}; // System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems


class System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList : public ydk::Entity
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

}; // System::InbItems::InbandIfList::OdevItems::ODevList::OpnicItems::OPNicList


class System::InbItems::InbandIfList::RsinbandConfItems : public ydk::Entity
{
    public:
        RsinbandConfItems();
        ~RsinbandConfItems();

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

}; // System::InbItems::InbandIfList::RsinbandConfItems


class System::InbItems::InbandIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::InbItems::InbandIfList::RtvrfMbrItems


class System::InbItems::InbandIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::InbItems::InbandIfList::RtnwPathToIfItems


class System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::InbItems::InbandIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::ExtItems : public ydk::Entity
{
    public:
        ExtItems();
        ~ExtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ExtIfList; //type: System::ExtItems::ExtIfList

        ydk::YList extif_list;
        
}; // System::ExtItems


class System::ExtItems::ExtIfList : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf extchasid; //type: uint16
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class DepItems; //type: System::ExtItems::ExtIfList::DepItems
        class VnodeItems; //type: System::ExtItems::ExtIfList::VnodeItems
        class IdepItems; //type: System::ExtItems::ExtIfList::IdepItems
        class OdevItems; //type: System::ExtItems::ExtIfList::OdevItems
        class RsextConfItems; //type: System::ExtItems::ExtIfList::RsextConfItems
        class RtvrfMbrItems; //type: System::ExtItems::ExtIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::ExtItems::ExtIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::DepItems> dep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::IdepItems> idep_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems> odev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::RsextConfItems> rsextconf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::ExtItems::ExtIfList


class System::ExtItems::ExtIfList::DepItems : public ydk::Entity
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

        class DEpList; //type: System::ExtItems::ExtIfList::DepItems::DEpList

        ydk::YList dep_list;
        
}; // System::ExtItems::ExtIfList::DepItems


class System::ExtItems::ExtIfList::DepItems::DEpList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::DepItems::DEpList


class System::ExtItems::ExtIfList::VnodeItems : public ydk::Entity
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

        class VNodeList; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::ExtItems::ExtIfList::VnodeItems


class System::ExtItems::ExtIfList::VnodeItems::VNodeList : public ydk::Entity
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
        class RtfvVNodeItems; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList


class System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
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

        class RtFvVNodeList; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems


class System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
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

        class RsLNodeList; //type: System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems


class System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::ExtItems::ExtIfList::IdepItems : public ydk::Entity
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

        class IDEpList; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList

        ydk::YList idep_list;
        
}; // System::ExtItems::ExtIfList::IdepItems


class System::ExtItems::ExtIfList::IdepItems::IDEpList : public ydk::Entity
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
        class IdepcntrItems; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems
        class VdepItems; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems> idepcntr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems> vdep_items;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList


class System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems : public ydk::Entity
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

        class IDEpCntrList; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList

        ydk::YList idepcntr_list;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems


class System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::IdepcntrItems::IDEpCntrList


class System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems : public ydk::Entity
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

        class VDEpList; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList

        ydk::YList vdep_list;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems


class System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList : public ydk::Entity
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
        class RsvNodeItems; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems> rsvnode_items;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList


class System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems : public ydk::Entity
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

        class RsVNodeList; //type: System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList

        ydk::YList rsvnode_list;
        
}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems


class System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::IdepItems::IDEpList::VdepItems::VDEpList::RsvNodeItems::RsVNodeList


class System::ExtItems::ExtIfList::OdevItems : public ydk::Entity
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

        class ODevList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList

        ydk::YList odev_list;
        
}; // System::ExtItems::ExtIfList::OdevItems


class System::ExtItems::ExtIfList::OdevItems::ODevList : public ydk::Entity
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
        class OdevcapItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems
        class VnodeItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems
        class OpnicItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems> odevcap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems> vnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems> opnic_items;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList


class System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::OdevItems::ODevList::OdevcapItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems : public ydk::Entity
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

        class VNodeList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList

        ydk::YList vnode_list;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList : public ydk::Entity
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
        class RtfvVNodeItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems
        class RslNodeItems; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems> rtfvvnode_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems> rslnode_items;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems : public ydk::Entity
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

        class RtFvVNodeList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList

        ydk::YList rtfvvnode_list;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RtfvVNodeItems::RtFvVNodeList


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems : public ydk::Entity
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

        class RsLNodeList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList

        ydk::YList rslnode_list;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::OdevItems::ODevList::VnodeItems::VNodeList::RslNodeItems::RsLNodeList


class System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems : public ydk::Entity
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

        class OPNicList; //type: System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList

        ydk::YList opnic_list;
        
}; // System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems


class System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::OdevItems::ODevList::OpnicItems::OPNicList


class System::ExtItems::ExtIfList::RsextConfItems : public ydk::Entity
{
    public:
        RsextConfItems();
        ~RsextConfItems();

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
        ydk::YLeaf state; //type: RelnState
        ydk::YLeaf statequal; //type: RelnStateQual
        ydk::YLeaf ttype; //type: RelnTargetType
        ydk::YLeaf rtype; //type: RelnResolverType
        ydk::YLeaf forceresolve; //type: boolean

}; // System::ExtItems::ExtIfList::RsextConfItems


class System::ExtItems::ExtIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::RtvrfMbrItems


class System::ExtItems::ExtIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::ExtItems::ExtIfList::RtnwPathToIfItems


class System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::ExtItems::ExtIfList::RtnwPathToIfItems::RtNwPathToIfList


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
        ydk::YLeaf userdefinedlimit; //type: uint32
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

        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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

        ydk::YLeaf adjexpts; //type: one of uint64, string

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

        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf portdcbxpver; //type: LldpDCBXPVerType
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf adminst; //type: NwAdminSt___
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
        ydk::YLeaf peerip; //type: string
        ydk::YLeaf virtualip; //type: string
        ydk::YLeaf dscp; //type: uint16
        ydk::YLeaf sysprio; //type: uint16
        ydk::YLeaf sysmac; //type: string
        ydk::YLeaf roleprio; //type: uint16
        ydk::YLeaf peergwexcludevlan; //type: string
        ydk::YLeaf peergw; //type: NwAdminSt___
        ydk::YLeaf grcflcnstncychck; //type: NwAdminSt___
        ydk::YLeaf track; //type: uint16
        ydk::YLeaf autorecovery; //type: NwAdminSt___
        ydk::YLeaf autorecoveryintvl; //type: uint32
        ydk::YLeaf peerswitch; //type: NwAdminSt___
        ydk::YLeaf delayrestorevpc; //type: uint16
        ydk::YLeaf delayrestoresvi; //type: uint16
        ydk::YLeaf delaypeerlinkbringup; //type: uint16
        ydk::YLeaf delayrestoreorphanport; //type: uint16
        ydk::YLeaf macbpdusrcver2; //type: boolean
        ydk::YLeaf excludesvi; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt___
        ydk::YLeaf fastconvergence; //type: NwAdminSt___
        ydk::YLeaf l3peerrouter; //type: NwAdminSt___
        ydk::YLeaf l3peerroutersyslog; //type: NwAdminSt___
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
        ydk::YLeaf sendtime; //type: one of uint64, string
        ydk::YLeaf recvtime; //type: one of uint64, string
        ydk::YLeaf firstrecvtime; //type: one of uint64, string
        ydk::YLeaf name; //type: string
        class PeerlinkItems; //type: System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::VpcItems::InstItems::DomItems::KeepaliveItems::PeerlinkItems> peerlink_items;
        
}; // System::VpcItems::InstItems::DomItems::KeepaliveItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_18_ */

