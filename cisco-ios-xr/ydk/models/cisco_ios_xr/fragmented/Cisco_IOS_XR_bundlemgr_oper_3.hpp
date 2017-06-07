#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_3_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem : public Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf item_name; //type: string
        class Items; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items> > items;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf event_type; //type: BmdBagTargetEnum
        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo> rg_evt_info;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64
        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data> data;
        
}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string

}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::MlacpIccpGroupCounters : public Entity
{
    public:
        MlacpIccpGroupCounters();
        ~MlacpIccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroups; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups> iccp_groups;
        
}; // BundleInformation::MlacpIccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroup; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class IccpGroupAncestorBundle; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle
        class IccpGroupAncestorMember; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember
        class IccpGroupAncestorNode; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode
        class IccpGroupItem; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle> iccp_group_ancestor_bundle;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember> iccp_group_ancestor_member;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode> iccp_group_ancestor_node;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle : public Entity
{
    public:
        IccpGroupAncestorBundle();
        ~IccpGroupAncestorBundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters : public Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_connects; //type: uint32
        YLeaf received_connects; //type: uint32
        YLeaf iccp_invalid_connects; //type: uint32
        YLeaf iccp_config_connect_errors; //type: uint32
        YLeaf iccp_count_connect_errors; //type: uint32
        YLeaf sent_wrong_versions; //type: uint32
        YLeaf received_wrong_versions; //type: uint32
        YLeaf sent_disconnects; //type: uint32
        YLeaf received_disconnects; //type: uint32
        YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config; //type: uint32
        YLeaf received_config; //type: uint32
        YLeaf sent_state; //type: uint32
        YLeaf received_state; //type: uint32
        YLeaf sent_na_ks; //type: uint32
        YLeaf received_na_ks; //type: uint32
        YLeaf sent_sync_requests; //type: uint32
        YLeaf received_sync_requests; //type: uint32
        YLeaf sent_state_sync_requests; //type: uint32
        YLeaf received_state_sync_requests; //type: uint32
        YLeaf sent_config_sync_requests; //type: uint32
        YLeaf received_config_sync_requests; //type: uint32
        YLeaf sent_solicited_sync_data; //type: uint32
        YLeaf received_solicited_sync_data; //type: uint32
        YLeaf sent_unsolicited_sync_data; //type: uint32
        YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs : public Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incorrect_length; //type: uint32
        YLeaf invalid_type; //type: uint32
        YLeaf invalid_data; //type: uint32
        YLeaf unknown_bundle; //type: uint32
        YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages : public Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_messages; //type: uint32
        YLeaf sent_buffer_messages; //type: uint32
        YLeaf received_messages; //type: uint32
        YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents : public Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_up; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf transport_unavailable; //type: uint32
        YLeaf configured_set; //type: uint32
        YLeaf configured_clear; //type: uint32
        YLeaf reachability_set; //type: uint32
        YLeaf reachability_cleared; //type: uint32
        YLeaf member_status_up; //type: uint32
        YLeaf member_status_down; //type: uint32
        YLeaf pe_isolated; //type: uint32
        YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember : public Entity
{
    public:
        IccpGroupAncestorMember();
        ~IccpGroupAncestorMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters : public Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_connects; //type: uint32
        YLeaf received_connects; //type: uint32
        YLeaf iccp_invalid_connects; //type: uint32
        YLeaf iccp_config_connect_errors; //type: uint32
        YLeaf iccp_count_connect_errors; //type: uint32
        YLeaf sent_wrong_versions; //type: uint32
        YLeaf received_wrong_versions; //type: uint32
        YLeaf sent_disconnects; //type: uint32
        YLeaf received_disconnects; //type: uint32
        YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config; //type: uint32
        YLeaf received_config; //type: uint32
        YLeaf sent_state; //type: uint32
        YLeaf received_state; //type: uint32
        YLeaf sent_na_ks; //type: uint32
        YLeaf received_na_ks; //type: uint32
        YLeaf sent_sync_requests; //type: uint32
        YLeaf received_sync_requests; //type: uint32
        YLeaf sent_state_sync_requests; //type: uint32
        YLeaf received_state_sync_requests; //type: uint32
        YLeaf sent_config_sync_requests; //type: uint32
        YLeaf received_config_sync_requests; //type: uint32
        YLeaf sent_solicited_sync_data; //type: uint32
        YLeaf received_solicited_sync_data; //type: uint32
        YLeaf sent_unsolicited_sync_data; //type: uint32
        YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs : public Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incorrect_length; //type: uint32
        YLeaf invalid_type; //type: uint32
        YLeaf invalid_data; //type: uint32
        YLeaf unknown_bundle; //type: uint32
        YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages : public Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_messages; //type: uint32
        YLeaf sent_buffer_messages; //type: uint32
        YLeaf received_messages; //type: uint32
        YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents : public Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_up; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf transport_unavailable; //type: uint32
        YLeaf configured_set; //type: uint32
        YLeaf configured_clear; //type: uint32
        YLeaf reachability_set; //type: uint32
        YLeaf reachability_cleared; //type: uint32
        YLeaf member_status_up; //type: uint32
        YLeaf member_status_down; //type: uint32
        YLeaf pe_isolated; //type: uint32
        YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode : public Entity
{
    public:
        IccpGroupAncestorNode();
        ~IccpGroupAncestorNode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters : public Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_connects; //type: uint32
        YLeaf received_connects; //type: uint32
        YLeaf iccp_invalid_connects; //type: uint32
        YLeaf iccp_config_connect_errors; //type: uint32
        YLeaf iccp_count_connect_errors; //type: uint32
        YLeaf sent_wrong_versions; //type: uint32
        YLeaf received_wrong_versions; //type: uint32
        YLeaf sent_disconnects; //type: uint32
        YLeaf received_disconnects; //type: uint32
        YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config; //type: uint32
        YLeaf received_config; //type: uint32
        YLeaf sent_state; //type: uint32
        YLeaf received_state; //type: uint32
        YLeaf sent_na_ks; //type: uint32
        YLeaf received_na_ks; //type: uint32
        YLeaf sent_sync_requests; //type: uint32
        YLeaf received_sync_requests; //type: uint32
        YLeaf sent_state_sync_requests; //type: uint32
        YLeaf received_state_sync_requests; //type: uint32
        YLeaf sent_config_sync_requests; //type: uint32
        YLeaf received_config_sync_requests; //type: uint32
        YLeaf sent_solicited_sync_data; //type: uint32
        YLeaf received_solicited_sync_data; //type: uint32
        YLeaf sent_unsolicited_sync_data; //type: uint32
        YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs : public Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incorrect_length; //type: uint32
        YLeaf invalid_type; //type: uint32
        YLeaf invalid_data; //type: uint32
        YLeaf unknown_bundle; //type: uint32
        YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages : public Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_messages; //type: uint32
        YLeaf sent_buffer_messages; //type: uint32
        YLeaf received_messages; //type: uint32
        YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents : public Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_up; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf transport_unavailable; //type: uint32
        YLeaf configured_set; //type: uint32
        YLeaf configured_clear; //type: uint32
        YLeaf reachability_set; //type: uint32
        YLeaf reachability_cleared; //type: uint32
        YLeaf member_status_up; //type: uint32
        YLeaf member_status_down; //type: uint32
        YLeaf pe_isolated; //type: uint32
        YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem : public Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters : public Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection> connection;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_connects; //type: uint32
        YLeaf received_connects; //type: uint32
        YLeaf iccp_invalid_connects; //type: uint32
        YLeaf iccp_config_connect_errors; //type: uint32
        YLeaf iccp_count_connect_errors; //type: uint32
        YLeaf sent_wrong_versions; //type: uint32
        YLeaf received_wrong_versions; //type: uint32
        YLeaf sent_disconnects; //type: uint32
        YLeaf received_disconnects; //type: uint32
        YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs : public Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config; //type: uint32
        YLeaf received_config; //type: uint32
        YLeaf sent_state; //type: uint32
        YLeaf received_state; //type: uint32
        YLeaf sent_na_ks; //type: uint32
        YLeaf received_na_ks; //type: uint32
        YLeaf sent_sync_requests; //type: uint32
        YLeaf received_sync_requests; //type: uint32
        YLeaf sent_state_sync_requests; //type: uint32
        YLeaf received_state_sync_requests; //type: uint32
        YLeaf sent_config_sync_requests; //type: uint32
        YLeaf received_config_sync_requests; //type: uint32
        YLeaf sent_solicited_sync_data; //type: uint32
        YLeaf received_solicited_sync_data; //type: uint32
        YLeaf sent_unsolicited_sync_data; //type: uint32
        YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs : public Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incorrect_length; //type: uint32
        YLeaf invalid_type; //type: uint32
        YLeaf invalid_data; //type: uint32
        YLeaf unknown_bundle; //type: uint32
        YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages : public Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_messages; //type: uint32
        YLeaf sent_buffer_messages; //type: uint32
        YLeaf received_messages; //type: uint32
        YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents : public Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transport_up; //type: uint32
        YLeaf transport_down; //type: uint32
        YLeaf transport_unavailable; //type: uint32
        YLeaf configured_set; //type: uint32
        YLeaf configured_clear; //type: uint32
        YLeaf reachability_set; //type: uint32
        YLeaf reachability_cleared; //type: uint32
        YLeaf member_status_up; //type: uint32
        YLeaf member_status_down; //type: uint32
        YLeaf pe_isolated; //type: uint32
        YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents


class BundleInformation::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SystemIdGlobal; //type: BundleInformation::SystemId::SystemIdGlobal
        class SystemIdIccpGroups; //type: BundleInformation::SystemId::SystemIdIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal> system_id_global;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups> system_id_iccp_groups;
        
}; // BundleInformation::SystemId


class BundleInformation::SystemId::SystemIdGlobal : public Entity
{
    public:
        SystemIdGlobal();
        ~SystemIdGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SystemIdGlobalItem; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem> system_id_global_item;
        
}; // BundleInformation::SystemId::SystemIdGlobal


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem : public Entity
{
    public:
        SystemIdGlobalItem();
        ~SystemIdGlobalItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf system_priority; //type: uint16
        YLeaf system_mac_address; //type: string
        class SystemId_; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_> system_id;
        
}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_ : public Entity
{
    public:
        SystemId_();
        ~SystemId_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_


class BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr


class BundleInformation::SystemId::SystemIdIccpGroups : public Entity
{
    public:
        SystemIdIccpGroups();
        ~SystemIdIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SystemIdIccpGroup; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup> > system_id_iccp_group;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup : public Entity
{
    public:
        SystemIdIccpGroup();
        ~SystemIdIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class SystemIdIccpGroupItem; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem> system_id_iccp_group_item;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem : public Entity
{
    public:
        SystemIdIccpGroupItem();
        ~SystemIdIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf system_priority; //type: uint16
        YLeaf system_mac_address; //type: string
        class SystemId_; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_> system_id;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_ : public Entity
{
    public:
        SystemId_();
        ~SystemId_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_


class BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr


class BundleInformation::MlacpMemberCounters : public Entity
{
    public:
        MlacpMemberCounters();
        ~MlacpMemberCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroups; //type: BundleInformation::MlacpMemberCounters::IccpGroups
        class Members; //type: BundleInformation::MlacpMemberCounters::Members
        class Bundles; //type: BundleInformation::MlacpMemberCounters::Bundles
        class Nodes; //type: BundleInformation::MlacpMemberCounters::Nodes

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles> bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups> iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members> members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes> nodes;
        
}; // BundleInformation::MlacpMemberCounters


class BundleInformation::MlacpMemberCounters::IccpGroups : public Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IccpGroup; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup : public Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group; //type: uint32
        class IccpGroupItem; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem : public Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Member; //type: BundleInformation::MlacpMemberCounters::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member> > member;
        
}; // BundleInformation::MlacpMemberCounters::Members


class BundleInformation::MlacpMemberCounters::Members::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class MemberItem; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem> member_item;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem : public Entity
{
    public:
        MemberItem();
        ~MemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bundle; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle> > bundle;
        
}; // BundleInformation::MlacpMemberCounters::Bundles


class BundleInformation::MlacpMemberCounters::Bundles::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class BundleItem; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem> bundle_item;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem : public Entity
{
    public:
        BundleItem();
        ~BundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData> > member_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData> > member_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: BundleInformation::MlacpMemberCounters::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node> > node;
        
}; // BundleInformation::MlacpMemberCounters::Nodes


class BundleInformation::MlacpMemberCounters::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: string
        class NodeItem; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem> node_item;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem : public Entity
{
    public:
        NodeItem();
        ~NodeItem();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Items; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items> > items;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData
        class NodeData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData> bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData> > member_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData> > node_data;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NodeData_; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts
        class MemberData; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData> > member_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_ : public Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_id; //type: uint32
        YLeaf iccp_group_id; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts : public Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData : public Entity
{
    public:
        MemberData();
        ~MemberData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters : public Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sent_config_tl_vs; //type: uint32
        YLeaf sent_state_tl_vs; //type: uint32
        YLeaf sent_priority_tl_vs; //type: uint32
        YLeaf received_priority_tl_vs; //type: uint32
        YLeaf received_nak_tl_vs; //type: uint32
        YLeaf last_time_cleared; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters


class BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests : public Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_syncs; //type: uint32
        YLeaf config_syncs; //type: uint32
        YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests

class LacpData : public Entity
{
    public:
        LacpData();
        ~LacpData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Global; //type: LacpData::Global

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global> global;
        
}; // LacpData


class LacpData::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SystemId; //type: LacpData::Global::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId> system_id;
        
}; // LacpData::Global


class LacpData::Global::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iccp_group_id; //type: uint32
        YLeaf system_priority; //type: uint16
        YLeaf system_mac_address; //type: string
        class SystemId_; //type: LacpData::Global::SystemId::SystemId_

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId::SystemId_> system_id;
        
}; // LacpData::Global::SystemId


class LacpData::Global::SystemId::SystemId_ : public Entity
{
    public:
        SystemId_();
        ~SystemId_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf system_prio; //type: uint16
        class SystemMacAddr; //type: LacpData::Global::SystemId::SystemId_::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId::SystemId_::SystemMacAddr> system_mac_addr;
        
}; // LacpData::Global::SystemId::SystemId_


class LacpData::Global::SystemId::SystemId_::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf macaddr; //type: string

}; // LacpData::Global::SystemId::SystemId_::SystemMacAddr

class Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Bundles_; //type: Bundles::Bundles_

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_> bundles;
        
}; // Bundles


class Bundles::Bundles_ : public Entity
{
    public:
        Bundles_();
        ~Bundles_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bundle; //type: Bundles::Bundles_::Bundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle> > bundle;
        
}; // Bundles::Bundles_


class Bundles::Bundles_::Bundle : public Entity
{
    public:
        Bundle();
        ~Bundle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface; //type: string
        class Data; //type: Bundles::Bundles_::Bundle::Data
        class Members; //type: Bundles::Bundles_::Bundle::Members

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data> data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members> members;
        
}; // Bundles::Bundles_::Bundle


class Bundles::Bundles_::Bundle::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_interface_name; //type: string
        YLeaf available_bandwidth; //type: uint32
        YLeaf effective_bandwidth; //type: uint32
        YLeaf configured_bandwidth; //type: uint32
        YLeaf minimum_active_links; //type: uint8
        YLeaf maximum_active_links; //type: uint8
        YLeaf maximum_active_links_source; //type: BmWhichSystemEnum
        YLeaf minimum_bandwidth; //type: uint32
        YLeaf primary_member; //type: string
        YLeaf bundle_status; //type: BmBdlStateEnum
        YLeaf active_member_count; //type: uint16
        YLeaf standby_member_count; //type: uint16
        YLeaf configured_member_count; //type: uint16
        YLeaf mac_source; //type: BmBdlMacSourceEnum
        YLeaf mac_source_member; //type: string
        YLeaf inter_chassis; //type: boolean
        YLeaf is_active; //type: boolean
        YLeaf lacp_status; //type: BmFeatureStatusEnum
        YLeaf mlacp_status; //type: BmFeatureStatusEnum
        YLeaf ipv4bfd_status; //type: BmFeatureStatusEnum
        YLeaf link_order_status; //type: BmFeatureStatusEnum
        YLeaf ipv6bfd_status; //type: BmFeatureStatusEnum
        YLeaf load_balance_hash_type; //type: string
        YLeaf load_balance_locality_threshold; //type: uint16
        YLeaf suppression_timer; //type: uint16
        YLeaf wait_while_timer; //type: uint16
        YLeaf collector_max_delay; //type: uint16
        YLeaf cisco_extensions; //type: boolean
        YLeaf lacp_nonrevertive; //type: boolean
        YLeaf iccp_group_id; //type: uint32
        YLeaf active_foreign_member_count; //type: uint16
        YLeaf configured_foreign_member_count; //type: uint16
        YLeaf switchover_type; //type: BmdMlacpSwitchoverEnum
        YLeaf maximize_threshold_value_links; //type: uint32
        YLeaf maximize_threshold_value_band_width; //type: uint32
        YLeaf mlacp_mode; //type: BundleMlacpModeEnum
        YLeaf recovery_delay; //type: uint16
        YLeaf singleton; //type: boolean
        class MacAddress; //type: Bundles::Bundles_::Bundle::Data::MacAddress
        class BfdConfig; //type: Bundles::Bundles_::Bundle::Data::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::MacAddress> mac_address;
        
}; // Bundles::Bundles_::Bundle::Data


class Bundles::Bundles_::Bundle::Data::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Bundles::Bundles_::Bundle::Data::MacAddress


class Bundles::Bundles_::Bundle::Data::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32
        class DestinationAddress; //type: Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress> destination_address;
        
}; // Bundles::Bundles_::Bundle::Data::BfdConfig


class Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress


class Bundles::Bundles_::Bundle::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Member; //type: Bundles::Bundles_::Bundle::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member> > member;
        
}; // Bundles::Bundles_::Bundle::Members


class Bundles::Bundles_::Bundle::Members::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        YLeaf bandwidth; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf port_number; //type: uint16
        YLeaf underlying_link_id; //type: uint16
        YLeaf link_order_number; //type: uint16
        YLeaf interface_name; //type: string
        YLeaf iccp_node; //type: uint32
        YLeaf member_type; //type: BmdMemberTypeEnumEnum
        YLeaf member_name; //type: string
        class Counters; //type: Bundles::Bundles_::Bundle::Members::Member::Counters
        class LinkData; //type: Bundles::Bundles_::Bundle::Members::Member::LinkData
        class MemberMuxData; //type: Bundles::Bundles_::Bundle::Members::Member::MemberMuxData
        class MacAddress; //type: Bundles::Bundles_::Bundle::Members::Member::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::LinkData> link_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MemberMuxData> member_mux_data;
        
}; // Bundles::Bundles_::Bundle::Members::Member


