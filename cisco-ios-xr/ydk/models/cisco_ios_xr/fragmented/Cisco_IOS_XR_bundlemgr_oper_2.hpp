#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_2_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup : public Entity
{
    public:
        MlacpIccpGroup();
        ~MlacpIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group; //type: uint32

        class MlacpIccpGroupItem; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem> mlacp_iccp_group_item;


}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem : public Entity
{
    public:
        MlacpIccpGroupItem();
        ~MlacpIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IccpGroupData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData
        class BundleData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData> > bundle_data;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData> iccp_group_data;


}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData : public Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group_id; //type: uint32
        YLeaf singleton; //type: boolean
        YLeaf connect_timer_running; //type: uint64

        class NodeData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData> > node_data;


}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData : public Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mlacp_node_id; //type: uint8
        YLeaf ldp_id; //type: string
        YLeaf version_number; //type: uint32
        YLeaf node_state; //type: BmdMlacpNodeStateEnumEnum
        YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum

        class SystemId; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId> system_id;


}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId : public Entity
{
    public:
        SystemId();
        ~SystemId();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf system_prio; //type: uint16

        class SystemMacAddr; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;


}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr : public Entity
{
    public:
        SystemMacAddr();
        ~SystemMacAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf macaddr; //type: string



}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData : public Entity
{
    public:
        BundleData();
        ~BundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface_key; //type: uint16
        YLeaf media_type; //type: BundleMediaEnum
        YLeaf redundancy_object_id; //type: uint64

        class MlacpBundleData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData> > mlacp_member_data;


}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData : public Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_name; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf aggregator_id; //type: uint16
        YLeaf bundle_state; //type: BmdMlacpBdlStateEnumEnum
        YLeaf port_priority; //type: uint16

        class MacAddress; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress> mac_address;


}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData : public Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port_name; //type: string
        YLeaf interface_handle; //type: string
        YLeaf mlacp_node_id; //type: uint8
        YLeaf port_number; //type: uint16
        YLeaf operational_priority; //type: uint16
        YLeaf configured_priority; //type: uint16
        YLeaf member_state; //type: BmdMlacpMbrStateEnumEnum



}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData


class BundleInformation::MacAllocation : public Entity
{
    public:
        MacAllocation();
        ~MacAllocation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MacAllocationGlobal; //type: BundleInformation::MacAllocation::MacAllocationGlobal

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal> mac_allocation_global;


}; // BundleInformation::MacAllocation


class BundleInformation::MacAllocation::MacAllocationGlobal : public Entity
{
    public:
        MacAllocationGlobal();
        ~MacAllocationGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MacAllocationGlobalItem; //type: BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem> mac_allocation_global_item;


}; // BundleInformation::MacAllocation::MacAllocationGlobal


class BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem : public Entity
{
    public:
        MacAllocationGlobalItem();
        ~MacAllocationGlobalItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MacAddress; //type: BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress> > mac_address;


}; // BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem


class BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress


class BundleInformation::Events : public Entity
{
    public:
        Events();
        ~Events();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsMembers; //type: BundleInformation::Events::EventsMembers
        class EventsBundles; //type: BundleInformation::Events::EventsBundles

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles> events_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers> events_members;


}; // BundleInformation::Events


class BundleInformation::Events::EventsMembers : public Entity
{
    public:
        EventsMembers();
        ~EventsMembers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsMember; //type: BundleInformation::Events::EventsMembers::EventsMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember> > events_member;


}; // BundleInformation::Events::EventsMembers


class BundleInformation::Events::EventsMembers::EventsMember : public Entity
{
    public:
        EventsMember();
        ~EventsMember();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_interface; //type: string

