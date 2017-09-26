#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_2_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_bundlemgr_oper_0.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port : public ydk::Entity
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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System : public ydk::Entity
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
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem : public ydk::Entity
{
    public:
        LacpMemberItem();
        ~LacpMemberItem();

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
        class ActorInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo
        class PartnerInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo
        class AdditionalInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo> actor_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo> additional_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo> partner_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo : public ydk::Entity
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
        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo : public ydk::Entity
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
        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port : public ydk::Entity
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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System : public ydk::Entity
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
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo : public ydk::Entity
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
        class Local; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local
        class Foreign; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign> foreign;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local> local;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign : public ydk::Entity
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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local : public ydk::Entity
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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo : public ydk::Entity
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
        class PortInfo; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo> port_info;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo : public ydk::Entity
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
        class System; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System
        class Port; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port> port;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System> system;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port : public ydk::Entity
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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System : public ydk::Entity
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
        class SystemMacAddr; //type: BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System


class BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr : public ydk::Entity
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

}; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr


class BundleInformation::MacAllocation : public ydk::Entity
{
    public:
        MacAllocation();
        ~MacAllocation();

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

        class MacAllocationGlobal; //type: BundleInformation::MacAllocation::MacAllocationGlobal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal> mac_allocation_global;
        
}; // BundleInformation::MacAllocation


class BundleInformation::MacAllocation::MacAllocationGlobal : public ydk::Entity
{
    public:
        MacAllocationGlobal();
        ~MacAllocationGlobal();

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

        class MacAllocationGlobalItem; //type: BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem> mac_allocation_global_item;
        
}; // BundleInformation::MacAllocation::MacAllocationGlobal


class BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem : public ydk::Entity
{
    public:
        MacAllocationGlobalItem();
        ~MacAllocationGlobalItem();

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

        class MacAddress; //type: BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress> > mac_address;
        
}; // BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem


class BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress : public ydk::Entity
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
        std::string get_absolute_path() const override;

        ydk::YLeaf address; //type: string

}; // BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress


class BundleInformation::Mlacp : public ydk::Entity
{
    public:
        Mlacp();
        ~Mlacp();

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

        class MlacpBundles; //type: BundleInformation::Mlacp::MlacpBundles
        class MlacpIccpGroups; //type: BundleInformation::Mlacp::MlacpIccpGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles> mlacp_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups> mlacp_iccp_groups;
        
}; // BundleInformation::Mlacp


class BundleInformation::Mlacp::MlacpBundles : public ydk::Entity
{
    public:
        MlacpBundles();
        ~MlacpBundles();

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

