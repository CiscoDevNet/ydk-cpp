
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_2.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_bundlemgr_oper {

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_number.yfilter)
	|| ydk::is_set(link_priority.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-number" || name == "link-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::LacpMemberItem()
    :
    actor_churn_state{YType::enumeration, "actor-churn-state"},
    attached_aggregator_id{YType::uint32, "attached-aggregator-id"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    mux_state{YType::enumeration, "mux-state"},
    partner_churn_state{YType::enumeration, "partner-churn-state"},
    period_state{YType::enumeration, "period-state"},
    receive_machine_state{YType::enumeration, "receive-machine-state"},
    selected_aggregator_id{YType::uint32, "selected-aggregator-id"},
    selection_state{YType::enumeration, "selection-state"}
    	,
    actor_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo>())
	,additional_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo>())
	,partner_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo>())
{
    actor_info->parent = this;
    additional_info->parent = this;
    partner_info->parent = this;

    yang_name = "lacp-member-item"; yang_parent_name = "lacp-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::~LacpMemberItem()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::has_data() const
{
    return actor_churn_state.is_set
	|| attached_aggregator_id.is_set
	|| iccp_group_id.is_set
	|| mux_state.is_set
	|| partner_churn_state.is_set
	|| period_state.is_set
	|| receive_machine_state.is_set
	|| selected_aggregator_id.is_set
	|| selection_state.is_set
	|| (actor_info !=  nullptr && actor_info->has_data())
	|| (additional_info !=  nullptr && additional_info->has_data())
	|| (partner_info !=  nullptr && partner_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actor_churn_state.yfilter)
	|| ydk::is_set(attached_aggregator_id.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(mux_state.yfilter)
	|| ydk::is_set(partner_churn_state.yfilter)
	|| ydk::is_set(period_state.yfilter)
	|| ydk::is_set(receive_machine_state.yfilter)
	|| ydk::is_set(selected_aggregator_id.yfilter)
	|| ydk::is_set(selection_state.yfilter)
	|| (actor_info !=  nullptr && actor_info->has_operation())
	|| (additional_info !=  nullptr && additional_info->has_operation())
	|| (partner_info !=  nullptr && partner_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lacp-member-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actor_churn_state.is_set || is_set(actor_churn_state.yfilter)) leaf_name_data.push_back(actor_churn_state.get_name_leafdata());
    if (attached_aggregator_id.is_set || is_set(attached_aggregator_id.yfilter)) leaf_name_data.push_back(attached_aggregator_id.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (mux_state.is_set || is_set(mux_state.yfilter)) leaf_name_data.push_back(mux_state.get_name_leafdata());
    if (partner_churn_state.is_set || is_set(partner_churn_state.yfilter)) leaf_name_data.push_back(partner_churn_state.get_name_leafdata());
    if (period_state.is_set || is_set(period_state.yfilter)) leaf_name_data.push_back(period_state.get_name_leafdata());
    if (receive_machine_state.is_set || is_set(receive_machine_state.yfilter)) leaf_name_data.push_back(receive_machine_state.get_name_leafdata());
    if (selected_aggregator_id.is_set || is_set(selected_aggregator_id.yfilter)) leaf_name_data.push_back(selected_aggregator_id.get_name_leafdata());
    if (selection_state.is_set || is_set(selection_state.yfilter)) leaf_name_data.push_back(selection_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actor-info")
    {
        if(actor_info == nullptr)
        {
            actor_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo>();
        }
        return actor_info;
    }

    if(child_yang_name == "additional-info")
    {
        if(additional_info == nullptr)
        {
            additional_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo>();
        }
        return additional_info;
    }

    if(child_yang_name == "partner-info")
    {
        if(partner_info == nullptr)
        {
            partner_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo>();
        }
        return partner_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actor_info != nullptr)
    {
        children["actor-info"] = actor_info;
    }

    if(additional_info != nullptr)
    {
        children["additional-info"] = additional_info;
    }

    if(partner_info != nullptr)
    {
        children["partner-info"] = partner_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state = value;
        actor_churn_state.value_namespace = name_space;
        actor_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id = value;
        attached_aggregator_id.value_namespace = name_space;
        attached_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mux-state")
    {
        mux_state = value;
        mux_state.value_namespace = name_space;
        mux_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state = value;
        partner_churn_state.value_namespace = name_space;
        partner_churn_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-state")
    {
        period_state = value;
        period_state.value_namespace = name_space;
        period_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state = value;
        receive_machine_state.value_namespace = name_space;
        receive_machine_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id = value;
        selected_aggregator_id.value_namespace = name_space;
        selected_aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selection-state")
    {
        selection_state = value;
        selection_state.value_namespace = name_space;
        selection_state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actor-churn-state")
    {
        actor_churn_state.yfilter = yfilter;
    }
    if(value_path == "attached-aggregator-id")
    {
        attached_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "mux-state")
    {
        mux_state.yfilter = yfilter;
    }
    if(value_path == "partner-churn-state")
    {
        partner_churn_state.yfilter = yfilter;
    }
    if(value_path == "period-state")
    {
        period_state.yfilter = yfilter;
    }
    if(value_path == "receive-machine-state")
    {
        receive_machine_state.yfilter = yfilter;
    }
    if(value_path == "selected-aggregator-id")
    {
        selected_aggregator_id.yfilter = yfilter;
    }
    if(value_path == "selection-state")
    {
        selection_state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actor-info" || name == "additional-info" || name == "partner-info" || name == "actor-churn-state" || name == "attached-aggregator-id" || name == "iccp-group-id" || name == "mux-state" || name == "partner-churn-state" || name == "period-state" || name == "receive-machine-state" || name == "selected-aggregator-id" || name == "selection-state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::ActorInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "actor-info"; yang_parent_name = "lacp-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::~ActorInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actor-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System>())
{
    port->parent = this;
    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "actor-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "system" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_number.yfilter)
	|| ydk::is_set(link_priority.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-number" || name == "link-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::AdditionalInfo()
    :
    mbr_type{YType::enumeration, "mbr-type"}
    	,
    foreign(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign>())
	,local(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local>())
{
    foreign->parent = this;
    local->parent = this;

    yang_name = "additional-info"; yang_parent_name = "lacp-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::~AdditionalInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::has_data() const
{
    return mbr_type.is_set
	|| (foreign !=  nullptr && foreign->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mbr_type.yfilter)
	|| (foreign !=  nullptr && foreign->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mbr_type.is_set || is_set(mbr_type.yfilter)) leaf_name_data.push_back(mbr_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "foreign")
    {
        if(foreign == nullptr)
        {
            foreign = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign>();
        }
        return foreign;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(foreign != nullptr)
    {
        children["foreign"] = foreign;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mbr-type")
    {
        mbr_type = value;
        mbr_type.value_namespace = name_space;
        mbr_type.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mbr-type")
    {
        mbr_type.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "foreign" || name == "local" || name == "mbr-type")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::Foreign()
    :
    member_name{YType::str, "member-name"},
    peer_address{YType::str, "peer-address"}
{

    yang_name = "foreign"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::~Foreign()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::has_data() const
{
    return member_name.is_set
	|| peer_address.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(member_name.yfilter)
	|| ydk::is_set(peer_address.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (member_name.is_set || is_set(member_name.yfilter)) leaf_name_data.push_back(member_name.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "member-name")
    {
        member_name = value;
        member_name.value_namespace = name_space;
        member_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "member-name")
    {
        member_name.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-name" || name == "peer-address")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::Local()
    :
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "local"; yang_parent_name = "additional-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::~Local()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::has_data() const
{
    return interface_handle.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-handle")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PartnerInfo()
    :
    tx_period{YType::uint32, "tx-period"}
    	,
    port_info(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo>())
{
    port_info->parent = this;

    yang_name = "partner-info"; yang_parent_name = "lacp-member-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::~PartnerInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::has_data() const
{
    return tx_period.is_set
	|| (port_info !=  nullptr && port_info->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_period.yfilter)
	|| (port_info !=  nullptr && port_info->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "partner-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_period.is_set || is_set(tx_period.yfilter)) leaf_name_data.push_back(tx_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-info")
    {
        if(port_info == nullptr)
        {
            port_info = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo>();
        }
        return port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_info != nullptr)
    {
        children["port-info"] = port_info;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-period")
    {
        tx_period = value;
        tx_period.value_namespace = name_space;
        tx_period.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-period")
    {
        tx_period.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-info" || name == "tx-period")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::PortInfo()
    :
    key{YType::uint16, "key"},
    state{YType::uint8, "state"}
    	,
    port(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port>())
	,system(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System>())
{
    port->parent = this;
    system->parent = this;

    yang_name = "port-info"; yang_parent_name = "partner-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::~PortInfo()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::has_data() const
{
    return key.is_set
	|| state.is_set
	|| (port !=  nullptr && port->has_data())
	|| (system !=  nullptr && system->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (system !=  nullptr && system->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port>();
        }
        return port;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System>();
        }
        return system;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "system" || name == "key" || name == "state")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::Port()
    :
    link_number{YType::uint16, "link-number"},
    link_priority{YType::uint16, "link-priority"}
{

    yang_name = "port"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::~Port()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::has_data() const
{
    return link_number.is_set
	|| link_priority.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_number.yfilter)
	|| ydk::is_set(link_priority.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_number.is_set || is_set(link_number.yfilter)) leaf_name_data.push_back(link_number.get_name_leafdata());
    if (link_priority.is_set || is_set(link_priority.yfilter)) leaf_name_data.push_back(link_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-number")
    {
        link_number = value;
        link_number.value_namespace = name_space;
        link_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-priority")
    {
        link_priority = value;
        link_priority.value_namespace = name_space;
        link_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-number")
    {
        link_number.yfilter = yfilter;
    }
    if(value_path == "link-priority")
    {
        link_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-number" || name == "link-priority")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::System()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system"; yang_parent_name = "port-info"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::~System()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::MacAllocation::MacAllocation()
    :
    mac_allocation_global(std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal>())
{
    mac_allocation_global->parent = this;

    yang_name = "mac-allocation"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MacAllocation::~MacAllocation()
{
}

bool BundleInformation::MacAllocation::has_data() const
{
    return (mac_allocation_global !=  nullptr && mac_allocation_global->has_data());
}

bool BundleInformation::MacAllocation::has_operation() const
{
    return is_set(yfilter)
	|| (mac_allocation_global !=  nullptr && mac_allocation_global->has_operation());
}

std::string BundleInformation::MacAllocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MacAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MacAllocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MacAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-allocation-global")
    {
        if(mac_allocation_global == nullptr)
        {
            mac_allocation_global = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal>();
        }
        return mac_allocation_global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MacAllocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_allocation_global != nullptr)
    {
        children["mac-allocation-global"] = mac_allocation_global;
    }

    return children;
}

void BundleInformation::MacAllocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MacAllocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MacAllocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-allocation-global")
        return true;
    return false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobal()
    :
    mac_allocation_global_item(std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem>())
{
    mac_allocation_global_item->parent = this;

    yang_name = "mac-allocation-global"; yang_parent_name = "mac-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::~MacAllocationGlobal()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::has_data() const
{
    return (mac_allocation_global_item !=  nullptr && mac_allocation_global_item->has_data());
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::has_operation() const
{
    return is_set(yfilter)
	|| (mac_allocation_global_item !=  nullptr && mac_allocation_global_item->has_operation());
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MacAllocation::MacAllocationGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MacAllocation::MacAllocationGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-allocation-global-item")
    {
        if(mac_allocation_global_item == nullptr)
        {
            mac_allocation_global_item = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem>();
        }
        return mac_allocation_global_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_allocation_global_item != nullptr)
    {
        children["mac-allocation-global-item"] = mac_allocation_global_item;
    }

    return children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MacAllocation::MacAllocationGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-allocation-global-item")
        return true;
    return false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAllocationGlobalItem()
{

    yang_name = "mac-allocation-global-item"; yang_parent_name = "mac-allocation-global"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::~MacAllocationGlobalItem()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::has_data() const
{
    for (std::size_t index=0; index<mac_address.size(); index++)
    {
        if(mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::has_operation() const
{
    for (std::size_t index=0; index<mac_address.size(); index++)
    {
        if(mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/mac-allocation-global/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-allocation-global-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        for(auto const & c : mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress>();
        c->parent = this;
        mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mac-allocation-global-item"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::~MacAddress()
{
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mac-allocation/mac-allocation-global/mac-allocation-global-item/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Mlacp::Mlacp()
    :
    mlacp_bundles(std::make_shared<BundleInformation::Mlacp::MlacpBundles>())
	,mlacp_iccp_groups(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups>())
{
    mlacp_bundles->parent = this;
    mlacp_iccp_groups->parent = this;

    yang_name = "mlacp"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Mlacp::~Mlacp()
{
}

bool BundleInformation::Mlacp::has_data() const
{
    return (mlacp_bundles !=  nullptr && mlacp_bundles->has_data())
	|| (mlacp_iccp_groups !=  nullptr && mlacp_iccp_groups->has_data());
}

bool BundleInformation::Mlacp::has_operation() const
{
    return is_set(yfilter)
	|| (mlacp_bundles !=  nullptr && mlacp_bundles->has_operation())
	|| (mlacp_iccp_groups !=  nullptr && mlacp_iccp_groups->has_operation());
}

std::string BundleInformation::Mlacp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundles")
    {
        if(mlacp_bundles == nullptr)
        {
            mlacp_bundles = std::make_shared<BundleInformation::Mlacp::MlacpBundles>();
        }
        return mlacp_bundles;
    }

    if(child_yang_name == "mlacp-iccp-groups")
    {
        if(mlacp_iccp_groups == nullptr)
        {
            mlacp_iccp_groups = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups>();
        }
        return mlacp_iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_bundles != nullptr)
    {
        children["mlacp-bundles"] = mlacp_bundles;
    }

    if(mlacp_iccp_groups != nullptr)
    {
        children["mlacp-iccp-groups"] = mlacp_iccp_groups;
    }

    return children;
}

void BundleInformation::Mlacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundles" || name == "mlacp-iccp-groups")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundles()
{

    yang_name = "mlacp-bundles"; yang_parent_name = "mlacp"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Mlacp::MlacpBundles::~MlacpBundles()
{
}

bool BundleInformation::Mlacp::MlacpBundles::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle.size(); index++)
    {
        if(mlacp_bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpBundles::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle.size(); index++)
    {
        if(mlacp_bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::MlacpBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle")
    {
        for(auto const & c : mlacp_bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle>();
        c->parent = this;
        mlacp_bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    mlacp_bundle_item(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem>())
{
    mlacp_bundle_item->parent = this;

    yang_name = "mlacp-bundle"; yang_parent_name = "mlacp-bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::~MlacpBundle()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::has_data() const
{
    return bundle_interface.is_set
	|| (mlacp_bundle_item !=  nullptr && mlacp_bundle_item->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (mlacp_bundle_item !=  nullptr && mlacp_bundle_item->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/mlacp-bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-item")
    {
        if(mlacp_bundle_item == nullptr)
        {
            mlacp_bundle_item = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem>();
        }
        return mlacp_bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_bundle_item != nullptr)
    {
        children["mlacp-bundle-item"] = mlacp_bundle_item;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpBundleItem()
{

    yang_name = "mlacp-bundle-item"; yang_parent_name = "mlacp-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::~MlacpBundleItem()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::has_data() const
{
    for (std::size_t index=0; index<mlacp_data.size(); index++)
    {
        if(mlacp_data[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::has_operation() const
{
    for (std::size_t index=0; index<mlacp_data.size(); index++)
    {
        if(mlacp_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-data")
    {
        for(auto const & c : mlacp_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData>();
        c->parent = this;
        mlacp_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-data")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::MlacpData()
    :
    iccp_group_data(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData>())
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-data"; yang_parent_name = "mlacp-bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::~MlacpData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData>();
        }
        return iccp_group_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "iccp-group-data")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
{

    yang_name = "bundle-data"; yang_parent_name = "mlacp-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::~BundleData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_key.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.yfilter)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        for(auto const & c : mlacp_bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        for(auto const & c : mlacp_member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mlacp_member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
        bundle_interface_key.value_namespace = name_space;
        bundle_interface_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-data" || name == "mlacp-member-data" || name == "bundle-interface-key" || name == "media-type" || name == "redundancy-object-id")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MlacpBundleData()
    :
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_name{YType::str, "bundle-name"},
    bundle_state{YType::enumeration, "bundle-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_priority{YType::uint16, "port-priority"}
    	,
    mac_address(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::has_data() const
{
    return aggregator_id.is_set
	|| bundle_name.is_set
	|| bundle_state.is_set
	|| mlacp_node_id.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregator_id.yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_id.is_set || is_set(aggregator_id.yfilter)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
        aggregator_id.value_namespace = name_space;
        aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id.yfilter = yfilter;
    }
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "aggregator-id" || name == "bundle-name" || name == "bundle-state" || name == "mlacp-node-id" || name == "port-priority")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::MlacpMemberData()
    :
    configured_priority{YType::uint16, "configured-priority"},
    interface_handle{YType::str, "interface-handle"},
    member_state{YType::enumeration, "member-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    operational_priority{YType::uint16, "operational-priority"},
    port_name{YType::str, "port-name"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::has_data() const
{
    return configured_priority.is_set
	|| interface_handle.is_set
	|| member_state.is_set
	|| mlacp_node_id.is_set
	|| operational_priority.is_set
	|| port_name.is_set
	|| port_number.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-priority" || name == "interface-handle" || name == "member-state" || name == "mlacp-node-id" || name == "operational-priority" || name == "port-name" || name == "port-number")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::IccpGroupData()
    :
    connect_timer_running{YType::uint64, "connect-timer-running"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"}
{

    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return connect_timer_running.is_set
	|| iccp_group_id.is_set
	|| singleton.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(connect_timer_running.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(singleton.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timer_running.is_set || is_set(connect_timer_running.yfilter)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
        connect_timer_running.value_namespace = name_space;
        connect_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "connect-timer-running" || name == "iccp-group-id" || name == "singleton")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::NodeData()
    :
    iccp_group_state{YType::enumeration, "iccp-group-state"},
    ldp_id{YType::str, "ldp-id"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    node_state{YType::enumeration, "node-state"},
    version_number{YType::uint32, "version-number"}
    	,
    system_id(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::has_data() const
{
    return iccp_group_state.is_set
	|| ldp_id.is_set
	|| mlacp_node_id.is_set
	|| node_state.is_set
	|| version_number.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_state.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_state.is_set || is_set(iccp_group_state.yfilter)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
        iccp_group_state.value_namespace = name_space;
        iccp_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "iccp-group-state" || name == "ldp-id" || name == "mlacp-node-id" || name == "node-state" || name == "version-number")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroups()
{

    yang_name = "mlacp-iccp-groups"; yang_parent_name = "mlacp"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Mlacp::MlacpIccpGroups::~MlacpIccpGroups()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::has_data() const
{
    for (std::size_t index=0; index<mlacp_iccp_group.size(); index++)
    {
        if(mlacp_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<mlacp_iccp_group.size(); index++)
    {
        if(mlacp_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-iccp-group")
    {
        for(auto const & c : mlacp_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup>();
        c->parent = this;
        mlacp_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-iccp-group")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    mlacp_iccp_group_item(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem>())
{
    mlacp_iccp_group_item->parent = this;

    yang_name = "mlacp-iccp-group"; yang_parent_name = "mlacp-iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::~MlacpIccpGroup()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (mlacp_iccp_group_item !=  nullptr && mlacp_iccp_group_item->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (mlacp_iccp_group_item !=  nullptr && mlacp_iccp_group_item->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp/mlacp-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-iccp-group-item")
    {
        if(mlacp_iccp_group_item == nullptr)
        {
            mlacp_iccp_group_item = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem>();
        }
        return mlacp_iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_iccp_group_item != nullptr)
    {
        children["mlacp-iccp-group-item"] = mlacp_iccp_group_item;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::MlacpIccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData>())
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-iccp-group-item"; yang_parent_name = "mlacp-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::~MlacpIccpGroupItem()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "iccp-group-data")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
{

    yang_name = "bundle-data"; yang_parent_name = "mlacp-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::~BundleData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_key.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.yfilter)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        for(auto const & c : mlacp_bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        for(auto const & c : mlacp_member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mlacp_member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
        bundle_interface_key.value_namespace = name_space;
        bundle_interface_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-data" || name == "mlacp-member-data" || name == "bundle-interface-key" || name == "media-type" || name == "redundancy-object-id")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MlacpBundleData()
    :
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_name{YType::str, "bundle-name"},
    bundle_state{YType::enumeration, "bundle-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_priority{YType::uint16, "port-priority"}
    	,
    mac_address(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::has_data() const
{
    return aggregator_id.is_set
	|| bundle_name.is_set
	|| bundle_state.is_set
	|| mlacp_node_id.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregator_id.yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_id.is_set || is_set(aggregator_id.yfilter)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
        aggregator_id.value_namespace = name_space;
        aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id.yfilter = yfilter;
    }
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "aggregator-id" || name == "bundle-name" || name == "bundle-state" || name == "mlacp-node-id" || name == "port-priority")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::MlacpMemberData()
    :
    configured_priority{YType::uint16, "configured-priority"},
    interface_handle{YType::str, "interface-handle"},
    member_state{YType::enumeration, "member-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    operational_priority{YType::uint16, "operational-priority"},
    port_name{YType::str, "port-name"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::has_data() const
{
    return configured_priority.is_set
	|| interface_handle.is_set
	|| member_state.is_set
	|| mlacp_node_id.is_set
	|| operational_priority.is_set
	|| port_name.is_set
	|| port_number.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-priority" || name == "interface-handle" || name == "member-state" || name == "mlacp-node-id" || name == "operational-priority" || name == "port-name" || name == "port-number")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::IccpGroupData()
    :
    connect_timer_running{YType::uint64, "connect-timer-running"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"}
{

    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return connect_timer_running.is_set
	|| iccp_group_id.is_set
	|| singleton.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(connect_timer_running.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(singleton.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timer_running.is_set || is_set(connect_timer_running.yfilter)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
        connect_timer_running.value_namespace = name_space;
        connect_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "connect-timer-running" || name == "iccp-group-id" || name == "singleton")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::NodeData()
    :
    iccp_group_state{YType::enumeration, "iccp-group-state"},
    ldp_id{YType::str, "ldp-id"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    node_state{YType::enumeration, "node-state"},
    version_number{YType::uint32, "version-number"}
    	,
    system_id(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::has_data() const
{
    return iccp_group_state.is_set
	|| ldp_id.is_set
	|| mlacp_node_id.is_set
	|| node_state.is_set
	|| version_number.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_state.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_state.is_set || is_set(iccp_group_state.yfilter)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
        iccp_group_state.value_namespace = name_space;
        iccp_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "iccp-group-state" || name == "ldp-id" || name == "mlacp-node-id" || name == "node-state" || name == "version-number")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBrief()
    :
    mlacp_brief_iccp_groups(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups>())
	,mlacp_bundle_briefs(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs>())
{
    mlacp_brief_iccp_groups->parent = this;
    mlacp_bundle_briefs->parent = this;

    yang_name = "mlacp-brief"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBrief::~MlacpBrief()
{
}

bool BundleInformation::MlacpBrief::has_data() const
{
    return (mlacp_brief_iccp_groups !=  nullptr && mlacp_brief_iccp_groups->has_data())
	|| (mlacp_bundle_briefs !=  nullptr && mlacp_bundle_briefs->has_data());
}

bool BundleInformation::MlacpBrief::has_operation() const
{
    return is_set(yfilter)
	|| (mlacp_brief_iccp_groups !=  nullptr && mlacp_brief_iccp_groups->has_operation())
	|| (mlacp_bundle_briefs !=  nullptr && mlacp_bundle_briefs->has_operation());
}

std::string BundleInformation::MlacpBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-brief-iccp-groups")
    {
        if(mlacp_brief_iccp_groups == nullptr)
        {
            mlacp_brief_iccp_groups = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups>();
        }
        return mlacp_brief_iccp_groups;
    }

    if(child_yang_name == "mlacp-bundle-briefs")
    {
        if(mlacp_bundle_briefs == nullptr)
        {
            mlacp_bundle_briefs = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs>();
        }
        return mlacp_bundle_briefs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_brief_iccp_groups != nullptr)
    {
        children["mlacp-brief-iccp-groups"] = mlacp_brief_iccp_groups;
    }

    if(mlacp_bundle_briefs != nullptr)
    {
        children["mlacp-bundle-briefs"] = mlacp_bundle_briefs;
    }

    return children;
}

void BundleInformation::MlacpBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-brief-iccp-groups" || name == "mlacp-bundle-briefs")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroups()
{

    yang_name = "mlacp-brief-iccp-groups"; yang_parent_name = "mlacp-brief"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::~MlacpBriefIccpGroups()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::has_data() const
{
    for (std::size_t index=0; index<mlacp_brief_iccp_group.size(); index++)
    {
        if(mlacp_brief_iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::has_operation() const
{
    for (std::size_t index=0; index<mlacp_brief_iccp_group.size(); index++)
    {
        if(mlacp_brief_iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-brief-iccp-group")
    {
        for(auto const & c : mlacp_brief_iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup>();
        c->parent = this;
        mlacp_brief_iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_brief_iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-brief-iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    mlacp_brief_iccp_group_item(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem>())
{
    mlacp_brief_iccp_group_item->parent = this;

    yang_name = "mlacp-brief-iccp-group"; yang_parent_name = "mlacp-brief-iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::~MlacpBriefIccpGroup()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (mlacp_brief_iccp_group_item !=  nullptr && mlacp_brief_iccp_group_item->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (mlacp_brief_iccp_group_item !=  nullptr && mlacp_brief_iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/mlacp-brief-iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-brief-iccp-group-item")
    {
        if(mlacp_brief_iccp_group_item == nullptr)
        {
            mlacp_brief_iccp_group_item = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem>();
        }
        return mlacp_brief_iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_brief_iccp_group_item != nullptr)
    {
        children["mlacp-brief-iccp-group-item"] = mlacp_brief_iccp_group_item;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-brief-iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::MlacpBriefIccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData>())
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-brief-iccp-group-item"; yang_parent_name = "mlacp-brief-iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::~MlacpBriefIccpGroupItem()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-brief-iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "iccp-group-data")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
{

    yang_name = "bundle-data"; yang_parent_name = "mlacp-brief-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_key.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.yfilter)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        for(auto const & c : mlacp_bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        for(auto const & c : mlacp_member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mlacp_member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
        bundle_interface_key.value_namespace = name_space;
        bundle_interface_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-data" || name == "mlacp-member-data" || name == "bundle-interface-key" || name == "media-type" || name == "redundancy-object-id")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MlacpBundleData()
    :
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_name{YType::str, "bundle-name"},
    bundle_state{YType::enumeration, "bundle-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_priority{YType::uint16, "port-priority"}
    	,
    mac_address(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::has_data() const
{
    return aggregator_id.is_set
	|| bundle_name.is_set
	|| bundle_state.is_set
	|| mlacp_node_id.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregator_id.yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_id.is_set || is_set(aggregator_id.yfilter)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
        aggregator_id.value_namespace = name_space;
        aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id.yfilter = yfilter;
    }
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "aggregator-id" || name == "bundle-name" || name == "bundle-state" || name == "mlacp-node-id" || name == "port-priority")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::MlacpMemberData()
    :
    configured_priority{YType::uint16, "configured-priority"},
    interface_handle{YType::str, "interface-handle"},
    member_state{YType::enumeration, "member-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    operational_priority{YType::uint16, "operational-priority"},
    port_name{YType::str, "port-name"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::has_data() const
{
    return configured_priority.is_set
	|| interface_handle.is_set
	|| member_state.is_set
	|| mlacp_node_id.is_set
	|| operational_priority.is_set
	|| port_name.is_set
	|| port_number.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-priority" || name == "interface-handle" || name == "member-state" || name == "mlacp-node-id" || name == "operational-priority" || name == "port-name" || name == "port-number")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::IccpGroupData()
    :
    connect_timer_running{YType::uint64, "connect-timer-running"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"}
{

    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-brief-iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return connect_timer_running.is_set
	|| iccp_group_id.is_set
	|| singleton.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(connect_timer_running.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(singleton.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timer_running.is_set || is_set(connect_timer_running.yfilter)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
        connect_timer_running.value_namespace = name_space;
        connect_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "connect-timer-running" || name == "iccp-group-id" || name == "singleton")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::NodeData()
    :
    iccp_group_state{YType::enumeration, "iccp-group-state"},
    ldp_id{YType::str, "ldp-id"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    node_state{YType::enumeration, "node-state"},
    version_number{YType::uint32, "version-number"}
    	,
    system_id(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::has_data() const
{
    return iccp_group_state.is_set
	|| ldp_id.is_set
	|| mlacp_node_id.is_set
	|| node_state.is_set
	|| version_number.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_state.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_state.is_set || is_set(iccp_group_state.yfilter)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
        iccp_group_state.value_namespace = name_space;
        iccp_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "iccp-group-state" || name == "ldp-id" || name == "mlacp-node-id" || name == "node-state" || name == "version-number")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBriefs()
{

    yang_name = "mlacp-bundle-briefs"; yang_parent_name = "mlacp-brief"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::~MlacpBundleBriefs()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_brief.size(); index++)
    {
        if(mlacp_bundle_brief[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_brief.size(); index++)
    {
        if(mlacp_bundle_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-brief")
    {
        for(auto const & c : mlacp_bundle_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief>();
        c->parent = this;
        mlacp_bundle_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_bundle_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-brief")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleBrief()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    mlacp_bundle_item_brief(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief>())
{
    mlacp_bundle_item_brief->parent = this;

    yang_name = "mlacp-bundle-brief"; yang_parent_name = "mlacp-bundle-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::~MlacpBundleBrief()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::has_data() const
{
    return bundle_interface.is_set
	|| (mlacp_bundle_item_brief !=  nullptr && mlacp_bundle_item_brief->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (mlacp_bundle_item_brief !=  nullptr && mlacp_bundle_item_brief->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-brief/mlacp-bundle-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-brief" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-item-brief")
    {
        if(mlacp_bundle_item_brief == nullptr)
        {
            mlacp_bundle_item_brief = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief>();
        }
        return mlacp_bundle_item_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_bundle_item_brief != nullptr)
    {
        children["mlacp-bundle-item-brief"] = mlacp_bundle_item_brief;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-item-brief" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpBundleItemBrief()
{

    yang_name = "mlacp-bundle-item-brief"; yang_parent_name = "mlacp-bundle-brief"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::~MlacpBundleItemBrief()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::has_data() const
{
    for (std::size_t index=0; index<mlacp_data.size(); index++)
    {
        if(mlacp_data[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::has_operation() const
{
    for (std::size_t index=0; index<mlacp_data.size(); index++)
    {
        if(mlacp_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-item-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-data")
    {
        for(auto const & c : mlacp_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData>();
        c->parent = this;
        mlacp_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-data")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::MlacpData()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData>())
{
    iccp_group_data->parent = this;

    yang_name = "mlacp-data"; yang_parent_name = "mlacp-bundle-item-brief"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::~MlacpData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData>();
        }
        return iccp_group_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "iccp-group-data")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::BundleData()
    :
    bundle_interface_key{YType::uint16, "bundle-interface-key"},
    media_type{YType::enumeration, "media-type"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"}
{

    yang_name = "bundle-data"; yang_parent_name = "mlacp-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::has_data() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_data())
            return true;
    }
    return bundle_interface_key.is_set
	|| media_type.is_set
	|| redundancy_object_id.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::has_operation() const
{
    for (std::size_t index=0; index<mlacp_bundle_data.size(); index++)
    {
        if(mlacp_bundle_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mlacp_member_data.size(); index++)
    {
        if(mlacp_member_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface_key.yfilter)
	|| ydk::is_set(media_type.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface_key.is_set || is_set(bundle_interface_key.yfilter)) leaf_name_data.push_back(bundle_interface_key.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-bundle-data")
    {
        for(auto const & c : mlacp_bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData>();
        c->parent = this;
        mlacp_bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-member-data")
    {
        for(auto const & c : mlacp_member_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData>();
        c->parent = this;
        mlacp_member_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mlacp_bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : mlacp_member_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key = value;
        bundle_interface_key.value_namespace = name_space;
        bundle_interface_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface-key")
    {
        bundle_interface_key.yfilter = yfilter;
    }
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-bundle-data" || name == "mlacp-member-data" || name == "bundle-interface-key" || name == "media-type" || name == "redundancy-object-id")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MlacpBundleData()
    :
    aggregator_id{YType::uint16, "aggregator-id"},
    bundle_name{YType::str, "bundle-name"},
    bundle_state{YType::enumeration, "bundle-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    port_priority{YType::uint16, "port-priority"}
    	,
    mac_address(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "mlacp-bundle-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::~MlacpBundleData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::has_data() const
{
    return aggregator_id.is_set
	|| bundle_name.is_set
	|| bundle_state.is_set
	|| mlacp_node_id.is_set
	|| port_priority.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregator_id.yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(bundle_state.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_id.is_set || is_set(aggregator_id.yfilter)) leaf_name_data.push_back(aggregator_id.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (bundle_state.is_set || is_set(bundle_state.yfilter)) leaf_name_data.push_back(bundle_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id = value;
        aggregator_id.value_namespace = name_space;
        aggregator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-state")
    {
        bundle_state = value;
        bundle_state.value_namespace = name_space;
        bundle_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-id")
    {
        aggregator_id.yfilter = yfilter;
    }
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "bundle-state")
    {
        bundle_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "aggregator-id" || name == "bundle-name" || name == "bundle-state" || name == "mlacp-node-id" || name == "port-priority")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::MacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "mac-address"; yang_parent_name = "mlacp-bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::~MacAddress()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::has_data() const
{
    return address.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::MlacpMemberData()
    :
    configured_priority{YType::uint16, "configured-priority"},
    interface_handle{YType::str, "interface-handle"},
    member_state{YType::enumeration, "member-state"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    operational_priority{YType::uint16, "operational-priority"},
    port_name{YType::str, "port-name"},
    port_number{YType::uint16, "port-number"}
{

    yang_name = "mlacp-member-data"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::~MlacpMemberData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::has_data() const
{
    return configured_priority.is_set
	|| interface_handle.is_set
	|| member_state.is_set
	|| mlacp_node_id.is_set
	|| operational_priority.is_set
	|| port_name.is_set
	|| port_number.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(member_state.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(operational_priority.yfilter)
	|| ydk::is_set(port_name.yfilter)
	|| ydk::is_set(port_number.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-member-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (member_state.is_set || is_set(member_state.yfilter)) leaf_name_data.push_back(member_state.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (operational_priority.is_set || is_set(operational_priority.yfilter)) leaf_name_data.push_back(operational_priority.get_name_leafdata());
    if (port_name.is_set || is_set(port_name.yfilter)) leaf_name_data.push_back(port_name.get_name_leafdata());
    if (port_number.is_set || is_set(port_number.yfilter)) leaf_name_data.push_back(port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-state")
    {
        member_state = value;
        member_state.value_namespace = name_space;
        member_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-priority")
    {
        operational_priority = value;
        operational_priority.value_namespace = name_space;
        operational_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-name")
    {
        port_name = value;
        port_name.value_namespace = name_space;
        port_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number")
    {
        port_number = value;
        port_number.value_namespace = name_space;
        port_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "member-state")
    {
        member_state.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "operational-priority")
    {
        operational_priority.yfilter = yfilter;
    }
    if(value_path == "port-name")
    {
        port_name.yfilter = yfilter;
    }
    if(value_path == "port-number")
    {
        port_number.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-priority" || name == "interface-handle" || name == "member-state" || name == "mlacp-node-id" || name == "operational-priority" || name == "port-name" || name == "port-number")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::IccpGroupData()
    :
    connect_timer_running{YType::uint64, "connect-timer-running"},
    iccp_group_id{YType::uint32, "iccp-group-id"},
    singleton{YType::boolean, "singleton"}
{

    yang_name = "iccp-group-data"; yang_parent_name = "mlacp-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return connect_timer_running.is_set
	|| iccp_group_id.is_set
	|| singleton.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(connect_timer_running.yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| ydk::is_set(singleton.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_timer_running.is_set || is_set(connect_timer_running.yfilter)) leaf_name_data.push_back(connect_timer_running.get_name_leafdata());
    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());
    if (singleton.is_set || is_set(singleton.yfilter)) leaf_name_data.push_back(singleton.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running = value;
        connect_timer_running.value_namespace = name_space;
        connect_timer_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "singleton")
    {
        singleton = value;
        singleton.value_namespace = name_space;
        singleton.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connect-timer-running")
    {
        connect_timer_running.yfilter = yfilter;
    }
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
    if(value_path == "singleton")
    {
        singleton.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-data" || name == "connect-timer-running" || name == "iccp-group-id" || name == "singleton")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::NodeData()
    :
    iccp_group_state{YType::enumeration, "iccp-group-state"},
    ldp_id{YType::str, "ldp-id"},
    mlacp_node_id{YType::uint8, "mlacp-node-id"},
    node_state{YType::enumeration, "node-state"},
    version_number{YType::uint32, "version-number"}
    	,
    system_id(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId>())
{
    system_id->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::has_data() const
{
    return iccp_group_state.is_set
	|| ldp_id.is_set
	|| mlacp_node_id.is_set
	|| node_state.is_set
	|| version_number.is_set
	|| (system_id !=  nullptr && system_id->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_state.yfilter)
	|| ydk::is_set(ldp_id.yfilter)
	|| ydk::is_set(mlacp_node_id.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(version_number.yfilter)
	|| (system_id !=  nullptr && system_id->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_state.is_set || is_set(iccp_group_state.yfilter)) leaf_name_data.push_back(iccp_group_state.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.yfilter)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (mlacp_node_id.is_set || is_set(mlacp_node_id.yfilter)) leaf_name_data.push_back(mlacp_node_id.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (version_number.is_set || is_set(version_number.yfilter)) leaf_name_data.push_back(version_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-id")
    {
        if(system_id == nullptr)
        {
            system_id = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId>();
        }
        return system_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_id != nullptr)
    {
        children["system-id"] = system_id;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state = value;
        iccp_group_state.value_namespace = name_space;
        iccp_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
        ldp_id.value_namespace = name_space;
        ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id = value;
        mlacp_node_id.value_namespace = name_space;
        mlacp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-number")
    {
        version_number = value;
        version_number.value_namespace = name_space;
        version_number.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-state")
    {
        iccp_group_state.yfilter = yfilter;
    }
    if(value_path == "ldp-id")
    {
        ldp_id.yfilter = yfilter;
    }
    if(value_path == "mlacp-node-id")
    {
        mlacp_node_id.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "version-number")
    {
        version_number.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "iccp-group-state" || name == "ldp-id" || name == "mlacp-node-id" || name == "node-state" || name == "version-number")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemId()
    :
    system_prio{YType::uint16, "system-prio"}
    	,
    system_mac_addr(std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>())
{
    system_mac_addr->parent = this;

    yang_name = "system-id"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::~SystemId()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::has_data() const
{
    return system_prio.is_set
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_data());
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_prio.yfilter)
	|| (system_mac_addr !=  nullptr && system_mac_addr->has_operation());
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_prio.is_set || is_set(system_prio.yfilter)) leaf_name_data.push_back(system_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system-mac-addr")
    {
        if(system_mac_addr == nullptr)
        {
            system_mac_addr = std::make_shared<BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr>();
        }
        return system_mac_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(system_mac_addr != nullptr)
    {
        children["system-mac-addr"] = system_mac_addr;
    }

    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-prio")
    {
        system_prio = value;
        system_prio.value_namespace = name_space;
        system_prio.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-prio")
    {
        system_prio.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-mac-addr" || name == "system-prio")
        return true;
    return false;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::SystemMacAddr()
    :
    macaddr{YType::str, "macaddr"}
{

    yang_name = "system-mac-addr"; yang_parent_name = "system-id"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::~SystemMacAddr()
{
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_data() const
{
    return macaddr.is_set;
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(macaddr.yfilter);
}

std::string BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-mac-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "macaddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "macaddr")
    {
        macaddr.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macaddr")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::MlacpBundleCounters()
    :
    bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles>())
	,iccp_groups(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups>())
	,nodes(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes>())
{
    bundles->parent = this;
    iccp_groups->parent = this;
    nodes->parent = this;

    yang_name = "mlacp-bundle-counters"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBundleCounters::~MlacpBundleCounters()
{
}

bool BundleInformation::MlacpBundleCounters::has_data() const
{
    return (bundles !=  nullptr && bundles->has_data())
	|| (iccp_groups !=  nullptr && iccp_groups->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool BundleInformation::MlacpBundleCounters::has_operation() const
{
    return is_set(yfilter)
	|| (bundles !=  nullptr && bundles->has_operation())
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-bundle-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundles")
    {
        if(bundles == nullptr)
        {
            bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles>();
        }
        return bundles;
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups>();
        }
        return iccp_groups;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundles != nullptr)
    {
        children["bundles"] = bundles;
    }

    if(iccp_groups != nullptr)
    {
        children["iccp-groups"] = iccp_groups;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundles" || name == "iccp-groups" || name == "nodes")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundles()
{

    yang_name = "bundles"; yang_parent_name = "mlacp-bundle-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBundleCounters::Bundles::~Bundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::has_data() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Bundles::has_operation() const
{
    for (std::size_t index=0; index<bundle.size(); index++)
    {
        if(bundle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::Bundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle")
    {
        for(auto const & c : bundle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle>();
        c->parent = this;
        bundle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Bundles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::Bundle()
    :
    bundle_interface{YType::str, "bundle-interface"}
    	,
    bundle_item(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem>())
{
    bundle_item->parent = this;

    yang_name = "bundle"; yang_parent_name = "bundles"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::~Bundle()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::has_data() const
{
    return bundle_interface.is_set
	|| (bundle_item !=  nullptr && bundle_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_interface.yfilter)
	|| (bundle_item !=  nullptr && bundle_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/bundles/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle" <<"[bundle-interface='" <<bundle_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_interface.is_set || is_set(bundle_interface.yfilter)) leaf_name_data.push_back(bundle_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-item")
    {
        if(bundle_item == nullptr)
        {
            bundle_item = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem>();
        }
        return bundle_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_item != nullptr)
    {
        children["bundle-item"] = bundle_item;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface = value;
        bundle_interface.value_namespace = name_space;
        bundle_interface.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-interface")
    {
        bundle_interface.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-item" || name == "bundle-interface")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::BundleItem()
{

    yang_name = "bundle-item"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::~BundleItem()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroup()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData>())
{
    iccp_group_data->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "bundle-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
	,mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_bundles->parent = this;
    mlacp_sync_requests_on_all_local_ports->parent = this;

    yang_name = "iccp-group-data"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
        }
        return mlacp_sync_requests_on_all_local_bundles;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(mlacp_sync_requests_on_all_local_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
    }

    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "mlacp-sync-requests-on-all-local-bundles" || name == "mlacp-sync-requests-on-all-local-ports" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_>())
{
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_>();
        }
        return node_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
    	,
    mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
	,mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
{
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;
    mlacp_sync_requests_on_all_foreign_ports->parent = this;

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::has_data() const
{
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
        }
        return mlacp_sync_requests_on_all_foreign_bundles;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
    }

    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-foreign-bundles" || name == "mlacp-sync-requests-on-all-foreign-ports" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroups()
{

    yang_name = "iccp-groups"; yang_parent_name = "mlacp-bundle-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::~IccpGroups()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    iccp_group_item(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem>())
{
    iccp_group_item->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-item")
    {
        if(iccp_group_item == nullptr)
        {
            iccp_group_item = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem>();
        }
        return iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_item != nullptr)
    {
        children["iccp-group-item"] = iccp_group_item;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData>())
{
    iccp_group_data->parent = this;

    yang_name = "iccp-group-item"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::~IccpGroupItem()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
	,mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_bundles->parent = this;
    mlacp_sync_requests_on_all_local_ports->parent = this;

    yang_name = "iccp-group-data"; yang_parent_name = "iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
        }
        return mlacp_sync_requests_on_all_local_bundles;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(mlacp_sync_requests_on_all_local_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
    }

    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "mlacp-sync-requests-on-all-local-bundles" || name == "mlacp-sync-requests-on-all-local-ports" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_>())
{
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "iccp-group-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_>();
        }
        return node_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
    	,
    mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
	,mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
{
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;
    mlacp_sync_requests_on_all_foreign_ports->parent = this;

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::has_data() const
{
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
        }
        return mlacp_sync_requests_on_all_foreign_bundles;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
    }

    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-foreign-bundles" || name == "mlacp-sync-requests-on-all-foreign-ports" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "mlacp-bundle-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBundleCounters::Nodes::~Nodes()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpBundleCounters::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::Node()
    :
    node{YType::str, "node"}
    	,
    node_item(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem>())
{
    node_item->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::~Node()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::has_data() const
{
    return node.is_set
	|| (node_item !=  nullptr && node_item->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| (node_item !=  nullptr && node_item->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-bundle-counters/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-item")
    {
        if(node_item == nullptr)
        {
            node_item = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem>();
        }
        return node_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_item != nullptr)
    {
        children["node-item"] = node_item;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-item" || name == "node")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeItem()
    :
    iccp_group_data(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData>())
{
    iccp_group_data->parent = this;

    yang_name = "node-item"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::~NodeItem()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::has_data() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_data())
            return true;
    }
    return (iccp_group_data !=  nullptr && iccp_group_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::has_operation() const
{
    for (std::size_t index=0; index<node_data.size(); index++)
    {
        if(node_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (iccp_group_data !=  nullptr && iccp_group_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-item";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-data")
    {
        if(iccp_group_data == nullptr)
        {
            iccp_group_data = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData>();
        }
        return iccp_group_data;
    }

    if(child_yang_name == "node-data")
    {
        for(auto const & c : node_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData>();
        c->parent = this;
        node_data.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_data != nullptr)
    {
        children["iccp-group-data"] = iccp_group_data;
    }

    for (auto const & c : node_data)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::IccpGroupData()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    mlacp_sync_requests_on_all_local_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>())
	,mlacp_sync_requests_on_all_local_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>())
{
    mlacp_sync_requests_on_all_local_bundles->parent = this;
    mlacp_sync_requests_on_all_local_ports->parent = this;

    yang_name = "iccp-group-data"; yang_parent_name = "node-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::~IccpGroupData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return iccp_group_id.is_set
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_data())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (mlacp_sync_requests_on_all_local_bundles !=  nullptr && mlacp_sync_requests_on_all_local_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_local_ports !=  nullptr && mlacp_sync_requests_on_all_local_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-bundles")
    {
        if(mlacp_sync_requests_on_all_local_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_local_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles>();
        }
        return mlacp_sync_requests_on_all_local_bundles;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-local-ports")
    {
        if(mlacp_sync_requests_on_all_local_ports == nullptr)
        {
            mlacp_sync_requests_on_all_local_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts>();
        }
        return mlacp_sync_requests_on_all_local_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(mlacp_sync_requests_on_all_local_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-bundles"] = mlacp_sync_requests_on_all_local_bundles;
    }

    if(mlacp_sync_requests_on_all_local_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-local-ports"] = mlacp_sync_requests_on_all_local_ports;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "mlacp-sync-requests-on-all-local-bundles" || name == "mlacp-sync-requests-on-all-local-ports" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::MlacpSyncRequestsOnAllLocalBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-bundles"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::~MlacpSyncRequestsOnAllLocalBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-bundles"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::MlacpSyncRequestsOnAllLocalPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-local-ports"; yang_parent_name = "iccp-group-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::~MlacpSyncRequestsOnAllLocalPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-local-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-local-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData()
    :
    node_data(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_>())
{
    node_data->parent = this;

    yang_name = "node-data"; yang_parent_name = "node-item"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::~NodeData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::has_data() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_data())
            return true;
    }
    return (node_data !=  nullptr && node_data->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::has_operation() const
{
    for (std::size_t index=0; index<bundle_data.size(); index++)
    {
        if(bundle_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (node_data !=  nullptr && node_data->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-data")
    {
        for(auto const & c : bundle_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData>();
        c->parent = this;
        bundle_data.push_back(c);
        return c;
    }

    if(child_yang_name == "node-data")
    {
        if(node_data == nullptr)
        {
            node_data = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_>();
        }
        return node_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_data)
    {
        children[c->get_segment_path()] = c;
    }

    if(node_data != nullptr)
    {
        children["node-data"] = node_data;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-data" || name == "node-data")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::BundleData()
    :
    bundle_name{YType::str, "bundle-name"}
    	,
    mlacp_tlv_counters(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters>())
{
    mlacp_tlv_counters->parent = this;

    yang_name = "bundle-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::~BundleData()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::has_data() const
{
    return bundle_name.is_set
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| (mlacp_tlv_counters !=  nullptr && mlacp_tlv_counters->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-tlv-counters")
    {
        if(mlacp_tlv_counters == nullptr)
        {
            mlacp_tlv_counters = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters>();
        }
        return mlacp_tlv_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_tlv_counters != nullptr)
    {
        children["mlacp-tlv-counters"] = mlacp_tlv_counters;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-tlv-counters" || name == "bundle-name")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::MlacpTlvCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    received_nak_tl_vs{YType::uint32, "received-nak-tl-vs"},
    received_priority_tl_vs{YType::uint32, "received-priority-tl-vs"},
    sent_config_tl_vs{YType::uint32, "sent-config-tl-vs"},
    sent_priority_tl_vs{YType::uint32, "sent-priority-tl-vs"},
    sent_state_tl_vs{YType::uint32, "sent-state-tl-vs"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-tlv-counters"; yang_parent_name = "bundle-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::~MlacpTlvCounters()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| received_nak_tl_vs.is_set
	|| received_priority_tl_vs.is_set
	|| sent_config_tl_vs.is_set
	|| sent_priority_tl_vs.is_set
	|| sent_state_tl_vs.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(received_nak_tl_vs.yfilter)
	|| ydk::is_set(received_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_config_tl_vs.yfilter)
	|| ydk::is_set(sent_priority_tl_vs.yfilter)
	|| ydk::is_set(sent_state_tl_vs.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-tlv-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (received_nak_tl_vs.is_set || is_set(received_nak_tl_vs.yfilter)) leaf_name_data.push_back(received_nak_tl_vs.get_name_leafdata());
    if (received_priority_tl_vs.is_set || is_set(received_priority_tl_vs.yfilter)) leaf_name_data.push_back(received_priority_tl_vs.get_name_leafdata());
    if (sent_config_tl_vs.is_set || is_set(sent_config_tl_vs.yfilter)) leaf_name_data.push_back(sent_config_tl_vs.get_name_leafdata());
    if (sent_priority_tl_vs.is_set || is_set(sent_priority_tl_vs.yfilter)) leaf_name_data.push_back(sent_priority_tl_vs.get_name_leafdata());
    if (sent_state_tl_vs.is_set || is_set(sent_state_tl_vs.yfilter)) leaf_name_data.push_back(sent_state_tl_vs.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs = value;
        received_nak_tl_vs.value_namespace = name_space;
        received_nak_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs = value;
        received_priority_tl_vs.value_namespace = name_space;
        received_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs = value;
        sent_config_tl_vs.value_namespace = name_space;
        sent_config_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs = value;
        sent_priority_tl_vs.value_namespace = name_space;
        sent_priority_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs = value;
        sent_state_tl_vs.value_namespace = name_space;
        sent_state_tl_vs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "received-nak-tl-vs")
    {
        received_nak_tl_vs.yfilter = yfilter;
    }
    if(value_path == "received-priority-tl-vs")
    {
        received_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-config-tl-vs")
    {
        sent_config_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-priority-tl-vs")
    {
        sent_priority_tl_vs.yfilter = yfilter;
    }
    if(value_path == "sent-state-tl-vs")
    {
        sent_state_tl_vs.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "received-nak-tl-vs" || name == "received-priority-tl-vs" || name == "sent-config-tl-vs" || name == "sent-priority-tl-vs" || name == "sent-state-tl-vs" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-tlv-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::NodeData_()
    :
    node_id{YType::uint32, "node-id"}
    	,
    mlacp_sync_requests_on_all_foreign_bundles(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>())
	,mlacp_sync_requests_on_all_foreign_ports(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>())
{
    mlacp_sync_requests_on_all_foreign_bundles->parent = this;
    mlacp_sync_requests_on_all_foreign_ports->parent = this;

    yang_name = "node-data"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::~NodeData_()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::has_data() const
{
    return node_id.is_set
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_data())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (mlacp_sync_requests_on_all_foreign_bundles !=  nullptr && mlacp_sync_requests_on_all_foreign_bundles->has_operation())
	|| (mlacp_sync_requests_on_all_foreign_ports !=  nullptr && mlacp_sync_requests_on_all_foreign_ports->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-bundles")
    {
        if(mlacp_sync_requests_on_all_foreign_bundles == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_bundles = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles>();
        }
        return mlacp_sync_requests_on_all_foreign_bundles;
    }

    if(child_yang_name == "mlacp-sync-requests-on-all-foreign-ports")
    {
        if(mlacp_sync_requests_on_all_foreign_ports == nullptr)
        {
            mlacp_sync_requests_on_all_foreign_ports = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts>();
        }
        return mlacp_sync_requests_on_all_foreign_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mlacp_sync_requests_on_all_foreign_bundles != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-bundles"] = mlacp_sync_requests_on_all_foreign_bundles;
    }

    if(mlacp_sync_requests_on_all_foreign_ports != nullptr)
    {
        children["mlacp-sync-requests-on-all-foreign-ports"] = mlacp_sync_requests_on_all_foreign_ports;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mlacp-sync-requests-on-all-foreign-bundles" || name == "mlacp-sync-requests-on-all-foreign-ports" || name == "node-id")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::MlacpSyncRequestsOnAllForeignBundles()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-bundles"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::~MlacpSyncRequestsOnAllForeignBundles()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-bundles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-bundles"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::MlacpSyncRequestsOnAllForeignPorts()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    received_sync_requests(std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>())
{
    received_sync_requests->parent = this;

    yang_name = "mlacp-sync-requests-on-all-foreign-ports"; yang_parent_name = "node-data"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::~MlacpSyncRequestsOnAllForeignPorts()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_data() const
{
    return last_time_cleared.is_set
	|| time_since_cleared.is_set
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_data());
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (received_sync_requests !=  nullptr && received_sync_requests->has_operation());
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-sync-requests-on-all-foreign-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received-sync-requests")
    {
        if(received_sync_requests == nullptr)
        {
            received_sync_requests = std::make_shared<BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests>();
        }
        return received_sync_requests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received_sync_requests != nullptr)
    {
        children["received-sync-requests"] = received_sync_requests;
    }

    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-sync-requests" || name == "last-time-cleared" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::ReceivedSyncRequests()
    :
    all_syncs{YType::uint32, "all-syncs"},
    config_syncs{YType::uint32, "config-syncs"},
    state_syncs{YType::uint32, "state-syncs"}
{

    yang_name = "received-sync-requests"; yang_parent_name = "mlacp-sync-requests-on-all-foreign-ports"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::~ReceivedSyncRequests()
{
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_data() const
{
    return all_syncs.is_set
	|| config_syncs.is_set
	|| state_syncs.is_set;
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_syncs.yfilter)
	|| ydk::is_set(config_syncs.yfilter)
	|| ydk::is_set(state_syncs.yfilter);
}

std::string BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-sync-requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_syncs.is_set || is_set(all_syncs.yfilter)) leaf_name_data.push_back(all_syncs.get_name_leafdata());
    if (config_syncs.is_set || is_set(config_syncs.yfilter)) leaf_name_data.push_back(config_syncs.get_name_leafdata());
    if (state_syncs.is_set || is_set(state_syncs.yfilter)) leaf_name_data.push_back(state_syncs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-syncs")
    {
        all_syncs = value;
        all_syncs.value_namespace = name_space;
        all_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-syncs")
    {
        config_syncs = value;
        config_syncs.value_namespace = name_space;
        config_syncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-syncs")
    {
        state_syncs = value;
        state_syncs.value_namespace = name_space;
        state_syncs.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-syncs")
    {
        all_syncs.yfilter = yfilter;
    }
    if(value_path == "config-syncs")
    {
        config_syncs.yfilter = yfilter;
    }
    if(value_path == "state-syncs")
    {
        state_syncs.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-syncs" || name == "config-syncs" || name == "state-syncs")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::MlacpIccpGroupCounters()
    :
    iccp_groups(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups>())
{
    iccp_groups->parent = this;

    yang_name = "mlacp-iccp-group-counters"; yang_parent_name = "bundle-information"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpIccpGroupCounters::~MlacpIccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::has_data() const
{
    return (iccp_groups !=  nullptr && iccp_groups->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::has_operation() const
{
    return is_set(yfilter)
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpIccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mlacp-iccp-group-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups>();
        }
        return iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_groups != nullptr)
    {
        children["iccp-groups"] = iccp_groups;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpIccpGroupCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpIccpGroupCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-groups")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroups()
{

    yang_name = "iccp-groups"; yang_parent_name = "mlacp-iccp-group-counters"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::~IccpGroups()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-iccp-group-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroup()
    :
    iccp_group{YType::uint32, "iccp-group"}
    	,
    iccp_group_ancestor_bundle(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle>())
	,iccp_group_ancestor_member(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember>())
	,iccp_group_ancestor_node(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode>())
	,iccp_group_item(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem>())
{
    iccp_group_ancestor_bundle->parent = this;
    iccp_group_ancestor_member->parent = this;
    iccp_group_ancestor_node->parent = this;
    iccp_group_item->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::has_data() const
{
    return iccp_group.is_set
	|| (iccp_group_ancestor_bundle !=  nullptr && iccp_group_ancestor_bundle->has_data())
	|| (iccp_group_ancestor_member !=  nullptr && iccp_group_ancestor_member->has_data())
	|| (iccp_group_ancestor_node !=  nullptr && iccp_group_ancestor_node->has_data())
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (iccp_group_ancestor_bundle !=  nullptr && iccp_group_ancestor_bundle->has_operation())
	|| (iccp_group_ancestor_member !=  nullptr && iccp_group_ancestor_member->has_operation())
	|| (iccp_group_ancestor_node !=  nullptr && iccp_group_ancestor_node->has_operation())
	|| (iccp_group_item !=  nullptr && iccp_group_item->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-oper:bundle-information/mlacp-iccp-group-counters/iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[iccp-group='" <<iccp_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-ancestor-bundle")
    {
        if(iccp_group_ancestor_bundle == nullptr)
        {
            iccp_group_ancestor_bundle = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle>();
        }
        return iccp_group_ancestor_bundle;
    }

    if(child_yang_name == "iccp-group-ancestor-member")
    {
        if(iccp_group_ancestor_member == nullptr)
        {
            iccp_group_ancestor_member = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember>();
        }
        return iccp_group_ancestor_member;
    }

    if(child_yang_name == "iccp-group-ancestor-node")
    {
        if(iccp_group_ancestor_node == nullptr)
        {
            iccp_group_ancestor_node = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode>();
        }
        return iccp_group_ancestor_node;
    }

    if(child_yang_name == "iccp-group-item")
    {
        if(iccp_group_item == nullptr)
        {
            iccp_group_item = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem>();
        }
        return iccp_group_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_ancestor_bundle != nullptr)
    {
        children["iccp-group-ancestor-bundle"] = iccp_group_ancestor_bundle;
    }

    if(iccp_group_ancestor_member != nullptr)
    {
        children["iccp-group-ancestor-member"] = iccp_group_ancestor_member;
    }

    if(iccp_group_ancestor_node != nullptr)
    {
        children["iccp-group-ancestor-node"] = iccp_group_ancestor_node;
    }

    if(iccp_group_item != nullptr)
    {
        children["iccp-group-item"] = iccp_group_item;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-ancestor-bundle" || name == "iccp-group-ancestor-member" || name == "iccp-group-ancestor-node" || name == "iccp-group-item" || name == "iccp-group")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupAncestorBundle()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters>())
{
    iccp_group_counters->parent = this;

    yang_name = "iccp-group-ancestor-bundle"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::~IccpGroupAncestorBundle()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::has_data() const
{
    return iccp_group_id.is_set
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-ancestor-bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-counters")
    {
        if(iccp_group_counters == nullptr)
        {
            iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters>();
        }
        return iccp_group_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_counters != nullptr)
    {
        children["iccp-group-counters"] = iccp_group_counters;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-counters" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpGroupCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    connection(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection>())
	,iccp_events(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents>())
	,iccp_messages(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages>())
	,invalid_tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs>())
	,tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs>())
{
    connection->parent = this;
    iccp_events->parent = this;
    iccp_messages->parent = this;
    invalid_tl_vs->parent = this;
    tl_vs->parent = this;

    yang_name = "iccp-group-counters"; yang_parent_name = "iccp-group-ancestor-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::~IccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| time_since_cleared.is_set
	|| (connection !=  nullptr && connection->has_data())
	|| (iccp_events !=  nullptr && iccp_events->has_data())
	|| (iccp_messages !=  nullptr && iccp_messages->has_data())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_data())
	|| (tl_vs !=  nullptr && tl_vs->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (connection !=  nullptr && connection->has_operation())
	|| (iccp_events !=  nullptr && iccp_events->has_operation())
	|| (iccp_messages !=  nullptr && iccp_messages->has_operation())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_operation())
	|| (tl_vs !=  nullptr && tl_vs->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "iccp-events")
    {
        if(iccp_events == nullptr)
        {
            iccp_events = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents>();
        }
        return iccp_events;
    }

    if(child_yang_name == "iccp-messages")
    {
        if(iccp_messages == nullptr)
        {
            iccp_messages = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages>();
        }
        return iccp_messages;
    }

    if(child_yang_name == "invalid-tl-vs")
    {
        if(invalid_tl_vs == nullptr)
        {
            invalid_tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs>();
        }
        return invalid_tl_vs;
    }

    if(child_yang_name == "tl-vs")
    {
        if(tl_vs == nullptr)
        {
            tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs>();
        }
        return tl_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(iccp_events != nullptr)
    {
        children["iccp-events"] = iccp_events;
    }

    if(iccp_messages != nullptr)
    {
        children["iccp-messages"] = iccp_messages;
    }

    if(invalid_tl_vs != nullptr)
    {
        children["invalid-tl-vs"] = invalid_tl_vs;
    }

    if(tl_vs != nullptr)
    {
        children["tl-vs"] = tl_vs;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection" || name == "iccp-events" || name == "iccp-messages" || name == "invalid-tl-vs" || name == "tl-vs" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::Connection()
    :
    iccp_config_connect_errors{YType::uint32, "iccp-config-connect-errors"},
    iccp_count_connect_errors{YType::uint32, "iccp-count-connect-errors"},
    iccp_invalid_connects{YType::uint32, "iccp-invalid-connects"},
    iccp_invalid_disconnects{YType::uint32, "iccp-invalid-disconnects"},
    received_connects{YType::uint32, "received-connects"},
    received_disconnects{YType::uint32, "received-disconnects"},
    received_wrong_versions{YType::uint32, "received-wrong-versions"},
    sent_connects{YType::uint32, "sent-connects"},
    sent_disconnects{YType::uint32, "sent-disconnects"},
    sent_wrong_versions{YType::uint32, "sent-wrong-versions"}
{

    yang_name = "connection"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::~Connection()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::has_data() const
{
    return iccp_config_connect_errors.is_set
	|| iccp_count_connect_errors.is_set
	|| iccp_invalid_connects.is_set
	|| iccp_invalid_disconnects.is_set
	|| received_connects.is_set
	|| received_disconnects.is_set
	|| received_wrong_versions.is_set
	|| sent_connects.is_set
	|| sent_disconnects.is_set
	|| sent_wrong_versions.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_config_connect_errors.yfilter)
	|| ydk::is_set(iccp_count_connect_errors.yfilter)
	|| ydk::is_set(iccp_invalid_connects.yfilter)
	|| ydk::is_set(iccp_invalid_disconnects.yfilter)
	|| ydk::is_set(received_connects.yfilter)
	|| ydk::is_set(received_disconnects.yfilter)
	|| ydk::is_set(received_wrong_versions.yfilter)
	|| ydk::is_set(sent_connects.yfilter)
	|| ydk::is_set(sent_disconnects.yfilter)
	|| ydk::is_set(sent_wrong_versions.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_config_connect_errors.is_set || is_set(iccp_config_connect_errors.yfilter)) leaf_name_data.push_back(iccp_config_connect_errors.get_name_leafdata());
    if (iccp_count_connect_errors.is_set || is_set(iccp_count_connect_errors.yfilter)) leaf_name_data.push_back(iccp_count_connect_errors.get_name_leafdata());
    if (iccp_invalid_connects.is_set || is_set(iccp_invalid_connects.yfilter)) leaf_name_data.push_back(iccp_invalid_connects.get_name_leafdata());
    if (iccp_invalid_disconnects.is_set || is_set(iccp_invalid_disconnects.yfilter)) leaf_name_data.push_back(iccp_invalid_disconnects.get_name_leafdata());
    if (received_connects.is_set || is_set(received_connects.yfilter)) leaf_name_data.push_back(received_connects.get_name_leafdata());
    if (received_disconnects.is_set || is_set(received_disconnects.yfilter)) leaf_name_data.push_back(received_disconnects.get_name_leafdata());
    if (received_wrong_versions.is_set || is_set(received_wrong_versions.yfilter)) leaf_name_data.push_back(received_wrong_versions.get_name_leafdata());
    if (sent_connects.is_set || is_set(sent_connects.yfilter)) leaf_name_data.push_back(sent_connects.get_name_leafdata());
    if (sent_disconnects.is_set || is_set(sent_disconnects.yfilter)) leaf_name_data.push_back(sent_disconnects.get_name_leafdata());
    if (sent_wrong_versions.is_set || is_set(sent_wrong_versions.yfilter)) leaf_name_data.push_back(sent_wrong_versions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors = value;
        iccp_config_connect_errors.value_namespace = name_space;
        iccp_config_connect_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors = value;
        iccp_count_connect_errors.value_namespace = name_space;
        iccp_count_connect_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects = value;
        iccp_invalid_connects.value_namespace = name_space;
        iccp_invalid_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects = value;
        iccp_invalid_disconnects.value_namespace = name_space;
        iccp_invalid_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-connects")
    {
        received_connects = value;
        received_connects.value_namespace = name_space;
        received_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects = value;
        received_disconnects.value_namespace = name_space;
        received_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions = value;
        received_wrong_versions.value_namespace = name_space;
        received_wrong_versions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-connects")
    {
        sent_connects = value;
        sent_connects.value_namespace = name_space;
        sent_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects = value;
        sent_disconnects.value_namespace = name_space;
        sent_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions = value;
        sent_wrong_versions.value_namespace = name_space;
        sent_wrong_versions.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors.yfilter = yfilter;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors.yfilter = yfilter;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects.yfilter = yfilter;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects.yfilter = yfilter;
    }
    if(value_path == "received-connects")
    {
        received_connects.yfilter = yfilter;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects.yfilter = yfilter;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions.yfilter = yfilter;
    }
    if(value_path == "sent-connects")
    {
        sent_connects.yfilter = yfilter;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects.yfilter = yfilter;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-config-connect-errors" || name == "iccp-count-connect-errors" || name == "iccp-invalid-connects" || name == "iccp-invalid-disconnects" || name == "received-connects" || name == "received-disconnects" || name == "received-wrong-versions" || name == "sent-connects" || name == "sent-disconnects" || name == "sent-wrong-versions")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::IccpEvents()
    :
    configured_clear{YType::uint32, "configured-clear"},
    configured_set{YType::uint32, "configured-set"},
    member_status_down{YType::uint32, "member-status-down"},
    member_status_up{YType::uint32, "member-status-up"},
    pe_isolated{YType::uint32, "pe-isolated"},
    pe_isolated_clear{YType::uint32, "pe-isolated-clear"},
    reachability_cleared{YType::uint32, "reachability-cleared"},
    reachability_set{YType::uint32, "reachability-set"},
    transport_down{YType::uint32, "transport-down"},
    transport_unavailable{YType::uint32, "transport-unavailable"},
    transport_up{YType::uint32, "transport-up"}
{

    yang_name = "iccp-events"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::~IccpEvents()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::has_data() const
{
    return configured_clear.is_set
	|| configured_set.is_set
	|| member_status_down.is_set
	|| member_status_up.is_set
	|| pe_isolated.is_set
	|| pe_isolated_clear.is_set
	|| reachability_cleared.is_set
	|| reachability_set.is_set
	|| transport_down.is_set
	|| transport_unavailable.is_set
	|| transport_up.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_clear.yfilter)
	|| ydk::is_set(configured_set.yfilter)
	|| ydk::is_set(member_status_down.yfilter)
	|| ydk::is_set(member_status_up.yfilter)
	|| ydk::is_set(pe_isolated.yfilter)
	|| ydk::is_set(pe_isolated_clear.yfilter)
	|| ydk::is_set(reachability_cleared.yfilter)
	|| ydk::is_set(reachability_set.yfilter)
	|| ydk::is_set(transport_down.yfilter)
	|| ydk::is_set(transport_unavailable.yfilter)
	|| ydk::is_set(transport_up.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_clear.is_set || is_set(configured_clear.yfilter)) leaf_name_data.push_back(configured_clear.get_name_leafdata());
    if (configured_set.is_set || is_set(configured_set.yfilter)) leaf_name_data.push_back(configured_set.get_name_leafdata());
    if (member_status_down.is_set || is_set(member_status_down.yfilter)) leaf_name_data.push_back(member_status_down.get_name_leafdata());
    if (member_status_up.is_set || is_set(member_status_up.yfilter)) leaf_name_data.push_back(member_status_up.get_name_leafdata());
    if (pe_isolated.is_set || is_set(pe_isolated.yfilter)) leaf_name_data.push_back(pe_isolated.get_name_leafdata());
    if (pe_isolated_clear.is_set || is_set(pe_isolated_clear.yfilter)) leaf_name_data.push_back(pe_isolated_clear.get_name_leafdata());
    if (reachability_cleared.is_set || is_set(reachability_cleared.yfilter)) leaf_name_data.push_back(reachability_cleared.get_name_leafdata());
    if (reachability_set.is_set || is_set(reachability_set.yfilter)) leaf_name_data.push_back(reachability_set.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.yfilter)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (transport_unavailable.is_set || is_set(transport_unavailable.yfilter)) leaf_name_data.push_back(transport_unavailable.get_name_leafdata());
    if (transport_up.is_set || is_set(transport_up.yfilter)) leaf_name_data.push_back(transport_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-clear")
    {
        configured_clear = value;
        configured_clear.value_namespace = name_space;
        configured_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-set")
    {
        configured_set = value;
        configured_set.value_namespace = name_space;
        configured_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-status-down")
    {
        member_status_down = value;
        member_status_down.value_namespace = name_space;
        member_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-status-up")
    {
        member_status_up = value;
        member_status_up.value_namespace = name_space;
        member_status_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated = value;
        pe_isolated.value_namespace = name_space;
        pe_isolated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear = value;
        pe_isolated_clear.value_namespace = name_space;
        pe_isolated_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared = value;
        reachability_cleared.value_namespace = name_space;
        reachability_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-set")
    {
        reachability_set = value;
        reachability_set.value_namespace = name_space;
        reachability_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
        transport_down.value_namespace = name_space;
        transport_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable = value;
        transport_unavailable.value_namespace = name_space;
        transport_unavailable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-up")
    {
        transport_up = value;
        transport_up.value_namespace = name_space;
        transport_up.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-clear")
    {
        configured_clear.yfilter = yfilter;
    }
    if(value_path == "configured-set")
    {
        configured_set.yfilter = yfilter;
    }
    if(value_path == "member-status-down")
    {
        member_status_down.yfilter = yfilter;
    }
    if(value_path == "member-status-up")
    {
        member_status_up.yfilter = yfilter;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated.yfilter = yfilter;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear.yfilter = yfilter;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared.yfilter = yfilter;
    }
    if(value_path == "reachability-set")
    {
        reachability_set.yfilter = yfilter;
    }
    if(value_path == "transport-down")
    {
        transport_down.yfilter = yfilter;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable.yfilter = yfilter;
    }
    if(value_path == "transport-up")
    {
        transport_up.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-clear" || name == "configured-set" || name == "member-status-down" || name == "member-status-up" || name == "pe-isolated" || name == "pe-isolated-clear" || name == "reachability-cleared" || name == "reachability-set" || name == "transport-down" || name == "transport-unavailable" || name == "transport-up")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::IccpMessages()
    :
    received_messages{YType::uint32, "received-messages"},
    sent_buffer_messages{YType::uint32, "sent-buffer-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    transmission_errors{YType::uint32, "transmission-errors"}
{

    yang_name = "iccp-messages"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::~IccpMessages()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::has_data() const
{
    return received_messages.is_set
	|| sent_buffer_messages.is_set
	|| sent_messages.is_set
	|| transmission_errors.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_messages.yfilter)
	|| ydk::is_set(sent_buffer_messages.yfilter)
	|| ydk::is_set(sent_messages.yfilter)
	|| ydk::is_set(transmission_errors.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_messages.is_set || is_set(received_messages.yfilter)) leaf_name_data.push_back(received_messages.get_name_leafdata());
    if (sent_buffer_messages.is_set || is_set(sent_buffer_messages.yfilter)) leaf_name_data.push_back(sent_buffer_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.yfilter)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (transmission_errors.is_set || is_set(transmission_errors.yfilter)) leaf_name_data.push_back(transmission_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-messages")
    {
        received_messages = value;
        received_messages.value_namespace = name_space;
        received_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages = value;
        sent_buffer_messages.value_namespace = name_space;
        sent_buffer_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
        sent_messages.value_namespace = name_space;
        sent_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors = value;
        transmission_errors.value_namespace = name_space;
        transmission_errors.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-messages")
    {
        received_messages.yfilter = yfilter;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages.yfilter = yfilter;
    }
    if(value_path == "sent-messages")
    {
        sent_messages.yfilter = yfilter;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "sent-buffer-messages" || name == "sent-messages" || name == "transmission-errors")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::InvalidTlVs()
    :
    incorrect_length{YType::uint32, "incorrect-length"},
    invalid_data{YType::uint32, "invalid-data"},
    invalid_type{YType::uint32, "invalid-type"},
    unknown_bundle{YType::uint32, "unknown-bundle"},
    unknown_port{YType::uint32, "unknown-port"}
{

    yang_name = "invalid-tl-vs"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::~InvalidTlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::has_data() const
{
    return incorrect_length.is_set
	|| invalid_data.is_set
	|| invalid_type.is_set
	|| unknown_bundle.is_set
	|| unknown_port.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incorrect_length.yfilter)
	|| ydk::is_set(invalid_data.yfilter)
	|| ydk::is_set(invalid_type.yfilter)
	|| ydk::is_set(unknown_bundle.yfilter)
	|| ydk::is_set(unknown_port.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incorrect_length.is_set || is_set(incorrect_length.yfilter)) leaf_name_data.push_back(incorrect_length.get_name_leafdata());
    if (invalid_data.is_set || is_set(invalid_data.yfilter)) leaf_name_data.push_back(invalid_data.get_name_leafdata());
    if (invalid_type.is_set || is_set(invalid_type.yfilter)) leaf_name_data.push_back(invalid_type.get_name_leafdata());
    if (unknown_bundle.is_set || is_set(unknown_bundle.yfilter)) leaf_name_data.push_back(unknown_bundle.get_name_leafdata());
    if (unknown_port.is_set || is_set(unknown_port.yfilter)) leaf_name_data.push_back(unknown_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length = value;
        incorrect_length.value_namespace = name_space;
        incorrect_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-data")
    {
        invalid_data = value;
        invalid_data.value_namespace = name_space;
        invalid_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-type")
    {
        invalid_type = value;
        invalid_type.value_namespace = name_space;
        invalid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle = value;
        unknown_bundle.value_namespace = name_space;
        unknown_bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-port")
    {
        unknown_port = value;
        unknown_port.value_namespace = name_space;
        unknown_port.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length.yfilter = yfilter;
    }
    if(value_path == "invalid-data")
    {
        invalid_data.yfilter = yfilter;
    }
    if(value_path == "invalid-type")
    {
        invalid_type.yfilter = yfilter;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle.yfilter = yfilter;
    }
    if(value_path == "unknown-port")
    {
        unknown_port.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incorrect-length" || name == "invalid-data" || name == "invalid-type" || name == "unknown-bundle" || name == "unknown-port")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::TlVs()
    :
    received_config{YType::uint32, "received-config"},
    received_config_sync_requests{YType::uint32, "received-config-sync-requests"},
    received_na_ks{YType::uint32, "received-na-ks"},
    received_solicited_sync_data{YType::uint32, "received-solicited-sync-data"},
    received_state{YType::uint32, "received-state"},
    received_state_sync_requests{YType::uint32, "received-state-sync-requests"},
    received_sync_requests{YType::uint32, "received-sync-requests"},
    received_unsolicited_sync_data{YType::uint32, "received-unsolicited-sync-data"},
    sent_config{YType::uint32, "sent-config"},
    sent_config_sync_requests{YType::uint32, "sent-config-sync-requests"},
    sent_na_ks{YType::uint32, "sent-na-ks"},
    sent_solicited_sync_data{YType::uint32, "sent-solicited-sync-data"},
    sent_state{YType::uint32, "sent-state"},
    sent_state_sync_requests{YType::uint32, "sent-state-sync-requests"},
    sent_sync_requests{YType::uint32, "sent-sync-requests"},
    sent_unsolicited_sync_data{YType::uint32, "sent-unsolicited-sync-data"}
{

    yang_name = "tl-vs"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::~TlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::has_data() const
{
    return received_config.is_set
	|| received_config_sync_requests.is_set
	|| received_na_ks.is_set
	|| received_solicited_sync_data.is_set
	|| received_state.is_set
	|| received_state_sync_requests.is_set
	|| received_sync_requests.is_set
	|| received_unsolicited_sync_data.is_set
	|| sent_config.is_set
	|| sent_config_sync_requests.is_set
	|| sent_na_ks.is_set
	|| sent_solicited_sync_data.is_set
	|| sent_state.is_set
	|| sent_state_sync_requests.is_set
	|| sent_sync_requests.is_set
	|| sent_unsolicited_sync_data.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_config.yfilter)
	|| ydk::is_set(received_config_sync_requests.yfilter)
	|| ydk::is_set(received_na_ks.yfilter)
	|| ydk::is_set(received_solicited_sync_data.yfilter)
	|| ydk::is_set(received_state.yfilter)
	|| ydk::is_set(received_state_sync_requests.yfilter)
	|| ydk::is_set(received_sync_requests.yfilter)
	|| ydk::is_set(received_unsolicited_sync_data.yfilter)
	|| ydk::is_set(sent_config.yfilter)
	|| ydk::is_set(sent_config_sync_requests.yfilter)
	|| ydk::is_set(sent_na_ks.yfilter)
	|| ydk::is_set(sent_solicited_sync_data.yfilter)
	|| ydk::is_set(sent_state.yfilter)
	|| ydk::is_set(sent_state_sync_requests.yfilter)
	|| ydk::is_set(sent_sync_requests.yfilter)
	|| ydk::is_set(sent_unsolicited_sync_data.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_config.is_set || is_set(received_config.yfilter)) leaf_name_data.push_back(received_config.get_name_leafdata());
    if (received_config_sync_requests.is_set || is_set(received_config_sync_requests.yfilter)) leaf_name_data.push_back(received_config_sync_requests.get_name_leafdata());
    if (received_na_ks.is_set || is_set(received_na_ks.yfilter)) leaf_name_data.push_back(received_na_ks.get_name_leafdata());
    if (received_solicited_sync_data.is_set || is_set(received_solicited_sync_data.yfilter)) leaf_name_data.push_back(received_solicited_sync_data.get_name_leafdata());
    if (received_state.is_set || is_set(received_state.yfilter)) leaf_name_data.push_back(received_state.get_name_leafdata());
    if (received_state_sync_requests.is_set || is_set(received_state_sync_requests.yfilter)) leaf_name_data.push_back(received_state_sync_requests.get_name_leafdata());
    if (received_sync_requests.is_set || is_set(received_sync_requests.yfilter)) leaf_name_data.push_back(received_sync_requests.get_name_leafdata());
    if (received_unsolicited_sync_data.is_set || is_set(received_unsolicited_sync_data.yfilter)) leaf_name_data.push_back(received_unsolicited_sync_data.get_name_leafdata());
    if (sent_config.is_set || is_set(sent_config.yfilter)) leaf_name_data.push_back(sent_config.get_name_leafdata());
    if (sent_config_sync_requests.is_set || is_set(sent_config_sync_requests.yfilter)) leaf_name_data.push_back(sent_config_sync_requests.get_name_leafdata());
    if (sent_na_ks.is_set || is_set(sent_na_ks.yfilter)) leaf_name_data.push_back(sent_na_ks.get_name_leafdata());
    if (sent_solicited_sync_data.is_set || is_set(sent_solicited_sync_data.yfilter)) leaf_name_data.push_back(sent_solicited_sync_data.get_name_leafdata());
    if (sent_state.is_set || is_set(sent_state.yfilter)) leaf_name_data.push_back(sent_state.get_name_leafdata());
    if (sent_state_sync_requests.is_set || is_set(sent_state_sync_requests.yfilter)) leaf_name_data.push_back(sent_state_sync_requests.get_name_leafdata());
    if (sent_sync_requests.is_set || is_set(sent_sync_requests.yfilter)) leaf_name_data.push_back(sent_sync_requests.get_name_leafdata());
    if (sent_unsolicited_sync_data.is_set || is_set(sent_unsolicited_sync_data.yfilter)) leaf_name_data.push_back(sent_unsolicited_sync_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-config")
    {
        received_config = value;
        received_config.value_namespace = name_space;
        received_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests = value;
        received_config_sync_requests.value_namespace = name_space;
        received_config_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks = value;
        received_na_ks.value_namespace = name_space;
        received_na_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data = value;
        received_solicited_sync_data.value_namespace = name_space;
        received_solicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-state")
    {
        received_state = value;
        received_state.value_namespace = name_space;
        received_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests = value;
        received_state_sync_requests.value_namespace = name_space;
        received_state_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests = value;
        received_sync_requests.value_namespace = name_space;
        received_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data = value;
        received_unsolicited_sync_data.value_namespace = name_space;
        received_unsolicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config")
    {
        sent_config = value;
        sent_config.value_namespace = name_space;
        sent_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests = value;
        sent_config_sync_requests.value_namespace = name_space;
        sent_config_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks = value;
        sent_na_ks.value_namespace = name_space;
        sent_na_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data = value;
        sent_solicited_sync_data.value_namespace = name_space;
        sent_solicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state")
    {
        sent_state = value;
        sent_state.value_namespace = name_space;
        sent_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests = value;
        sent_state_sync_requests.value_namespace = name_space;
        sent_state_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests = value;
        sent_sync_requests.value_namespace = name_space;
        sent_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data = value;
        sent_unsolicited_sync_data.value_namespace = name_space;
        sent_unsolicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-config")
    {
        received_config.yfilter = yfilter;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks.yfilter = yfilter;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "received-state")
    {
        received_state.yfilter = yfilter;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "sent-config")
    {
        sent_config.yfilter = yfilter;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks.yfilter = yfilter;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "sent-state")
    {
        sent_state.yfilter = yfilter;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-config" || name == "received-config-sync-requests" || name == "received-na-ks" || name == "received-solicited-sync-data" || name == "received-state" || name == "received-state-sync-requests" || name == "received-sync-requests" || name == "received-unsolicited-sync-data" || name == "sent-config" || name == "sent-config-sync-requests" || name == "sent-na-ks" || name == "sent-solicited-sync-data" || name == "sent-state" || name == "sent-state-sync-requests" || name == "sent-sync-requests" || name == "sent-unsolicited-sync-data")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupAncestorMember()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters>())
{
    iccp_group_counters->parent = this;

    yang_name = "iccp-group-ancestor-member"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::~IccpGroupAncestorMember()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::has_data() const
{
    return iccp_group_id.is_set
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-ancestor-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-counters")
    {
        if(iccp_group_counters == nullptr)
        {
            iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters>();
        }
        return iccp_group_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_counters != nullptr)
    {
        children["iccp-group-counters"] = iccp_group_counters;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-counters" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpGroupCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    connection(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection>())
	,iccp_events(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents>())
	,iccp_messages(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages>())
	,invalid_tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs>())
	,tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs>())
{
    connection->parent = this;
    iccp_events->parent = this;
    iccp_messages->parent = this;
    invalid_tl_vs->parent = this;
    tl_vs->parent = this;

    yang_name = "iccp-group-counters"; yang_parent_name = "iccp-group-ancestor-member"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::~IccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| time_since_cleared.is_set
	|| (connection !=  nullptr && connection->has_data())
	|| (iccp_events !=  nullptr && iccp_events->has_data())
	|| (iccp_messages !=  nullptr && iccp_messages->has_data())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_data())
	|| (tl_vs !=  nullptr && tl_vs->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (connection !=  nullptr && connection->has_operation())
	|| (iccp_events !=  nullptr && iccp_events->has_operation())
	|| (iccp_messages !=  nullptr && iccp_messages->has_operation())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_operation())
	|| (tl_vs !=  nullptr && tl_vs->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "iccp-events")
    {
        if(iccp_events == nullptr)
        {
            iccp_events = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents>();
        }
        return iccp_events;
    }

    if(child_yang_name == "iccp-messages")
    {
        if(iccp_messages == nullptr)
        {
            iccp_messages = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages>();
        }
        return iccp_messages;
    }

    if(child_yang_name == "invalid-tl-vs")
    {
        if(invalid_tl_vs == nullptr)
        {
            invalid_tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs>();
        }
        return invalid_tl_vs;
    }

    if(child_yang_name == "tl-vs")
    {
        if(tl_vs == nullptr)
        {
            tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs>();
        }
        return tl_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(iccp_events != nullptr)
    {
        children["iccp-events"] = iccp_events;
    }

    if(iccp_messages != nullptr)
    {
        children["iccp-messages"] = iccp_messages;
    }

    if(invalid_tl_vs != nullptr)
    {
        children["invalid-tl-vs"] = invalid_tl_vs;
    }

    if(tl_vs != nullptr)
    {
        children["tl-vs"] = tl_vs;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection" || name == "iccp-events" || name == "iccp-messages" || name == "invalid-tl-vs" || name == "tl-vs" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "time-since-cleared")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::Connection()
    :
    iccp_config_connect_errors{YType::uint32, "iccp-config-connect-errors"},
    iccp_count_connect_errors{YType::uint32, "iccp-count-connect-errors"},
    iccp_invalid_connects{YType::uint32, "iccp-invalid-connects"},
    iccp_invalid_disconnects{YType::uint32, "iccp-invalid-disconnects"},
    received_connects{YType::uint32, "received-connects"},
    received_disconnects{YType::uint32, "received-disconnects"},
    received_wrong_versions{YType::uint32, "received-wrong-versions"},
    sent_connects{YType::uint32, "sent-connects"},
    sent_disconnects{YType::uint32, "sent-disconnects"},
    sent_wrong_versions{YType::uint32, "sent-wrong-versions"}
{

    yang_name = "connection"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::~Connection()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::has_data() const
{
    return iccp_config_connect_errors.is_set
	|| iccp_count_connect_errors.is_set
	|| iccp_invalid_connects.is_set
	|| iccp_invalid_disconnects.is_set
	|| received_connects.is_set
	|| received_disconnects.is_set
	|| received_wrong_versions.is_set
	|| sent_connects.is_set
	|| sent_disconnects.is_set
	|| sent_wrong_versions.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_config_connect_errors.yfilter)
	|| ydk::is_set(iccp_count_connect_errors.yfilter)
	|| ydk::is_set(iccp_invalid_connects.yfilter)
	|| ydk::is_set(iccp_invalid_disconnects.yfilter)
	|| ydk::is_set(received_connects.yfilter)
	|| ydk::is_set(received_disconnects.yfilter)
	|| ydk::is_set(received_wrong_versions.yfilter)
	|| ydk::is_set(sent_connects.yfilter)
	|| ydk::is_set(sent_disconnects.yfilter)
	|| ydk::is_set(sent_wrong_versions.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_config_connect_errors.is_set || is_set(iccp_config_connect_errors.yfilter)) leaf_name_data.push_back(iccp_config_connect_errors.get_name_leafdata());
    if (iccp_count_connect_errors.is_set || is_set(iccp_count_connect_errors.yfilter)) leaf_name_data.push_back(iccp_count_connect_errors.get_name_leafdata());
    if (iccp_invalid_connects.is_set || is_set(iccp_invalid_connects.yfilter)) leaf_name_data.push_back(iccp_invalid_connects.get_name_leafdata());
    if (iccp_invalid_disconnects.is_set || is_set(iccp_invalid_disconnects.yfilter)) leaf_name_data.push_back(iccp_invalid_disconnects.get_name_leafdata());
    if (received_connects.is_set || is_set(received_connects.yfilter)) leaf_name_data.push_back(received_connects.get_name_leafdata());
    if (received_disconnects.is_set || is_set(received_disconnects.yfilter)) leaf_name_data.push_back(received_disconnects.get_name_leafdata());
    if (received_wrong_versions.is_set || is_set(received_wrong_versions.yfilter)) leaf_name_data.push_back(received_wrong_versions.get_name_leafdata());
    if (sent_connects.is_set || is_set(sent_connects.yfilter)) leaf_name_data.push_back(sent_connects.get_name_leafdata());
    if (sent_disconnects.is_set || is_set(sent_disconnects.yfilter)) leaf_name_data.push_back(sent_disconnects.get_name_leafdata());
    if (sent_wrong_versions.is_set || is_set(sent_wrong_versions.yfilter)) leaf_name_data.push_back(sent_wrong_versions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors = value;
        iccp_config_connect_errors.value_namespace = name_space;
        iccp_config_connect_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors = value;
        iccp_count_connect_errors.value_namespace = name_space;
        iccp_count_connect_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects = value;
        iccp_invalid_connects.value_namespace = name_space;
        iccp_invalid_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects = value;
        iccp_invalid_disconnects.value_namespace = name_space;
        iccp_invalid_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-connects")
    {
        received_connects = value;
        received_connects.value_namespace = name_space;
        received_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects = value;
        received_disconnects.value_namespace = name_space;
        received_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions = value;
        received_wrong_versions.value_namespace = name_space;
        received_wrong_versions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-connects")
    {
        sent_connects = value;
        sent_connects.value_namespace = name_space;
        sent_connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects = value;
        sent_disconnects.value_namespace = name_space;
        sent_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions = value;
        sent_wrong_versions.value_namespace = name_space;
        sent_wrong_versions.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-config-connect-errors")
    {
        iccp_config_connect_errors.yfilter = yfilter;
    }
    if(value_path == "iccp-count-connect-errors")
    {
        iccp_count_connect_errors.yfilter = yfilter;
    }
    if(value_path == "iccp-invalid-connects")
    {
        iccp_invalid_connects.yfilter = yfilter;
    }
    if(value_path == "iccp-invalid-disconnects")
    {
        iccp_invalid_disconnects.yfilter = yfilter;
    }
    if(value_path == "received-connects")
    {
        received_connects.yfilter = yfilter;
    }
    if(value_path == "received-disconnects")
    {
        received_disconnects.yfilter = yfilter;
    }
    if(value_path == "received-wrong-versions")
    {
        received_wrong_versions.yfilter = yfilter;
    }
    if(value_path == "sent-connects")
    {
        sent_connects.yfilter = yfilter;
    }
    if(value_path == "sent-disconnects")
    {
        sent_disconnects.yfilter = yfilter;
    }
    if(value_path == "sent-wrong-versions")
    {
        sent_wrong_versions.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-config-connect-errors" || name == "iccp-count-connect-errors" || name == "iccp-invalid-connects" || name == "iccp-invalid-disconnects" || name == "received-connects" || name == "received-disconnects" || name == "received-wrong-versions" || name == "sent-connects" || name == "sent-disconnects" || name == "sent-wrong-versions")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::IccpEvents()
    :
    configured_clear{YType::uint32, "configured-clear"},
    configured_set{YType::uint32, "configured-set"},
    member_status_down{YType::uint32, "member-status-down"},
    member_status_up{YType::uint32, "member-status-up"},
    pe_isolated{YType::uint32, "pe-isolated"},
    pe_isolated_clear{YType::uint32, "pe-isolated-clear"},
    reachability_cleared{YType::uint32, "reachability-cleared"},
    reachability_set{YType::uint32, "reachability-set"},
    transport_down{YType::uint32, "transport-down"},
    transport_unavailable{YType::uint32, "transport-unavailable"},
    transport_up{YType::uint32, "transport-up"}
{

    yang_name = "iccp-events"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::~IccpEvents()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::has_data() const
{
    return configured_clear.is_set
	|| configured_set.is_set
	|| member_status_down.is_set
	|| member_status_up.is_set
	|| pe_isolated.is_set
	|| pe_isolated_clear.is_set
	|| reachability_cleared.is_set
	|| reachability_set.is_set
	|| transport_down.is_set
	|| transport_unavailable.is_set
	|| transport_up.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_clear.yfilter)
	|| ydk::is_set(configured_set.yfilter)
	|| ydk::is_set(member_status_down.yfilter)
	|| ydk::is_set(member_status_up.yfilter)
	|| ydk::is_set(pe_isolated.yfilter)
	|| ydk::is_set(pe_isolated_clear.yfilter)
	|| ydk::is_set(reachability_cleared.yfilter)
	|| ydk::is_set(reachability_set.yfilter)
	|| ydk::is_set(transport_down.yfilter)
	|| ydk::is_set(transport_unavailable.yfilter)
	|| ydk::is_set(transport_up.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_clear.is_set || is_set(configured_clear.yfilter)) leaf_name_data.push_back(configured_clear.get_name_leafdata());
    if (configured_set.is_set || is_set(configured_set.yfilter)) leaf_name_data.push_back(configured_set.get_name_leafdata());
    if (member_status_down.is_set || is_set(member_status_down.yfilter)) leaf_name_data.push_back(member_status_down.get_name_leafdata());
    if (member_status_up.is_set || is_set(member_status_up.yfilter)) leaf_name_data.push_back(member_status_up.get_name_leafdata());
    if (pe_isolated.is_set || is_set(pe_isolated.yfilter)) leaf_name_data.push_back(pe_isolated.get_name_leafdata());
    if (pe_isolated_clear.is_set || is_set(pe_isolated_clear.yfilter)) leaf_name_data.push_back(pe_isolated_clear.get_name_leafdata());
    if (reachability_cleared.is_set || is_set(reachability_cleared.yfilter)) leaf_name_data.push_back(reachability_cleared.get_name_leafdata());
    if (reachability_set.is_set || is_set(reachability_set.yfilter)) leaf_name_data.push_back(reachability_set.get_name_leafdata());
    if (transport_down.is_set || is_set(transport_down.yfilter)) leaf_name_data.push_back(transport_down.get_name_leafdata());
    if (transport_unavailable.is_set || is_set(transport_unavailable.yfilter)) leaf_name_data.push_back(transport_unavailable.get_name_leafdata());
    if (transport_up.is_set || is_set(transport_up.yfilter)) leaf_name_data.push_back(transport_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-clear")
    {
        configured_clear = value;
        configured_clear.value_namespace = name_space;
        configured_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-set")
    {
        configured_set = value;
        configured_set.value_namespace = name_space;
        configured_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-status-down")
    {
        member_status_down = value;
        member_status_down.value_namespace = name_space;
        member_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-status-up")
    {
        member_status_up = value;
        member_status_up.value_namespace = name_space;
        member_status_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated = value;
        pe_isolated.value_namespace = name_space;
        pe_isolated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear = value;
        pe_isolated_clear.value_namespace = name_space;
        pe_isolated_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared = value;
        reachability_cleared.value_namespace = name_space;
        reachability_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachability-set")
    {
        reachability_set = value;
        reachability_set.value_namespace = name_space;
        reachability_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-down")
    {
        transport_down = value;
        transport_down.value_namespace = name_space;
        transport_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable = value;
        transport_unavailable.value_namespace = name_space;
        transport_unavailable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-up")
    {
        transport_up = value;
        transport_up.value_namespace = name_space;
        transport_up.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-clear")
    {
        configured_clear.yfilter = yfilter;
    }
    if(value_path == "configured-set")
    {
        configured_set.yfilter = yfilter;
    }
    if(value_path == "member-status-down")
    {
        member_status_down.yfilter = yfilter;
    }
    if(value_path == "member-status-up")
    {
        member_status_up.yfilter = yfilter;
    }
    if(value_path == "pe-isolated")
    {
        pe_isolated.yfilter = yfilter;
    }
    if(value_path == "pe-isolated-clear")
    {
        pe_isolated_clear.yfilter = yfilter;
    }
    if(value_path == "reachability-cleared")
    {
        reachability_cleared.yfilter = yfilter;
    }
    if(value_path == "reachability-set")
    {
        reachability_set.yfilter = yfilter;
    }
    if(value_path == "transport-down")
    {
        transport_down.yfilter = yfilter;
    }
    if(value_path == "transport-unavailable")
    {
        transport_unavailable.yfilter = yfilter;
    }
    if(value_path == "transport-up")
    {
        transport_up.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-clear" || name == "configured-set" || name == "member-status-down" || name == "member-status-up" || name == "pe-isolated" || name == "pe-isolated-clear" || name == "reachability-cleared" || name == "reachability-set" || name == "transport-down" || name == "transport-unavailable" || name == "transport-up")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::IccpMessages()
    :
    received_messages{YType::uint32, "received-messages"},
    sent_buffer_messages{YType::uint32, "sent-buffer-messages"},
    sent_messages{YType::uint32, "sent-messages"},
    transmission_errors{YType::uint32, "transmission-errors"}
{

    yang_name = "iccp-messages"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::~IccpMessages()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::has_data() const
{
    return received_messages.is_set
	|| sent_buffer_messages.is_set
	|| sent_messages.is_set
	|| transmission_errors.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_messages.yfilter)
	|| ydk::is_set(sent_buffer_messages.yfilter)
	|| ydk::is_set(sent_messages.yfilter)
	|| ydk::is_set(transmission_errors.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-messages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_messages.is_set || is_set(received_messages.yfilter)) leaf_name_data.push_back(received_messages.get_name_leafdata());
    if (sent_buffer_messages.is_set || is_set(sent_buffer_messages.yfilter)) leaf_name_data.push_back(sent_buffer_messages.get_name_leafdata());
    if (sent_messages.is_set || is_set(sent_messages.yfilter)) leaf_name_data.push_back(sent_messages.get_name_leafdata());
    if (transmission_errors.is_set || is_set(transmission_errors.yfilter)) leaf_name_data.push_back(transmission_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-messages")
    {
        received_messages = value;
        received_messages.value_namespace = name_space;
        received_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages = value;
        sent_buffer_messages.value_namespace = name_space;
        sent_buffer_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-messages")
    {
        sent_messages = value;
        sent_messages.value_namespace = name_space;
        sent_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors = value;
        transmission_errors.value_namespace = name_space;
        transmission_errors.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-messages")
    {
        received_messages.yfilter = yfilter;
    }
    if(value_path == "sent-buffer-messages")
    {
        sent_buffer_messages.yfilter = yfilter;
    }
    if(value_path == "sent-messages")
    {
        sent_messages.yfilter = yfilter;
    }
    if(value_path == "transmission-errors")
    {
        transmission_errors.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-messages" || name == "sent-buffer-messages" || name == "sent-messages" || name == "transmission-errors")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::InvalidTlVs()
    :
    incorrect_length{YType::uint32, "incorrect-length"},
    invalid_data{YType::uint32, "invalid-data"},
    invalid_type{YType::uint32, "invalid-type"},
    unknown_bundle{YType::uint32, "unknown-bundle"},
    unknown_port{YType::uint32, "unknown-port"}
{

    yang_name = "invalid-tl-vs"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::~InvalidTlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::has_data() const
{
    return incorrect_length.is_set
	|| invalid_data.is_set
	|| invalid_type.is_set
	|| unknown_bundle.is_set
	|| unknown_port.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incorrect_length.yfilter)
	|| ydk::is_set(invalid_data.yfilter)
	|| ydk::is_set(invalid_type.yfilter)
	|| ydk::is_set(unknown_bundle.yfilter)
	|| ydk::is_set(unknown_port.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incorrect_length.is_set || is_set(incorrect_length.yfilter)) leaf_name_data.push_back(incorrect_length.get_name_leafdata());
    if (invalid_data.is_set || is_set(invalid_data.yfilter)) leaf_name_data.push_back(invalid_data.get_name_leafdata());
    if (invalid_type.is_set || is_set(invalid_type.yfilter)) leaf_name_data.push_back(invalid_type.get_name_leafdata());
    if (unknown_bundle.is_set || is_set(unknown_bundle.yfilter)) leaf_name_data.push_back(unknown_bundle.get_name_leafdata());
    if (unknown_port.is_set || is_set(unknown_port.yfilter)) leaf_name_data.push_back(unknown_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length = value;
        incorrect_length.value_namespace = name_space;
        incorrect_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-data")
    {
        invalid_data = value;
        invalid_data.value_namespace = name_space;
        invalid_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-type")
    {
        invalid_type = value;
        invalid_type.value_namespace = name_space;
        invalid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle = value;
        unknown_bundle.value_namespace = name_space;
        unknown_bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-port")
    {
        unknown_port = value;
        unknown_port.value_namespace = name_space;
        unknown_port.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incorrect-length")
    {
        incorrect_length.yfilter = yfilter;
    }
    if(value_path == "invalid-data")
    {
        invalid_data.yfilter = yfilter;
    }
    if(value_path == "invalid-type")
    {
        invalid_type.yfilter = yfilter;
    }
    if(value_path == "unknown-bundle")
    {
        unknown_bundle.yfilter = yfilter;
    }
    if(value_path == "unknown-port")
    {
        unknown_port.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incorrect-length" || name == "invalid-data" || name == "invalid-type" || name == "unknown-bundle" || name == "unknown-port")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::TlVs()
    :
    received_config{YType::uint32, "received-config"},
    received_config_sync_requests{YType::uint32, "received-config-sync-requests"},
    received_na_ks{YType::uint32, "received-na-ks"},
    received_solicited_sync_data{YType::uint32, "received-solicited-sync-data"},
    received_state{YType::uint32, "received-state"},
    received_state_sync_requests{YType::uint32, "received-state-sync-requests"},
    received_sync_requests{YType::uint32, "received-sync-requests"},
    received_unsolicited_sync_data{YType::uint32, "received-unsolicited-sync-data"},
    sent_config{YType::uint32, "sent-config"},
    sent_config_sync_requests{YType::uint32, "sent-config-sync-requests"},
    sent_na_ks{YType::uint32, "sent-na-ks"},
    sent_solicited_sync_data{YType::uint32, "sent-solicited-sync-data"},
    sent_state{YType::uint32, "sent-state"},
    sent_state_sync_requests{YType::uint32, "sent-state-sync-requests"},
    sent_sync_requests{YType::uint32, "sent-sync-requests"},
    sent_unsolicited_sync_data{YType::uint32, "sent-unsolicited-sync-data"}
{

    yang_name = "tl-vs"; yang_parent_name = "iccp-group-counters"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::~TlVs()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::has_data() const
{
    return received_config.is_set
	|| received_config_sync_requests.is_set
	|| received_na_ks.is_set
	|| received_solicited_sync_data.is_set
	|| received_state.is_set
	|| received_state_sync_requests.is_set
	|| received_sync_requests.is_set
	|| received_unsolicited_sync_data.is_set
	|| sent_config.is_set
	|| sent_config_sync_requests.is_set
	|| sent_na_ks.is_set
	|| sent_solicited_sync_data.is_set
	|| sent_state.is_set
	|| sent_state_sync_requests.is_set
	|| sent_sync_requests.is_set
	|| sent_unsolicited_sync_data.is_set;
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_config.yfilter)
	|| ydk::is_set(received_config_sync_requests.yfilter)
	|| ydk::is_set(received_na_ks.yfilter)
	|| ydk::is_set(received_solicited_sync_data.yfilter)
	|| ydk::is_set(received_state.yfilter)
	|| ydk::is_set(received_state_sync_requests.yfilter)
	|| ydk::is_set(received_sync_requests.yfilter)
	|| ydk::is_set(received_unsolicited_sync_data.yfilter)
	|| ydk::is_set(sent_config.yfilter)
	|| ydk::is_set(sent_config_sync_requests.yfilter)
	|| ydk::is_set(sent_na_ks.yfilter)
	|| ydk::is_set(sent_solicited_sync_data.yfilter)
	|| ydk::is_set(sent_state.yfilter)
	|| ydk::is_set(sent_state_sync_requests.yfilter)
	|| ydk::is_set(sent_sync_requests.yfilter)
	|| ydk::is_set(sent_unsolicited_sync_data.yfilter);
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_config.is_set || is_set(received_config.yfilter)) leaf_name_data.push_back(received_config.get_name_leafdata());
    if (received_config_sync_requests.is_set || is_set(received_config_sync_requests.yfilter)) leaf_name_data.push_back(received_config_sync_requests.get_name_leafdata());
    if (received_na_ks.is_set || is_set(received_na_ks.yfilter)) leaf_name_data.push_back(received_na_ks.get_name_leafdata());
    if (received_solicited_sync_data.is_set || is_set(received_solicited_sync_data.yfilter)) leaf_name_data.push_back(received_solicited_sync_data.get_name_leafdata());
    if (received_state.is_set || is_set(received_state.yfilter)) leaf_name_data.push_back(received_state.get_name_leafdata());
    if (received_state_sync_requests.is_set || is_set(received_state_sync_requests.yfilter)) leaf_name_data.push_back(received_state_sync_requests.get_name_leafdata());
    if (received_sync_requests.is_set || is_set(received_sync_requests.yfilter)) leaf_name_data.push_back(received_sync_requests.get_name_leafdata());
    if (received_unsolicited_sync_data.is_set || is_set(received_unsolicited_sync_data.yfilter)) leaf_name_data.push_back(received_unsolicited_sync_data.get_name_leafdata());
    if (sent_config.is_set || is_set(sent_config.yfilter)) leaf_name_data.push_back(sent_config.get_name_leafdata());
    if (sent_config_sync_requests.is_set || is_set(sent_config_sync_requests.yfilter)) leaf_name_data.push_back(sent_config_sync_requests.get_name_leafdata());
    if (sent_na_ks.is_set || is_set(sent_na_ks.yfilter)) leaf_name_data.push_back(sent_na_ks.get_name_leafdata());
    if (sent_solicited_sync_data.is_set || is_set(sent_solicited_sync_data.yfilter)) leaf_name_data.push_back(sent_solicited_sync_data.get_name_leafdata());
    if (sent_state.is_set || is_set(sent_state.yfilter)) leaf_name_data.push_back(sent_state.get_name_leafdata());
    if (sent_state_sync_requests.is_set || is_set(sent_state_sync_requests.yfilter)) leaf_name_data.push_back(sent_state_sync_requests.get_name_leafdata());
    if (sent_sync_requests.is_set || is_set(sent_sync_requests.yfilter)) leaf_name_data.push_back(sent_sync_requests.get_name_leafdata());
    if (sent_unsolicited_sync_data.is_set || is_set(sent_unsolicited_sync_data.yfilter)) leaf_name_data.push_back(sent_unsolicited_sync_data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-config")
    {
        received_config = value;
        received_config.value_namespace = name_space;
        received_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests = value;
        received_config_sync_requests.value_namespace = name_space;
        received_config_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks = value;
        received_na_ks.value_namespace = name_space;
        received_na_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data = value;
        received_solicited_sync_data.value_namespace = name_space;
        received_solicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-state")
    {
        received_state = value;
        received_state.value_namespace = name_space;
        received_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests = value;
        received_state_sync_requests.value_namespace = name_space;
        received_state_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests = value;
        received_sync_requests.value_namespace = name_space;
        received_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data = value;
        received_unsolicited_sync_data.value_namespace = name_space;
        received_unsolicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config")
    {
        sent_config = value;
        sent_config.value_namespace = name_space;
        sent_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests = value;
        sent_config_sync_requests.value_namespace = name_space;
        sent_config_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks = value;
        sent_na_ks.value_namespace = name_space;
        sent_na_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data = value;
        sent_solicited_sync_data.value_namespace = name_space;
        sent_solicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state")
    {
        sent_state = value;
        sent_state.value_namespace = name_space;
        sent_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests = value;
        sent_state_sync_requests.value_namespace = name_space;
        sent_state_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests = value;
        sent_sync_requests.value_namespace = name_space;
        sent_sync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data = value;
        sent_unsolicited_sync_data.value_namespace = name_space;
        sent_unsolicited_sync_data.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-config")
    {
        received_config.yfilter = yfilter;
    }
    if(value_path == "received-config-sync-requests")
    {
        received_config_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-na-ks")
    {
        received_na_ks.yfilter = yfilter;
    }
    if(value_path == "received-solicited-sync-data")
    {
        received_solicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "received-state")
    {
        received_state.yfilter = yfilter;
    }
    if(value_path == "received-state-sync-requests")
    {
        received_state_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-sync-requests")
    {
        received_sync_requests.yfilter = yfilter;
    }
    if(value_path == "received-unsolicited-sync-data")
    {
        received_unsolicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "sent-config")
    {
        sent_config.yfilter = yfilter;
    }
    if(value_path == "sent-config-sync-requests")
    {
        sent_config_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-na-ks")
    {
        sent_na_ks.yfilter = yfilter;
    }
    if(value_path == "sent-solicited-sync-data")
    {
        sent_solicited_sync_data.yfilter = yfilter;
    }
    if(value_path == "sent-state")
    {
        sent_state.yfilter = yfilter;
    }
    if(value_path == "sent-state-sync-requests")
    {
        sent_state_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-sync-requests")
    {
        sent_sync_requests.yfilter = yfilter;
    }
    if(value_path == "sent-unsolicited-sync-data")
    {
        sent_unsolicited_sync_data.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-config" || name == "received-config-sync-requests" || name == "received-na-ks" || name == "received-solicited-sync-data" || name == "received-state" || name == "received-state-sync-requests" || name == "received-sync-requests" || name == "received-unsolicited-sync-data" || name == "sent-config" || name == "sent-config-sync-requests" || name == "sent-na-ks" || name == "sent-solicited-sync-data" || name == "sent-state" || name == "sent-state-sync-requests" || name == "sent-sync-requests" || name == "sent-unsolicited-sync-data")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupAncestorNode()
    :
    iccp_group_id{YType::uint32, "iccp-group-id"}
    	,
    iccp_group_counters(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters>())
{
    iccp_group_counters->parent = this;

    yang_name = "iccp-group-ancestor-node"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::~IccpGroupAncestorNode()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::has_data() const
{
    return iccp_group_id.is_set
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iccp_group_id.yfilter)
	|| (iccp_group_counters !=  nullptr && iccp_group_counters->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-ancestor-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_group_id.is_set || is_set(iccp_group_id.yfilter)) leaf_name_data.push_back(iccp_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-counters")
    {
        if(iccp_group_counters == nullptr)
        {
            iccp_group_counters = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters>();
        }
        return iccp_group_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_counters != nullptr)
    {
        children["iccp-group-counters"] = iccp_group_counters;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id = value;
        iccp_group_id.value_namespace = name_space;
        iccp_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iccp-group-id")
    {
        iccp_group_id.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-counters" || name == "iccp-group-id")
        return true;
    return false;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpGroupCounters()
    :
    last_time_cleared{YType::uint64, "last-time-cleared"},
    last_unexpected_event{YType::uint64, "last-unexpected-event"},
    time_since_cleared{YType::uint64, "time-since-cleared"}
    	,
    connection(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection>())
	,iccp_events(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents>())
	,iccp_messages(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages>())
	,invalid_tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs>())
	,tl_vs(std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs>())
{
    connection->parent = this;
    iccp_events->parent = this;
    iccp_messages->parent = this;
    invalid_tl_vs->parent = this;
    tl_vs->parent = this;

    yang_name = "iccp-group-counters"; yang_parent_name = "iccp-group-ancestor-node"; is_top_level_class = false; has_list_ancestor = true;
}

BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::~IccpGroupCounters()
{
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::has_data() const
{
    return last_time_cleared.is_set
	|| last_unexpected_event.is_set
	|| time_since_cleared.is_set
	|| (connection !=  nullptr && connection->has_data())
	|| (iccp_events !=  nullptr && iccp_events->has_data())
	|| (iccp_messages !=  nullptr && iccp_messages->has_data())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_data())
	|| (tl_vs !=  nullptr && tl_vs->has_data());
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_time_cleared.yfilter)
	|| ydk::is_set(last_unexpected_event.yfilter)
	|| ydk::is_set(time_since_cleared.yfilter)
	|| (connection !=  nullptr && connection->has_operation())
	|| (iccp_events !=  nullptr && iccp_events->has_operation())
	|| (iccp_messages !=  nullptr && iccp_messages->has_operation())
	|| (invalid_tl_vs !=  nullptr && invalid_tl_vs->has_operation())
	|| (tl_vs !=  nullptr && tl_vs->has_operation());
}

std::string BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_time_cleared.is_set || is_set(last_time_cleared.yfilter)) leaf_name_data.push_back(last_time_cleared.get_name_leafdata());
    if (last_unexpected_event.is_set || is_set(last_unexpected_event.yfilter)) leaf_name_data.push_back(last_unexpected_event.get_name_leafdata());
    if (time_since_cleared.is_set || is_set(time_since_cleared.yfilter)) leaf_name_data.push_back(time_since_cleared.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "iccp-events")
    {
        if(iccp_events == nullptr)
        {
            iccp_events = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents>();
        }
        return iccp_events;
    }

    if(child_yang_name == "iccp-messages")
    {
        if(iccp_messages == nullptr)
        {
            iccp_messages = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages>();
        }
        return iccp_messages;
    }

    if(child_yang_name == "invalid-tl-vs")
    {
        if(invalid_tl_vs == nullptr)
        {
            invalid_tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs>();
        }
        return invalid_tl_vs;
    }

    if(child_yang_name == "tl-vs")
    {
        if(tl_vs == nullptr)
        {
            tl_vs = std::make_shared<BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs>();
        }
        return tl_vs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(iccp_events != nullptr)
    {
        children["iccp-events"] = iccp_events;
    }

    if(iccp_messages != nullptr)
    {
        children["iccp-messages"] = iccp_messages;
    }

    if(invalid_tl_vs != nullptr)
    {
        children["invalid-tl-vs"] = invalid_tl_vs;
    }

    if(tl_vs != nullptr)
    {
        children["tl-vs"] = tl_vs;
    }

    return children;
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared = value;
        last_time_cleared.value_namespace = name_space;
        last_time_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event = value;
        last_unexpected_event.value_namespace = name_space;
        last_unexpected_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared = value;
        time_since_cleared.value_namespace = name_space;
        time_since_cleared.value_namespace_prefix = name_space_prefix;
    }
}

void BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-time-cleared")
    {
        last_time_cleared.yfilter = yfilter;
    }
    if(value_path == "last-unexpected-event")
    {
        last_unexpected_event.yfilter = yfilter;
    }
    if(value_path == "time-since-cleared")
    {
        time_since_cleared.yfilter = yfilter;
    }
}

bool BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection" || name == "iccp-events" || name == "iccp-messages" || name == "invalid-tl-vs" || name == "tl-vs" || name == "last-time-cleared" || name == "last-unexpected-event" || name == "time-since-cleared")
        return true;
    return false;
}


}
}