class Bundles::Bundles_::Bundle::Members::Member::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // Bundles::Bundles_::Bundle::Members::Member::Counters


class Bundles::Bundles_::Bundle::Members::Member::LinkData : public Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // Bundles::Bundles_::Bundle::Members::Member::LinkData


class Bundles::Bundles_::Bundle::Members::Member::MemberMuxData : public Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mux_state; //type: BmMuxstateEnum
        YLeaf error; //type: uint32
        YLeaf member_mux_state_reason; //type: BmMbrStateReasonEnum
        YLeaf member_state; //type: BmdMemberStateEnum
        YLeaf mux_state_reason; //type: BmMuxreasonEnum
        class MemberMuxStateReasonData; //type: Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // Bundles::Bundles_::Bundle::Members::Member::MemberMuxData


class Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData : public Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reason_type; //type: BmStateReasonTargetEnum
        YLeaf severity; //type: BmSeverityEnum

}; // Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData


class Bundles::Bundles_::Bundle::Members::Member::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Bundles::Bundles_::Bundle::Members::Member::MacAddress

class LacpBundleMembers : public Entity
{
    public:
        LacpBundleMembers();
        ~LacpBundleMembers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: LacpBundleMembers::Nodes
        class Members; //type: LacpBundleMembers::Members

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members> members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes> nodes;
        
}; // LacpBundleMembers


