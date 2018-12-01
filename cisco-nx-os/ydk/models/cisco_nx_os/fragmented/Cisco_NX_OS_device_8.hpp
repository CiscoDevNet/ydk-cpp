#ifndef _CISCO_NX_OS_DEVICE_8_
#define _CISCO_NX_OS_DEVICE_8_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_7.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

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
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LblrtItems::LblRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems : public ydk::Entity
{
    public:
        LsrtItems();
        ~LsrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList

        ydk::YList lnkstroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList : public ydk::Entity
{
    public:
        LnkStRouteList();
        ~LnkStRouteList();

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
        ydk::YLeaf nlritype; //type: BgpLsNlriType
        ydk::YLeaf protoid; //type: BgpLsProtoId
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

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
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

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
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems : public ydk::Entity
{
    public:
        EvpnrtItems();
        ~EvpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList

        ydk::YList evpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList : public ydk::Entity
{
    public:
        EvpnRouteList();
        ~EvpnRouteList();

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
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rttype; //type: BgpEvpnRtType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

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
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

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
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems : public ydk::Entity
{
    public:
        MvpnrtItems();
        ~MvpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList

        ydk::YList mvpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList : public ydk::Entity
{
    public:
        MvpnRouteList();
        ~MvpnRouteList();

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
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rttype; //type: BgpMvpnRtType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

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
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

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
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::NhItems::NextHopRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems : public ydk::Entity
{
    public:
        MrttypeItems();
        ~MrttypeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class McastRtTypeRoutesList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList

        ydk::YList mcastrttyperoutes_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList : public ydk::Entity
{
    public:
        McastRtTypeRoutesList();
        ~McastRtTypeRoutesList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttype; //type: BgpMvpnRtType
        class MvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems> mvpnrt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems : public ydk::Entity
{
    public:
        MvpnrtItems();
        ~MvpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList

        ydk::YList mvpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList : public ydk::Entity
{
    public:
        MvpnRouteList();
        ~MvpnRouteList();

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
        ydk::YLeaf rd; //type: string
        ydk::YLeaf rttype; //type: BgpMvpnRtType
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

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
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

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
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MrttypeItems::McastRtTypeRoutesList::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems : public ydk::Entity
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

        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DefrtleakItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems : public ydk::Entity
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

        class InterLeakPList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList

        ydk::YList interleakp_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList : public ydk::Entity
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
        ydk::YLeaf scope; //type: RtleakScope
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InterleakItems::InterLeakPList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems : public ydk::Entity
{
    public:
        InjnameItems();
        ~InjnameItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class InjLeakPList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList

        ydk::YList injleakp_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList : public ydk::Entity
{
    public:
        InjLeakPList();
        ~InjLeakPList();

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
        ydk::YLeaf rtmap; //type: string
        ydk::YLeaf copyattr; //type: BgpAdminSt
        ydk::YLeaf scope; //type: RtleakScope

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::InjnameItems::InjLeakPList


class System::BgpItems::InstItems::DomItems::DomList::BmpItems : public ydk::Entity
{
    public:
        BmpItems();
        ~BmpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BmpSvrList; //type: System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList

        ydk::YList bmpsvr_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::BmpItems


class System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList : public ydk::Entity
{
    public:
        BmpSvrList();
        ~BmpSvrList();

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
        ydk::YLeaf addr; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf descr; //type: string
        ydk::YLeaf refreshintvldelay; //type: uint16
        ydk::YLeaf refreshintvlskip; //type: boolean
        ydk::YLeaf delayintvl; //type: uint16
        ydk::YLeaf statintvl; //type: uint16
        ydk::YLeaf adminst; //type: BgpBmpSt
        ydk::YLeaf vrfname; //type: string
        ydk::YLeaf srcif; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::BmpItems::BmpSvrList


class System::BgpItems::InstItems::DomItems::DomList::GrItems : public ydk::Entity
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

        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf restartintvl; //type: uint16
        ydk::YLeaf staleintvl; //type: uint16

}; // System::BgpItems::InstItems::DomItems::DomList::GrItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems : public ydk::Entity
{
    public:
        PeerItems();
        ~PeerItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList

        ydk::YList peer_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList : public ydk::Entity
{
    public:
        PeerList();
        ~PeerList();

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
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf asn; //type: string
        ydk::YLeaf lognbrchgs; //type: BgpLogNbrSt
        ydk::YLeaf peertype; //type: BgpPeerFabType
        ydk::YLeaf dynrtmap; //type: string
        ydk::YLeaf srcif; //type: string
        ydk::YLeaf password; //type: string
        ydk::YLeaf passwdtype; //type: BgpPwdType
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf ttl; //type: uint16
        ydk::YLeaf kaintvl; //type: uint16
        ydk::YLeaf holdintvl; //type: uint16
        ydk::YLeaf connmode; //type: string
        ydk::YLeaf maxpeercnt; //type: uint32
        ydk::YLeaf sessioncontimp; //type: string
        ydk::YLeaf peerimp; //type: string
        ydk::YLeaf privateasctrl; //type: BgpPrivateASControl
        ydk::YLeaf epe; //type: BgpAdminSt
        ydk::YLeaf epepeerset; //type: string
        ydk::YLeaf lowmemexempt; //type: BgpAdminSt
        ydk::YLeaf capsuppr4byteasn; //type: BgpAdminSt
        ydk::YLeaf affgrp; //type: uint16
        ydk::YLeaf ttlscrtyhops; //type: uint16
        ydk::YLeaf bmpsrvid1st; //type: BgpAdminSt
        ydk::YLeaf bmpsrvid2st; //type: BgpAdminSt
        ydk::YLeaf maxpfxpeers; //type: uint64
        ydk::YLeaf curpfxpeers; //type: uint64
        ydk::YLeaf activepfxpeers; //type: uint64
        ydk::YLeaf maxcurpeers; //type: uint64
        ydk::YLeaf totalpfxpeers; //type: uint64
        ydk::YLeaf inheritcontpeerctrl; //type: string
        ydk::YLeaf name; //type: string
        class LocalasnItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems
        class EntItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems
        class EpeItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems
        class AfItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems> localasn_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems> ent_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems> epe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems> af_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems : public ydk::Entity
{
    public:
        LocalasnItems();
        ~LocalasnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localasn; //type: string
        ydk::YLeaf asnpropagate; //type: BgpAsnPropagation

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::LocalasnItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems : public ydk::Entity
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

        class PeerEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList

        ydk::YList peerentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList : public ydk::Entity
{
    public:
        PeerEntryList();
        ~PeerEntryList();

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
        ydk::YLeaf type; //type: BgpPeerType
        ydk::YLeaf rtrid; //type: string
        ydk::YLeaf operst; //type: BgpPeerOperSt
        ydk::YLeaf prevoperst; //type: BgpPeerOperSt
        ydk::YLeaf shutstqual; //type: BgpShutStQual
        ydk::YLeaf lastflapts; //type: string
        ydk::YLeaf maxconnretryintvl; //type: uint16
        ydk::YLeaf flags; //type: string
        ydk::YLeaf advcap; //type: string
        ydk::YLeaf rcvcap; //type: string
        ydk::YLeaf connif; //type: string
        ydk::YLeaf holdintvl; //type: uint16
        ydk::YLeaf kaintvl; //type: uint16
        ydk::YLeaf localip; //type: string
        ydk::YLeaf localport; //type: uint16
        ydk::YLeaf remoteport; //type: uint16
        ydk::YLeaf connest; //type: uint16
        ydk::YLeaf conndrop; //type: uint16
        ydk::YLeaf updateelapsedts; //type: string
        ydk::YLeaf fd; //type: uint32
        ydk::YLeaf peeridx; //type: uint16
        ydk::YLeaf connattempts; //type: uint32
        ydk::YLeaf streason; //type: BgpStReason
        ydk::YLeaf passwdset; //type: BgpPasswdSet
        class GrItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems
        class EvItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems
        class EpeItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems
        class AfItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems
        class PeerstatsItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems> gr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems> ev_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems> epe_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems> af_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems> peerstats_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems : public ydk::Entity
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

        ydk::YLeaf operst; //type: BgpPeerGrSt
        ydk::YLeaf restartintvl; //type: uint16
        ydk::YLeaf grts; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::GrItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems : public ydk::Entity
{
    public:
        EvItems();
        ~EvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf majerrrstsent; //type: BgpMajNotifErr
        ydk::YLeaf minerrrstsent; //type: BgpMinNotifErr
        ydk::YLeaf lasterrvalsent; //type: uint32
        ydk::YLeaf rstsentts; //type: string
        ydk::YLeaf majerrrstrsvd; //type: BgpMajNotifErr
        ydk::YLeaf minerrrstrsvd; //type: BgpMinNotifErr
        ydk::YLeaf lasterrvalrsvd; //type: uint32
        ydk::YLeaf rstrsvdts; //type: string
        ydk::YLeaf lasterrlenrsvd; //type: uint8
        ydk::YLeaf lasterrlensent; //type: uint8
        ydk::YLeaf lasterrdatarsvd; //type: string
        ydk::YLeaf lasterrdatasent; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EvItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems : public ydk::Entity
{
    public:
        EpeItems();
        ~EpeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adminst; //type: BgpEgressPeerEng
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf rpcsetid; //type: uint32
        ydk::YLeaf peersetname; //type: string
        ydk::YLeaf peersetsid; //type: uint32
        ydk::YLeaf peersetrpcsetid; //type: uint32
        class EpeadjItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems> epeadj_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems : public ydk::Entity
{
    public:
        EpeadjItems();
        ~EpeadjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerEpeAdjList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList

        ydk::YList peerepeadj_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList : public ydk::Entity
{
    public:
        PeerEpeAdjList();
        ~PeerEpeAdjList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpcsetid; //type: uint32
        ydk::YLeaf localaddr; //type: string
        ydk::YLeaf remoteaddr; //type: string
        ydk::YLeaf ifindex; //type: string
        ydk::YLeaf sid; //type: uint32

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::EpeItems::EpeadjItems::PeerEpeAdjList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems : public ydk::Entity
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

        class PeerAfEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList

        ydk::YList peerafentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList : public ydk::Entity
{
    public:
        PeerAfEntryList();
        ~PeerAfEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
        ydk::YLeaf tblver; //type: uint32
        ydk::YLeaf peertblver; //type: uint32
        ydk::YLeaf tblst; //type: BgpTblSt
        ydk::YLeaf acceptedpaths; //type: uint32
        ydk::YLeaf deniedpaths; //type: uint32
        ydk::YLeaf withdrawnpaths; //type: uint32
        ydk::YLeaf memaccpaths; //type: uint32
        ydk::YLeaf flags; //type: string
        ydk::YLeaf pfxsent; //type: uint64
        ydk::YLeaf pfxsaved; //type: uint64
        ydk::YLeaf pfxflushed; //type: uint64
        ydk::YLeaf lasteorrcvdts; //type: string
        ydk::YLeaf firsteorrcvdts; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::AfItems::PeerAfEntryList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems : public ydk::Entity
{
    public:
        PeerstatsItems();
        ~PeerstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf opensent; //type: uint64
        ydk::YLeaf openrcvd; //type: uint64
        ydk::YLeaf updatesent; //type: uint64
        ydk::YLeaf updatercvd; //type: uint64
        ydk::YLeaf kasent; //type: uint64
        ydk::YLeaf karcvd; //type: uint64
        ydk::YLeaf routerefreshsent; //type: uint64
        ydk::YLeaf routerefreshrcvd; //type: uint64
        ydk::YLeaf capsent; //type: uint64
        ydk::YLeaf caprcvd; //type: uint64
        ydk::YLeaf notifsent; //type: uint64
        ydk::YLeaf notifrcvd; //type: uint64
        ydk::YLeaf msgsent; //type: uint64
        ydk::YLeaf msgrcvd; //type: uint64
        ydk::YLeaf bytesent; //type: uint64
        ydk::YLeaf bytercvd; //type: uint64
        ydk::YLeaf byteinsendq; //type: uint64
        ydk::YLeaf byteinrecvq; //type: uint64
        ydk::YLeaf connectretryts; //type: string
        ydk::YLeaf kats; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EntItems::PeerEntryList::PeerstatsItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems : public ydk::Entity
{
    public:
        EpeItems();
        ~EpeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adminst; //type: BgpEgressPeerEng
        ydk::YLeaf sid; //type: uint32
        ydk::YLeaf rpcsetid; //type: uint32
        ydk::YLeaf peersetname; //type: string
        ydk::YLeaf peersetsid; //type: uint32
        ydk::YLeaf peersetrpcsetid; //type: uint32
        class EpeadjItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems> epeadj_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems : public ydk::Entity
{
    public:
        EpeadjItems();
        ~EpeadjItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PeerEpeAdjList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList

        ydk::YList peerepeadj_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList : public ydk::Entity
{
    public:
        PeerEpeAdjList();
        ~PeerEpeAdjList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rpcsetid; //type: uint32
        ydk::YLeaf localaddr; //type: string
        ydk::YLeaf remoteaddr; //type: string
        ydk::YLeaf ifindex; //type: string
        ydk::YLeaf sid; //type: uint32

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::EpeItems::EpeadjItems::PeerEpeAdjList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems : public ydk::Entity
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

        class PeerAfList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList

        ydk::YList peeraf_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList : public ydk::Entity
{
    public:
        PeerAfList();
        ~PeerAfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpAfT
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
        ydk::YLeaf encapmpls; //type: BgpAdminSt
        ydk::YLeaf rewritertasn; //type: BgpAdminSt
        ydk::YLeaf advgwip; //type: NwAdminSt_
        ydk::YLeaf advlocallblrt; //type: NwAdminSt_
        ydk::YLeaf inheritcontpeerpolicyctrl; //type: string
        ydk::YLeaf name; //type: string
        class MaxpfxpItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems
        class AdvtmapItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems
        class VpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems
        class LblrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::LblrtItems
        class LsrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::LsrtItems
        class EvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::EvpnrtItems
        class MvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MvpnrtItems
        class AdvtdrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtdrtItems
        class RcvdrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RcvdrtItems
        class DamppathsrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::DamppathsrtItems
        class RtctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtctrlItems
        class DefrtleakItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::DefrtleakItems
        class PfxctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PfxctrlItems
        class FltrctrlItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::FltrctrlItems
        class PolItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PolItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems> maxpfxp_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems> advtmap_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems> rt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems> vpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::LblrtItems> lblrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::LsrtItems> lsrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::EvpnrtItems> evpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MvpnrtItems> mvpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtdrtItems> advtdrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RcvdrtItems> rcvdrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::DamppathsrtItems> damppathsrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtctrlItems> rtctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::DefrtleakItems> defrtleak_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PfxctrlItems> pfxctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::FltrctrlItems> fltrctrl_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::PolItems> pol_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::MaxpfxpItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::AdvtmapItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems : public ydk::Entity
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

        class RouteList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList

        ydk::YList route_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList : public ydk::Entity
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
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

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
        ydk::YLeaf rtrmac; //type: string
        class RtItems_; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_ : public ydk::Entity
{
    public:
        RtItems_();
        ~RtItems_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList : public ydk::Entity
{
    public:
        ExtCommRtList();
        ~ExtCommRtList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::EcommItems::RtItems_::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
{
    public:
        LnkstattrItems();
        ~LnkstattrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lnkattrflags; //type: string
        ydk::YLeaf attrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
{
    public:
        LnkStAttrEntryList();
        ~LnkStAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpLsAttrEntryType
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
{
    public:
        PfxsidItems();
        ~PfxsidItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pfxsidattrlen; //type: uint16
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
{
    public:
        TlvItems();
        ~TlvItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
{
    public:
        PfxSidAttrEntryList();
        ~PfxSidAttrEntryList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpPfxSidAttrEntryType
        ydk::YLeaf len; //type: uint16
        ydk::YLeaf val; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PmsiItems : public ydk::Entity
{
    public:
        PmsiItems();
        ~PmsiItems();

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
        ydk::YLeaf tuntype; //type: BgpPmsiTunType
        ydk::YLeaf lbl; //type: uint32
        ydk::YLeaf tunid; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::RtItems::RouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems : public ydk::Entity
{
    public:
        VpnrtItems();
        ~VpnrtItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList

        ydk::YList vpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList : public ydk::Entity
{
    public:
        VpnRouteList();
        ~VpnRouteList();

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
        ydk::YLeaf rd; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf ver; //type: uint32
        ydk::YLeaf rtflags; //type: string
        ydk::YLeaf numpaths; //type: uint32
        ydk::YLeaf bestpathid; //type: uint32
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems : public ydk::Entity
{
    public:
        PathItems();
        ~PathItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList : public ydk::Entity
{
    public:
        PathList();
        ~PathList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer; //type: string
        ydk::YLeaf id; //type: uint32
        ydk::YLeaf nh; //type: string
        ydk::YLeaf importedrd; //type: string
        ydk::YLeaf origimportedrd; //type: string
        ydk::YLeaf nhmetric; //type: uint32
        ydk::YLeaf type; //type: BgpPathT
        ydk::YLeaf operst; //type: BgpPathSt
        ydk::YLeaf flags; //type: string
        ydk::YLeaf origin; //type: BgpOrigin
        ydk::YLeaf metric; //type: uint32
        ydk::YLeaf localpref; //type: uint32
        ydk::YLeaf weight; //type: uint16
        ydk::YLeaf aggr; //type: string
        ydk::YLeaf aggras; //type: string
        ydk::YLeaf unknownattrdata; //type: string
        ydk::YLeaf unknownattrlen; //type: uint32
        ydk::YLeaf regcomm; //type: string
        ydk::YLeaf extcomm; //type: string
        ydk::YLeaf aspath; //type: string
        ydk::YLeaf rcvdlbl; //type: string
        ydk::YLeaf originatorid; //type: string
        ydk::YLeaf clusterlst; //type: string
        ydk::YLeaf peerrtrid; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
{
    public:
        SegItems();
        ~SegItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
{
    public:
        AsSegList();
        ~AsSegList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf type; //type: BgpAsSegT
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
{
    public:
        AsnItems();
        ~AsnItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
{
    public:
        AsItemList();
        ~AsItemList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint16
        ydk::YLeaf asn; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
{
    public:
        RcommItems();
        ~RcommItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
{
    public:
        RegCommList();
        ~RegCommList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf community; //type: string

}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
{
    public:
        EcommItems();
        ~EcommItems();

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
        ydk::YLeaf rtrmac; //type: string
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::PeerItems::PeerList::AfItems::PeerAfList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_8_ */

