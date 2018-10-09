#ifndef _CISCO_NX_OS_DEVICE_28_
#define _CISCO_NX_OS_DEVICE_28_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_27.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::TmItems::DestItems::DestGroupList::ChunkingItems : public ydk::Entity
{
    public:
        ChunkingItems();
        ~ChunkingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf chunksize; //type: uint32

}; // System::TmItems::DestItems::DestGroupList::ChunkingItems


class System::TmItems::SubsItems : public ydk::Entity
{
    public:
        SubsItems();
        ~SubsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class SubscriptionList; //type: System::TmItems::SubsItems::SubscriptionList

        ydk::YList subscription_list;
        
}; // System::TmItems::SubsItems


class System::TmItems::SubsItems::SubscriptionList : public ydk::Entity
{
    public:
        SubscriptionList();
        ~SubscriptionList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf id; //type: uint64
        class RssensorGroupRelItems; //type: System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems
        class RsdestGroupRelItems; //type: System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems> rssensorgrouprel_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems> rsdestgrouprel_items;
        
}; // System::TmItems::SubsItems::SubscriptionList


class System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems : public ydk::Entity
{
    public:
        RssensorGroupRelItems();
        ~RssensorGroupRelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsSensorGroupRelList; //type: System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList

        ydk::YList rssensorgrouprel_list;
        
}; // System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems


class System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList : public ydk::Entity
{
    public:
        RsSensorGroupRelList();
        ~RsSensorGroupRelList();

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
        ydk::YLeaf sampleintvl; //type: uint64

}; // System::TmItems::SubsItems::SubscriptionList::RssensorGroupRelItems::RsSensorGroupRelList


class System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems : public ydk::Entity
{
    public:
        RsdestGroupRelItems();
        ~RsdestGroupRelItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsDestGroupRelList; //type: System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList

        ydk::YList rsdestgrouprel_list;
        
}; // System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems


class System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList : public ydk::Entity
{
    public:
        RsDestGroupRelList();
        ~RsDestGroupRelList();

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

}; // System::TmItems::SubsItems::SubscriptionList::RsdestGroupRelItems::RsDestGroupRelList


class System::TrackItems : public ydk::Entity
{
    public:
        TrackItems();
        ~TrackItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ObjectItems; //type: System::TrackItems::ObjectItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems> object_items;
        
}; // System::TrackItems


class System::TrackItems::ObjectItems : public ydk::Entity
{
    public:
        ObjectItems();
        ~ObjectItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class ObjectList; //type: System::TrackItems::ObjectItems::ObjectList

        ydk::YList object_list;
        
}; // System::TrackItems::ObjectItems


class System::TrackItems::ObjectItems::ObjectList : public ydk::Entity
{
    public:
        ObjectList();
        ~ObjectList();

        bool has_data() const override;
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
        ydk::YLeaf clients; //type: uint16
        class IfItems; //type: System::TrackItems::ObjectItems::ObjectList::IfItems
        class IprtItems; //type: System::TrackItems::ObjectItems::ObjectList::IprtItems
        class IpslaItems; //type: System::TrackItems::ObjectItems::ObjectList::IpslaItems
        class ListItems; //type: System::TrackItems::ObjectItems::ObjectList::ListItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::IfItems> if_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::IprtItems> iprt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::IpslaItems> ipsla_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::ListItems> list_items;
        
}; // System::TrackItems::ObjectItems::ObjectList


class System::TrackItems::ObjectItems::ObjectList::IfItems : public ydk::Entity
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

        ydk::YLeaf id; //type: string
        ydk::YLeaf protocoltype; //type: TrackIntfProtocolType

}; // System::TrackItems::ObjectItems::ObjectList::IfItems


class System::TrackItems::ObjectItems::ObjectList::IprtItems : public ydk::Entity
{
    public:
        IprtItems();
        ~IprtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: TrackAf
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf routestate; //type: TrackRouteState
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf routeowner; //type: TrackRouteOwner

}; // System::TrackItems::ObjectItems::ObjectList::IprtItems