class LacpBundleMembers::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: LacpBundleMembers::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes::Node> > node;
        
}; // LacpBundleMembers::Nodes


class LacpBundleMembers::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node; //type: string
        class Counters; //type: LacpBundleMembers::Nodes::Node::Counters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes::Node::Counters> counters;
        
}; // LacpBundleMembers::Nodes::Node


class LacpBundleMembers::Nodes::Node::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wrong_port_count; //type: uint32
        YLeaf last_wrong_port; //type: uint32
        YLeaf unknown_port_count; //type: uint32
        YLeaf undecodable_packets; //type: uint32
        YLeaf time_since_cleared; //type: uint64
        YLeaf time_since_unexpected_event; //type: uint64
        YLeaf time_since_last_updated; //type: uint64

}; // LacpBundleMembers::Nodes::Node::Counters


class LacpBundleMembers::Members : public Entity
{
    public:
        Members();
        ~Members();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Member; //type: LacpBundleMembers::Members::Member

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member> > member;
        
}; // LacpBundleMembers::Members


class LacpBundleMembers::Members::Member : public Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf member_interface; //type: string
        class Data; //type: LacpBundleMembers::Members::Member::Data
        class Counters; //type: LacpBundleMembers::Members::Member::Counters

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member::Counters> counters;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member::Data> data;
        
}; // LacpBundleMembers::Members::Member