        class EventsMemberItem; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem
        class EventsMemberAncestor; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor> events_member_ancestor;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem> events_member_item;


}; // BundleInformation::Events::EventsMembers::EventsMember


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem : public Entity
{
    public:
        EventsMemberItem();
        ~EventsMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items> > items;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data> data;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor : public Entity
{
    public:
        EventsMemberAncestor();
        ~EventsMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items> > items;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data> data;


}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo


class BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsBundles : public Entity
{
    public:
        EventsBundles();
        ~EventsBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsBundle; //type: BundleInformation::Events::EventsBundles::EventsBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle> > events_bundle;


}; // BundleInformation::Events::EventsBundles


class BundleInformation::Events::EventsBundles::EventsBundle : public Entity
{
    public:
        EventsBundle();
        ~EventsBundle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface; //type: string

        class EventsBundleAncestor; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor
        class EventsBundleItem; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem
        class EventsBundleDescendant; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant
        class EventsBundleChildrenMembers; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor> events_bundle_ancestor;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers> events_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant> events_bundle_descendant;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem> events_bundle_item;


}; // BundleInformation::Events::EventsBundles::EventsBundle


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor : public Entity
{
    public:
        EventsBundleAncestor();
        ~EventsBundleAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items> > items;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem : public Entity
{
    public:
        EventsBundleItem();
        ~EventsBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items> > items;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant : public Entity
{
    public:
        EventsBundleDescendant();
        ~EventsBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsItem; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem> > events_item;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem : public Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items> > items;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers : public Entity
{
    public:
        EventsBundleChildrenMembers();
        ~EventsBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsBundleChildrenMember; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember> > events_bundle_children_member;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember : public Entity
{
    public:
        EventsBundleChildrenMember();
        ~EventsBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_interface; //type: string
        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items> > items;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data> data;


}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo


class BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data


class BundleInformation::EventsBdl : public Entity
{
    public:
        EventsBdl();
        ~EventsBdl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsBdlMembers; //type: BundleInformation::EventsBdl::EventsBdlMembers
        class EventsBdlBundles; //type: BundleInformation::EventsBdl::EventsBdlBundles
        class EventsBdlIccpGroups; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles> events_bdl_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups> events_bdl_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers> events_bdl_members;


}; // BundleInformation::EventsBdl


class BundleInformation::EventsBdl::EventsBdlMembers : public Entity
{
    public:
        EventsBdlMembers();
        ~EventsBdlMembers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsBdlMember; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember> > events_bdl_member;


}; // BundleInformation::EventsBdl::EventsBdlMembers


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember : public Entity
{
    public:
        EventsBdlMember();
        ~EventsBdlMember();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_interface; //type: string

        class EventsBdlMemberAncestor; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor> events_bdl_member_ancestor;


}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor : public Entity
{
    public:
        EventsBdlMemberAncestor();
        ~EventsBdlMemberAncestor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items> > items;


}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo


class BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlBundles : public Entity
{
    public:
        EventsBdlBundles();
        ~EventsBdlBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsBdlBundle; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle> > events_bdl_bundle;


}; // BundleInformation::EventsBdl::EventsBdlBundles


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle : public Entity
{
    public:
        EventsBdlBundle();
        ~EventsBdlBundle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface; //type: string

        class EventsBdlBundleItem; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem> events_bdl_bundle_item;


}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem : public Entity
{
    public:
        EventsBdlBundleItem();
        ~EventsBdlBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items> > items;


}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo


class BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlIccpGroups : public Entity
{
    public:
        EventsBdlIccpGroups();
        ~EventsBdlIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsBdlIccpGroup; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup> > events_bdl_iccp_group;


}; // BundleInformation::EventsBdl::EventsBdlIccpGroups


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup : public Entity
{
    public:
        EventsBdlIccpGroup();
        ~EventsBdlIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group; //type: uint32

        class EventsBdlBundleDescendantIccpGroup; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup> events_bdl_bundle_descendant_iccp_group;


}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup : public Entity
{
    public:
        EventsBdlBundleDescendantIccpGroup();
        ~EventsBdlBundleDescendantIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsItem; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem> > events_item;


}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem : public Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items> > items;


}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data> data;


}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo


class BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::BundleBriefs : public Entity
{
    public:
        BundleBriefs();
        ~BundleBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BundleBrief; //type: BundleInformation::BundleBriefs::BundleBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief> > bundle_brief;


}; // BundleInformation::BundleBriefs


class BundleInformation::BundleBriefs::BundleBrief : public Entity
{
    public:
        BundleBrief();
        ~BundleBrief();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface; //type: string

        class BundleBriefItem; //type: BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem> bundle_brief_item;


}; // BundleInformation::BundleBriefs::BundleBrief


class BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem : public Entity
{
    public:
        BundleBriefItem();
        ~BundleBriefItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class MacAddress; //type: BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress
        class BfdConfig; //type: BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig> > bfd_config;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress> mac_address;


}; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem


class BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress


class BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig : public Entity
{
    public:
        BfdConfig();
        ~BfdConfig();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_status; //type: BmdBfdBdlStateEnum
        YLeaf start_timer; //type: uint32
        YLeaf nbr_unconfig_timer; //type: uint32
        YLeaf pref_multiplier; //type: uint16
        YLeaf pref_min_interval; //type: uint32
        YLeaf pref_echo_min_interval; //type: uint32
        YLeaf fast_detect; //type: boolean
        YLeaf mode_info; //type: uint32

        class DestinationAddress; //type: BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress> destination_address;


}; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig


class BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress : public Entity
{
    public:
        DestinationAddress();
        ~DestinationAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af; //type: BmAfIdEnum
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress


class BundleInformation::EventsMbr : public Entity
{
    public:
        EventsMbr();
        ~EventsMbr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsMbrBundles; //type: BundleInformation::EventsMbr::EventsMbrBundles
        class EventsMbrMembers; //type: BundleInformation::EventsMbr::EventsMbrMembers
        class EventsMbrIccpGroups; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles> events_mbr_bundles;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups> events_mbr_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers> events_mbr_members;


}; // BundleInformation::EventsMbr


class BundleInformation::EventsMbr::EventsMbrBundles : public Entity
{
    public:
        EventsMbrBundles();
        ~EventsMbrBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsMbrBundle; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle> > events_mbr_bundle;


}; // BundleInformation::EventsMbr::EventsMbrBundles


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle : public Entity
{
    public:
        EventsMbrBundle();
        ~EventsMbrBundle();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_interface; //type: string

        class EventsMbrBundleChildrenMembers; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers
        class EventsMbrBundleDescendant; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers> events_mbr_bundle_children_members;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant> events_mbr_bundle_descendant;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers : public Entity
{
    public:
        EventsMbrBundleChildrenMembers();
        ~EventsMbrBundleChildrenMembers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsMbrBundleChildrenMember; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember> > events_mbr_bundle_children_member;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember : public Entity
{
    public:
        EventsMbrBundleChildrenMember();
        ~EventsMbrBundleChildrenMember();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_interface; //type: string
        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items> > items;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant : public Entity
{
    public:
        EventsMbrBundleDescendant();
        ~EventsMbrBundleDescendant();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsItem; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem> > events_item;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem : public Entity
{
    public:
        EventsItem();
        ~EventsItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items> > items;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers : public Entity
{
    public:
        EventsMbrMembers();
        ~EventsMbrMembers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsMbrMember; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember> > events_mbr_member;


}; // BundleInformation::EventsMbr::EventsMbrMembers


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember : public Entity
{
    public:
        EventsMbrMember();
        ~EventsMbrMember();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_interface; //type: string

        class EventsMbrMemberItem; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem> events_mbr_member_item;


}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem : public Entity
{
    public:
        EventsMbrMemberItem();
        ~EventsMbrMemberItem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items> > items;


}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups : public Entity
{
    public:
        EventsMbrIccpGroups();
        ~EventsMbrIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsMbrIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup> > events_mbr_iccp_group;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup : public Entity
{
    public:
        EventsMbrIccpGroup();
        ~EventsMbrIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf iccp_group; //type: uint32

        class EventsMbrBundleChildrenMemberIccpGroups; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups
        class EventsMbrBundleDescendantIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups> events_mbr_bundle_children_member_iccp_groups;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup> events_mbr_bundle_descendant_iccp_group;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups : public Entity
{
    public:
        EventsMbrBundleChildrenMemberIccpGroups();
        ~EventsMbrBundleChildrenMemberIccpGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsMbrBundleChildrenMemberIccpGroup; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup> > events_mbr_bundle_children_member_iccp_group;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup : public Entity
{
    public:
        EventsMbrBundleChildrenMemberIccpGroup();
        ~EventsMbrBundleChildrenMemberIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_interface; //type: string
        YLeaf item_name; //type: string

        class Items; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items> > items;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items : public Entity
{
    public:
        Items();
        ~Items();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf event_type; //type: BmdBagTargetEnum

        class MemberEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo
        class BundleEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo
        class RgEvtInfo; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo> bundle_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo> member_evt_info;
        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo> rg_evt_info;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo : public Entity
{
    public:
        MemberEvtInfo();
        ~MemberEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf member_event_type; //type: BmdBagEventMbrItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo : public Entity
{
    public:
        BundleEvtInfo();
        ~BundleEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bundle_event_type; //type: BmdBagEventBdlItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo : public Entity
{
    public:
        RgEvtInfo();
        ~RgEvtInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rg_event_type; //type: BmdBagEventRgItemEnum
        YLeaf time_stamp; //type: uint64

        class Data; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data

        std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data> data;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data : public Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data_type; //type: BmdBagEventDataEnum
        YLeaf no_data; //type: uint8
        YLeaf error; //type: uint32
        YLeaf string_data; //type: string



}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data


class BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup : public Entity
{
    public:
        EventsMbrBundleDescendantIccpGroup();
        ~EventsMbrBundleDescendantIccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EventsItem; //type: BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem

        std::vector<std::shared_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem> > events_item;


}; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_2_ */