class System::TrackItems::ObjectItems::ObjectList::IpslaItems : public ydk::Entity
{
    public:
        IpslaItems();
        ~IpslaItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf probeid; //type: uint32
        ydk::YLeaf probestate; //type: TrackProbeState

}; // System::TrackItems::ObjectItems::ObjectList::IpslaItems


class System::TrackItems::ObjectItems::ObjectList::ListItems : public ydk::Entity
{
    public:
        ListItems();
        ~ListItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: TrackListObj
        ydk::YLeaf percentageup; //type: uint16
        ydk::YLeaf percentagedown; //type: uint16
        ydk::YLeaf weightup; //type: uint16
        ydk::YLeaf weightdown; //type: uint16
        class ObjItems; //type: System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems> obj_items;
        
}; // System::TrackItems::ObjectItems::ObjectList::ListItems


class System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems : public ydk::Entity
{
    public:
        ObjItems();
        ~ObjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberList; //type: System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList

        ydk::YList member_list;
        
}; // System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems


class System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList : public ydk::Entity
{
    public:
        MemberList();
        ~MemberList();

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
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf not_; //type: boolean

}; // System::TrackItems::ObjectItems::ObjectList::ListItems::ObjItems::MemberList


class System::UdldItems : public ydk::Entity
{
    public:
        UdldItems();
        ~UdldItems();

        bool has_data() const override;
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
        class InstItems; //type: System::UdldItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems> inst_items;
        
}; // System::UdldItems


class System::UdldItems::InstItems : public ydk::Entity
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

        ydk::YLeaf aggressive; //type: UdldAdminSt
        ydk::YLeaf msgintvl; //type: uint8
        ydk::YLeaf error; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        class PhysifItems; //type: System::UdldItems::InstItems::PhysifItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems::PhysifItems> physif_items;
        
}; // System::UdldItems::InstItems


class System::UdldItems::InstItems::PhysifItems : public ydk::Entity
{
    public:
        PhysifItems();
        ~PhysifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class PhysIfList; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList

        ydk::YList physif_list;
        
}; // System::UdldItems::InstItems::PhysifItems


class System::UdldItems::InstItems::PhysifItems::PhysIfList : public ydk::Entity
{
    public:
        PhysIfList();
        ~PhysIfList();

        bool has_data() const override;
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
        ydk::YLeaf aggressive; //type: UdldAdminSt
        ydk::YLeaf bidirdetect; //type: UdldPortEnable
        ydk::YLeaf fiber; //type: UdldOperSt
        ydk::YLeaf error; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        class PtimestItems; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems
        class RtvrfMbrItems; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems> ptimest_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::UdldItems::InstItems::PhysifItems::PhysIfList


class System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems : public ydk::Entity
{
    public:
        PtimestItems();
        ~PtimestItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PktTsList; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList

        ydk::YList pktts_list;
        
}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems


class System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList : public ydk::Entity
{
    public:
        PktTsList();
        ~PktTsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dir; //type: UdldPktDirection

}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::PtimestItems::PktTsList


class System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems : public ydk::Entity
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

}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::RtvrfMbrItems


class System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems : public ydk::Entity
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

        class RtNwPathToIfList; //type: System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems


class System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
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

}; // System::UdldItems::InstItems::PhysifItems::PhysIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::AcllogItems : public ydk::Entity
{
    public:
        AcllogItems();
        ~AcllogItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class InstItems; //type: System::AcllogItems::InstItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcllogItems::InstItems> inst_items;
        
}; // System::AcllogItems


class System::AcllogItems::InstItems : public ydk::Entity
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

        class LogItems; //type: System::AcllogItems::InstItems::LogItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::AcllogItems::InstItems::LogItems> log_items;
        
}; // System::AcllogItems::InstItems


class System::AcllogItems::InstItems::LogItems : public ydk::Entity
{
    public:
        LogItems();
        ~LogItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf interval; //type: string
        ydk::YLeaf matchlevel; //type: uint8
        ydk::YLeaf loglevel; //type: uint8

}; // System::AcllogItems::InstItems::LogItems


