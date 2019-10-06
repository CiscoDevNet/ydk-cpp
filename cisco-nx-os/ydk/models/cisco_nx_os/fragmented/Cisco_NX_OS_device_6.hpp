#ifndef _CISCO_NX_OS_DEVICE_6_
#define _CISCO_NX_OS_DEVICE_6_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_5.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
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
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
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

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
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

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
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
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
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

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
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

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems : public ydk::Entity
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

        class MvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList

        ydk::YList mvpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList : public ydk::Entity
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
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems : public ydk::Entity
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

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList : public ydk::Entity
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
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

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
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
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
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

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
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

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
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
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
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

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
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

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::DamphstpathsrtItems::MvpnrtItems::MvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems : public ydk::Entity
{
    public:
        RttypeItems();
        ~RttypeItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtTypeRoutesList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList

        ydk::YList rttyperoutes_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList : public ydk::Entity
{
    public:
        RtTypeRoutesList();
        ~RtTypeRoutesList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttype; //type: BgpEvpnRtType
        class LsrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems
        class EvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems> lsrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems> evpnrt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems : public ydk::Entity
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

        class LnkStRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList

        ydk::YList lnkstroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList : public ydk::Entity
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
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems : public ydk::Entity
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

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList : public ydk::Entity
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems : public ydk::Entity
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

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
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
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
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

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems : public ydk::Entity
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

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems : public ydk::Entity
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
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
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

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
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

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::LsrtItems::LnkStRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems : public ydk::Entity
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

        class EvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList

        ydk::YList evpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList : public ydk::Entity
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
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems : public ydk::Entity
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

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList : public ydk::Entity
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
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

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
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
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
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

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
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

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
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
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
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

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
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

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RttypeItems::RtTypeRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems : public ydk::Entity
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

        class EvpnVnIdRoutesList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList

        ydk::YList evpnvnidroutes_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList : public ydk::Entity
{
    public:
        EvpnVnIdRoutesList();
        ~EvpnVnIdRoutesList();

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
        class EvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems> evpnrt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems : public ydk::Entity
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

        class EvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList

        ydk::YList evpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList : public ydk::Entity
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
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems : public ydk::Entity
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

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList : public ydk::Entity
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
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

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
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
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
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

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
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

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
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
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
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

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
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

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::VnidItems::EvpnVnIdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems : public ydk::Entity
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

        class EvpnMacAddrRoutesList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList

        ydk::YList evpnmacaddrroutes_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList : public ydk::Entity
{
    public:
        EvpnMacAddrRoutesList();
        ~EvpnMacAddrRoutesList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf macaddr; //type: string
        class EvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems> evpnrt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems : public ydk::Entity
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

        class EvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList

        ydk::YList evpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList : public ydk::Entity
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
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems : public ydk::Entity
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

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList : public ydk::Entity
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
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

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
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
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
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

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
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

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
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
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
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

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
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

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::MacItems::EvpnMacAddrRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems : public ydk::Entity
{
    public:
        RdItems();
        ~RdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RdRoutesList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList

        ydk::YList rdroutes_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList : public ydk::Entity
{
    public:
        RdRoutesList();
        ~RdRoutesList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: string
        class VpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems
        class EvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems
        class MvpnrtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems> vpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems> evpnrt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::MvpnrtItems> mvpnrt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems : public ydk::Entity
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

        class VpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList

        ydk::YList vpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList : public ydk::Entity
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
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems : public ydk::Entity
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

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList : public ydk::Entity
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
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

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
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
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
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

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems : public ydk::Entity
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

        class RegCommList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList

        ydk::YList regcomm_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::RcommItems::RegCommList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems : public ydk::Entity
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
        class RtItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems> rt_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems : public ydk::Entity
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

        class ExtCommRtList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList

        ydk::YList extcommrt_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::EcommItems::RtItems::ExtCommRtList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems : public ydk::Entity
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

        class LnkStAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList

        ydk::YList lnkstattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::LnkstattrItems::TlvItems::LnkStAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems : public ydk::Entity
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
        class TlvItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems> tlv_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems : public ydk::Entity
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

        class PfxSidAttrEntryList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList

        ydk::YList pfxsidattrentry_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PfxsidItems::TlvItems::PfxSidAttrEntryList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems : public ydk::Entity
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

}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::VpnrtItems::VpnRouteList::PathItems::PathList::PmsiItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems : public ydk::Entity
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

        class EvpnRouteList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList

        ydk::YList evpnroute_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList : public ydk::Entity
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
        class PathItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems> path_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems : public ydk::Entity
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

        class PathList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList

        ydk::YList path_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList : public ydk::Entity
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
        ydk::YLeaf numimported; //type: uint16
        ydk::YLeaf importedlst; //type: string
        ydk::YLeaf importedsrc; //type: string
        ydk::YLeaf origimportedsrc; //type: string
        class SegItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems
        class RcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems
        class EcommItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems
        class LnkstattrItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems
        class PfxsidItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems
        class PmsiItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems> seg_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::RcommItems> rcomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::EcommItems> ecomm_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::LnkstattrItems> lnkstattr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PfxsidItems> pfxsid_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::PmsiItems> pmsi_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems : public ydk::Entity
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

        class AsSegList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList

        ydk::YList asseg_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList : public ydk::Entity
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
        class AsnItems; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems> asn_items;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList


class System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems : public ydk::Entity
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

        class AsItemList; //type: System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems::AsItemList

        ydk::YList asitem_list;
        
}; // System::BgpItems::InstItems::DomItems::DomList::AfItems::DomAfList::RdItems::RdRoutesList::EvpnrtItems::EvpnRouteList::PathItems::PathList::SegItems::AsSegList::AsnItems


}
}

#endif /* _CISCO_NX_OS_DEVICE_6_ */

