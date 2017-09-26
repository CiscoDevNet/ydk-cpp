#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_1_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {


class BundleInformation::EventsMbr : public ydk::Entity
{
    public:
        EventsMbr();
        ~EventsMbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventsMbrBundles; //type: BundleInformation::EventsMbr::EventsMbrBundles
        class EventsMbrMembers; //type: BundleInformation::EventsMbr::EventsMbrMembers
        class EventsMbrIccpGroups; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles> events_mbr_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups> events_mbr_iccp_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers> events_mbr_members;
        
}; // BundleInformation::EventsMbr


class BundleInformation::EventsMbr::EventsMbrBundles : public ydk::Entity
{
    public:
        EventsMbrBundles();
        ~EventsMbrBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventsMbrBundle; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle> > events_mbr_bundle;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle : public ydk::Entity
{
    public:
        EventsMbrBundle();
        ~EventsMbrBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_interface; //type: string
        class EventsMbrBundleChildrenMembers; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers
        class EventsMbrBundleDescendant; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers> events_mbr_bundle_children_members;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant> events_mbr_bundle_descendant;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers : public ydk::Entity
{
    public:
        EventsMbrBundleChildrenMembers();
        ~EventsMbrBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventsMbrBundleChildrenMember; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember> > events_mbr_bundle_children_member;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember : public ydk::Entity
{
    public:
        EventsMbrBundleChildrenMember();
        ~EventsMbrBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant : public ydk::Entity
{
    public:
        EventsMbrBundleDescendant();
        ~EventsMbrBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventsItem; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem> > events_item;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem : public ydk::Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups : public ydk::Entity
{
    public:
        EventsMbrIccpGroups();
        ~EventsMbrIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventsMbrIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup> > events_mbr_iccp_group;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup : public ydk::Entity
{
    public:
        EventsMbrIccpGroup();
        ~EventsMbrIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf iccp_group; //type: uint32
        class EventsMbrBundleChildrenMemberIccpGroups; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups
        class EventsMbrBundleDescendantIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups> events_mbr_bundle_children_member_iccp_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup> events_mbr_bundle_descendant_iccp_group;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups : public ydk::Entity
{
    public:
        EventsMbrBundleChildrenMemberIccpGroups();
        ~EventsMbrBundleChildrenMemberIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventsMbrBundleChildrenMemberIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup> > events_mbr_bundle_children_member_iccp_group;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup : public ydk::Entity
{
    public:
        EventsMbrBundleChildrenMemberIccpGroup();
        ~EventsMbrBundleChildrenMemberIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup : public ydk::Entity
{
    public:
        EventsMbrBundleDescendantIccpGroup();
        ~EventsMbrBundleDescendantIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EventsItem; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem> > events_item;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem : public ydk::Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers : public ydk::Entity
{
    public:
        EventsMbrMembers();
        ~EventsMbrMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventsMbrMember; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember> > events_mbr_member;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember : public ydk::Entity
{
    public:
        EventsMbrMember();
        ~EventsMbrMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf member_interface; //type: string
        class EventsMbrMemberItem; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem> events_mbr_member_item;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem : public ydk::Entity
{
    public:
        EventsMbrMemberItem();
        ~EventsMbrMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data


class BundleInformation::EventsRg : public ydk::Entity
{
    public:
        EventsRg();
        ~EventsRg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventsRgMembers; //type: BundleInformation::EventsRg::EventsRgMembers
        class EventsRgIccpGroups; //type: BundleInformation::EventsRg::EventsRgIccpGroups
        class EventsRgBundles; //type: BundleInformation::EventsRg::EventsRgBundles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles> events_rg_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups> events_rg_iccp_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers> events_rg_members;
        
}; // BundleInformation::EventsRg


class BundleInformation::EventsRg::EventsRgBundles : public ydk::Entity
{
    public:
        EventsRgBundles();
        ~EventsRgBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventsRgBundle; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle> > events_rg_bundle;
        
}; // BundleInformation::EventsRg::EventsRgBundles


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle : public ydk::Entity
{
    public:
        EventsRgBundle();
        ~EventsRgBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_interface; //type: string
        class EventsRgBundleAncestor; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor> events_rg_bundle_ancestor;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor : public ydk::Entity
{
    public:
        EventsRgBundleAncestor();
        ~EventsRgBundleAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups : public ydk::Entity
{
    public:
        EventsRgIccpGroups();
        ~EventsRgIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventsRgIccpGroup; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup> > events_rg_iccp_group;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup : public ydk::Entity
{
    public:
        EventsRgIccpGroup();
        ~EventsRgIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf iccp_group; //type: uint32
        class EventsRgBundleItemIccpGroup; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup> events_rg_bundle_item_iccp_group;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup : public ydk::Entity
{
    public:
        EventsRgBundleItemIccpGroup();
        ~EventsRgBundleItemIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data


class BundleInformation::EventsRg::EventsRgMembers : public ydk::Entity
{
    public:
        EventsRgMembers();
        ~EventsRgMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class EventsRgMember; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember> > events_rg_member;
        
}; // BundleInformation::EventsRg::EventsRgMembers


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember : public ydk::Entity
{
    public:
        EventsRgMember();
        ~EventsRgMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf member_interface; //type: string
        class EventsRgMemberAncestor; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor> events_rg_member_ancestor;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor : public ydk::Entity
{
    public:
        EventsRgMemberAncestor();
        ~EventsRgMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items> > items;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items : public ydk::Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_type; //type: BmdBagTarget
        class MemberEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo : public ydk::Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_event_type; //type: BmdBagEventBdlItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo : public ydk::Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_event_type; //type: BmdBagEventMbrItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo : public ydk::Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rg_event_type; //type: BmdBagEventRgItem
        ydk::YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo


class BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_type; //type: BmdBagEventData
        ydk::YLeaf no_data; //type: uint8
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf string_data; //type: string

}; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data


class BundleInformation::Lacp : public ydk::Entity
{
    public:
        Lacp();
        ~Lacp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LacpBundles; //type: BundleInformation::Lacp::LacpBundles
        class LacpMembers; //type: BundleInformation::Lacp::LacpMembers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles> lacp_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers> lacp_members;
        
}; // BundleInformation::Lacp


class BundleInformation::Lacp::LacpBundles : public ydk::Entity
{
    public:
        LacpBundles();
        ~LacpBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LacpBundle; //type: BundleInformation::Lacp::LacpBundles::LacpBundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle> > lacp_bundle;
        
}; // BundleInformation::Lacp::LacpBundles


class BundleInformation::Lacp::LacpBundles::LacpBundle : public ydk::Entity
{
    public:
        LacpBundle();
        ~LacpBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf bundle_interface; //type: string
        class LacpBundleItem; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem
        class LacpBundleDescendant; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant
        class LacpBundleChildrenMembers; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers> lacp_bundle_children_members;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant> lacp_bundle_descendant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem> lacp_bundle_item;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers : public ydk::Entity
{
    public:
        LacpBundleChildrenMembers();
        ~LacpBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LacpBundleChildrenMember; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember> > lacp_bundle_children_member;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember : public ydk::Entity
{
    public:
        LacpBundleChildrenMember();
        ~LacpBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf member_interface; //type: string
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf selection_state; //type: LacpSelState
        ydk::YLeaf period_state; //type: LacpPeriodState
        ydk::YLeaf receive_machine_state; //type: Rxstates
        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf actor_churn_state; //type: LacpChurnstates
        ydk::YLeaf partner_churn_state; //type: LacpChurnstates
        ydk::YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo> actor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo> additional_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo : public ydk::Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_priority; //type: uint16
        ydk::YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

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

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo : public ydk::Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mbr_type; //type: BmdMemberTypeEnum
        class Local; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign : public ydk::Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf member_name; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo : public ydk::Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_priority; //type: uint16
        ydk::YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

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

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant : public ydk::Entity
{
    public:
        LacpBundleDescendant();
        ~LacpBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData
        class MemberData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData> bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData> > member_data;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData> actor_bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId> bundle_system_id;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData : public ydk::Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId : public ydk::Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

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

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf selection_state; //type: LacpSelState
        ydk::YLeaf period_state; //type: LacpPeriodState
        ydk::YLeaf receive_machine_state; //type: Rxstates
        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf actor_churn_state; //type: LacpChurnstates
        ydk::YLeaf partner_churn_state; //type: LacpChurnstates
        ydk::YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo> actor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo> additional_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo : public ydk::Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_priority; //type: uint16
        ydk::YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

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

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo : public ydk::Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mbr_type; //type: BmdMemberTypeEnum
        class Local; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign : public ydk::Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf member_name; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo : public ydk::Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_priority; //type: uint16
        ydk::YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

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

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem : public ydk::Entity
{
    public:
        LacpBundleItem();
        ~LacpBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData> actor_bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId> bundle_system_id;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData : public ydk::Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId : public ydk::Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId


class BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

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

}; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpMembers : public ydk::Entity
{
    public:
        LacpMembers();
        ~LacpMembers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class LacpMember; //type: BundleInformation::Lacp::LacpMembers::LacpMember

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember> > lacp_member;
        
}; // BundleInformation::Lacp::LacpMembers


class BundleInformation::Lacp::LacpMembers::LacpMember : public ydk::Entity
{
    public:
        LacpMember();
        ~LacpMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf member_interface; //type: string
        class LacpMemberAncestor; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor
        class LacpMemberItem; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor> lacp_member_ancestor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem> lacp_member_item;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor : public ydk::Entity
{
    public:
        LacpMemberAncestor();
        ~LacpMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BundleData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData
        class MemberData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData> bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData> > member_data;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData : public ydk::Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        class ActorBundleData; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData
        class BundleSystemId; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData> actor_bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId> bundle_system_id;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData : public ydk::Entity
{
    public:
        ActorBundleData();
        ~ActorBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_interface_name; //type: string
        ydk::YLeaf available_bandwidth; //type: uint32
        ydk::YLeaf effective_bandwidth; //type: uint32
        ydk::YLeaf configured_bandwidth; //type: uint32
        ydk::YLeaf minimum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links; //type: uint8
        ydk::YLeaf maximum_active_links_source; //type: BmWhichSystem
        ydk::YLeaf minimum_bandwidth; //type: uint32
        ydk::YLeaf primary_member; //type: string
        ydk::YLeaf bundle_status; //type: BmBdlState
        ydk::YLeaf active_member_count; //type: uint16
        ydk::YLeaf standby_member_count; //type: uint16
        ydk::YLeaf configured_member_count; //type: uint16
        ydk::YLeaf mac_source; //type: BmBdlMacSource
        ydk::YLeaf mac_source_member; //type: string
        ydk::YLeaf inter_chassis; //type: boolean
        ydk::YLeaf is_active; //type: boolean
        ydk::YLeaf lacp_status; //type: BmFeatureStatus
        ydk::YLeaf mlacp_status; //type: BmFeatureStatus
        ydk::YLeaf ipv4bfd_status; //type: BmFeatureStatus
        ydk::YLeaf link_order_status; //type: BmFeatureStatus
        ydk::YLeaf ipv6bfd_status; //type: BmFeatureStatus
        ydk::YLeaf load_balance_hash_type; //type: string
        ydk::YLeaf load_balance_locality_threshold; //type: uint16
        ydk::YLeaf suppression_timer; //type: uint16
        ydk::YLeaf wait_while_timer; //type: uint16
        ydk::YLeaf collector_max_delay; //type: uint16
        ydk::YLeaf cisco_extensions; //type: boolean
        ydk::YLeaf lacp_nonrevertive; //type: boolean
        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf active_foreign_member_count; //type: uint16
        ydk::YLeaf configured_foreign_member_count; //type: uint16
        ydk::YLeaf switchover_type; //type: BmdMlacpSwitchover
        ydk::YLeaf maximize_threshold_value_links; //type: uint32
        ydk::YLeaf maximize_threshold_value_band_width; //type: uint32
        ydk::YLeaf mlacp_mode; //type: BundleMlacpMode
        ydk::YLeaf recovery_delay; //type: uint16
        ydk::YLeaf singleton; //type: boolean
        class MacAddress; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress
        class BfdConfig; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig> > bfd_config;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig : public ydk::Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_status; //type: BmdBfdBdlState
        ydk::YLeaf start_timer; //type: uint32
        ydk::YLeaf nbr_unconfig_timer; //type: uint32
        ydk::YLeaf pref_multiplier; //type: uint16
        ydk::YLeaf pref_min_interval; //type: uint32
        ydk::YLeaf pref_echo_min_interval; //type: uint32
        ydk::YLeaf fast_detect; //type: boolean
        ydk::YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress : public ydk::Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af; //type: BmAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId : public ydk::Entity
{
    public:
        BundleSystemId();
        ~BundleSystemId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData : public ydk::Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf selection_state; //type: LacpSelState
        ydk::YLeaf period_state; //type: LacpPeriodState
        ydk::YLeaf receive_machine_state; //type: Rxstates
        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf actor_churn_state; //type: LacpChurnstates
        ydk::YLeaf partner_churn_state; //type: LacpChurnstates
        ydk::YLeaf iccp_group_id; //type: uint32
        class ActorInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo> actor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo> additional_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo : public ydk::Entity
{
    public:
        ActorInfo();
        ~ActorInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_priority; //type: uint16
        ydk::YLeaf link_number; //type: uint16

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System : public ydk::Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo : public ydk::Entity
{
    public:
        AdditionalInfo();
        ~AdditionalInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mbr_type; //type: BmdMemberTypeEnum
        class Local; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign : public ydk::Entity
{
    public:
        Foreign();
        ~Foreign();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf peer_address; //type: string
        ydk::YLeaf member_name; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo : public ydk::Entity
{
    public:
        PartnerInfo();
        ~PartnerInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_period; //type: uint32
        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo : public ydk::Entity
{
    public:
        PortInfo();
        ~PortInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: uint16
        ydk::YLeaf state; //type: uint8
        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_1_ */