class LacpBundleMembers::Members::Member::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: string
        YLeaf actor_system_priority; //type: uint16
        YLeaf actor_system_mac_address; //type: string
        YLeaf actor_operational_key; //type: uint16
        YLeaf partner_system_priority; //type: uint16
        YLeaf partner_system_mac_address; //type: string
        YLeaf partner_operational_key; //type: uint16
        YLeaf selected_aggregator_id; //type: uint32
        YLeaf attached_aggregator_id; //type: uint32
        YLeaf actor_port_id; //type: uint16
        YLeaf actor_port_priority; //type: uint16
        YLeaf partner_port_id; //type: uint16
        YLeaf partner_port_priority; //type: uint16
        YLeaf actor_port_state; //type: uint8
        YLeaf partner_port_state; //type: uint8

}; // LacpBundleMembers::Members::Member::Data


class LacpBundleMembers::Members::Member::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lacpd_us_received; //type: uint32
        YLeaf lacpd_us_transmitted; //type: uint32
        YLeaf marker_packets_received; //type: uint32
        YLeaf marker_responses_transmitted; //type: uint32
        YLeaf illegal_packets_received; //type: uint32
        YLeaf excess_lacpd_us_received; //type: uint32
        YLeaf excess_marker_packets_received; //type: uint32
        YLeaf defaulted; //type: uint32
        YLeaf expired; //type: uint32
        YLeaf time_since_last_lacpdu_received; //type: uint64
        YLeaf time_since_cleared; //type: uint64
        YLeaf time_since_unexpected_event; //type: uint64
        YLeaf last_cleared_sec; //type: uint32
        YLeaf last_cleared_nsec; //type: uint32

}; // LacpBundleMembers::Members::Member::Counters

class BundlesAdjacency : public Entity
{
    public:
        BundlesAdjacency();
        ~BundlesAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: BundlesAdjacency::Nodes

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes> nodes;
        
}; // BundlesAdjacency


class BundlesAdjacency::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: BundlesAdjacency::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node> > node;
        
}; // BundlesAdjacency::Nodes


class BundlesAdjacency::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class Brief; //type: BundlesAdjacency::Nodes::Node::Brief
        class Bundles; //type: BundlesAdjacency::Nodes::Node::Bundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief> brief;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles> bundles;
        
}; // BundlesAdjacency::Nodes::Node


class BundlesAdjacency::Nodes::Node::Brief : public Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleData; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData> > bundle_data;
        
}; // BundlesAdjacency::Nodes::Node::Brief


class BundlesAdjacency::Nodes::Node::Brief::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf sub_interface_count; //type: uint32
        YLeaf member_count; //type: uint32
        YLeaf total_weight; //type: uint32
        class SubInterface; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface> > sub_interface;
        
}; // BundlesAdjacency::Nodes::Node::Brief::BundleData


class BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface : public Entity
{
    public:
        SubInterface();
        ~SubInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        class LoadBalanceData; //type: BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData> load_balance_data;
        
}; // BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_3_ */