class System::BdItems : public ydk::Entity
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
        ydk::YLeaf sysdefaultsviautostate; //type: BdDefaultSVIAutoState
        class VlanconfigItems; //type: System::BdItems::VlanconfigItems
        class BdItems_; //type: System::BdItems::BdItems_
        class VlanItems; //type: System::BdItems::VlanItems
        class VxlanItems; //type: System::BdItems::VxlanItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems> vlanconfig_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::BdItems_> bd_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanItems> vlan_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VxlanItems> vxlan_items;
        
}; // System::BdItems


class System::BdItems::VlanconfigItems : public ydk::Entity
{
    public:
        VlanconfigItems();
        ~VlanconfigItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class VlanConfigList; //type: System::BdItems::VlanconfigItems::VlanConfigList

        ydk::YList vlanconfig_list;
        
}; // System::BdItems::VlanconfigItems


class System::BdItems::VlanconfigItems::VlanConfigList : public ydk::Entity
{
    public:
        VlanConfigList();
        ~VlanConfigList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf accencap; //type: string
        class IpqosItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems> ipqos_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems : public ydk::Entity
{
    public:
        IpqosItems();
        ~IpqosItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf statsstate; //type: IpqosStatsState
        class StatClearItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems
        class QueuingItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems
        class NwItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems
        class DfltItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems> statclear_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems> queuing_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems> nw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::DfltItems> dflt_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems : public ydk::Entity
{
    public:
        StatClearItems();
        ~StatClearItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pmaptype; //type: IpqosPolicyType
        ydk::YLeaf direction; //type: IpqosPolicyDirection
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf vlan; //type: string
        ydk::YLeaf portchan; //type: string
        ydk::YLeaf timestamp; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::StatClearItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems : public ydk::Entity
{
    public:
        QueuingItems();
        ~QueuingItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems
        class CItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems
        class PItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems
        class CopyPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems> c_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems> p_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems> copypmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems : public ydk::Entity
{
    public:
        PolicyItems();
        ~PolicyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems
        class OutItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems> in_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems> out_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems : public ydk::Entity
{
    public:
        InItems();
        ~InItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems
        class SysItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems> sys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf delintfbit; //type: boolean
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems
        class CmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems
        class QueCmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems> quecmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems : public ydk::Entity
{
    public:
        CmapItems();
        ~CmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList

        ydk::YList stats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf conformbytes; //type: uint64
        ydk::YLeaf exceedbytes; //type: uint64
        ydk::YLeaf violatebytes; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems : public ydk::Entity
{
    public:
        QueCmapItems();
        ~QueCmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QueuingStatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList

        ydk::YList queuingstats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList : public ydk::Entity
{
    public:
        QueuingStatsList();
        ~QueuingStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf currqueuedepth; //type: uint64
        ydk::YLeaf maxqueuedepth; //type: uint64
        ydk::YLeaf ingqdroppackets; //type: uint64
        ydk::YLeaf ingqdepthbytes; //type: uint64
        ydk::YLeaf randdropbytes; //type: uint64
        ydk::YLeaf randdroppackets; //type: uint64
        ydk::YLeaf randecnmarkedpackets; //type: uint64
        ydk::YLeaf pfctxppp; //type: uint64
        ydk::YLeaf pfcrxppp; //type: uint64
        ydk::YLeaf pfcwdshutdowncount; //type: uint64
        ydk::YLeaf pfcwdrestoredcount; //type: uint64
        ydk::YLeaf pfcwdflushedpackets; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems : public ydk::Entity
{
    public:
        SysItems();
        ~SysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems : public ydk::Entity
{
    public:
        OutItems();
        ~OutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems
        class SysItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems> sys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf delintfbit; //type: boolean
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems
        class CmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems
        class QueCmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems> quecmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems : public ydk::Entity
{
    public:
        CmapItems();
        ~CmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList

        ydk::YList stats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf conformbytes; //type: uint64
        ydk::YLeaf exceedbytes; //type: uint64
        ydk::YLeaf violatebytes; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems : public ydk::Entity
{
    public:
        QueCmapItems();
        ~QueCmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QueuingStatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList

        ydk::YList queuingstats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList : public ydk::Entity
{
    public:
        QueuingStatsList();
        ~QueuingStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf currqueuedepth; //type: uint64
        ydk::YLeaf maxqueuedepth; //type: uint64
        ydk::YLeaf ingqdroppackets; //type: uint64
        ydk::YLeaf ingqdepthbytes; //type: uint64
        ydk::YLeaf randdropbytes; //type: uint64
        ydk::YLeaf randdroppackets; //type: uint64
        ydk::YLeaf randecnmarkedpackets; //type: uint64
        ydk::YLeaf pfctxppp; //type: uint64
        ydk::YLeaf pfcrxppp; //type: uint64
        ydk::YLeaf pfcwdshutdowncount; //type: uint64
        ydk::YLeaf pfcwdrestoredcount; //type: uint64
        ydk::YLeaf pfcwdflushedpackets; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems : public ydk::Entity
{
    public:
        SysItems();
        ~SysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PolicyItems::OutItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems : public ydk::Entity
{
    public:
        CItems();
        ~CItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NameItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems> name_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems : public ydk::Entity
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

        class CMapInstList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList

        ydk::YList cmapinst_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList : public ydk::Entity
{
    public:
        CMapInstList();
        ~CMapInstList();

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
        ydk::YLeaf matchtype; //type: IpqosQoSMatchType
        ydk::YLeaf configstatus; //type: uint32
        class AclItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems
        class DscpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems
        class IpRtpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems
        class PacketLengthItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems
        class CosItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems
        class MplsExperimentalItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems
        class PrecedenceItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems
        class ProtocolItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems
        class DescriptionItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems
        class DscpNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems
        class CosNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems
        class MplsExperimentalNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems
        class PrecedenceNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems
        class ProtocolNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems
        class IpRtpNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems
        class PacketLengthNotItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems
        class GrpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems
        class RsclassMapToPolicyMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems> acl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems> dscp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems> iprtp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems> packetlength_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems> cos_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems> mplsexperimental_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems> precedence_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems> protocol_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems> description_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems> dscpnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems> cosnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems> mplsexperimentalnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems> precedencenot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems> protocolnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems> iprtpnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems> packetlengthnot_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems> grp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems> rsclassmaptopolicymap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems : public ydk::Entity
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

        class AclList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList

        ydk::YList acl_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList : public ydk::Entity
{
    public:
        AclList();
        ~AclList();

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
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::AclItems::AclList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems : public ydk::Entity
{
    public:
        DscpItems();
        ~DscpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DscpList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList

        ydk::YList dscp_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList : public ydk::Entity
{
    public:
        DscpList();
        ~DscpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpItems::DscpList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems : public ydk::Entity
{
    public:
        IpRtpItems();
        ~IpRtpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf range; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems : public ydk::Entity
{
    public:
        PacketLengthItems();
        ~PacketLengthItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf range; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems : public ydk::Entity
{
    public:
        CosItems();
        ~CosItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CosList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList

        ydk::YList cos_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList : public ydk::Entity
{
    public:
        CosList();
        ~CosList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosItems::CosList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems : public ydk::Entity
{
    public:
        MplsExperimentalItems();
        ~MplsExperimentalItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MPLSExperimentalList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList

        ydk::YList mplsexperimental_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList : public ydk::Entity
{
    public:
        MPLSExperimentalList();
        ~MPLSExperimentalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalItems::MPLSExperimentalList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems : public ydk::Entity
{
    public:
        PrecedenceItems();
        ~PrecedenceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PrecedenceList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList

        ydk::YList precedence_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList : public ydk::Entity
{
    public:
        PrecedenceList();
        ~PrecedenceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: IpqosPrec
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceItems::PrecedenceList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems : public ydk::Entity
{
    public:
        ProtocolItems();
        ~ProtocolItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ProtocolList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList

        ydk::YList protocol_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList : public ydk::Entity
{
    public:
        ProtocolList();
        ~ProtocolList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: IpqosProtocol
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolItems::ProtocolList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems : public ydk::Entity
{
    public:
        DescriptionItems();
        ~DescriptionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DescriptionItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems : public ydk::Entity
{
    public:
        DscpNotItems();
        ~DscpNotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NotDscpList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList

        ydk::YList notdscp_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList : public ydk::Entity
{
    public:
        NotDscpList();
        ~NotDscpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::DscpNotItems::NotDscpList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems : public ydk::Entity
{
    public:
        CosNotItems();
        ~CosNotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NotCosList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList

        ydk::YList notcos_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList : public ydk::Entity
{
    public:
        NotCosList();
        ~NotCosList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::CosNotItems::NotCosList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems : public ydk::Entity
{
    public:
        MplsExperimentalNotItems();
        ~MplsExperimentalNotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NotMPLSExperimentalList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList

        ydk::YList notmplsexperimental_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList : public ydk::Entity
{
    public:
        NotMPLSExperimentalList();
        ~NotMPLSExperimentalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::MplsExperimentalNotItems::NotMPLSExperimentalList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems : public ydk::Entity
{
    public:
        PrecedenceNotItems();
        ~PrecedenceNotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NotPrecedenceList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList

        ydk::YList notprecedence_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList : public ydk::Entity
{
    public:
        NotPrecedenceList();
        ~NotPrecedenceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: IpqosPrec
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PrecedenceNotItems::NotPrecedenceList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems : public ydk::Entity
{
    public:
        ProtocolNotItems();
        ~ProtocolNotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NotProtocolList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList

        ydk::YList notprotocol_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList : public ydk::Entity
{
    public:
        NotProtocolList();
        ~NotProtocolList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: IpqosProtocol
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::ProtocolNotItems::NotProtocolList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems : public ydk::Entity
{
    public:
        IpRtpNotItems();
        ~IpRtpNotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf range; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::IpRtpNotItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems : public ydk::Entity
{
    public:
        PacketLengthNotItems();
        ~PacketLengthNotItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configstatus; //type: uint32
        ydk::YLeaf range; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::PacketLengthNotItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems : public ydk::Entity
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

        class QoSGrpList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList

        ydk::YList qosgrp_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList : public ydk::Entity
{
    public:
        QoSGrpList();
        ~QoSGrpList();

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
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::GrpItems::QoSGrpList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems : public ydk::Entity
{
    public:
        RsclassMapToPolicyMapItems();
        ~RsclassMapToPolicyMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsClassMapToPolicyMapList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList

        ydk::YList rsclassmaptopolicymap_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList : public ydk::Entity
{
    public:
        RsClassMapToPolicyMapList();
        ~RsClassMapToPolicyMapList();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CItems::NameItems::CMapInstList::RsclassMapToPolicyMapItems::RsClassMapToPolicyMapList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems : public ydk::Entity
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

        class NameItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems> name_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems : public ydk::Entity
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

        class PMapInstList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList

        ydk::YList pmapinst_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList : public ydk::Entity
{
    public:
        PMapInstList();
        ~PMapInstList();

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
        ydk::YLeaf matchtype; //type: IpqosQoSMatchType
        ydk::YLeaf refcount; //type: uint32
        ydk::YLeaf configstatus; //type: uint32
        class CmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems
        class DescriptionItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems
        class RtipqosPolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems
        class RtclassMapToPolicyMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems> description_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems> rtipqospolicyinsttopmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems> rtclassmaptopolicymap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems : public ydk::Entity
{
    public:
        CmapItems();
        ~CmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MatchCMapList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList

        ydk::YList matchcmap_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList : public ydk::Entity
{
    public:
        MatchCMapList();
        ~MatchCMapList();

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
        ydk::YLeaf prevcmap; //type: string
        ydk::YLeaf nextcmap; //type: string
        ydk::YLeaf configstatus; //type: uint32
        class SetCosItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems
        class MtuItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems
        class SetPrecedenceItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems
        class SetDscpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems
        class SetGrpItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems
        class SetDlbDisableItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems
        class QueueLimitItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems
        class PauseItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems
        class DppItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems
        class SetBWItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems
        class SetRemBWItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems
        class ShapeItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems
        class PoliceItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems
        class PrioItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems
        class RandDetItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems
        class RandDetNonEcnItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems> setcos_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems> mtu_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems> setprecedence_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems> setdscp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems> setgrp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems> setdlbdisable_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems> queuelimit_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems> pause_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems> dpp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems> setbw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems> setrembw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems> shape_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems> police_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems> prio_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems> randdet_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems> randdetnonecn_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems : public ydk::Entity
{
    public:
        SetCosItems();
        ~SetCosItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetCosItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems : public ydk::Entity
{
    public:
        MtuItems();
        ~MtuItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::MtuItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems : public ydk::Entity
{
    public:
        SetPrecedenceItems();
        ~SetPrecedenceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: IpqosPrec
        ydk::YLeaf tunnel; //type: boolean
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetPrecedenceItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems : public ydk::Entity
{
    public:
        SetDscpItems();
        ~SetDscpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf tunnel; //type: boolean
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDscpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems : public ydk::Entity
{
    public:
        SetGrpItems();
        ~SetGrpItems();

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
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetGrpItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems : public ydk::Entity
{
    public:
        SetDlbDisableItems();
        ~SetDlbDisableItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetDlbDisableItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems : public ydk::Entity
{
    public:
        QueueLimitItems();
        ~QueueLimitItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf queuelimitval; //type: uint64
        ydk::YLeaf queuelimitunit; //type: IpqosQueueLimitUnit
        ydk::YLeaf dynamic; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::QueueLimitItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems : public ydk::Entity
{
    public:
        PauseItems();
        ~PauseItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf buffersize; //type: uint64
        ydk::YLeaf pausethreshold; //type: uint64
        ydk::YLeaf resumethreshold; //type: uint64
        ydk::YLeaf pfccos0; //type: boolean
        ydk::YLeaf pfccos1; //type: boolean
        ydk::YLeaf pfccos2; //type: boolean
        ydk::YLeaf pfccos3; //type: boolean
        ydk::YLeaf pfccos4; //type: boolean
        ydk::YLeaf pfccos5; //type: boolean
        ydk::YLeaf pfccos6; //type: boolean
        ydk::YLeaf pfccos7; //type: boolean
        ydk::YLeaf receive; //type: boolean
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PauseItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems : public ydk::Entity
{
    public:
        DppItems();
        ~DppItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setqosgroup; //type: uint16

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::DppItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems : public ydk::Entity
{
    public:
        SetBWItems();
        ~SetBWItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetBWItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems : public ydk::Entity
{
    public:
        SetRemBWItems();
        ~SetRemBWItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::SetRemBWItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems : public ydk::Entity
{
    public:
        ShapeItems();
        ~ShapeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint64
        ydk::YLeaf minrateunit; //type: IpqosRateUnit
        ydk::YLeaf max; //type: uint64
        ydk::YLeaf maxrateunit; //type: IpqosRateUnit
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::ShapeItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems : public ydk::Entity
{
    public:
        PoliceItems();
        ~PoliceItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cirrate; //type: uint64
        ydk::YLeaf cirunit; //type: IpqosRateUnit
        ydk::YLeaf bcrate; //type: uint64
        ydk::YLeaf bcunit; //type: IpqosBurstRateUnit
        ydk::YLeaf pirrate; //type: uint64
        ydk::YLeaf pirunit; //type: IpqosRateUnit
        ydk::YLeaf berate; //type: uint64
        ydk::YLeaf beunit; //type: IpqosBurstRateUnit
        ydk::YLeaf conformaction; //type: IpqosPoliceAction
        ydk::YLeaf conformsetcostransmit; //type: uint8
        ydk::YLeaf conformsetdscptransmit; //type: uint8
        ydk::YLeaf conformsetprectransmit; //type: IpqosPrec
        ydk::YLeaf conformsetqosgrptransmit; //type: uint16
        ydk::YLeaf exceedaction; //type: IpqosPoliceAction
        ydk::YLeaf exceedsetcostransmit; //type: uint8
        ydk::YLeaf exceedsetdscptransmit; //type: uint8
        ydk::YLeaf exceedsetprectransmit; //type: IpqosPrec
        ydk::YLeaf exceedsetqosgrptransmit; //type: uint16
        ydk::YLeaf violateaction; //type: IpqosPoliceAction
        ydk::YLeaf violatesetcostransmit; //type: uint8
        ydk::YLeaf violatesetdscptransmit; //type: uint8
        ydk::YLeaf violatesetprectransmit; //type: IpqosPrec
        ydk::YLeaf violatesetqosgrptransmit; //type: uint16
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PoliceItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems : public ydk::Entity
{
    public:
        PrioItems();
        ~PrioItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint8
        ydk::YLeaf configstatus; //type: uint32

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::PrioItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems : public ydk::Entity
{
    public:
        RandDetItems();
        ~RandDetItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minthreshold; //type: uint32
        ydk::YLeaf minthresholdunit; //type: IpqosThreshUnit
        ydk::YLeaf maxthreshold; //type: uint32
        ydk::YLeaf maxthresholdunit; //type: IpqosThreshUnit
        ydk::YLeaf dropavail; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf capaverage; //type: boolean
        ydk::YLeaf optimization; //type: uint8
        ydk::YLeaf ecn; //type: boolean

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems : public ydk::Entity
{
    public:
        RandDetNonEcnItems();
        ~RandDetNonEcnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minthresholdnonecn; //type: uint32
        ydk::YLeaf minthresholdunitnonecn; //type: IpqosThreshUnit
        ydk::YLeaf maxthresholdnonecn; //type: uint32
        ydk::YLeaf maxthresholdunitnonecn; //type: IpqosThreshUnit
        ydk::YLeaf dropavailnonecn; //type: uint8

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::CmapItems::MatchCMapList::RandDetNonEcnItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems : public ydk::Entity
{
    public:
        DescriptionItems();
        ~DescriptionItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf val; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::DescriptionItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems : public ydk::Entity
{
    public:
        RtipqosPolicyInstToPMapItems();
        ~RtipqosPolicyInstToPMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtIpqosPolicyInstToPMapList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList

        ydk::YList rtipqospolicyinsttopmap_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList : public ydk::Entity
{
    public:
        RtIpqosPolicyInstToPMapList();
        ~RtIpqosPolicyInstToPMapList();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtipqosPolicyInstToPMapItems::RtIpqosPolicyInstToPMapList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems : public ydk::Entity
{
    public:
        RtclassMapToPolicyMapItems();
        ~RtclassMapToPolicyMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::PItems::NameItems::PMapInstList::RtclassMapToPolicyMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems : public ydk::Entity
{
    public:
        CopyPMapItems();
        ~CopyPMapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lastfrom; //type: string
        ydk::YLeaf lastto; //type: string

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::QueuingItems::CopyPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems : public ydk::Entity
{
    public:
        NwItems();
        ~NwItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PolicyItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems
        class CItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::CItems
        class PItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PItems
        class CopyPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::CopyPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems> policy_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::CItems> c_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PItems> p_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::CopyPMapItems> copypmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems : public ydk::Entity
{
    public:
        PolicyItems();
        ~PolicyItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems
        class OutItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems> in_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems> out_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems : public ydk::Entity
{
    public:
        InItems();
        ~InItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems
        class SysItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems> sys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf delintfbit; //type: boolean
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems
        class CmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems
        class QueCmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems> quecmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems : public ydk::Entity
{
    public:
        CmapItems();
        ~CmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList

        ydk::YList stats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf conformbytes; //type: uint64
        ydk::YLeaf exceedbytes; //type: uint64
        ydk::YLeaf violatebytes; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::CmapItems::StatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems : public ydk::Entity
{
    public:
        QueCmapItems();
        ~QueCmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QueuingStatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList

        ydk::YList queuingstats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList : public ydk::Entity
{
    public:
        QueuingStatsList();
        ~QueuingStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf currqueuedepth; //type: uint64
        ydk::YLeaf maxqueuedepth; //type: uint64
        ydk::YLeaf ingqdroppackets; //type: uint64
        ydk::YLeaf ingqdepthbytes; //type: uint64
        ydk::YLeaf randdropbytes; //type: uint64
        ydk::YLeaf randdroppackets; //type: uint64
        ydk::YLeaf randecnmarkedpackets; //type: uint64
        ydk::YLeaf pfctxppp; //type: uint64
        ydk::YLeaf pfcrxppp; //type: uint64
        ydk::YLeaf pfcwdshutdowncount; //type: uint64
        ydk::YLeaf pfcwdrestoredcount; //type: uint64
        ydk::YLeaf pfcwdflushedpackets; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::IntfItems::IfList::QueCmapItems::QueuingStatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems : public ydk::Entity
{
    public:
        SysItems();
        ~SysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::SysItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::InItems::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems : public ydk::Entity
{
    public:
        OutItems();
        ~OutItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IntfItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems
        class SysItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems> intf_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems> sys_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems : public ydk::Entity
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

        class IfList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList

        ydk::YList if_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList : public ydk::Entity
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

        ydk::YLeaf name; //type: string
        ydk::YLeaf delintfbit; //type: boolean
        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems
        class CmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems
        class QueCmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems> pmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems> cmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems> quecmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems : public ydk::Entity
{
    public:
        RspolicyInstToPMapItems();
        ~RspolicyInstToPMapItems();

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

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::PmapItems::RspolicyInstToPMapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems : public ydk::Entity
{
    public:
        CmapItems();
        ~CmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList

        ydk::YList stats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList : public ydk::Entity
{
    public:
        StatsList();
        ~StatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf conformbytes; //type: uint64
        ydk::YLeaf exceedbytes; //type: uint64
        ydk::YLeaf violatebytes; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::CmapItems::StatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems : public ydk::Entity
{
    public:
        QueCmapItems();
        ~QueCmapItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class QueuingStatsList; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList

        ydk::YList queuingstats_list;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList : public ydk::Entity
{
    public:
        QueuingStatsList();
        ~QueuingStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmapname; //type: string
        ydk::YLeaf stattype; //type: IpqosStatsType
        ydk::YLeaf pmapname; //type: string
        ydk::YLeaf droppackets; //type: uint64
        ydk::YLeaf dropbytes; //type: uint64
        ydk::YLeaf txpackets; //type: uint64
        ydk::YLeaf txbytes; //type: uint64
        ydk::YLeaf currqueuedepth; //type: uint64
        ydk::YLeaf maxqueuedepth; //type: uint64
        ydk::YLeaf ingqdroppackets; //type: uint64
        ydk::YLeaf ingqdepthbytes; //type: uint64
        ydk::YLeaf randdropbytes; //type: uint64
        ydk::YLeaf randdroppackets; //type: uint64
        ydk::YLeaf randecnmarkedpackets; //type: uint64
        ydk::YLeaf pfctxppp; //type: uint64
        ydk::YLeaf pfcrxppp; //type: uint64
        ydk::YLeaf pfcwdshutdowncount; //type: uint64
        ydk::YLeaf pfcwdrestoredcount; //type: uint64
        ydk::YLeaf pfcwdflushedpackets; //type: uint64

}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::IntfItems::IfList::QueCmapItems::QueuingStatsList


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems : public ydk::Entity
{
    public:
        SysItems();
        ~SysItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PmapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems> pmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems


class System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems : public ydk::Entity
{
    public:
        PmapItems();
        ~PmapItems();

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
        ydk::YLeaf stats; //type: boolean
        ydk::YLeaf configstatus; //type: uint32
        class RspolicyInstToPMapItems; //type: System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems::RspolicyInstToPMapItems> rspolicyinsttopmap_items;
        
}; // System::BdItems::VlanconfigItems::VlanConfigList::IpqosItems::NwItems::PolicyItems::OutItems::SysItems::PmapItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_28_ */