        class MlacpBundle; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle> > mlacp_bundle;
        
}; // BundleInformation::Mlacp::MlacpBundles


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle : public ydk::Entity
{
    public:
        MlacpBundle();
        ~MlacpBundle();

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
        class MlacpBundleItem; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem> mlacp_bundle_item;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem : public ydk::Entity
{
    public:
        MlacpBundleItem();
        ~MlacpBundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MlacpData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData> > mlacp_data;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData : public ydk::Entity
{
    public:
        MlacpData();
        ~MlacpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpGroupData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData
        class BundleData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData> iccp_group_data;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_interface_key; //type: uint16
        ydk::YLeaf media_type; //type: BundleMedia
        ydk::YLeaf redundancy_object_id; //type: uint64
        class MlacpBundleData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData> > mlacp_member_data;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData : public ydk::Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf aggregator_id; //type: uint16
        ydk::YLeaf bundle_state; //type: BmdMlacpBdlStateEnum
        ydk::YLeaf port_priority; //type: uint16
        class MacAddress; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress : public ydk::Entity
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

}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData : public ydk::Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf operational_priority; //type: uint16
        ydk::YLeaf configured_priority; //type: uint16
        ydk::YLeaf member_state; //type: BmdMlacpMbrStateEnum

}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData : public ydk::Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf singleton; //type: boolean
        ydk::YLeaf connect_timer_running; //type: uint64
        class NodeData; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData> > node_data;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf ldp_id; //type: string
        ydk::YLeaf version_number; //type: uint32
        ydk::YLeaf node_state; //type: BmdMlacpNodeStateEnum
        ydk::YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnum
        class SystemId; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId> system_id;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId : public ydk::Entity
{
    public:
        SystemId();
        ~SystemId();

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
        class SystemMacAddr; //type: BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId


class BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr : public ydk::Entity
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

}; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::Mlacp::MlacpIccpGroups : public ydk::Entity
{
    public:
        MlacpIccpGroups();
        ~MlacpIccpGroups();

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

        class MlacpIccpGroup; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup> > mlacp_iccp_group;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup : public ydk::Entity
{
    public:
        MlacpIccpGroup();
        ~MlacpIccpGroup();

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
        class MlacpIccpGroupItem; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem> mlacp_iccp_group_item;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem : public ydk::Entity
{
    public:
        MlacpIccpGroupItem();
        ~MlacpIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpGroupData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData
        class BundleData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData> iccp_group_data;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_interface_key; //type: uint16
        ydk::YLeaf media_type; //type: BundleMedia
        ydk::YLeaf redundancy_object_id; //type: uint64
        class MlacpBundleData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData> > mlacp_member_data;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData : public ydk::Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf aggregator_id; //type: uint16
        ydk::YLeaf bundle_state; //type: BmdMlacpBdlStateEnum
        ydk::YLeaf port_priority; //type: uint16
        class MacAddress; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress> mac_address;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress : public ydk::Entity
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

}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData : public ydk::Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf operational_priority; //type: uint16
        ydk::YLeaf configured_priority; //type: uint16
        ydk::YLeaf member_state; //type: BmdMlacpMbrStateEnum

}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData : public ydk::Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf singleton; //type: boolean
        ydk::YLeaf connect_timer_running; //type: uint64
        class NodeData; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData> > node_data;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf ldp_id; //type: string
        ydk::YLeaf version_number; //type: uint32
        ydk::YLeaf node_state; //type: BmdMlacpNodeStateEnum
        ydk::YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnum
        class SystemId; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId> system_id;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId : public ydk::Entity
{
    public:
        SystemId();
        ~SystemId();

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
        class SystemMacAddr; //type: BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId


class BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr : public ydk::Entity
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

}; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::MlacpBrief : public ydk::Entity
{
    public:
        MlacpBrief();
        ~MlacpBrief();

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

        class MlacpBundleBriefs; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs
        class MlacpBriefIccpGroups; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups> mlacp_brief_iccp_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs> mlacp_bundle_briefs;
        
}; // BundleInformation::MlacpBrief


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups : public ydk::Entity
{
    public:
        MlacpBriefIccpGroups();
        ~MlacpBriefIccpGroups();

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

        class MlacpBriefIccpGroup; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup> > mlacp_brief_iccp_group;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup : public ydk::Entity
{
    public:
        MlacpBriefIccpGroup();
        ~MlacpBriefIccpGroup();

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
        class MlacpBriefIccpGroupItem; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem> mlacp_brief_iccp_group_item;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem : public ydk::Entity
{
    public:
        MlacpBriefIccpGroupItem();
        ~MlacpBriefIccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpGroupData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData
        class BundleData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData> iccp_group_data;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_interface_key; //type: uint16
        ydk::YLeaf media_type; //type: BundleMedia
        ydk::YLeaf redundancy_object_id; //type: uint64
        class MlacpBundleData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData> > mlacp_member_data;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData : public ydk::Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf aggregator_id; //type: uint16
        ydk::YLeaf bundle_state; //type: BmdMlacpBdlStateEnum
        ydk::YLeaf port_priority; //type: uint16
        class MacAddress; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress> mac_address;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress : public ydk::Entity
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

}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData : public ydk::Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf operational_priority; //type: uint16
        ydk::YLeaf configured_priority; //type: uint16
        ydk::YLeaf member_state; //type: BmdMlacpMbrStateEnum

}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData : public ydk::Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf singleton; //type: boolean
        ydk::YLeaf connect_timer_running; //type: uint64
        class NodeData; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData> > node_data;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf ldp_id; //type: string
        ydk::YLeaf version_number; //type: uint32
        ydk::YLeaf node_state; //type: BmdMlacpNodeStateEnum
        ydk::YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnum
        class SystemId; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId> system_id;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId : public ydk::Entity
{
    public:
        SystemId();
        ~SystemId();

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
        class SystemMacAddr; //type: BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId


class BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr : public ydk::Entity
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

}; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::MlacpBrief::MlacpBundleBriefs : public ydk::Entity
{
    public:
        MlacpBundleBriefs();
        ~MlacpBundleBriefs();

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

        class MlacpBundleBrief; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief> > mlacp_bundle_brief;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief : public ydk::Entity
{
    public:
        MlacpBundleBrief();
        ~MlacpBundleBrief();

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
        class MlacpBundleItemBrief; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief> mlacp_bundle_item_brief;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief : public ydk::Entity
{
    public:
        MlacpBundleItemBrief();
        ~MlacpBundleItemBrief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MlacpData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData> > mlacp_data;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData : public ydk::Entity
{
    public:
        MlacpData();
        ~MlacpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpGroupData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData
        class BundleData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData> iccp_group_data;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_interface_key; //type: uint16
        ydk::YLeaf media_type; //type: BundleMedia
        ydk::YLeaf redundancy_object_id; //type: uint64
        class MlacpBundleData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData
        class MlacpMemberData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData> > mlacp_bundle_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData> > mlacp_member_data;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData : public ydk::Entity
{
    public:
        MlacpBundleData();
        ~MlacpBundleData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bundle_name; //type: string
        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf aggregator_id; //type: uint16
        ydk::YLeaf bundle_state; //type: BmdMlacpBdlStateEnum
        ydk::YLeaf port_priority; //type: uint16
        class MacAddress; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress> mac_address;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress : public ydk::Entity
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

}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData : public ydk::Entity
{
    public:
        MlacpMemberData();
        ~MlacpMemberData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_name; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf operational_priority; //type: uint16
        ydk::YLeaf configured_priority; //type: uint16
        ydk::YLeaf member_state; //type: BmdMlacpMbrStateEnum

}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData : public ydk::Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        ydk::YLeaf singleton; //type: boolean
        ydk::YLeaf connect_timer_running; //type: uint64
        class NodeData; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData> > node_data;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mlacp_node_id; //type: uint8
        ydk::YLeaf ldp_id; //type: string
        ydk::YLeaf version_number; //type: uint32
        ydk::YLeaf node_state; //type: BmdMlacpNodeStateEnum
        ydk::YLeaf iccp_group_state; //type: BmdMlacpNodeSyncEnum
        class SystemId; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId> system_id;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId : public ydk::Entity
{
    public:
        SystemId();
        ~SystemId();

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
        class SystemMacAddr; //type: BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;
        
}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId


class BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr : public ydk::Entity
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

}; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr


class BundleInformation::MlacpBundleCounters : public ydk::Entity
{
    public:
        MlacpBundleCounters();
        ~MlacpBundleCounters();

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

        class IccpGroups; //type: BundleInformation::MlacpBundleCounters::IccpGroups
        class Bundles; //type: BundleInformation::MlacpBundleCounters::Bundles
        class Nodes; //type: BundleInformation::MlacpBundleCounters::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles> bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups> iccp_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes> nodes;
        
}; // BundleInformation::MlacpBundleCounters


class BundleInformation::MlacpBundleCounters::Bundles : public ydk::Entity
{
    public:
        Bundles();
        ~Bundles();

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

        class Bundle; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle> > bundle;
        
}; // BundleInformation::MlacpBundleCounters::Bundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle : public ydk::Entity
{
    public:
        Bundle();
        ~Bundle();

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
        class BundleItem; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem> bundle_item;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem : public ydk::Entity
{
    public:
        BundleItem();
        ~BundleItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpGroup; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup : public ydk::Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData> > node_data;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData : public ydk::Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeData_; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_ : public ydk::Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: uint32
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups : public ydk::Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

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

        class IccpGroup; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup : public ydk::Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

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
        class IccpGroupItem; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem : public ydk::Entity
{
    public:
        IccpGroupItem();
        ~IccpGroupItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData> > node_data;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData : public ydk::Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeData_; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_ : public ydk::Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: uint32
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: BundleInformation::MlacpBundleCounters::Nodes::Node

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node> > node;
        
}; // BundleInformation::MlacpBundleCounters::Nodes


class BundleInformation::MlacpBundleCounters::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node; //type: string
        class NodeItem; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem> node_item;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem : public ydk::Entity
{
    public:
        NodeItem();
        ~NodeItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IccpGroupData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData
        class NodeData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData> iccp_group_data;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData> > node_data;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData : public ydk::Entity
{
    public:
        IccpGroupData();
        ~IccpGroupData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        class MlacpSyncRequestsOnAllLocalPorts; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts
        class MlacpSyncRequestsOnAllLocalBundles; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalBundles();
        ~MlacpSyncRequestsOnAllLocalBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllLocalPorts();
        ~MlacpSyncRequestsOnAllLocalPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NodeData_; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_
        class BundleData; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData> > bundle_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_> node_data;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData : public ydk::Entity
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

        ydk::YLeaf bundle_name; //type: string
        class MlacpTlvCounters; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters : public ydk::Entity
{
    public:
        MlacpTlvCounters();
        ~MlacpTlvCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config_tl_vs; //type: uint32
        ydk::YLeaf sent_state_tl_vs; //type: uint32
        ydk::YLeaf sent_priority_tl_vs; //type: uint32
        ydk::YLeaf received_priority_tl_vs; //type: uint32
        ydk::YLeaf received_nak_tl_vs; //type: uint32
        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_ : public ydk::Entity
{
    public:
        NodeData_();
        ~NodeData_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_id; //type: uint32
        class MlacpSyncRequestsOnAllForeignPorts; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts
        class MlacpSyncRequestsOnAllForeignBundles; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignBundles();
        ~MlacpSyncRequestsOnAllForeignBundles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts : public ydk::Entity
{
    public:
        MlacpSyncRequestsOnAllForeignPorts();
        ~MlacpSyncRequestsOnAllForeignPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        class ReceivedSyncRequests; //type: BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;
        
}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


class BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests : public ydk::Entity
{
    public:
        ReceivedSyncRequests();
        ~ReceivedSyncRequests();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf all_syncs; //type: uint32
        ydk::YLeaf config_syncs; //type: uint32
        ydk::YLeaf state_syncs; //type: uint32

}; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


class BundleInformation::MlacpIccpGroupCounters : public ydk::Entity
{
    public:
        MlacpIccpGroupCounters();
        ~MlacpIccpGroupCounters();

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

        class IccpGroups; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups> iccp_groups;
        
}; // BundleInformation::MlacpIccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups : public ydk::Entity
{
    public:
        IccpGroups();
        ~IccpGroups();

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

        class IccpGroup; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup> > iccp_group;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup : public ydk::Entity
{
    public:
        IccpGroup();
        ~IccpGroup();

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
        class IccpGroupAncestorBundle; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle
        class IccpGroupAncestorMember; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember
        class IccpGroupAncestorNode; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode
        class IccpGroupItem; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle> iccp_group_ancestor_bundle;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember> iccp_group_ancestor_member;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode> iccp_group_ancestor_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle : public ydk::Entity
{
    public:
        IccpGroupAncestorBundle();
        ~IccpGroupAncestorBundle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters : public ydk::Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection> connection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_connects; //type: uint32
        ydk::YLeaf received_connects; //type: uint32
        ydk::YLeaf iccp_invalid_connects; //type: uint32
        ydk::YLeaf iccp_config_connect_errors; //type: uint32
        ydk::YLeaf iccp_count_connect_errors; //type: uint32
        ydk::YLeaf sent_wrong_versions; //type: uint32
        ydk::YLeaf received_wrong_versions; //type: uint32
        ydk::YLeaf sent_disconnects; //type: uint32
        ydk::YLeaf received_disconnects; //type: uint32
        ydk::YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents : public ydk::Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_up; //type: uint32
        ydk::YLeaf transport_down; //type: uint32
        ydk::YLeaf transport_unavailable; //type: uint32
        ydk::YLeaf configured_set; //type: uint32
        ydk::YLeaf configured_clear; //type: uint32
        ydk::YLeaf reachability_set; //type: uint32
        ydk::YLeaf reachability_cleared; //type: uint32
        ydk::YLeaf member_status_up; //type: uint32
        ydk::YLeaf member_status_down; //type: uint32
        ydk::YLeaf pe_isolated; //type: uint32
        ydk::YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages : public ydk::Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf sent_buffer_messages; //type: uint32
        ydk::YLeaf received_messages; //type: uint32
        ydk::YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs : public ydk::Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incorrect_length; //type: uint32
        ydk::YLeaf invalid_type; //type: uint32
        ydk::YLeaf invalid_data; //type: uint32
        ydk::YLeaf unknown_bundle; //type: uint32
        ydk::YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs : public ydk::Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config; //type: uint32
        ydk::YLeaf received_config; //type: uint32
        ydk::YLeaf sent_state; //type: uint32
        ydk::YLeaf received_state; //type: uint32
        ydk::YLeaf sent_na_ks; //type: uint32
        ydk::YLeaf received_na_ks; //type: uint32
        ydk::YLeaf sent_sync_requests; //type: uint32
        ydk::YLeaf received_sync_requests; //type: uint32
        ydk::YLeaf sent_state_sync_requests; //type: uint32
        ydk::YLeaf received_state_sync_requests; //type: uint32
        ydk::YLeaf sent_config_sync_requests; //type: uint32
        ydk::YLeaf received_config_sync_requests; //type: uint32
        ydk::YLeaf sent_solicited_sync_data; //type: uint32
        ydk::YLeaf received_solicited_sync_data; //type: uint32
        ydk::YLeaf sent_unsolicited_sync_data; //type: uint32
        ydk::YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember : public ydk::Entity
{
    public:
        IccpGroupAncestorMember();
        ~IccpGroupAncestorMember();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters : public ydk::Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection> connection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection : public ydk::Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_connects; //type: uint32
        ydk::YLeaf received_connects; //type: uint32
        ydk::YLeaf iccp_invalid_connects; //type: uint32
        ydk::YLeaf iccp_config_connect_errors; //type: uint32
        ydk::YLeaf iccp_count_connect_errors; //type: uint32
        ydk::YLeaf sent_wrong_versions; //type: uint32
        ydk::YLeaf received_wrong_versions; //type: uint32
        ydk::YLeaf sent_disconnects; //type: uint32
        ydk::YLeaf received_disconnects; //type: uint32
        ydk::YLeaf iccp_invalid_disconnects; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents : public ydk::Entity
{
    public:
        IccpEvents();
        ~IccpEvents();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_up; //type: uint32
        ydk::YLeaf transport_down; //type: uint32
        ydk::YLeaf transport_unavailable; //type: uint32
        ydk::YLeaf configured_set; //type: uint32
        ydk::YLeaf configured_clear; //type: uint32
        ydk::YLeaf reachability_set; //type: uint32
        ydk::YLeaf reachability_cleared; //type: uint32
        ydk::YLeaf member_status_up; //type: uint32
        ydk::YLeaf member_status_down; //type: uint32
        ydk::YLeaf pe_isolated; //type: uint32
        ydk::YLeaf pe_isolated_clear; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages : public ydk::Entity
{
    public:
        IccpMessages();
        ~IccpMessages();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_messages; //type: uint32
        ydk::YLeaf sent_buffer_messages; //type: uint32
        ydk::YLeaf received_messages; //type: uint32
        ydk::YLeaf transmission_errors; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs : public ydk::Entity
{
    public:
        InvalidTlVs();
        ~InvalidTlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incorrect_length; //type: uint32
        ydk::YLeaf invalid_type; //type: uint32
        ydk::YLeaf invalid_data; //type: uint32
        ydk::YLeaf unknown_bundle; //type: uint32
        ydk::YLeaf unknown_port; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs : public ydk::Entity
{
    public:
        TlVs();
        ~TlVs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sent_config; //type: uint32
        ydk::YLeaf received_config; //type: uint32
        ydk::YLeaf sent_state; //type: uint32
        ydk::YLeaf received_state; //type: uint32
        ydk::YLeaf sent_na_ks; //type: uint32
        ydk::YLeaf received_na_ks; //type: uint32
        ydk::YLeaf sent_sync_requests; //type: uint32
        ydk::YLeaf received_sync_requests; //type: uint32
        ydk::YLeaf sent_state_sync_requests; //type: uint32
        ydk::YLeaf received_state_sync_requests; //type: uint32
        ydk::YLeaf sent_config_sync_requests; //type: uint32
        ydk::YLeaf received_config_sync_requests; //type: uint32
        ydk::YLeaf sent_solicited_sync_data; //type: uint32
        ydk::YLeaf received_solicited_sync_data; //type: uint32
        ydk::YLeaf sent_unsolicited_sync_data; //type: uint32
        ydk::YLeaf received_unsolicited_sync_data; //type: uint32

}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode : public ydk::Entity
{
    public:
        IccpGroupAncestorNode();
        ~IccpGroupAncestorNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group_id; //type: uint32
        class IccpGroupCounters; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters> iccp_group_counters;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode


class BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters : public ydk::Entity
{
    public:
        IccpGroupCounters();
        ~IccpGroupCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf last_time_cleared; //type: uint64
        ydk::YLeaf time_since_cleared; //type: uint64
        ydk::YLeaf last_unexpected_event; //type: uint64
        class Connection; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection
        class TlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs
        class InvalidTlVs; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs
        class IccpMessages; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages
        class IccpEvents; //type: BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection> connection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents> iccp_events;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages> iccp_messages;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs> tl_vs;
        
}; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_2_ */

