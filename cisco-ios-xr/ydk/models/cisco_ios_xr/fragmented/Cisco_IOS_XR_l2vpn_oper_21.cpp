
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_21.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_22.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_29.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_28.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_23.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_24.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_25.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::EncapsulationTotal()
    :
    psn_type{YType::enumeration, "psn-type"},
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"}
{

    yang_name = "encapsulation-total"; yang_parent_name = "xconnect-brief"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::~EncapsulationTotal()
{
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::has_data() const
{
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_data())
            return true;
    }
    return psn_type.is_set
	|| ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set;
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::has_operation() const
{
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(psn_type.yfilter)
	|| ydk::is_set(ac1_encapsulation.yfilter)
	|| ydk::is_set(ac2_encapsulation.yfilter);
}

std::string L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (psn_type.is_set || is_set(psn_type.yfilter)) leaf_name_data.push_back(psn_type.get_name_leafdata());
    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.yfilter)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.yfilter)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up-count")
    {
        for(auto const & c : up_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount>();
        c->parent = this;
        up_count.push_back(c);
        return c;
    }

    if(child_yang_name == "down-count")
    {
        for(auto const & c : down_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount>();
        c->parent = this;
        down_count.push_back(c);
        return c;
    }

    if(child_yang_name == "unresolved-count")
    {
        for(auto const & c : unresolved_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount>();
        c->parent = this;
        unresolved_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : up_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : down_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unresolved_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "psn-type")
    {
        psn_type = value;
        psn_type.value_namespace = name_space;
        psn_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
        ac1_encapsulation.value_namespace = name_space;
        ac1_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
        ac2_encapsulation.value_namespace = name_space;
        ac2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "psn-type")
    {
        psn_type.yfilter = yfilter;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-count" || name == "down-count" || name == "unresolved-count" || name == "psn-type" || name == "ac1-encapsulation" || name == "ac2-encapsulation")
        return true;
    return false;
}

L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::UpCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "up-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::~UpCount()
{
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-total/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::DownCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "down-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::~DownCount()
{
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-total/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::UnresolvedCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unresolved-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::~UnresolvedCount()
{
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-total/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unresolved-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "l2vpnv2"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Nodes::~Nodes()
{
}

bool L2Vpnv2::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    discoveries(std::make_shared<L2Vpnv2::Nodes::Node::Discoveries>())
	,flexible_xconnect_service_summary(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary>())
	,main_interfaces(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces>())
	,iccp_sm(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm>())
	,bridge_summary(std::make_shared<L2Vpnv2::Nodes::Node::BridgeSummary>())
	,nsr(std::make_shared<L2Vpnv2::Nodes::Node::Nsr>())
	,preferred_paths(std::make_shared<L2Vpnv2::Nodes::Node::PreferredPaths>())
	,global_settings(std::make_shared<L2Vpnv2::Nodes::Node::GlobalSettings>())
	,pwr(std::make_shared<L2Vpnv2::Nodes::Node::Pwr>())
	,xconnect_mp2mp_ce2ces(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces>())
	,xconnects(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects>())
	,xconnect_groups(std::make_shared<L2Vpnv2::Nodes::Node::XconnectGroups>())
	,xconnect_mp2mps(std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps>())
	,indexes(std::make_shared<L2Vpnv2::Nodes::Node::Indexes>())
	,xconnect_summary(std::make_shared<L2Vpnv2::Nodes::Node::XconnectSummary>())
	,proc_fsm(std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm>())
	,mstp_ports(std::make_shared<L2Vpnv2::Nodes::Node::MstpPorts>())
	,generic_interface_list_details(std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails>())
	,l2vpn_resource_state(std::make_shared<L2Vpnv2::Nodes::Node::L2VpnResourceState>())
	,bridge_domains(std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains>())
	,discovery_summary(std::make_shared<L2Vpnv2::Nodes::Node::DiscoverySummary>())
	,g8032(std::make_shared<L2Vpnv2::Nodes::Node::G8032>())
	,pseudowire_classes(std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses>())
	,l2vpn_collaborators(std::make_shared<L2Vpnv2::Nodes::Node::L2VpnCollaborators>())
	,mvrp(std::make_shared<L2Vpnv2::Nodes::Node::Mvrp>())
	,generic_interfaces(std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaces>())
	,mstp_vlans(std::make_shared<L2Vpnv2::Nodes::Node::MstpVlans>())
	,l2vpn_pbb_bsa(std::make_shared<L2Vpnv2::Nodes::Node::L2VpnPbbBsa>())
	,flexible_xconnect_services(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices>())
	,xconnect_brief(std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief>())
{
    discoveries->parent = this;
    flexible_xconnect_service_summary->parent = this;
    main_interfaces->parent = this;
    iccp_sm->parent = this;
    bridge_summary->parent = this;
    nsr->parent = this;
    preferred_paths->parent = this;
    global_settings->parent = this;
    pwr->parent = this;
    xconnect_mp2mp_ce2ces->parent = this;
    xconnects->parent = this;
    xconnect_groups->parent = this;
    xconnect_mp2mps->parent = this;
    indexes->parent = this;
    xconnect_summary->parent = this;
    proc_fsm->parent = this;
    mstp_ports->parent = this;
    generic_interface_list_details->parent = this;
    l2vpn_resource_state->parent = this;
    bridge_domains->parent = this;
    discovery_summary->parent = this;
    g8032->parent = this;
    pseudowire_classes->parent = this;
    l2vpn_collaborators->parent = this;
    mvrp->parent = this;
    generic_interfaces->parent = this;
    mstp_vlans->parent = this;
    l2vpn_pbb_bsa->parent = this;
    flexible_xconnect_services->parent = this;
    xconnect_brief->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Nodes::Node::~Node()
{
}

bool L2Vpnv2::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (discoveries !=  nullptr && discoveries->has_data())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_data())
	|| (main_interfaces !=  nullptr && main_interfaces->has_data())
	|| (iccp_sm !=  nullptr && iccp_sm->has_data())
	|| (bridge_summary !=  nullptr && bridge_summary->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (preferred_paths !=  nullptr && preferred_paths->has_data())
	|| (global_settings !=  nullptr && global_settings->has_data())
	|| (pwr !=  nullptr && pwr->has_data())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_data())
	|| (xconnects !=  nullptr && xconnects->has_data())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_data())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_data())
	|| (indexes !=  nullptr && indexes->has_data())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_data())
	|| (proc_fsm !=  nullptr && proc_fsm->has_data())
	|| (mstp_ports !=  nullptr && mstp_ports->has_data())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_data())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_data())
	|| (bridge_domains !=  nullptr && bridge_domains->has_data())
	|| (discovery_summary !=  nullptr && discovery_summary->has_data())
	|| (g8032 !=  nullptr && g8032->has_data())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_data())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_data())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_data())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_data())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_data())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_data());
}

bool L2Vpnv2::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (discoveries !=  nullptr && discoveries->has_operation())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_operation())
	|| (main_interfaces !=  nullptr && main_interfaces->has_operation())
	|| (iccp_sm !=  nullptr && iccp_sm->has_operation())
	|| (bridge_summary !=  nullptr && bridge_summary->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (preferred_paths !=  nullptr && preferred_paths->has_operation())
	|| (global_settings !=  nullptr && global_settings->has_operation())
	|| (pwr !=  nullptr && pwr->has_operation())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_operation())
	|| (xconnects !=  nullptr && xconnects->has_operation())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_operation())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_operation())
	|| (indexes !=  nullptr && indexes->has_operation())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_operation())
	|| (proc_fsm !=  nullptr && proc_fsm->has_operation())
	|| (mstp_ports !=  nullptr && mstp_ports->has_operation())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_operation())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_operation())
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation())
	|| (discovery_summary !=  nullptr && discovery_summary->has_operation())
	|| (g8032 !=  nullptr && g8032->has_operation())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_operation())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (generic_interfaces !=  nullptr && generic_interfaces->has_operation())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_operation())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_operation())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_operation())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_operation());
}

std::string L2Vpnv2::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discoveries")
    {
        if(discoveries == nullptr)
        {
            discoveries = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries>();
        }
        return discoveries;
    }

    if(child_yang_name == "flexible-xconnect-service-summary")
    {
        if(flexible_xconnect_service_summary == nullptr)
        {
            flexible_xconnect_service_summary = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary>();
        }
        return flexible_xconnect_service_summary;
    }

    if(child_yang_name == "main-interfaces")
    {
        if(main_interfaces == nullptr)
        {
            main_interfaces = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces>();
        }
        return main_interfaces;
    }

    if(child_yang_name == "iccp-sm")
    {
        if(iccp_sm == nullptr)
        {
            iccp_sm = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm>();
        }
        return iccp_sm;
    }

    if(child_yang_name == "bridge-summary")
    {
        if(bridge_summary == nullptr)
        {
            bridge_summary = std::make_shared<L2Vpnv2::Nodes::Node::BridgeSummary>();
        }
        return bridge_summary;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<L2Vpnv2::Nodes::Node::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "preferred-paths")
    {
        if(preferred_paths == nullptr)
        {
            preferred_paths = std::make_shared<L2Vpnv2::Nodes::Node::PreferredPaths>();
        }
        return preferred_paths;
    }

    if(child_yang_name == "global-settings")
    {
        if(global_settings == nullptr)
        {
            global_settings = std::make_shared<L2Vpnv2::Nodes::Node::GlobalSettings>();
        }
        return global_settings;
    }

    if(child_yang_name == "pwr")
    {
        if(pwr == nullptr)
        {
            pwr = std::make_shared<L2Vpnv2::Nodes::Node::Pwr>();
        }
        return pwr;
    }

    if(child_yang_name == "xconnect-mp2mp-ce2ces")
    {
        if(xconnect_mp2mp_ce2ces == nullptr)
        {
            xconnect_mp2mp_ce2ces = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces>();
        }
        return xconnect_mp2mp_ce2ces;
    }

    if(child_yang_name == "xconnects")
    {
        if(xconnects == nullptr)
        {
            xconnects = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects>();
        }
        return xconnects;
    }

    if(child_yang_name == "xconnect-groups")
    {
        if(xconnect_groups == nullptr)
        {
            xconnect_groups = std::make_shared<L2Vpnv2::Nodes::Node::XconnectGroups>();
        }
        return xconnect_groups;
    }

    if(child_yang_name == "xconnect-mp2mps")
    {
        if(xconnect_mp2mps == nullptr)
        {
            xconnect_mp2mps = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2Mps>();
        }
        return xconnect_mp2mps;
    }

    if(child_yang_name == "indexes")
    {
        if(indexes == nullptr)
        {
            indexes = std::make_shared<L2Vpnv2::Nodes::Node::Indexes>();
        }
        return indexes;
    }

    if(child_yang_name == "xconnect-summary")
    {
        if(xconnect_summary == nullptr)
        {
            xconnect_summary = std::make_shared<L2Vpnv2::Nodes::Node::XconnectSummary>();
        }
        return xconnect_summary;
    }

    if(child_yang_name == "proc-fsm")
    {
        if(proc_fsm == nullptr)
        {
            proc_fsm = std::make_shared<L2Vpnv2::Nodes::Node::ProcFsm>();
        }
        return proc_fsm;
    }

    if(child_yang_name == "mstp-ports")
    {
        if(mstp_ports == nullptr)
        {
            mstp_ports = std::make_shared<L2Vpnv2::Nodes::Node::MstpPorts>();
        }
        return mstp_ports;
    }

    if(child_yang_name == "generic-interface-list-details")
    {
        if(generic_interface_list_details == nullptr)
        {
            generic_interface_list_details = std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaceListDetails>();
        }
        return generic_interface_list_details;
    }

    if(child_yang_name == "l2vpn-resource-state")
    {
        if(l2vpn_resource_state == nullptr)
        {
            l2vpn_resource_state = std::make_shared<L2Vpnv2::Nodes::Node::L2VpnResourceState>();
        }
        return l2vpn_resource_state;
    }

    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<L2Vpnv2::Nodes::Node::BridgeDomains>();
        }
        return bridge_domains;
    }

    if(child_yang_name == "discovery-summary")
    {
        if(discovery_summary == nullptr)
        {
            discovery_summary = std::make_shared<L2Vpnv2::Nodes::Node::DiscoverySummary>();
        }
        return discovery_summary;
    }

    if(child_yang_name == "g8032")
    {
        if(g8032 == nullptr)
        {
            g8032 = std::make_shared<L2Vpnv2::Nodes::Node::G8032>();
        }
        return g8032;
    }

    if(child_yang_name == "pseudowire-classes")
    {
        if(pseudowire_classes == nullptr)
        {
            pseudowire_classes = std::make_shared<L2Vpnv2::Nodes::Node::PseudowireClasses>();
        }
        return pseudowire_classes;
    }

    if(child_yang_name == "l2vpn-collaborators")
    {
        if(l2vpn_collaborators == nullptr)
        {
            l2vpn_collaborators = std::make_shared<L2Vpnv2::Nodes::Node::L2VpnCollaborators>();
        }
        return l2vpn_collaborators;
    }

    if(child_yang_name == "mvrp")
    {
        if(mvrp == nullptr)
        {
            mvrp = std::make_shared<L2Vpnv2::Nodes::Node::Mvrp>();
        }
        return mvrp;
    }

    if(child_yang_name == "generic-interfaces")
    {
        if(generic_interfaces == nullptr)
        {
            generic_interfaces = std::make_shared<L2Vpnv2::Nodes::Node::GenericInterfaces>();
        }
        return generic_interfaces;
    }

    if(child_yang_name == "mstp-vlans")
    {
        if(mstp_vlans == nullptr)
        {
            mstp_vlans = std::make_shared<L2Vpnv2::Nodes::Node::MstpVlans>();
        }
        return mstp_vlans;
    }

    if(child_yang_name == "l2vpn-pbb-bsa")
    {
        if(l2vpn_pbb_bsa == nullptr)
        {
            l2vpn_pbb_bsa = std::make_shared<L2Vpnv2::Nodes::Node::L2VpnPbbBsa>();
        }
        return l2vpn_pbb_bsa;
    }

    if(child_yang_name == "flexible-xconnect-services")
    {
        if(flexible_xconnect_services == nullptr)
        {
            flexible_xconnect_services = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices>();
        }
        return flexible_xconnect_services;
    }

    if(child_yang_name == "xconnect-brief")
    {
        if(xconnect_brief == nullptr)
        {
            xconnect_brief = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief>();
        }
        return xconnect_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discoveries != nullptr)
    {
        children["discoveries"] = discoveries;
    }

    if(flexible_xconnect_service_summary != nullptr)
    {
        children["flexible-xconnect-service-summary"] = flexible_xconnect_service_summary;
    }

    if(main_interfaces != nullptr)
    {
        children["main-interfaces"] = main_interfaces;
    }

    if(iccp_sm != nullptr)
    {
        children["iccp-sm"] = iccp_sm;
    }

    if(bridge_summary != nullptr)
    {
        children["bridge-summary"] = bridge_summary;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(preferred_paths != nullptr)
    {
        children["preferred-paths"] = preferred_paths;
    }

    if(global_settings != nullptr)
    {
        children["global-settings"] = global_settings;
    }

    if(pwr != nullptr)
    {
        children["pwr"] = pwr;
    }

    if(xconnect_mp2mp_ce2ces != nullptr)
    {
        children["xconnect-mp2mp-ce2ces"] = xconnect_mp2mp_ce2ces;
    }

    if(xconnects != nullptr)
    {
        children["xconnects"] = xconnects;
    }

    if(xconnect_groups != nullptr)
    {
        children["xconnect-groups"] = xconnect_groups;
    }

    if(xconnect_mp2mps != nullptr)
    {
        children["xconnect-mp2mps"] = xconnect_mp2mps;
    }

    if(indexes != nullptr)
    {
        children["indexes"] = indexes;
    }

    if(xconnect_summary != nullptr)
    {
        children["xconnect-summary"] = xconnect_summary;
    }

    if(proc_fsm != nullptr)
    {
        children["proc-fsm"] = proc_fsm;
    }

    if(mstp_ports != nullptr)
    {
        children["mstp-ports"] = mstp_ports;
    }

    if(generic_interface_list_details != nullptr)
    {
        children["generic-interface-list-details"] = generic_interface_list_details;
    }

    if(l2vpn_resource_state != nullptr)
    {
        children["l2vpn-resource-state"] = l2vpn_resource_state;
    }

    if(bridge_domains != nullptr)
    {
        children["bridge-domains"] = bridge_domains;
    }

    if(discovery_summary != nullptr)
    {
        children["discovery-summary"] = discovery_summary;
    }

    if(g8032 != nullptr)
    {
        children["g8032"] = g8032;
    }

    if(pseudowire_classes != nullptr)
    {
        children["pseudowire-classes"] = pseudowire_classes;
    }

    if(l2vpn_collaborators != nullptr)
    {
        children["l2vpn-collaborators"] = l2vpn_collaborators;
    }

    if(mvrp != nullptr)
    {
        children["mvrp"] = mvrp;
    }

    if(generic_interfaces != nullptr)
    {
        children["generic-interfaces"] = generic_interfaces;
    }

    if(mstp_vlans != nullptr)
    {
        children["mstp-vlans"] = mstp_vlans;
    }

    if(l2vpn_pbb_bsa != nullptr)
    {
        children["l2vpn-pbb-bsa"] = l2vpn_pbb_bsa;
    }

    if(flexible_xconnect_services != nullptr)
    {
        children["flexible-xconnect-services"] = flexible_xconnect_services;
    }

    if(xconnect_brief != nullptr)
    {
        children["xconnect-brief"] = xconnect_brief;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discoveries" || name == "flexible-xconnect-service-summary" || name == "main-interfaces" || name == "iccp-sm" || name == "bridge-summary" || name == "nsr" || name == "preferred-paths" || name == "global-settings" || name == "pwr" || name == "xconnect-mp2mp-ce2ces" || name == "xconnects" || name == "xconnect-groups" || name == "xconnect-mp2mps" || name == "indexes" || name == "xconnect-summary" || name == "proc-fsm" || name == "mstp-ports" || name == "generic-interface-list-details" || name == "l2vpn-resource-state" || name == "bridge-domains" || name == "discovery-summary" || name == "g8032" || name == "pseudowire-classes" || name == "l2vpn-collaborators" || name == "mvrp" || name == "generic-interfaces" || name == "mstp-vlans" || name == "l2vpn-pbb-bsa" || name == "flexible-xconnect-services" || name == "xconnect-brief" || name == "node-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discoveries()
{

    yang_name = "discoveries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::~Discoveries()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::has_data() const
{
    for (std::size_t index=0; index<discovery.size(); index++)
    {
        if(discovery[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::Discoveries::has_operation() const
{
    for (std::size_t index=0; index<discovery.size(); index++)
    {
        if(discovery[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discoveries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        for(auto const & c : discovery)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery>();
        c->parent = this;
        discovery.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discovery)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Discoveries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::Discovery()
    :
    service_name{YType::enumeration, "service-name"},
    group_name{YType::str, "group-name"},
    vpn_name{YType::str, "vpn-name"},
    mtu_mismatch_ignore{YType::boolean, "mtu-mismatch-ignore"},
    number_vpn{YType::uint32, "number-vpn"},
    vpn_id{YType::uint32, "vpn-id"},
    service_name_xr{YType::str, "service-name-xr"},
    group_name_xr{YType::str, "group-name-xr"},
    vpn_name_xr{YType::str, "vpn-name-xr"},
    is_service_connected{YType::boolean, "is-service-connected"}
    	,
    signalling_info(std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo>())
{
    signalling_info->parent = this;

    yang_name = "discovery"; yang_parent_name = "discoveries"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::~Discovery()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::has_data() const
{
    return service_name.is_set
	|| group_name.is_set
	|| vpn_name.is_set
	|| mtu_mismatch_ignore.is_set
	|| number_vpn.is_set
	|| vpn_id.is_set
	|| service_name_xr.is_set
	|| group_name_xr.is_set
	|| vpn_name_xr.is_set
	|| is_service_connected.is_set
	|| (signalling_info !=  nullptr && signalling_info->has_data());
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(vpn_name.yfilter)
	|| ydk::is_set(mtu_mismatch_ignore.yfilter)
	|| ydk::is_set(number_vpn.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(service_name_xr.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(vpn_name_xr.yfilter)
	|| ydk::is_set(is_service_connected.yfilter)
	|| (signalling_info !=  nullptr && signalling_info->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (vpn_name.is_set || is_set(vpn_name.yfilter)) leaf_name_data.push_back(vpn_name.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.yfilter)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (number_vpn.is_set || is_set(number_vpn.yfilter)) leaf_name_data.push_back(number_vpn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (service_name_xr.is_set || is_set(service_name_xr.yfilter)) leaf_name_data.push_back(service_name_xr.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (vpn_name_xr.is_set || is_set(vpn_name_xr.yfilter)) leaf_name_data.push_back(vpn_name_xr.get_name_leafdata());
    if (is_service_connected.is_set || is_set(is_service_connected.yfilter)) leaf_name_data.push_back(is_service_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling-info")
    {
        if(signalling_info == nullptr)
        {
            signalling_info = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo>();
        }
        return signalling_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signalling_info != nullptr)
    {
        children["signalling-info"] = signalling_info;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-name")
    {
        vpn_name = value;
        vpn_name.value_namespace = name_space;
        vpn_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
        mtu_mismatch_ignore.value_namespace = name_space;
        mtu_mismatch_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-vpn")
    {
        number_vpn = value;
        number_vpn.value_namespace = name_space;
        number_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr = value;
        service_name_xr.value_namespace = name_space;
        service_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr = value;
        vpn_name_xr.value_namespace = name_space;
        vpn_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected = value;
        is_service_connected.value_namespace = name_space;
        is_service_connected.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "vpn-name")
    {
        vpn_name.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore.yfilter = yfilter;
    }
    if(value_path == "number-vpn")
    {
        number_vpn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalling-info" || name == "service-name" || name == "group-name" || name == "vpn-name" || name == "mtu-mismatch-ignore" || name == "number-vpn" || name == "vpn-id" || name == "service-name-xr" || name == "group-name-xr" || name == "vpn-name-xr" || name == "is-service-connected")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::SignallingInfo()
    :
    ad_signalling_method{YType::enumeration, "ad-signalling-method"}
    	,
    bgp_sig_info(std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo>())
	,ldp_sig_info(std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo>())
{
    bgp_sig_info->parent = this;
    ldp_sig_info->parent = this;

    yang_name = "signalling-info"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::~SignallingInfo()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::has_data() const
{
    return ad_signalling_method.is_set
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_data())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_data());
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_operation())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-sig-info")
    {
        if(bgp_sig_info == nullptr)
        {
            bgp_sig_info = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo>();
        }
        return bgp_sig_info;
    }

    if(child_yang_name == "ldp-sig-info")
    {
        if(ldp_sig_info == nullptr)
        {
            ldp_sig_info = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo>();
        }
        return ldp_sig_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_sig_info != nullptr)
    {
        children["bgp-sig-info"] = bgp_sig_info;
    }

    if(ldp_sig_info != nullptr)
    {
        children["ldp-sig-info"] = ldp_sig_info;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-sig-info" || name == "ldp-sig-info" || name == "ad-signalling-method")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::BgpSigInfo()
    :
    number_edges{YType::uint32, "number-edges"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
{

    yang_name = "bgp-sig-info"; yang_parent_name = "signalling-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::~BgpSigInfo()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_data() const
{
    for (std::size_t index=0; index<edge.size(); index++)
    {
        if(edge[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redge.size(); index++)
    {
        if(redge[index]->has_data())
            return true;
    }
    return number_edges.is_set
	|| number_remote_edges.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<edge.size(); index++)
    {
        if(edge[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redge.size(); index++)
    {
        if(redge[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number_edges.yfilter)
	|| ydk::is_set(number_remote_edges.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-sig-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_edges.is_set || is_set(number_edges.yfilter)) leaf_name_data.push_back(number_edges.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.yfilter)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        for(auto const & c : edge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge>();
        c->parent = this;
        edge.push_back(c);
        return c;
    }

    if(child_yang_name == "redge")
    {
        for(auto const & c : redge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge>();
        c->parent = this;
        redge.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : edge)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : redge)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-edges")
    {
        number_edges = value;
        number_edges.value_namespace = name_space;
        number_edges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
        number_remote_edges.value_namespace = name_space;
        number_remote_edges.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-edges")
    {
        number_edges.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "redge" || name == "number-edges" || name == "number-remote-edges")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::Edge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
{

    yang_name = "edge"; yang_parent_name = "bgp-sig-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::~Edge()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_data() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_operation() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(label_count.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        for(auto const & c : label_block)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock>();
        c->parent = this;
        label_block.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_block)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-block" || name == "edge-id" || name == "label-count")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::LabelBlock()
    :
    label_time_created{YType::uint32, "label-time-created"},
    label_base{YType::uint32, "label-base"},
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    label_error{YType::enumeration, "label-error"}
{

    yang_name = "label-block"; yang_parent_name = "edge"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::~LabelBlock()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_data() const
{
    for (std::size_t index=0; index<status_vector.size(); index++)
    {
        if(status_vector[index]->has_data())
            return true;
    }
    return label_time_created.is_set
	|| label_base.is_set
	|| block_offset.is_set
	|| block_size.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set
	|| label_error.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_operation() const
{
    for (std::size_t index=0; index<status_vector.size(); index++)
    {
        if(status_vector[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_time_created.yfilter)
	|| ydk::is_set(label_base.yfilter)
	|| ydk::is_set(block_offset.yfilter)
	|| ydk::is_set(block_size.yfilter)
	|| ydk::is_set(local_edge_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label_error.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_time_created.is_set || is_set(label_time_created.yfilter)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.yfilter)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (block_offset.is_set || is_set(block_offset.yfilter)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.yfilter)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.yfilter)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.yfilter)) leaf_name_data.push_back(label_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-vector")
    {
        for(auto const & c : status_vector)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector>();
        c->parent = this;
        status_vector.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : status_vector)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-time-created")
    {
        label_time_created = value;
        label_time_created.value_namespace = name_space;
        label_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-base")
    {
        label_base = value;
        label_base.value_namespace = name_space;
        label_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-offset")
    {
        block_offset = value;
        block_offset.value_namespace = name_space;
        block_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-size")
    {
        block_size = value;
        block_size.value_namespace = name_space;
        block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
        local_edge_id.value_namespace = name_space;
        local_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error")
    {
        label_error = value;
        label_error.value_namespace = name_space;
        label_error.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-time-created")
    {
        label_time_created.yfilter = yfilter;
    }
    if(value_path == "label-base")
    {
        label_base.yfilter = yfilter;
    }
    if(value_path == "block-offset")
    {
        block_offset.yfilter = yfilter;
    }
    if(value_path == "block-size")
    {
        block_size.yfilter = yfilter;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label-error")
    {
        label_error.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-vector" || name == "label-time-created" || name == "label-base" || name == "block-offset" || name == "block-size" || name == "local-edge-id" || name == "next-hop" || name == "label-error")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::StatusVector()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "status-vector"; yang_parent_name = "label-block"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::~StatusVector()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-vector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::Redge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
{

    yang_name = "redge"; yang_parent_name = "bgp-sig-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::~Redge()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_data() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_operation() const
{
    for (std::size_t index=0; index<label_block.size(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(label_count.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        for(auto const & c : label_block)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock>();
        c->parent = this;
        label_block.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_block)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-block" || name == "edge-id" || name == "label-count")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::LabelBlock()
    :
    label_time_created{YType::uint32, "label-time-created"},
    label_base{YType::uint32, "label-base"},
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    label_error{YType::enumeration, "label-error"}
{

    yang_name = "label-block"; yang_parent_name = "redge"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::~LabelBlock()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_data() const
{
    for (std::size_t index=0; index<status_vector.size(); index++)
    {
        if(status_vector[index]->has_data())
            return true;
    }
    return label_time_created.is_set
	|| label_base.is_set
	|| block_offset.is_set
	|| block_size.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set
	|| label_error.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_operation() const
{
    for (std::size_t index=0; index<status_vector.size(); index++)
    {
        if(status_vector[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_time_created.yfilter)
	|| ydk::is_set(label_base.yfilter)
	|| ydk::is_set(block_offset.yfilter)
	|| ydk::is_set(block_size.yfilter)
	|| ydk::is_set(local_edge_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label_error.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_time_created.is_set || is_set(label_time_created.yfilter)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.yfilter)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (block_offset.is_set || is_set(block_offset.yfilter)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.yfilter)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.yfilter)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.yfilter)) leaf_name_data.push_back(label_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-vector")
    {
        for(auto const & c : status_vector)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector>();
        c->parent = this;
        status_vector.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : status_vector)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-time-created")
    {
        label_time_created = value;
        label_time_created.value_namespace = name_space;
        label_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-base")
    {
        label_base = value;
        label_base.value_namespace = name_space;
        label_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-offset")
    {
        block_offset = value;
        block_offset.value_namespace = name_space;
        block_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-size")
    {
        block_size = value;
        block_size.value_namespace = name_space;
        block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
        local_edge_id.value_namespace = name_space;
        local_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error")
    {
        label_error = value;
        label_error.value_namespace = name_space;
        label_error.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-time-created")
    {
        label_time_created.yfilter = yfilter;
    }
    if(value_path == "label-base")
    {
        label_base.yfilter = yfilter;
    }
    if(value_path == "block-offset")
    {
        block_offset.yfilter = yfilter;
    }
    if(value_path == "block-size")
    {
        block_size.yfilter = yfilter;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label-error")
    {
        label_error.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-vector" || name == "label-time-created" || name == "label-base" || name == "block-offset" || name == "block-size" || name == "local-edge-id" || name == "next-hop" || name == "label-error")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::StatusVector()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "status-vector"; yang_parent_name = "label-block"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::~StatusVector()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-vector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LdpSigInfo()
    :
    local_l2_router_id{YType::str, "local-l2-router-id"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
    	,
    local_vpls_id(std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>())
{
    local_vpls_id->parent = this;

    yang_name = "ldp-sig-info"; yang_parent_name = "signalling-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::~LdpSigInfo()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_data() const
{
    for (std::size_t index=0; index<remote_nlri.size(); index++)
    {
        if(remote_nlri[index]->has_data())
            return true;
    }
    return local_l2_router_id.is_set
	|| number_remote_edges.is_set
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_data());
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<remote_nlri.size(); index++)
    {
        if(remote_nlri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_l2_router_id.yfilter)
	|| ydk::is_set(number_remote_edges.yfilter)
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-sig-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_l2_router_id.is_set || is_set(local_l2_router_id.yfilter)) leaf_name_data.push_back(local_l2_router_id.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.yfilter)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-vpls-id")
    {
        if(local_vpls_id == nullptr)
        {
            local_vpls_id = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>();
        }
        return local_vpls_id;
    }

    if(child_yang_name == "remote-nlri")
    {
        for(auto const & c : remote_nlri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri>();
        c->parent = this;
        remote_nlri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_vpls_id != nullptr)
    {
        children["local-vpls-id"] = local_vpls_id;
    }

    for (auto const & c : remote_nlri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id = value;
        local_l2_router_id.value_namespace = name_space;
        local_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
        number_remote_edges.value_namespace = name_space;
        number_remote_edges.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-vpls-id" || name == "remote-nlri" || name == "local-l2-router-id" || name == "number-remote-edges")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::LocalVplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "local-vpls-id"; yang_parent_name = "ldp-sig-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::~LocalVplsId()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::RemoteNlri()
    :
    nlri_time_created{YType::uint32, "nlri-time-created"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    remote_l2_router_id{YType::str, "remote-l2-router-id"}
{

    yang_name = "remote-nlri"; yang_parent_name = "ldp-sig-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::~RemoteNlri()
{
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_data() const
{
    return nlri_time_created.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| remote_l2_router_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlri_time_created.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-nlri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlri_time_created.is_set || is_set(nlri_time_created.yfilter)) leaf_name_data.push_back(nlri_time_created.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlri-time-created")
    {
        nlri_time_created = value;
        nlri_time_created.value_namespace = name_space;
        nlri_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
        remote_l2_router_id.value_namespace = name_space;
        remote_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlri-time-created")
    {
        nlri_time_created.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlri-time-created" || name == "local-address" || name == "remote-address" || name == "remote-l2-router-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::FlexibleXconnectServiceSummary()
    :
    number_fxc{YType::uint32, "number-fxc"},
    number_fxc_up{YType::uint32, "number-fxc-up"},
    number_fxc_down{YType::uint32, "number-fxc-down"}
{

    yang_name = "flexible-xconnect-service-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::~FlexibleXconnectServiceSummary()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::has_data() const
{
    return number_fxc.is_set
	|| number_fxc_up.is_set
	|| number_fxc_down.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_fxc.yfilter)
	|| ydk::is_set(number_fxc_up.yfilter)
	|| ydk::is_set(number_fxc_down.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_fxc.is_set || is_set(number_fxc.yfilter)) leaf_name_data.push_back(number_fxc.get_name_leafdata());
    if (number_fxc_up.is_set || is_set(number_fxc_up.yfilter)) leaf_name_data.push_back(number_fxc_up.get_name_leafdata());
    if (number_fxc_down.is_set || is_set(number_fxc_down.yfilter)) leaf_name_data.push_back(number_fxc_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-fxc")
    {
        number_fxc = value;
        number_fxc.value_namespace = name_space;
        number_fxc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up = value;
        number_fxc_up.value_namespace = name_space;
        number_fxc_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down = value;
        number_fxc_down.value_namespace = name_space;
        number_fxc_down.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-fxc")
    {
        number_fxc.yfilter = yfilter;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up.yfilter = yfilter;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-fxc" || name == "number-fxc-up" || name == "number-fxc-down")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterfaces()
{

    yang_name = "main-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::~MainInterfaces()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::has_data() const
{
    for (std::size_t index=0; index<main_interface.size(); index++)
    {
        if(main_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::has_operation() const
{
    for (std::size_t index=0; index<main_interface.size(); index++)
    {
        if(main_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface")
    {
        for(auto const & c : main_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface>();
        c->parent = this;
        main_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::MainInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    main_interface_instances(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances>())
	,main_interface_info(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo>())
{
    main_interface_instances->parent = this;
    main_interface_info->parent = this;

    yang_name = "main-interface"; yang_parent_name = "main-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::~MainInterface()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_data() const
{
    return interface_name.is_set
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_data())
	|| (main_interface_info !=  nullptr && main_interface_info->has_data());
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_operation())
	|| (main_interface_info !=  nullptr && main_interface_info->has_operation());
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instances")
    {
        if(main_interface_instances == nullptr)
        {
            main_interface_instances = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances>();
        }
        return main_interface_instances;
    }

    if(child_yang_name == "main-interface-info")
    {
        if(main_interface_info == nullptr)
        {
            main_interface_info = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo>();
        }
        return main_interface_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(main_interface_instances != nullptr)
    {
        children["main-interface-instances"] = main_interface_instances;
    }

    if(main_interface_info != nullptr)
    {
        children["main-interface-info"] = main_interface_info;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instances" || name == "main-interface-info" || name == "interface-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstances()
{

    yang_name = "main-interface-instances"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::~MainInterfaceInstances()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_data() const
{
    for (std::size_t index=0; index<main_interface_instance.size(); index++)
    {
        if(main_interface_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance.size(); index++)
    {
        if(main_interface_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance")
    {
        for(auto const & c : main_interface_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance>();
        c->parent = this;
        main_interface_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstance()
    :
    instance{YType::int32, "instance"}
    	,
    main_interface_instance_info(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>())
	,main_interface_instance_bridge_ports(std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>())
{
    main_interface_instance_info->parent = this;
    main_interface_instance_bridge_ports->parent = this;

    yang_name = "main-interface-instance"; yang_parent_name = "main-interface-instances"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::~MainInterfaceInstance()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_data() const
{
    return instance.is_set
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_data())
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_data());
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_operation())
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_operation());
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-info")
    {
        if(main_interface_instance_info == nullptr)
        {
            main_interface_instance_info = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>();
        }
        return main_interface_instance_info;
    }

    if(child_yang_name == "main-interface-instance-bridge-ports")
    {
        if(main_interface_instance_bridge_ports == nullptr)
        {
            main_interface_instance_bridge_ports = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>();
        }
        return main_interface_instance_bridge_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(main_interface_instance_info != nullptr)
    {
        children["main-interface-instance-info"] = main_interface_instance_info;
    }

    if(main_interface_instance_bridge_ports != nullptr)
    {
        children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-info" || name == "main-interface-instance-bridge-ports" || name == "instance")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::MainInterfaceInstanceInfo()
    :
    configured_instance{YType::uint32, "configured-instance"},
    flush_count{YType::uint32, "flush-count"},
    interface_count{YType::uint32, "interface-count"},
    instance_flags{YType::uint32, "instance-flags"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"}
{

    yang_name = "main-interface-instance-info"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::~MainInterfaceInstanceInfo()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_data() const
{
    return configured_instance.is_set
	|| flush_count.is_set
	|| interface_count.is_set
	|| instance_flags.is_set
	|| instance_id.is_set
	|| instance_state.is_set;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_instance.yfilter)
	|| ydk::is_set(flush_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(instance_flags.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_instance.is_set || is_set(configured_instance.yfilter)) leaf_name_data.push_back(configured_instance.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.yfilter)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (instance_flags.is_set || is_set(instance_flags.yfilter)) leaf_name_data.push_back(instance_flags.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-instance")
    {
        configured_instance = value;
        configured_instance.value_namespace = name_space;
        configured_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
        flush_count.value_namespace = name_space;
        flush_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-flags")
    {
        instance_flags = value;
        instance_flags.value_namespace = name_space;
        instance_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
        instance_state.value_namespace = name_space;
        instance_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-instance")
    {
        configured_instance.yfilter = yfilter;
    }
    if(value_path == "flush-count")
    {
        flush_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "instance-flags")
    {
        instance_flags.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-instance" || name == "flush-count" || name == "interface-count" || name == "instance-flags" || name == "instance-id" || name == "instance-state")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePorts()
{

    yang_name = "main-interface-instance-bridge-ports"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::~MainInterfaceInstanceBridgePorts()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_data() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.size(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.size(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-bridge-port")
    {
        for(auto const & c : main_interface_instance_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort>();
        c->parent = this;
        main_interface_instance_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface_instance_bridge_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-bridge-port")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::MainInterfaceInstanceBridgePort()
    :
    bridge_port{YType::str, "bridge-port"},
    bridge_port_xr{YType::str, "bridge-port-xr"},
    instance_id{YType::uint32, "instance-id"}
{

    yang_name = "main-interface-instance-bridge-port"; yang_parent_name = "main-interface-instance-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::~MainInterfaceInstanceBridgePort()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_data() const
{
    return bridge_port.is_set
	|| bridge_port_xr.is_set
	|| instance_id.is_set;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port.yfilter)
	|| ydk::is_set(bridge_port_xr.yfilter)
	|| ydk::is_set(instance_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-port" <<"[bridge-port='" <<bridge_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port.is_set || is_set(bridge_port.yfilter)) leaf_name_data.push_back(bridge_port.get_name_leafdata());
    if (bridge_port_xr.is_set || is_set(bridge_port_xr.yfilter)) leaf_name_data.push_back(bridge_port_xr.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port")
    {
        bridge_port = value;
        bridge_port.value_namespace = name_space;
        bridge_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr = value;
        bridge_port_xr.value_namespace = name_space;
        bridge_port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port")
    {
        bridge_port.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port" || name == "bridge-port-xr" || name == "instance-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::MainInterfaceInfo()
    :
    main_interface_handle{YType::str, "main-interface-handle"},
    protected_{YType::enumeration, "protected"},
    interface_count{YType::uint32, "interface-count"}
{

    yang_name = "main-interface-info"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::~MainInterfaceInfo()
{
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_data() const
{
    return main_interface_handle.is_set
	|| protected_.is_set
	|| interface_count.is_set;
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface_handle.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_interface_handle.is_set || is_set(main_interface_handle.yfilter)) leaf_name_data.push_back(main_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface-handle")
    {
        main_interface_handle = value;
        main_interface_handle.value_namespace = name_space;
        main_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface-handle")
    {
        main_interface_handle.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-handle" || name == "protected" || name == "interface-count")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpSm()
    :
    iccp_sm_summary(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary>())
	,iccp_groups(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups>())
{
    iccp_sm_summary->parent = this;
    iccp_groups->parent = this;

    yang_name = "iccp-sm"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::~IccpSm()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::has_data() const
{
    return (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_data())
	|| (iccp_groups !=  nullptr && iccp_groups->has_data());
}

bool L2Vpnv2::Nodes::Node::IccpSm::has_operation() const
{
    return is_set(yfilter)
	|| (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_operation())
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation());
}

std::string L2Vpnv2::Nodes::Node::IccpSm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-sm-summary")
    {
        if(iccp_sm_summary == nullptr)
        {
            iccp_sm_summary = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary>();
        }
        return iccp_sm_summary;
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups>();
        }
        return iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_sm_summary != nullptr)
    {
        children["iccp-sm-summary"] = iccp_sm_summary;
    }

    if(iccp_groups != nullptr)
    {
        children["iccp-groups"] = iccp_groups;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::IccpSm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-sm-summary" || name == "iccp-groups")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::IccpSmSummary()
    :
    groups{YType::uint32, "groups"},
    unresolved_groups{YType::uint32, "unresolved-groups"},
    provisioned_groups{YType::uint32, "provisioned-groups"},
    connecting_groups{YType::uint32, "connecting-groups"},
    connected_groups{YType::uint32, "connected-groups"},
    synchronizing_groups{YType::uint32, "synchronizing-groups"},
    synchronized_groups{YType::uint32, "synchronized-groups"},
    ports{YType::uint32, "ports"},
    operational_ports{YType::uint32, "operational-ports"},
    failed_ports{YType::uint32, "failed-ports"},
    unknown_ports{YType::uint32, "unknown-ports"},
    unconfigured_ports{YType::uint32, "unconfigured-ports"},
    unsynchronized_ports{YType::uint32, "unsynchronized-ports"},
    reverting_ports{YType::uint32, "reverting-ports"}
{

    yang_name = "iccp-sm-summary"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::~IccpSmSummary()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_data() const
{
    return groups.is_set
	|| unresolved_groups.is_set
	|| provisioned_groups.is_set
	|| connecting_groups.is_set
	|| connected_groups.is_set
	|| synchronizing_groups.is_set
	|| synchronized_groups.is_set
	|| ports.is_set
	|| operational_ports.is_set
	|| failed_ports.is_set
	|| unknown_ports.is_set
	|| unconfigured_ports.is_set
	|| unsynchronized_ports.is_set
	|| reverting_ports.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(unresolved_groups.yfilter)
	|| ydk::is_set(provisioned_groups.yfilter)
	|| ydk::is_set(connecting_groups.yfilter)
	|| ydk::is_set(connected_groups.yfilter)
	|| ydk::is_set(synchronizing_groups.yfilter)
	|| ydk::is_set(synchronized_groups.yfilter)
	|| ydk::is_set(ports.yfilter)
	|| ydk::is_set(operational_ports.yfilter)
	|| ydk::is_set(failed_ports.yfilter)
	|| ydk::is_set(unknown_ports.yfilter)
	|| ydk::is_set(unconfigured_ports.yfilter)
	|| ydk::is_set(unsynchronized_ports.yfilter)
	|| ydk::is_set(reverting_ports.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (unresolved_groups.is_set || is_set(unresolved_groups.yfilter)) leaf_name_data.push_back(unresolved_groups.get_name_leafdata());
    if (provisioned_groups.is_set || is_set(provisioned_groups.yfilter)) leaf_name_data.push_back(provisioned_groups.get_name_leafdata());
    if (connecting_groups.is_set || is_set(connecting_groups.yfilter)) leaf_name_data.push_back(connecting_groups.get_name_leafdata());
    if (connected_groups.is_set || is_set(connected_groups.yfilter)) leaf_name_data.push_back(connected_groups.get_name_leafdata());
    if (synchronizing_groups.is_set || is_set(synchronizing_groups.yfilter)) leaf_name_data.push_back(synchronizing_groups.get_name_leafdata());
    if (synchronized_groups.is_set || is_set(synchronized_groups.yfilter)) leaf_name_data.push_back(synchronized_groups.get_name_leafdata());
    if (ports.is_set || is_set(ports.yfilter)) leaf_name_data.push_back(ports.get_name_leafdata());
    if (operational_ports.is_set || is_set(operational_ports.yfilter)) leaf_name_data.push_back(operational_ports.get_name_leafdata());
    if (failed_ports.is_set || is_set(failed_ports.yfilter)) leaf_name_data.push_back(failed_ports.get_name_leafdata());
    if (unknown_ports.is_set || is_set(unknown_ports.yfilter)) leaf_name_data.push_back(unknown_ports.get_name_leafdata());
    if (unconfigured_ports.is_set || is_set(unconfigured_ports.yfilter)) leaf_name_data.push_back(unconfigured_ports.get_name_leafdata());
    if (unsynchronized_ports.is_set || is_set(unsynchronized_ports.yfilter)) leaf_name_data.push_back(unsynchronized_ports.get_name_leafdata());
    if (reverting_ports.is_set || is_set(reverting_ports.yfilter)) leaf_name_data.push_back(reverting_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups = value;
        unresolved_groups.value_namespace = name_space;
        unresolved_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups = value;
        provisioned_groups.value_namespace = name_space;
        provisioned_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups = value;
        connecting_groups.value_namespace = name_space;
        connecting_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-groups")
    {
        connected_groups = value;
        connected_groups.value_namespace = name_space;
        connected_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups = value;
        synchronizing_groups.value_namespace = name_space;
        synchronizing_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups = value;
        synchronized_groups.value_namespace = name_space;
        synchronized_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ports")
    {
        ports = value;
        ports.value_namespace = name_space;
        ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-ports")
    {
        operational_ports = value;
        operational_ports.value_namespace = name_space;
        operational_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-ports")
    {
        failed_ports = value;
        failed_ports.value_namespace = name_space;
        failed_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports = value;
        unknown_ports.value_namespace = name_space;
        unknown_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports = value;
        unconfigured_ports.value_namespace = name_space;
        unconfigured_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports = value;
        unsynchronized_ports.value_namespace = name_space;
        unsynchronized_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports = value;
        reverting_ports.value_namespace = name_space;
        reverting_ports.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups.yfilter = yfilter;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups.yfilter = yfilter;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups.yfilter = yfilter;
    }
    if(value_path == "connected-groups")
    {
        connected_groups.yfilter = yfilter;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups.yfilter = yfilter;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups.yfilter = yfilter;
    }
    if(value_path == "ports")
    {
        ports.yfilter = yfilter;
    }
    if(value_path == "operational-ports")
    {
        operational_ports.yfilter = yfilter;
    }
    if(value_path == "failed-ports")
    {
        failed_ports.yfilter = yfilter;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports.yfilter = yfilter;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports.yfilter = yfilter;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports.yfilter = yfilter;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "unresolved-groups" || name == "provisioned-groups" || name == "connecting-groups" || name == "connected-groups" || name == "synchronizing-groups" || name == "synchronized-groups" || name == "ports" || name == "operational-ports" || name == "failed-ports" || name == "unknown-ports" || name == "unconfigured-ports" || name == "unsynchronized-ports" || name == "reverting-ports")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroups()
{

    yang_name = "iccp-groups"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::~IccpGroups()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroup()
    :
    group_id{YType::uint32, "group-id"}
    	,
    iccp_group_info(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>())
	,iccp_ports(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts>())
{
    iccp_group_info->parent = this;
    iccp_ports->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::has_data() const
{
    return group_id.is_set
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_data())
	|| (iccp_ports !=  nullptr && iccp_ports->has_data());
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_operation())
	|| (iccp_ports !=  nullptr && iccp_ports->has_operation());
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[group-id='" <<group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-info")
    {
        if(iccp_group_info == nullptr)
        {
            iccp_group_info = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>();
        }
        return iccp_group_info;
    }

    if(child_yang_name == "iccp-ports")
    {
        if(iccp_ports == nullptr)
        {
            iccp_ports = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts>();
        }
        return iccp_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_info != nullptr)
    {
        children["iccp-group-info"] = iccp_group_info;
    }

    if(iccp_ports != nullptr)
    {
        children["iccp-ports"] = iccp_ports;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-info" || name == "iccp-ports" || name == "group-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::IccpGroupInfo()
    :
    group_id{YType::uint32, "group-id"},
    local_node_id{YType::uint8, "local-node-id"},
    remote_node_id{YType::uint8, "remote-node-id"},
    state{YType::enumeration, "state"},
    iccp_transport_up{YType::boolean, "iccp-transport-up"},
    iccp_member_up{YType::boolean, "iccp-member-up"}
{

    yang_name = "iccp-group-info"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::~IccpGroupInfo()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_data() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| local_node_id.is_set
	|| remote_node_id.is_set
	|| state.is_set
	|| iccp_transport_up.is_set
	|| iccp_member_up.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_operation() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(local_node_id.yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(iccp_transport_up.yfilter)
	|| ydk::is_set(iccp_member_up.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (local_node_id.is_set || is_set(local_node_id.yfilter)) leaf_name_data.push_back(local_node_id.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (iccp_transport_up.is_set || is_set(iccp_transport_up.yfilter)) leaf_name_data.push_back(iccp_transport_up.get_name_leafdata());
    if (iccp_member_up.is_set || is_set(iccp_member_up.yfilter)) leaf_name_data.push_back(iccp_member_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        for(auto const & c : ports)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports>();
        c->parent = this;
        ports.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ports)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-id")
    {
        local_node_id = value;
        local_node_id.value_namespace = name_space;
        local_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up = value;
        iccp_transport_up.value_namespace = name_space;
        iccp_transport_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up = value;
        iccp_member_up.value_namespace = name_space;
        iccp_member_up.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "local-node-id")
    {
        local_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up.yfilter = yfilter;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports" || name == "group-id" || name == "local-node-id" || name == "remote-node-id" || name == "state" || name == "iccp-transport-up" || name == "iccp-member-up")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::Ports()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
    	,
    local_port(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>())
	,remote_port(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "ports"; yang_parent_name = "iccp-group-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::~Ports()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_data() const
{
    return interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_port != nullptr)
    {
        children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        children["remote-port"] = remote_port;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::LocalPort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "local-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::~LocalPort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_data() const
{
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::RemotePort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "remote-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::~RemotePort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_data() const
{
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPorts()
{

    yang_name = "iccp-ports"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::~IccpPorts()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_data() const
{
    for (std::size_t index=0; index<iccp_port.size(); index++)
    {
        if(iccp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_operation() const
{
    for (std::size_t index=0; index<iccp_port.size(); index++)
    {
        if(iccp_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-port")
    {
        for(auto const & c : iccp_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort>();
        c->parent = this;
        iccp_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-port")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::IccpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
    	,
    local_port(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>())
	,remote_port(std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "iccp-port"; yang_parent_name = "iccp-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::~IccpPort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_data() const
{
    return interface.is_set
	|| interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-port" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_port != nullptr)
    {
        children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        children["remote-port"] = remote_port;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::LocalPort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "local-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::~LocalPort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_data() const
{
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::RemotePort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "remote-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::~RemotePort()
{
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_data() const
{
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::BridgeSummary::BridgeSummary()
    :
    number_groups{YType::uint32, "number-groups"},
    number_bridge_domains{YType::uint32, "number-bridge-domains"},
    number_bridge_domains_up{YType::uint32, "number-bridge-domains-up"},
    number_bridge_domains_shut{YType::uint32, "number-bridge-domains-shut"},
    number_default_bridge_doamins{YType::uint32, "number-default-bridge-doamins"},
    number_pbb_edge{YType::uint32, "number-pbb-edge"},
    number_pbb_core{YType::uint32, "number-pbb-core"},
    number_p2mp{YType::uint32, "number-p2mp"},
    number_p2mp_up{YType::uint32, "number-p2mp-up"},
    number_p2mp_down{YType::uint32, "number-p2mp-down"},
    number_a_cs{YType::uint32, "number-a-cs"},
    number_a_cs_up{YType::uint32, "number-a-cs-up"},
    number_a_cs_down{YType::uint32, "number-a-cs-down"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    number_p_ws_up{YType::uint32, "number-p-ws-up"},
    number_p_ws_down{YType::uint32, "number-p-ws-down"},
    standby_pseudowires{YType::uint32, "standby-pseudowires"},
    num_vn_is{YType::uint32, "num-vn-is"},
    num_vn_is_up{YType::uint32, "num-vn-is-up"},
    num_vn_is_down{YType::uint32, "num-vn-is-down"},
    num_vn_is_unresolved{YType::uint32, "num-vn-is-unresolved"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    partially_programmed_bridges{YType::uint32, "partially-programmed-bridges"},
    partially_programmed_pseudowires{YType::uint32, "partially-programmed-pseudowires"},
    partially_programmed_a_cs{YType::uint32, "partially-programmed-a-cs"}
{

    yang_name = "bridge-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::BridgeSummary::~BridgeSummary()
{
}

bool L2Vpnv2::Nodes::Node::BridgeSummary::has_data() const
{
    return number_groups.is_set
	|| number_bridge_domains.is_set
	|| number_bridge_domains_up.is_set
	|| number_bridge_domains_shut.is_set
	|| number_default_bridge_doamins.is_set
	|| number_pbb_edge.is_set
	|| number_pbb_core.is_set
	|| number_p2mp.is_set
	|| number_p2mp_up.is_set
	|| number_p2mp_down.is_set
	|| number_a_cs.is_set
	|| number_a_cs_up.is_set
	|| number_a_cs_down.is_set
	|| number_pseudowires.is_set
	|| number_p_ws_up.is_set
	|| number_p_ws_down.is_set
	|| standby_pseudowires.is_set
	|| num_vn_is.is_set
	|| num_vn_is_up.is_set
	|| num_vn_is_down.is_set
	|| num_vn_is_unresolved.is_set
	|| out_of_memory_state.is_set
	|| partially_programmed_bridges.is_set
	|| partially_programmed_pseudowires.is_set
	|| partially_programmed_a_cs.is_set;
}

bool L2Vpnv2::Nodes::Node::BridgeSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_groups.yfilter)
	|| ydk::is_set(number_bridge_domains.yfilter)
	|| ydk::is_set(number_bridge_domains_up.yfilter)
	|| ydk::is_set(number_bridge_domains_shut.yfilter)
	|| ydk::is_set(number_default_bridge_doamins.yfilter)
	|| ydk::is_set(number_pbb_edge.yfilter)
	|| ydk::is_set(number_pbb_core.yfilter)
	|| ydk::is_set(number_p2mp.yfilter)
	|| ydk::is_set(number_p2mp_up.yfilter)
	|| ydk::is_set(number_p2mp_down.yfilter)
	|| ydk::is_set(number_a_cs.yfilter)
	|| ydk::is_set(number_a_cs_up.yfilter)
	|| ydk::is_set(number_a_cs_down.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| ydk::is_set(number_p_ws_up.yfilter)
	|| ydk::is_set(number_p_ws_down.yfilter)
	|| ydk::is_set(standby_pseudowires.yfilter)
	|| ydk::is_set(num_vn_is.yfilter)
	|| ydk::is_set(num_vn_is_up.yfilter)
	|| ydk::is_set(num_vn_is_down.yfilter)
	|| ydk::is_set(num_vn_is_unresolved.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(partially_programmed_bridges.yfilter)
	|| ydk::is_set(partially_programmed_pseudowires.yfilter)
	|| ydk::is_set(partially_programmed_a_cs.yfilter);
}

std::string L2Vpnv2::Nodes::Node::BridgeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::BridgeSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_groups.is_set || is_set(number_groups.yfilter)) leaf_name_data.push_back(number_groups.get_name_leafdata());
    if (number_bridge_domains.is_set || is_set(number_bridge_domains.yfilter)) leaf_name_data.push_back(number_bridge_domains.get_name_leafdata());
    if (number_bridge_domains_up.is_set || is_set(number_bridge_domains_up.yfilter)) leaf_name_data.push_back(number_bridge_domains_up.get_name_leafdata());
    if (number_bridge_domains_shut.is_set || is_set(number_bridge_domains_shut.yfilter)) leaf_name_data.push_back(number_bridge_domains_shut.get_name_leafdata());
    if (number_default_bridge_doamins.is_set || is_set(number_default_bridge_doamins.yfilter)) leaf_name_data.push_back(number_default_bridge_doamins.get_name_leafdata());
    if (number_pbb_edge.is_set || is_set(number_pbb_edge.yfilter)) leaf_name_data.push_back(number_pbb_edge.get_name_leafdata());
    if (number_pbb_core.is_set || is_set(number_pbb_core.yfilter)) leaf_name_data.push_back(number_pbb_core.get_name_leafdata());
    if (number_p2mp.is_set || is_set(number_p2mp.yfilter)) leaf_name_data.push_back(number_p2mp.get_name_leafdata());
    if (number_p2mp_up.is_set || is_set(number_p2mp_up.yfilter)) leaf_name_data.push_back(number_p2mp_up.get_name_leafdata());
    if (number_p2mp_down.is_set || is_set(number_p2mp_down.yfilter)) leaf_name_data.push_back(number_p2mp_down.get_name_leafdata());
    if (number_a_cs.is_set || is_set(number_a_cs.yfilter)) leaf_name_data.push_back(number_a_cs.get_name_leafdata());
    if (number_a_cs_up.is_set || is_set(number_a_cs_up.yfilter)) leaf_name_data.push_back(number_a_cs_up.get_name_leafdata());
    if (number_a_cs_down.is_set || is_set(number_a_cs_down.yfilter)) leaf_name_data.push_back(number_a_cs_down.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (number_p_ws_up.is_set || is_set(number_p_ws_up.yfilter)) leaf_name_data.push_back(number_p_ws_up.get_name_leafdata());
    if (number_p_ws_down.is_set || is_set(number_p_ws_down.yfilter)) leaf_name_data.push_back(number_p_ws_down.get_name_leafdata());
    if (standby_pseudowires.is_set || is_set(standby_pseudowires.yfilter)) leaf_name_data.push_back(standby_pseudowires.get_name_leafdata());
    if (num_vn_is.is_set || is_set(num_vn_is.yfilter)) leaf_name_data.push_back(num_vn_is.get_name_leafdata());
    if (num_vn_is_up.is_set || is_set(num_vn_is_up.yfilter)) leaf_name_data.push_back(num_vn_is_up.get_name_leafdata());
    if (num_vn_is_down.is_set || is_set(num_vn_is_down.yfilter)) leaf_name_data.push_back(num_vn_is_down.get_name_leafdata());
    if (num_vn_is_unresolved.is_set || is_set(num_vn_is_unresolved.yfilter)) leaf_name_data.push_back(num_vn_is_unresolved.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (partially_programmed_bridges.is_set || is_set(partially_programmed_bridges.yfilter)) leaf_name_data.push_back(partially_programmed_bridges.get_name_leafdata());
    if (partially_programmed_pseudowires.is_set || is_set(partially_programmed_pseudowires.yfilter)) leaf_name_data.push_back(partially_programmed_pseudowires.get_name_leafdata());
    if (partially_programmed_a_cs.is_set || is_set(partially_programmed_a_cs.yfilter)) leaf_name_data.push_back(partially_programmed_a_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::BridgeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::BridgeSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::BridgeSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-groups")
    {
        number_groups = value;
        number_groups.value_namespace = name_space;
        number_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains = value;
        number_bridge_domains.value_namespace = name_space;
        number_bridge_domains.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up = value;
        number_bridge_domains_up.value_namespace = name_space;
        number_bridge_domains_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut = value;
        number_bridge_domains_shut.value_namespace = name_space;
        number_bridge_domains_shut.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins = value;
        number_default_bridge_doamins.value_namespace = name_space;
        number_default_bridge_doamins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge = value;
        number_pbb_edge.value_namespace = name_space;
        number_pbb_edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core = value;
        number_pbb_core.value_namespace = name_space;
        number_pbb_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp = value;
        number_p2mp.value_namespace = name_space;
        number_p2mp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up = value;
        number_p2mp_up.value_namespace = name_space;
        number_p2mp_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down = value;
        number_p2mp_down.value_namespace = name_space;
        number_p2mp_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs = value;
        number_a_cs.value_namespace = name_space;
        number_a_cs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up = value;
        number_a_cs_up.value_namespace = name_space;
        number_a_cs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-down")
    {
        number_a_cs_down = value;
        number_a_cs_down.value_namespace = name_space;
        number_a_cs_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up = value;
        number_p_ws_up.value_namespace = name_space;
        number_p_ws_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-down")
    {
        number_p_ws_down = value;
        number_p_ws_down.value_namespace = name_space;
        number_p_ws_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires = value;
        standby_pseudowires.value_namespace = name_space;
        standby_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is")
    {
        num_vn_is = value;
        num_vn_is.value_namespace = name_space;
        num_vn_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up = value;
        num_vn_is_up.value_namespace = name_space;
        num_vn_is_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down = value;
        num_vn_is_down.value_namespace = name_space;
        num_vn_is_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved = value;
        num_vn_is_unresolved.value_namespace = name_space;
        num_vn_is_unresolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges = value;
        partially_programmed_bridges.value_namespace = name_space;
        partially_programmed_bridges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires = value;
        partially_programmed_pseudowires.value_namespace = name_space;
        partially_programmed_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs = value;
        partially_programmed_a_cs.value_namespace = name_space;
        partially_programmed_a_cs.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::BridgeSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-groups")
    {
        number_groups.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut.yfilter = yfilter;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins.yfilter = yfilter;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge.yfilter = yfilter;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core.yfilter = yfilter;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp.yfilter = yfilter;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up.yfilter = yfilter;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down.yfilter = yfilter;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-down")
    {
        number_a_cs_down.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-down")
    {
        number_p_ws_down.yfilter = yfilter;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires.yfilter = yfilter;
    }
    if(value_path == "num-vn-is")
    {
        num_vn_is.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::BridgeSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-groups" || name == "number-bridge-domains" || name == "number-bridge-domains-up" || name == "number-bridge-domains-shut" || name == "number-default-bridge-doamins" || name == "number-pbb-edge" || name == "number-pbb-core" || name == "number-p2mp" || name == "number-p2mp-up" || name == "number-p2mp-down" || name == "number-a-cs" || name == "number-a-cs-up" || name == "number-a-cs-down" || name == "number-pseudowires" || name == "number-p-ws-up" || name == "number-p-ws-down" || name == "standby-pseudowires" || name == "num-vn-is" || name == "num-vn-is-up" || name == "num-vn-is-down" || name == "num-vn-is-unresolved" || name == "out-of-memory-state" || name == "partially-programmed-bridges" || name == "partially-programmed-pseudowires" || name == "partially-programmed-a-cs")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::Nsr()
    :
    process_role{YType::uint8, "process-role"},
    process_state{YType::uint8, "process-state"},
    sync_flags{YType::uint32, "sync-flags"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"}
    	,
    failover_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::FailoverStatus>())
	,nsr_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus>())
	,issu_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus>())
{
    failover_status->parent = this;
    nsr_status->parent = this;
    issu_status->parent = this;

    yang_name = "nsr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::~Nsr()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::has_data() const
{
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_data())
            return true;
    }
    return process_role.is_set
	|| process_state.is_set
	|| sync_flags.is_set
	|| sw_install_in_progress.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data());
}

bool L2Vpnv2::Nodes::Node::Nsr::has_operation() const
{
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_role.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(sync_flags.yfilter)
	|| ydk::is_set(sw_install_in_progress.yfilter)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_role.is_set || is_set(process_role.yfilter)) leaf_name_data.push_back(process_role.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.yfilter)) leaf_name_data.push_back(sync_flags.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.yfilter)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failover-status")
    {
        if(failover_status == nullptr)
        {
            failover_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::FailoverStatus>();
        }
        return failover_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "state-transition-time")
    {
        for(auto const & c : state_transition_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime>();
        c->parent = this;
        state_transition_time.push_back(c);
        return c;
    }

    if(child_yang_name == "xid-info")
    {
        for(auto const & c : xid_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::XidInfo>();
        c->parent = this;
        xid_info.push_back(c);
        return c;
    }

    if(child_yang_name == "report-card")
    {
        for(auto const & c : report_card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::ReportCard>();
        c->parent = this;
        report_card.push_back(c);
        return c;
    }

    if(child_yang_name == "event-history")
    {
        for(auto const & c : event_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::EventHistory>();
        c->parent = this;
        event_history.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failover_status != nullptr)
    {
        children["failover-status"] = failover_status;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    for (auto const & c : state_transition_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : xid_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : report_card)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : event_history)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-role")
    {
        process_role = value;
        process_role.value_namespace = name_space;
        process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
        sync_flags.value_namespace = name_space;
        sync_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
        sw_install_in_progress.value_namespace = name_space;
        sw_install_in_progress.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-role")
    {
        process_role.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "sync-flags")
    {
        sync_flags.yfilter = yfilter;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failover-status" || name == "nsr-status" || name == "issu-status" || name == "state-transition-time" || name == "xid-info" || name == "report-card" || name == "event-history" || name == "process-role" || name == "process-state" || name == "sync-flags" || name == "sw-install-in-progress")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::FailoverStatus()
    :
    triggered_time{YType::uint32, "triggered-time"},
    start_time{YType::uint32, "start-time"},
    master_time{YType::uint32, "master-time"}
{

    yang_name = "failover-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::~FailoverStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::has_data() const
{
    return triggered_time.is_set
	|| start_time.is_set
	|| master_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(triggered_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(master_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggered_time.is_set || is_set(triggered_time.yfilter)) leaf_name_data.push_back(triggered_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (master_time.is_set || is_set(master_time.yfilter)) leaf_name_data.push_back(master_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggered-time")
    {
        triggered_time = value;
        triggered_time.value_namespace = name_space;
        triggered_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-time")
    {
        master_time = value;
        master_time.value_namespace = name_space;
        master_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggered-time")
    {
        triggered_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "master-time")
    {
        master_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::FailoverStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "triggered-time" || name == "start-time" || name == "master-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::~NsrStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Nsr::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_data() const
{
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_data() const
{
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::~IssuStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Nsr::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_data() const
{
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_data() const
{
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::StateTransitionTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "state-transition-time"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::~StateTransitionTime()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-transition-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::StateTransitionTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{

    yang_name = "xid-info"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::XidInfo::~XidInfo()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::XidInfo::has_data() const
{
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::XidInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(sent_ids.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::XidInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.yfilter)) leaf_name_data.push_back(sent_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::XidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::XidInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
        sent_ids.value_namespace = name_space;
        sent_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::XidInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "sent-ids")
    {
        sent_ids.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::XidInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "sent-ids")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::ReportCard::ReportCard()
    :
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    connection_change_time{YType::uint32, "connection-change-time"},
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    idt_time{YType::uint32, "idt-time"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"}
{

    yang_name = "report-card"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::ReportCard::~ReportCard()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::ReportCard::has_data() const
{
    return collaborator_is_connected.is_set
	|| connection_change_time.is_set
	|| collaborator_idt_done.is_set
	|| idt_time.is_set
	|| collaborator_skipped.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::ReportCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_is_connected.yfilter)
	|| ydk::is_set(connection_change_time.yfilter)
	|| ydk::is_set(collaborator_idt_done.yfilter)
	|| ydk::is_set(idt_time.yfilter)
	|| ydk::is_set(collaborator_skipped.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::ReportCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.yfilter)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.yfilter)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.yfilter)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.yfilter)) leaf_name_data.push_back(idt_time.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.yfilter)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::ReportCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::ReportCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
        collaborator_is_connected.value_namespace = name_space;
        collaborator_is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
        connection_change_time.value_namespace = name_space;
        connection_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
        collaborator_idt_done.value_namespace = name_space;
        collaborator_idt_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
        idt_time.value_namespace = name_space;
        idt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
        collaborator_skipped.value_namespace = name_space;
        collaborator_skipped.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::ReportCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected.yfilter = yfilter;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time.yfilter = yfilter;
    }
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done.yfilter = yfilter;
    }
    if(value_path == "idt-time")
    {
        idt_time.yfilter = yfilter;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::ReportCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-is-connected" || name == "connection-change-time" || name == "collaborator-idt-done" || name == "idt-time" || name == "collaborator-skipped")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Nsr::EventHistory::EventHistory()
    :
    previous_state{YType::uint8, "previous-state"},
    new_state{YType::uint8, "new-state"},
    process_event{YType::uint16, "process-event"},
    process_collaborator{YType::uint16, "process-collaborator"},
    event_timestamp{YType::uint32, "event-timestamp"}
{

    yang_name = "event-history"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Nsr::EventHistory::~EventHistory()
{
}

bool L2Vpnv2::Nodes::Node::Nsr::EventHistory::has_data() const
{
    return previous_state.is_set
	|| new_state.is_set
	|| process_event.is_set
	|| process_collaborator.is_set
	|| event_timestamp.is_set;
}

bool L2Vpnv2::Nodes::Node::Nsr::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(previous_state.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(process_event.yfilter)
	|| ydk::is_set(process_collaborator.yfilter)
	|| ydk::is_set(event_timestamp.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Nsr::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Nsr::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (previous_state.is_set || is_set(previous_state.yfilter)) leaf_name_data.push_back(previous_state.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (process_event.is_set || is_set(process_event.yfilter)) leaf_name_data.push_back(process_event.get_name_leafdata());
    if (process_collaborator.is_set || is_set(process_collaborator.yfilter)) leaf_name_data.push_back(process_collaborator.get_name_leafdata());
    if (event_timestamp.is_set || is_set(event_timestamp.yfilter)) leaf_name_data.push_back(event_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Nsr::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Nsr::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Nsr::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "previous-state")
    {
        previous_state = value;
        previous_state.value_namespace = name_space;
        previous_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-event")
    {
        process_event = value;
        process_event.value_namespace = name_space;
        process_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator = value;
        process_collaborator.value_namespace = name_space;
        process_collaborator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-timestamp")
    {
        event_timestamp = value;
        event_timestamp.value_namespace = name_space;
        event_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Nsr::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "previous-state")
    {
        previous_state.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "process-event")
    {
        process_event.yfilter = yfilter;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator.yfilter = yfilter;
    }
    if(value_path == "event-timestamp")
    {
        event_timestamp.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Nsr::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "previous-state" || name == "new-state" || name == "process-event" || name == "process-collaborator" || name == "event-timestamp")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPaths()
{

    yang_name = "preferred-paths"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PreferredPaths::~PreferredPaths()
{
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::has_data() const
{
    for (std::size_t index=0; index<preferred_path.size(); index++)
    {
        if(preferred_path[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::has_operation() const
{
    for (std::size_t index=0; index<preferred_path.size(); index++)
    {
        if(preferred_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::PreferredPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PreferredPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PreferredPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preferred-path")
    {
        for(auto const & c : preferred_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath>();
        c->parent = this;
        preferred_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PreferredPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : preferred_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::PreferredPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::PreferredPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preferred-path")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::PreferredPath()
    :
    preferred_type{YType::enumeration, "preferred-type"},
    interface_name{YType::str, "interface-name"},
    type{YType::enumeration, "type"},
    interface_name_xr{YType::str, "interface-name-xr"},
    total_bandwidth{YType::uint32, "total-bandwidth"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"}
{

    yang_name = "preferred-path"; yang_parent_name = "preferred-paths"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_data() const
{
    for (std::size_t index=0; index<virtual_circuit.size(); index++)
    {
        if(virtual_circuit[index]->has_data())
            return true;
    }
    return preferred_type.is_set
	|| interface_name.is_set
	|| type.is_set
	|| interface_name_xr.is_set
	|| total_bandwidth.is_set
	|| available_bandwidth.is_set
	|| reserved_bandwidth.is_set;
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_operation() const
{
    for (std::size_t index=0; index<virtual_circuit.size(); index++)
    {
        if(virtual_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preferred_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter);
}

std::string L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preferred_type.is_set || is_set(preferred_type.yfilter)) leaf_name_data.push_back(preferred_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-circuit")
    {
        for(auto const & c : virtual_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit>();
        c->parent = this;
        virtual_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preferred-type")
    {
        preferred_type = value;
        preferred_type.value_namespace = name_space;
        preferred_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preferred-type")
    {
        preferred_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-circuit" || name == "preferred-type" || name == "interface-name" || name == "type" || name == "interface-name-xr" || name == "total-bandwidth" || name == "available-bandwidth" || name == "reserved-bandwidth")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::VirtualCircuit()
    :
    peer_id{YType::str, "peer-id"},
    source_address{YType::str, "source-address"},
    pwid_type{YType::enumeration, "pwid-type"},
    pwid{YType::uint64, "pwid"},
    fe_ctype{YType::enumeration, "fe-ctype"}
{

    yang_name = "virtual-circuit"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::~VirtualCircuit()
{
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_data() const
{
    return peer_id.is_set
	|| source_address.is_set
	|| pwid_type.is_set
	|| pwid.is_set
	|| fe_ctype.is_set;
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(pwid_type.yfilter)
	|| ydk::is_set(pwid.yfilter)
	|| ydk::is_set(fe_ctype.yfilter);
}

std::string L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (pwid_type.is_set || is_set(pwid_type.yfilter)) leaf_name_data.push_back(pwid_type.get_name_leafdata());
    if (pwid.is_set || is_set(pwid.yfilter)) leaf_name_data.push_back(pwid.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid-type")
    {
        pwid_type = value;
        pwid_type.value_namespace = name_space;
        pwid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid")
    {
        pwid = value;
        pwid.value_namespace = name_space;
        pwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "pwid-type")
    {
        pwid_type.yfilter = yfilter;
    }
    if(value_path == "pwid")
    {
        pwid.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id" || name == "source-address" || name == "pwid-type" || name == "pwid" || name == "fe-ctype")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::GlobalSettings::GlobalSettings()
    :
    pw_grouping_enabled{YType::boolean, "pw-grouping-enabled"},
    pw_status_enabled{YType::boolean, "pw-status-enabled"},
    logging_pw_enabled{YType::boolean, "logging-pw-enabled"},
    logging_bd_enabled{YType::boolean, "logging-bd-enabled"},
    logging_vfi_enabled{YType::boolean, "logging-vfi-enabled"},
    logging_nsr_enabled{YType::boolean, "logging-nsr-enabled"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    tcn_propagation_enabled{YType::boolean, "tcn-propagation-enabled"},
    pw_oam_refresh_transmit_time{YType::uint32, "pw-oam-refresh-transmit-time"},
    ha_role{YType::str, "ha-role"},
    issu_role{YType::str, "issu-role"},
    process_fsm{YType::str, "process-fsm"},
    going_active{YType::boolean, "going-active"}
{

    yang_name = "global-settings"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::GlobalSettings::~GlobalSettings()
{
}

bool L2Vpnv2::Nodes::Node::GlobalSettings::has_data() const
{
    return pw_grouping_enabled.is_set
	|| pw_status_enabled.is_set
	|| logging_pw_enabled.is_set
	|| logging_bd_enabled.is_set
	|| logging_vfi_enabled.is_set
	|| logging_nsr_enabled.is_set
	|| logging_df_election_enabled.is_set
	|| tcn_propagation_enabled.is_set
	|| pw_oam_refresh_transmit_time.is_set
	|| ha_role.is_set
	|| issu_role.is_set
	|| process_fsm.is_set
	|| going_active.is_set;
}

bool L2Vpnv2::Nodes::Node::GlobalSettings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_grouping_enabled.yfilter)
	|| ydk::is_set(pw_status_enabled.yfilter)
	|| ydk::is_set(logging_pw_enabled.yfilter)
	|| ydk::is_set(logging_bd_enabled.yfilter)
	|| ydk::is_set(logging_vfi_enabled.yfilter)
	|| ydk::is_set(logging_nsr_enabled.yfilter)
	|| ydk::is_set(logging_df_election_enabled.yfilter)
	|| ydk::is_set(tcn_propagation_enabled.yfilter)
	|| ydk::is_set(pw_oam_refresh_transmit_time.yfilter)
	|| ydk::is_set(ha_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(process_fsm.yfilter)
	|| ydk::is_set(going_active.yfilter);
}

std::string L2Vpnv2::Nodes::Node::GlobalSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::GlobalSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_grouping_enabled.is_set || is_set(pw_grouping_enabled.yfilter)) leaf_name_data.push_back(pw_grouping_enabled.get_name_leafdata());
    if (pw_status_enabled.is_set || is_set(pw_status_enabled.yfilter)) leaf_name_data.push_back(pw_status_enabled.get_name_leafdata());
    if (logging_pw_enabled.is_set || is_set(logging_pw_enabled.yfilter)) leaf_name_data.push_back(logging_pw_enabled.get_name_leafdata());
    if (logging_bd_enabled.is_set || is_set(logging_bd_enabled.yfilter)) leaf_name_data.push_back(logging_bd_enabled.get_name_leafdata());
    if (logging_vfi_enabled.is_set || is_set(logging_vfi_enabled.yfilter)) leaf_name_data.push_back(logging_vfi_enabled.get_name_leafdata());
    if (logging_nsr_enabled.is_set || is_set(logging_nsr_enabled.yfilter)) leaf_name_data.push_back(logging_nsr_enabled.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.yfilter)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (tcn_propagation_enabled.is_set || is_set(tcn_propagation_enabled.yfilter)) leaf_name_data.push_back(tcn_propagation_enabled.get_name_leafdata());
    if (pw_oam_refresh_transmit_time.is_set || is_set(pw_oam_refresh_transmit_time.yfilter)) leaf_name_data.push_back(pw_oam_refresh_transmit_time.get_name_leafdata());
    if (ha_role.is_set || is_set(ha_role.yfilter)) leaf_name_data.push_back(ha_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (process_fsm.is_set || is_set(process_fsm.yfilter)) leaf_name_data.push_back(process_fsm.get_name_leafdata());
    if (going_active.is_set || is_set(going_active.yfilter)) leaf_name_data.push_back(going_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::GlobalSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::GlobalSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::GlobalSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled = value;
        pw_grouping_enabled.value_namespace = name_space;
        pw_grouping_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled = value;
        pw_status_enabled.value_namespace = name_space;
        pw_status_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled = value;
        logging_pw_enabled.value_namespace = name_space;
        logging_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled = value;
        logging_bd_enabled.value_namespace = name_space;
        logging_bd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled = value;
        logging_vfi_enabled.value_namespace = name_space;
        logging_vfi_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled = value;
        logging_nsr_enabled.value_namespace = name_space;
        logging_nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
        logging_df_election_enabled.value_namespace = name_space;
        logging_df_election_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled = value;
        tcn_propagation_enabled.value_namespace = name_space;
        tcn_propagation_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time = value;
        pw_oam_refresh_transmit_time.value_namespace = name_space;
        pw_oam_refresh_transmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-role")
    {
        ha_role = value;
        ha_role.value_namespace = name_space;
        ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-fsm")
    {
        process_fsm = value;
        process_fsm.value_namespace = name_space;
        process_fsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "going-active")
    {
        going_active = value;
        going_active.value_namespace = name_space;
        going_active.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::GlobalSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled.yfilter = yfilter;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled.yfilter = yfilter;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled.yfilter = yfilter;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time.yfilter = yfilter;
    }
    if(value_path == "ha-role")
    {
        ha_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "process-fsm")
    {
        process_fsm.yfilter = yfilter;
    }
    if(value_path == "going-active")
    {
        going_active.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::GlobalSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-grouping-enabled" || name == "pw-status-enabled" || name == "logging-pw-enabled" || name == "logging-bd-enabled" || name == "logging-vfi-enabled" || name == "logging-nsr-enabled" || name == "logging-df-election-enabled" || name == "tcn-propagation-enabled" || name == "pw-oam-refresh-transmit-time" || name == "ha-role" || name == "issu-role" || name == "process-fsm" || name == "going-active")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Pwr()
    :
    summary(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary>())
{
    summary->parent = this;

    yang_name = "pwr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::~Pwr()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool L2Vpnv2::Nodes::Node::Pwr::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Pwr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Pwr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Pwr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::Summary()
    :
    bgp_router_id{YType::str, "bgp-router-id"},
    cfg_router_id{YType::str, "cfg-router-id"},
    bgp_as{YType::uint32, "bgp-as"},
    cfg_global_id{YType::uint32, "cfg-global-id"},
    l2vpn_has_bgp_eod{YType::boolean, "l2vpn-has-bgp-eod"}
    	,
    rd_auto(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto>())
	,rd_configured(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured>())
{
    rd_auto->parent = this;
    rd_configured->parent = this;

    yang_name = "summary"; yang_parent_name = "pwr"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::~Summary()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::has_data() const
{
    return bgp_router_id.is_set
	|| cfg_router_id.is_set
	|| bgp_as.is_set
	|| cfg_global_id.is_set
	|| l2vpn_has_bgp_eod.is_set
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data());
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_router_id.yfilter)
	|| ydk::is_set(cfg_router_id.yfilter)
	|| ydk::is_set(bgp_as.yfilter)
	|| ydk::is_set(cfg_global_id.yfilter)
	|| ydk::is_set(l2vpn_has_bgp_eod.yfilter)
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_router_id.is_set || is_set(bgp_router_id.yfilter)) leaf_name_data.push_back(bgp_router_id.get_name_leafdata());
    if (cfg_router_id.is_set || is_set(cfg_router_id.yfilter)) leaf_name_data.push_back(cfg_router_id.get_name_leafdata());
    if (bgp_as.is_set || is_set(bgp_as.yfilter)) leaf_name_data.push_back(bgp_as.get_name_leafdata());
    if (cfg_global_id.is_set || is_set(cfg_global_id.yfilter)) leaf_name_data.push_back(cfg_global_id.get_name_leafdata());
    if (l2vpn_has_bgp_eod.is_set || is_set(l2vpn_has_bgp_eod.yfilter)) leaf_name_data.push_back(l2vpn_has_bgp_eod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-auto")
    {
        if(rd_auto == nullptr)
        {
            rd_auto = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto>();
        }
        return rd_auto;
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured == nullptr)
        {
            rd_configured = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured>();
        }
        return rd_configured;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rd_auto != nullptr)
    {
        children["rd-auto"] = rd_auto;
    }

    if(rd_configured != nullptr)
    {
        children["rd-configured"] = rd_configured;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-router-id")
    {
        bgp_router_id = value;
        bgp_router_id.value_namespace = name_space;
        bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id = value;
        cfg_router_id.value_namespace = name_space;
        cfg_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as")
    {
        bgp_as = value;
        bgp_as.value_namespace = name_space;
        bgp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id = value;
        cfg_global_id.value_namespace = name_space;
        cfg_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod = value;
        l2vpn_has_bgp_eod.value_namespace = name_space;
        l2vpn_has_bgp_eod.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-router-id")
    {
        bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as")
    {
        bgp_as.yfilter = yfilter;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id.yfilter = yfilter;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-auto" || name == "rd-configured" || name == "bgp-router-id" || name == "cfg-router-id" || name == "bgp-as" || name == "cfg-global-id" || name == "l2vpn-has-bgp-eod")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-auto"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::~RdAuto()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::Auto_()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::has_data() const
{
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs>())
	,four_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-configured"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::~RdConfigured()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::Auto_()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::has_data() const
{
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ces()
{

    yang_name = "xconnect-mp2mp-ce2ces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::~XconnectMp2MpCe2Ces()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::has_data() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.size(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::has_operation() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.size(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-mp2mp-ce2ce")
    {
        for(auto const & c : xconnect_mp2mp_ce2ce)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce>();
        c->parent = this;
        xconnect_mp2mp_ce2ce.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect_mp2mp_ce2ce)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-mp2mp-ce2ce")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::XconnectMp2MpCe2Ce()
    :
    group_name{YType::str, "group-name"},
    mp2_mp_name{YType::str, "mp2-mp-name"},
    local_ceid{YType::uint32, "local-ceid"},
    remote_ceid{YType::uint32, "remote-ceid"},
    local_customer_edge_id{YType::uint16, "local-customer-edge-id"},
    remote_customer_edge_id{YType::uint16, "remote-customer-edge-id"},
    ce_added{YType::boolean, "ce-added"}
{

    yang_name = "xconnect-mp2mp-ce2ce"; yang_parent_name = "xconnect-mp2mp-ce2ces"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::~XconnectMp2MpCe2Ce()
{
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_data() const
{
    return group_name.is_set
	|| mp2_mp_name.is_set
	|| local_ceid.is_set
	|| remote_ceid.is_set
	|| local_customer_edge_id.is_set
	|| remote_customer_edge_id.is_set
	|| ce_added.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(mp2_mp_name.yfilter)
	|| ydk::is_set(local_ceid.yfilter)
	|| ydk::is_set(remote_ceid.yfilter)
	|| ydk::is_set(local_customer_edge_id.yfilter)
	|| ydk::is_set(remote_customer_edge_id.yfilter)
	|| ydk::is_set(ce_added.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (mp2_mp_name.is_set || is_set(mp2_mp_name.yfilter)) leaf_name_data.push_back(mp2_mp_name.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.yfilter)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.yfilter)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (local_customer_edge_id.is_set || is_set(local_customer_edge_id.yfilter)) leaf_name_data.push_back(local_customer_edge_id.get_name_leafdata());
    if (remote_customer_edge_id.is_set || is_set(remote_customer_edge_id.yfilter)) leaf_name_data.push_back(remote_customer_edge_id.get_name_leafdata());
    if (ce_added.is_set || is_set(ce_added.yfilter)) leaf_name_data.push_back(ce_added.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name = value;
        mp2_mp_name.value_namespace = name_space;
        mp2_mp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
        local_ceid.value_namespace = name_space;
        local_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
        remote_ceid.value_namespace = name_space;
        remote_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-customer-edge-id")
    {
        local_customer_edge_id = value;
        local_customer_edge_id.value_namespace = name_space;
        local_customer_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-customer-edge-id")
    {
        remote_customer_edge_id = value;
        remote_customer_edge_id.value_namespace = name_space;
        remote_customer_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ce-added")
    {
        ce_added = value;
        ce_added.value_namespace = name_space;
        ce_added.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name.yfilter = yfilter;
    }
    if(value_path == "local-ceid")
    {
        local_ceid.yfilter = yfilter;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid.yfilter = yfilter;
    }
    if(value_path == "local-customer-edge-id")
    {
        local_customer_edge_id.yfilter = yfilter;
    }
    if(value_path == "remote-customer-edge-id")
    {
        remote_customer_edge_id.yfilter = yfilter;
    }
    if(value_path == "ce-added")
    {
        ce_added.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectMp2MpCe2Ces::XconnectMp2MpCe2Ce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "mp2-mp-name" || name == "local-ceid" || name == "remote-ceid" || name == "local-customer-edge-id" || name == "remote-customer-edge-id" || name == "ce-added")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnects()
{

    yang_name = "xconnects"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::~Xconnects()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::has_data() const
{
    for (std::size_t index=0; index<xconnect.size(); index++)
    {
        if(xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::Xconnects::has_operation() const
{
    for (std::size_t index=0; index<xconnect.size(); index++)
    {
        if(xconnect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        for(auto const & c : xconnect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect>();
        c->parent = this;
        xconnect.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xconnect)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Xconnects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Xconnect()
    :
    group_name{YType::str, "group-name"},
    xconnect_name{YType::str, "xconnect-name"},
    group_name_xr{YType::str, "group-name-xr"},
    xconnect_name_xr{YType::str, "xconnect-name-xr"},
    number_of_backup_p_ws{YType::uint32, "number-of-backup-p-ws"},
    state{YType::enumeration, "state"},
    interworking{YType::enumeration, "interworking"},
    diag_mask{YType::uint32, "diag-mask"},
    description{YType::str, "description"},
    is_mp2mp{YType::boolean, "is-mp2mp"}
    	,
    backup(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup>())
	,segment1(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment1>())
	,segment2(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment2>())
	,ce2ce(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Ce2Ce>())
{
    backup->parent = this;
    segment1->parent = this;
    segment2->parent = this;
    ce2ce->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnects"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::~Xconnect()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::has_data() const
{
    for (std::size_t index=0; index<backup_segment.size(); index++)
    {
        if(backup_segment[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| xconnect_name.is_set
	|| group_name_xr.is_set
	|| xconnect_name_xr.is_set
	|| number_of_backup_p_ws.is_set
	|| state.is_set
	|| interworking.is_set
	|| diag_mask.is_set
	|| description.is_set
	|| is_mp2mp.is_set
	|| (backup !=  nullptr && backup->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data())
	|| (ce2ce !=  nullptr && ce2ce->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<backup_segment.size(); index++)
    {
        if(backup_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(xconnect_name.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(xconnect_name_xr.yfilter)
	|| ydk::is_set(number_of_backup_p_ws.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(diag_mask.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(is_mp2mp.yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation())
	|| (ce2ce !=  nullptr && ce2ce->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (xconnect_name.is_set || is_set(xconnect_name.yfilter)) leaf_name_data.push_back(xconnect_name.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (xconnect_name_xr.is_set || is_set(xconnect_name_xr.yfilter)) leaf_name_data.push_back(xconnect_name_xr.get_name_leafdata());
    if (number_of_backup_p_ws.is_set || is_set(number_of_backup_p_ws.yfilter)) leaf_name_data.push_back(number_of_backup_p_ws.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (diag_mask.is_set || is_set(diag_mask.yfilter)) leaf_name_data.push_back(diag_mask.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (is_mp2mp.is_set || is_set(is_mp2mp.yfilter)) leaf_name_data.push_back(is_mp2mp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Segment2>();
        }
        return segment2;
    }

    if(child_yang_name == "ce2ce")
    {
        if(ce2ce == nullptr)
        {
            ce2ce = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Ce2Ce>();
        }
        return ce2ce;
    }

    if(child_yang_name == "backup-segment")
    {
        for(auto const & c : backup_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::BackupSegment>();
        c->parent = this;
        backup_segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(segment1 != nullptr)
    {
        children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        children["segment2"] = segment2;
    }

    if(ce2ce != nullptr)
    {
        children["ce2ce"] = ce2ce;
    }

    for (auto const & c : backup_segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name = value;
        xconnect_name.value_namespace = name_space;
        xconnect_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr = value;
        xconnect_name_xr.value_namespace = name_space;
        xconnect_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws = value;
        number_of_backup_p_ws.value_namespace = name_space;
        number_of_backup_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-mask")
    {
        diag_mask = value;
        diag_mask.value_namespace = name_space;
        diag_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp = value;
        is_mp2mp.value_namespace = name_space;
        is_mp2mp.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "xconnect-name")
    {
        xconnect_name.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr.yfilter = yfilter;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "diag-mask")
    {
        diag_mask.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "segment1" || name == "segment2" || name == "ce2ce" || name == "backup-segment" || name == "group-name" || name == "xconnect-name" || name == "group-name-xr" || name == "xconnect-name-xr" || name == "number-of-backup-p-ws" || name == "state" || name == "interworking" || name == "diag-mask" || name == "description" || name == "is-mp2mp")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::Backup()
    :
    segment_type{YType::enumeration, "segment-type"}
    	,
    attachment_circuit(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit>())
	,pseudo_wire(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire>())
{
    attachment_circuit->parent = this;
    pseudo_wire->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::~Backup()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::has_data() const
{
    return segment_type.is_set
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_data())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_operation())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        if(attachment_circuit == nullptr)
        {
            attachment_circuit = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit>();
        }
        return attachment_circuit;
    }

    if(child_yang_name == "pseudo-wire")
    {
        if(pseudo_wire == nullptr)
        {
            pseudo_wire = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire>();
        }
        return pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attachment_circuit != nullptr)
    {
        children["attachment-circuit"] = attachment_circuit;
    }

    if(pseudo_wire != nullptr)
    {
        children["pseudo-wire"] = pseudo_wire;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit" || name == "pseudo-wire" || name == "segment-type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::AttachmentCircuit()
    :
    state{YType::enumeration, "state"},
    msti{YType::str, "msti"},
    internal_ms_ti{YType::str, "internal-ms-ti"},
    interface_handle{YType::str, "interface-handle"},
    node_id{YType::str, "node-id"},
    xconnect_id{YType::uint32, "xconnect-id"},
    ms_ti_mismatch{YType::boolean, "ms-ti-mismatch"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    tdm_media_mismatched{YType::boolean, "tdm-media-mismatched"},
    bvi_mac_conflict{YType::boolean, "bvi-mac-conflict"},
    bvi_no_port_up{YType::boolean, "bvi-no-port-up"},
    control_word_mismatched{YType::boolean, "control-word-mismatched"},
    encapsulation_mismatched{YType::boolean, "encapsulation-mismatched"},
    encapsulation_error{YType::str, "encapsulation-error"},
    interworking{YType::enumeration, "interworking"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    msti_mismatch_down{YType::boolean, "msti-mismatch-down"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_group_state{YType::enumeration, "redundancy-group-state"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    is_ac_partially_programmed{YType::boolean, "is-ac-partially-programmed"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"}
    	,
    interface(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface>())
	,statistics(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics>())
	,l2vpn_protection(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection>())
{
    interface->parent = this;
    statistics->parent = this;
    l2vpn_protection->parent = this;

    yang_name = "attachment-circuit"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::has_data() const
{
    return state.is_set
	|| msti.is_set
	|| internal_ms_ti.is_set
	|| interface_handle.is_set
	|| node_id.is_set
	|| xconnect_id.is_set
	|| ms_ti_mismatch.is_set
	|| mtu_mismatched.is_set
	|| tdm_media_mismatched.is_set
	|| bvi_mac_conflict.is_set
	|| bvi_no_port_up.is_set
	|| control_word_mismatched.is_set
	|| encapsulation_mismatched.is_set
	|| encapsulation_error.is_set
	|| interworking.is_set
	|| out_of_memory_state.is_set
	|| msti_mismatch_down.is_set
	|| mac_limit_oper_down.is_set
	|| redundancy_group_id.is_set
	|| redundancy_group_state.is_set
	|| redundancy_object_id.is_set
	|| is_ac_partially_programmed.is_set
	|| evpn_internal_label.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(internal_ms_ti.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(ms_ti_mismatch.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(tdm_media_mismatched.yfilter)
	|| ydk::is_set(bvi_mac_conflict.yfilter)
	|| ydk::is_set(bvi_no_port_up.yfilter)
	|| ydk::is_set(control_word_mismatched.yfilter)
	|| ydk::is_set(encapsulation_mismatched.yfilter)
	|| ydk::is_set(encapsulation_error.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(msti_mismatch_down.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_group_state.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(is_ac_partially_programmed.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (internal_ms_ti.is_set || is_set(internal_ms_ti.yfilter)) leaf_name_data.push_back(internal_ms_ti.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (ms_ti_mismatch.is_set || is_set(ms_ti_mismatch.yfilter)) leaf_name_data.push_back(ms_ti_mismatch.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (tdm_media_mismatched.is_set || is_set(tdm_media_mismatched.yfilter)) leaf_name_data.push_back(tdm_media_mismatched.get_name_leafdata());
    if (bvi_mac_conflict.is_set || is_set(bvi_mac_conflict.yfilter)) leaf_name_data.push_back(bvi_mac_conflict.get_name_leafdata());
    if (bvi_no_port_up.is_set || is_set(bvi_no_port_up.yfilter)) leaf_name_data.push_back(bvi_no_port_up.get_name_leafdata());
    if (control_word_mismatched.is_set || is_set(control_word_mismatched.yfilter)) leaf_name_data.push_back(control_word_mismatched.get_name_leafdata());
    if (encapsulation_mismatched.is_set || is_set(encapsulation_mismatched.yfilter)) leaf_name_data.push_back(encapsulation_mismatched.get_name_leafdata());
    if (encapsulation_error.is_set || is_set(encapsulation_error.yfilter)) leaf_name_data.push_back(encapsulation_error.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (msti_mismatch_down.is_set || is_set(msti_mismatch_down.yfilter)) leaf_name_data.push_back(msti_mismatch_down.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_group_state.is_set || is_set(redundancy_group_state.yfilter)) leaf_name_data.push_back(redundancy_group_state.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (is_ac_partially_programmed.is_set || is_set(is_ac_partially_programmed.yfilter)) leaf_name_data.push_back(is_ac_partially_programmed.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "l2vpn-protection")
    {
        if(l2vpn_protection == nullptr)
        {
            l2vpn_protection = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection>();
        }
        return l2vpn_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(l2vpn_protection != nullptr)
    {
        children["l2vpn-protection"] = l2vpn_protection;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti = value;
        internal_ms_ti.value_namespace = name_space;
        internal_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch = value;
        ms_ti_mismatch.value_namespace = name_space;
        ms_ti_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched = value;
        tdm_media_mismatched.value_namespace = name_space;
        tdm_media_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict = value;
        bvi_mac_conflict.value_namespace = name_space;
        bvi_mac_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up = value;
        bvi_no_port_up.value_namespace = name_space;
        bvi_no_port_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched = value;
        control_word_mismatched.value_namespace = name_space;
        control_word_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched = value;
        encapsulation_mismatched.value_namespace = name_space;
        encapsulation_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error = value;
        encapsulation_error.value_namespace = name_space;
        encapsulation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down = value;
        msti_mismatch_down.value_namespace = name_space;
        msti_mismatch_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state = value;
        redundancy_group_state.value_namespace = name_space;
        redundancy_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed = value;
        is_ac_partially_programmed.value_namespace = name_space;
        is_ac_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched.yfilter = yfilter;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict.yfilter = yfilter;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up.yfilter = yfilter;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "statistics" || name == "l2vpn-protection" || name == "state" || name == "msti" || name == "internal-ms-ti" || name == "interface-handle" || name == "node-id" || name == "xconnect-id" || name == "ms-ti-mismatch" || name == "mtu-mismatched" || name == "tdm-media-mismatched" || name == "bvi-mac-conflict" || name == "bvi-no-port-up" || name == "control-word-mismatched" || name == "encapsulation-mismatched" || name == "encapsulation-error" || name == "interworking" || name == "out-of-memory-state" || name == "msti-mismatch-down" || name == "mac-limit-oper-down" || name == "redundancy-group-id" || name == "redundancy-group-state" || name == "redundancy-object-id" || name == "is-ac-partially-programmed" || name == "evpn-internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Interface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters>())
{
    parameters->parent = this;

    yang_name = "interface"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_data() const
{
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    ethernet(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm>())
	,atm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_data() const
{
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_data() const
{
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_data() const
{
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::Interface_()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::~Interface_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw::InterfaceList::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::Statistics()
    :
    impostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats>())
	,dispostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber>())
{
    impostion_stats->parent = this;
    dispostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::~Statistics()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_data() const
{
    return (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "impostion-stats" || name == "dispostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionStats()
    :
    imposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast>())
	,broadcast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>())
{
    imposition_stat->parent = this;
    imposition_mtu_drop->parent = this;
    impostion_tail_drop->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    broadcast->parent = this;
    known_unicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::has_data() const
{
    return (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imposition-stat" || name == "imposition-mtu-drop" || name == "impostion-tail-drop" || name == "l2fsbi-drop" || name == "multicast" || name == "broadcast" || name == "known-unicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::Multicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispostionStats()
    :
    disposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>())
	,multicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>())
	,unicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>())
	,broadcast_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>())
	,dai_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove>())
{
    disposition_stat->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_tail_drop->parent = this;
    multicast_drop->parent = this;
    unicast_drop->parent = this;
    broadcast_drop->parent = this;
    received_drops->parent = this;
    dai_drop->parent = this;
    ipsg_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_data() const
{
    return (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disposition-stat" || name == "disposition-mtu-drop" || name == "disposition-tail-drop" || name == "multicast-drop" || name == "unicast-drop" || name == "broadcast-drop" || name == "received-drops" || name == "dai-drop" || name == "ipsg-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "known-unicast" || name == "mac-move")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::MacMove()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::SequenceNumber()
    :
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::has_data() const
{
    return sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number-sent" || name == "sequence-number-expected" || name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::L2VpnProtection()
    :
    protection_type{YType::enumeration, "protection-type"},
    protection_configured{YType::enumeration, "protection-configured"},
    protection_name{YType::str, "protection-name"},
    protected_name{YType::str, "protected-name"},
    active{YType::boolean, "active"}
{

    yang_name = "l2vpn-protection"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::~L2VpnProtection()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_data() const
{
    return protection_type.is_set
	|| protection_configured.is_set
	|| protection_name.is_set
	|| protected_name.is_set
	|| active.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_configured.yfilter)
	|| ydk::is_set(protection_name.yfilter)
	|| ydk::is_set(protected_name.yfilter)
	|| ydk::is_set(active.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_configured.is_set || is_set(protection_configured.yfilter)) leaf_name_data.push_back(protection_configured.get_name_leafdata());
    if (protection_name.is_set || is_set(protection_name.yfilter)) leaf_name_data.push_back(protection_name.get_name_leafdata());
    if (protected_name.is_set || is_set(protected_name.yfilter)) leaf_name_data.push_back(protected_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-configured")
    {
        protection_configured = value;
        protection_configured.value_namespace = name_space;
        protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-name")
    {
        protection_name = value;
        protection_name.value_namespace = name_space;
        protection_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-name")
    {
        protected_name = value;
        protected_name.value_namespace = name_space;
        protected_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-configured")
    {
        protection_configured.yfilter = yfilter;
    }
    if(value_path == "protection-name")
    {
        protection_name.yfilter = yfilter;
    }
    if(value_path == "protected-name")
    {
        protected_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::AttachmentCircuit::L2VpnProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-type" || name == "protection-configured" || name == "protection-name" || name == "protected-name" || name == "active")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PseudoWire()
    :
    local_source_address{YType::str, "local-source-address"},
    ipv6_local_source_address{YType::str, "ipv6-local-source-address"},
    pseudo_wire_id{YType::uint64, "pseudo-wire-id"},
    is_pwr_type{YType::boolean, "is-pwr-type"},
    is_evpn_vpws_type{YType::boolean, "is-evpn-vpws-type"},
    xconnect_id{YType::uint32, "xconnect-id"},
    state{YType::enumeration, "state"},
    pseudo_wire_state{YType::enumeration, "pseudo-wire-state"},
    protocol{YType::enumeration, "protocol"},
    pw_class_name{YType::str, "pw-class-name"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    interworking{YType::enumeration, "interworking"},
    fe_ctype{YType::enumeration, "fe-ctype"},
    evpn_src_acid{YType::uint32, "evpn-src-acid"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    local_control_word{YType::enumeration, "local-control-word"},
    remote_control_word{YType::enumeration, "remote-control-word"},
    local_pseudo_wire_type{YType::enumeration, "local-pseudo-wire-type"},
    remote_pseudo_wire_type{YType::enumeration, "remote-pseudo-wire-type"},
    imposed_vlan_id{YType::uint32, "imposed-vlan-id"},
    time_created{YType::str, "time-created"},
    time_elapsed_creation{YType::str, "time-elapsed-creation"},
    last_time_status_changed{YType::str, "last-time-status-changed"},
    time_elapsed_status_changed{YType::str, "time-elapsed-status-changed"},
    last_time_status_down{YType::str, "last-time-status-down"},
    time_elapsed_status_down{YType::uint32, "time-elapsed-status-down"},
    shutdown{YType::boolean, "shutdown"},
    pseudo_wire_type_mismatched{YType::boolean, "pseudo-wire-type-mismatched"},
    payload_bytes_mismatched{YType::boolean, "payload-bytes-mismatched"},
    bitrate_mismatched{YType::boolean, "bitrate-mismatched"},
    rtp_mismatched{YType::boolean, "rtp-mismatched"},
    diff_ts_mismatched{YType::boolean, "diff-ts-mismatched"},
    sig_pkts_mismatched{YType::boolean, "sig-pkts-mismatched"},
    cas_mismatched{YType::boolean, "cas-mismatched"},
    payload_type_mismatched{YType::boolean, "payload-type-mismatched"},
    freq_mismatched{YType::boolean, "freq-mismatched"},
    ssrc_mismatched{YType::boolean, "ssrc-mismatched"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    illegal_control_word{YType::boolean, "illegal-control-word"},
    ad_remote_down{YType::boolean, "ad-remote-down"},
    not_supported_qinq{YType::boolean, "not-supported-qinq"},
    local_label_failed{YType::boolean, "local-label-failed"},
    remote_label_failed{YType::boolean, "remote-label-failed"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    backup_pw{YType::boolean, "backup-pw"},
    primary_pw{YType::boolean, "primary-pw"},
    backup_active{YType::boolean, "backup-active"},
    backup_force_active{YType::boolean, "backup-force-active"},
    disable_never{YType::boolean, "disable-never"},
    disable_delay{YType::uint8, "disable-delay"},
    primary_peer_id{YType::str, "primary-peer-id"},
    primary_pseudo_wire_id{YType::uint64, "primary-pseudo-wire-id"},
    number_ma_cwithdraw_message_sent{YType::uint32, "number-ma-cwithdraw-message-sent"},
    num_ma_cwithdraw_msg_received{YType::uint32, "num-ma-cwithdraw-msg-received"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    transport_lsp_down{YType::boolean, "transport-lsp-down"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    pw_status_use{YType::boolean, "pw-status-use"},
    auto_discovery{YType::boolean, "auto-discovery"},
    ad_method{YType::uint32, "ad-method"},
    pwlsd_rewrite_failed{YType::boolean, "pwlsd-rewrite-failed"},
    ldp_label_advertise_failed{YType::boolean, "ldp-label-advertise-failed"},
    is_vfi{YType::boolean, "is-vfi"},
    is_multi_segment_pseudowire{YType::boolean, "is-multi-segment-pseudowire"},
    pw_redundancy_one_way{YType::boolean, "pw-redundancy-one-way"},
    load_balance{YType::enumeration, "load-balance"},
    pw_flow_label_type{YType::enumeration, "pw-flow-label-type"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"},
    is_partially_programmed{YType::boolean, "is-partially-programmed"},
    pw_redundancy_initial_delay{YType::uint8, "pw-redundancy-initial-delay"},
    bridge_pw_type_mismatch{YType::boolean, "bridge-pw-type-mismatch"},
    required_bw{YType::uint32, "required-bw"},
    admited_bw{YType::uint32, "admited-bw"},
    forward_class{YType::uint8, "forward-class"},
    table_policy_name{YType::str, "table-policy-name"}
    	,
    peer_id(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId>())
	,encapsulation_info(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo>())
	,local_interface(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface>())
	,remote_interface(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface>())
	,preferred_path(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath>())
	,local_signalling(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling>())
	,remote_signalling(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling>())
	,statistics(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::Statistics>())
	,p2mp_pw(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw>())
{
    peer_id->parent = this;
    encapsulation_info->parent = this;
    local_interface->parent = this;
    remote_interface->parent = this;
    preferred_path->parent = this;
    local_signalling->parent = this;
    remote_signalling->parent = this;
    statistics->parent = this;
    p2mp_pw->parent = this;

    yang_name = "pseudo-wire"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::~PseudoWire()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::has_data() const
{
    return local_source_address.is_set
	|| ipv6_local_source_address.is_set
	|| pseudo_wire_id.is_set
	|| is_pwr_type.is_set
	|| is_evpn_vpws_type.is_set
	|| xconnect_id.is_set
	|| state.is_set
	|| pseudo_wire_state.is_set
	|| protocol.is_set
	|| pw_class_name.is_set
	|| tag_rewrite.is_set
	|| interworking.is_set
	|| fe_ctype.is_set
	|| evpn_src_acid.is_set
	|| sequencing_type.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| local_control_word.is_set
	|| remote_control_word.is_set
	|| local_pseudo_wire_type.is_set
	|| remote_pseudo_wire_type.is_set
	|| imposed_vlan_id.is_set
	|| time_created.is_set
	|| time_elapsed_creation.is_set
	|| last_time_status_changed.is_set
	|| time_elapsed_status_changed.is_set
	|| last_time_status_down.is_set
	|| time_elapsed_status_down.is_set
	|| shutdown.is_set
	|| pseudo_wire_type_mismatched.is_set
	|| payload_bytes_mismatched.is_set
	|| bitrate_mismatched.is_set
	|| rtp_mismatched.is_set
	|| diff_ts_mismatched.is_set
	|| sig_pkts_mismatched.is_set
	|| cas_mismatched.is_set
	|| payload_type_mismatched.is_set
	|| freq_mismatched.is_set
	|| ssrc_mismatched.is_set
	|| mtu_mismatched.is_set
	|| illegal_control_word.is_set
	|| ad_remote_down.is_set
	|| not_supported_qinq.is_set
	|| local_label_failed.is_set
	|| remote_label_failed.is_set
	|| preferred_path_disable_fallback.is_set
	|| backup_pw.is_set
	|| primary_pw.is_set
	|| backup_active.is_set
	|| backup_force_active.is_set
	|| disable_never.is_set
	|| disable_delay.is_set
	|| primary_peer_id.is_set
	|| primary_pseudo_wire_id.is_set
	|| number_ma_cwithdraw_message_sent.is_set
	|| num_ma_cwithdraw_msg_received.is_set
	|| out_of_memory_state.is_set
	|| transport_lsp_down.is_set
	|| mac_limit_oper_down.is_set
	|| pw_status_use.is_set
	|| auto_discovery.is_set
	|| ad_method.is_set
	|| pwlsd_rewrite_failed.is_set
	|| ldp_label_advertise_failed.is_set
	|| is_vfi.is_set
	|| is_multi_segment_pseudowire.is_set
	|| pw_redundancy_one_way.is_set
	|| load_balance.is_set
	|| pw_flow_label_type.is_set
	|| pw_flow_label_type_cfg.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| is_flow_label_static.is_set
	|| is_partially_programmed.is_set
	|| pw_redundancy_initial_delay.is_set
	|| bridge_pw_type_mismatch.is_set
	|| required_bw.is_set
	|| admited_bw.is_set
	|| forward_class.is_set
	|| table_policy_name.is_set
	|| (peer_id !=  nullptr && peer_id->has_data())
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (local_interface !=  nullptr && local_interface->has_data())
	|| (remote_interface !=  nullptr && remote_interface->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (local_signalling !=  nullptr && local_signalling->has_data())
	|| (remote_signalling !=  nullptr && remote_signalling->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_source_address.yfilter)
	|| ydk::is_set(ipv6_local_source_address.yfilter)
	|| ydk::is_set(pseudo_wire_id.yfilter)
	|| ydk::is_set(is_pwr_type.yfilter)
	|| ydk::is_set(is_evpn_vpws_type.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(pseudo_wire_state.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(pw_class_name.yfilter)
	|| ydk::is_set(tag_rewrite.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(evpn_src_acid.yfilter)
	|| ydk::is_set(sequencing_type.yfilter)
	|| ydk::is_set(resync_enabled.yfilter)
	|| ydk::is_set(resync_threshold.yfilter)
	|| ydk::is_set(local_control_word.yfilter)
	|| ydk::is_set(remote_control_word.yfilter)
	|| ydk::is_set(local_pseudo_wire_type.yfilter)
	|| ydk::is_set(remote_pseudo_wire_type.yfilter)
	|| ydk::is_set(imposed_vlan_id.yfilter)
	|| ydk::is_set(time_created.yfilter)
	|| ydk::is_set(time_elapsed_creation.yfilter)
	|| ydk::is_set(last_time_status_changed.yfilter)
	|| ydk::is_set(time_elapsed_status_changed.yfilter)
	|| ydk::is_set(last_time_status_down.yfilter)
	|| ydk::is_set(time_elapsed_status_down.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(pseudo_wire_type_mismatched.yfilter)
	|| ydk::is_set(payload_bytes_mismatched.yfilter)
	|| ydk::is_set(bitrate_mismatched.yfilter)
	|| ydk::is_set(rtp_mismatched.yfilter)
	|| ydk::is_set(diff_ts_mismatched.yfilter)
	|| ydk::is_set(sig_pkts_mismatched.yfilter)
	|| ydk::is_set(cas_mismatched.yfilter)
	|| ydk::is_set(payload_type_mismatched.yfilter)
	|| ydk::is_set(freq_mismatched.yfilter)
	|| ydk::is_set(ssrc_mismatched.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(illegal_control_word.yfilter)
	|| ydk::is_set(ad_remote_down.yfilter)
	|| ydk::is_set(not_supported_qinq.yfilter)
	|| ydk::is_set(local_label_failed.yfilter)
	|| ydk::is_set(remote_label_failed.yfilter)
	|| ydk::is_set(preferred_path_disable_fallback.yfilter)
	|| ydk::is_set(backup_pw.yfilter)
	|| ydk::is_set(primary_pw.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(backup_force_active.yfilter)
	|| ydk::is_set(disable_never.yfilter)
	|| ydk::is_set(disable_delay.yfilter)
	|| ydk::is_set(primary_peer_id.yfilter)
	|| ydk::is_set(primary_pseudo_wire_id.yfilter)
	|| ydk::is_set(number_ma_cwithdraw_message_sent.yfilter)
	|| ydk::is_set(num_ma_cwithdraw_msg_received.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(transport_lsp_down.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(pw_status_use.yfilter)
	|| ydk::is_set(auto_discovery.yfilter)
	|| ydk::is_set(ad_method.yfilter)
	|| ydk::is_set(pwlsd_rewrite_failed.yfilter)
	|| ydk::is_set(ldp_label_advertise_failed.yfilter)
	|| ydk::is_set(is_vfi.yfilter)
	|| ydk::is_set(is_multi_segment_pseudowire.yfilter)
	|| ydk::is_set(pw_redundancy_one_way.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(pw_flow_label_type.yfilter)
	|| ydk::is_set(pw_flow_label_type_cfg.yfilter)
	|| ydk::is_set(pw_flow_label_code17_disabled.yfilter)
	|| ydk::is_set(is_flow_label_static.yfilter)
	|| ydk::is_set(is_partially_programmed.yfilter)
	|| ydk::is_set(pw_redundancy_initial_delay.yfilter)
	|| ydk::is_set(bridge_pw_type_mismatch.yfilter)
	|| ydk::is_set(required_bw.yfilter)
	|| ydk::is_set(admited_bw.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(table_policy_name.yfilter)
	|| (peer_id !=  nullptr && peer_id->has_operation())
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (local_interface !=  nullptr && local_interface->has_operation())
	|| (remote_interface !=  nullptr && remote_interface->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (local_signalling !=  nullptr && local_signalling->has_operation())
	|| (remote_signalling !=  nullptr && remote_signalling->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (p2mp_pw !=  nullptr && p2mp_pw->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudo-wire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_source_address.is_set || is_set(local_source_address.yfilter)) leaf_name_data.push_back(local_source_address.get_name_leafdata());
    if (ipv6_local_source_address.is_set || is_set(ipv6_local_source_address.yfilter)) leaf_name_data.push_back(ipv6_local_source_address.get_name_leafdata());
    if (pseudo_wire_id.is_set || is_set(pseudo_wire_id.yfilter)) leaf_name_data.push_back(pseudo_wire_id.get_name_leafdata());
    if (is_pwr_type.is_set || is_set(is_pwr_type.yfilter)) leaf_name_data.push_back(is_pwr_type.get_name_leafdata());
    if (is_evpn_vpws_type.is_set || is_set(is_evpn_vpws_type.yfilter)) leaf_name_data.push_back(is_evpn_vpws_type.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (pseudo_wire_state.is_set || is_set(pseudo_wire_state.yfilter)) leaf_name_data.push_back(pseudo_wire_state.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.yfilter)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.yfilter)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (evpn_src_acid.is_set || is_set(evpn_src_acid.yfilter)) leaf_name_data.push_back(evpn_src_acid.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.yfilter)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.yfilter)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (local_control_word.is_set || is_set(local_control_word.yfilter)) leaf_name_data.push_back(local_control_word.get_name_leafdata());
    if (remote_control_word.is_set || is_set(remote_control_word.yfilter)) leaf_name_data.push_back(remote_control_word.get_name_leafdata());
    if (local_pseudo_wire_type.is_set || is_set(local_pseudo_wire_type.yfilter)) leaf_name_data.push_back(local_pseudo_wire_type.get_name_leafdata());
    if (remote_pseudo_wire_type.is_set || is_set(remote_pseudo_wire_type.yfilter)) leaf_name_data.push_back(remote_pseudo_wire_type.get_name_leafdata());
    if (imposed_vlan_id.is_set || is_set(imposed_vlan_id.yfilter)) leaf_name_data.push_back(imposed_vlan_id.get_name_leafdata());
    if (time_created.is_set || is_set(time_created.yfilter)) leaf_name_data.push_back(time_created.get_name_leafdata());
    if (time_elapsed_creation.is_set || is_set(time_elapsed_creation.yfilter)) leaf_name_data.push_back(time_elapsed_creation.get_name_leafdata());
    if (last_time_status_changed.is_set || is_set(last_time_status_changed.yfilter)) leaf_name_data.push_back(last_time_status_changed.get_name_leafdata());
    if (time_elapsed_status_changed.is_set || is_set(time_elapsed_status_changed.yfilter)) leaf_name_data.push_back(time_elapsed_status_changed.get_name_leafdata());
    if (last_time_status_down.is_set || is_set(last_time_status_down.yfilter)) leaf_name_data.push_back(last_time_status_down.get_name_leafdata());
    if (time_elapsed_status_down.is_set || is_set(time_elapsed_status_down.yfilter)) leaf_name_data.push_back(time_elapsed_status_down.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (pseudo_wire_type_mismatched.is_set || is_set(pseudo_wire_type_mismatched.yfilter)) leaf_name_data.push_back(pseudo_wire_type_mismatched.get_name_leafdata());
    if (payload_bytes_mismatched.is_set || is_set(payload_bytes_mismatched.yfilter)) leaf_name_data.push_back(payload_bytes_mismatched.get_name_leafdata());
    if (bitrate_mismatched.is_set || is_set(bitrate_mismatched.yfilter)) leaf_name_data.push_back(bitrate_mismatched.get_name_leafdata());
    if (rtp_mismatched.is_set || is_set(rtp_mismatched.yfilter)) leaf_name_data.push_back(rtp_mismatched.get_name_leafdata());
    if (diff_ts_mismatched.is_set || is_set(diff_ts_mismatched.yfilter)) leaf_name_data.push_back(diff_ts_mismatched.get_name_leafdata());
    if (sig_pkts_mismatched.is_set || is_set(sig_pkts_mismatched.yfilter)) leaf_name_data.push_back(sig_pkts_mismatched.get_name_leafdata());
    if (cas_mismatched.is_set || is_set(cas_mismatched.yfilter)) leaf_name_data.push_back(cas_mismatched.get_name_leafdata());
    if (payload_type_mismatched.is_set || is_set(payload_type_mismatched.yfilter)) leaf_name_data.push_back(payload_type_mismatched.get_name_leafdata());
    if (freq_mismatched.is_set || is_set(freq_mismatched.yfilter)) leaf_name_data.push_back(freq_mismatched.get_name_leafdata());
    if (ssrc_mismatched.is_set || is_set(ssrc_mismatched.yfilter)) leaf_name_data.push_back(ssrc_mismatched.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (illegal_control_word.is_set || is_set(illegal_control_word.yfilter)) leaf_name_data.push_back(illegal_control_word.get_name_leafdata());
    if (ad_remote_down.is_set || is_set(ad_remote_down.yfilter)) leaf_name_data.push_back(ad_remote_down.get_name_leafdata());
    if (not_supported_qinq.is_set || is_set(not_supported_qinq.yfilter)) leaf_name_data.push_back(not_supported_qinq.get_name_leafdata());
    if (local_label_failed.is_set || is_set(local_label_failed.yfilter)) leaf_name_data.push_back(local_label_failed.get_name_leafdata());
    if (remote_label_failed.is_set || is_set(remote_label_failed.yfilter)) leaf_name_data.push_back(remote_label_failed.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.yfilter)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (backup_pw.is_set || is_set(backup_pw.yfilter)) leaf_name_data.push_back(backup_pw.get_name_leafdata());
    if (primary_pw.is_set || is_set(primary_pw.yfilter)) leaf_name_data.push_back(primary_pw.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_force_active.is_set || is_set(backup_force_active.yfilter)) leaf_name_data.push_back(backup_force_active.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.yfilter)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.yfilter)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (primary_peer_id.is_set || is_set(primary_peer_id.yfilter)) leaf_name_data.push_back(primary_peer_id.get_name_leafdata());
    if (primary_pseudo_wire_id.is_set || is_set(primary_pseudo_wire_id.yfilter)) leaf_name_data.push_back(primary_pseudo_wire_id.get_name_leafdata());
    if (number_ma_cwithdraw_message_sent.is_set || is_set(number_ma_cwithdraw_message_sent.yfilter)) leaf_name_data.push_back(number_ma_cwithdraw_message_sent.get_name_leafdata());
    if (num_ma_cwithdraw_msg_received.is_set || is_set(num_ma_cwithdraw_msg_received.yfilter)) leaf_name_data.push_back(num_ma_cwithdraw_msg_received.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (transport_lsp_down.is_set || is_set(transport_lsp_down.yfilter)) leaf_name_data.push_back(transport_lsp_down.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (pw_status_use.is_set || is_set(pw_status_use.yfilter)) leaf_name_data.push_back(pw_status_use.get_name_leafdata());
    if (auto_discovery.is_set || is_set(auto_discovery.yfilter)) leaf_name_data.push_back(auto_discovery.get_name_leafdata());
    if (ad_method.is_set || is_set(ad_method.yfilter)) leaf_name_data.push_back(ad_method.get_name_leafdata());
    if (pwlsd_rewrite_failed.is_set || is_set(pwlsd_rewrite_failed.yfilter)) leaf_name_data.push_back(pwlsd_rewrite_failed.get_name_leafdata());
    if (ldp_label_advertise_failed.is_set || is_set(ldp_label_advertise_failed.yfilter)) leaf_name_data.push_back(ldp_label_advertise_failed.get_name_leafdata());
    if (is_vfi.is_set || is_set(is_vfi.yfilter)) leaf_name_data.push_back(is_vfi.get_name_leafdata());
    if (is_multi_segment_pseudowire.is_set || is_set(is_multi_segment_pseudowire.yfilter)) leaf_name_data.push_back(is_multi_segment_pseudowire.get_name_leafdata());
    if (pw_redundancy_one_way.is_set || is_set(pw_redundancy_one_way.yfilter)) leaf_name_data.push_back(pw_redundancy_one_way.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (pw_flow_label_type.is_set || is_set(pw_flow_label_type.yfilter)) leaf_name_data.push_back(pw_flow_label_type.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.yfilter)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.yfilter)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.yfilter)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (is_partially_programmed.is_set || is_set(is_partially_programmed.yfilter)) leaf_name_data.push_back(is_partially_programmed.get_name_leafdata());
    if (pw_redundancy_initial_delay.is_set || is_set(pw_redundancy_initial_delay.yfilter)) leaf_name_data.push_back(pw_redundancy_initial_delay.get_name_leafdata());
    if (bridge_pw_type_mismatch.is_set || is_set(bridge_pw_type_mismatch.yfilter)) leaf_name_data.push_back(bridge_pw_type_mismatch.get_name_leafdata());
    if (required_bw.is_set || is_set(required_bw.yfilter)) leaf_name_data.push_back(required_bw.get_name_leafdata());
    if (admited_bw.is_set || is_set(admited_bw.yfilter)) leaf_name_data.push_back(admited_bw.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.yfilter)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-id")
    {
        if(peer_id == nullptr)
        {
            peer_id = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId>();
        }
        return peer_id;
    }

    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info == nullptr)
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo>();
        }
        return encapsulation_info;
    }

    if(child_yang_name == "local-interface")
    {
        if(local_interface == nullptr)
        {
            local_interface = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface>();
        }
        return local_interface;
    }

    if(child_yang_name == "remote-interface")
    {
        if(remote_interface == nullptr)
        {
            remote_interface = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::RemoteInterface>();
        }
        return remote_interface;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PreferredPath>();
        }
        return preferred_path;
    }

    if(child_yang_name == "local-signalling")
    {
        if(local_signalling == nullptr)
        {
            local_signalling = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalSignalling>();
        }
        return local_signalling;
    }

    if(child_yang_name == "remote-signalling")
    {
        if(remote_signalling == nullptr)
        {
            remote_signalling = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::RemoteSignalling>();
        }
        return remote_signalling;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "p2mp-pw")
    {
        if(p2mp_pw == nullptr)
        {
            p2mp_pw = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::P2MpPw>();
        }
        return p2mp_pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_id != nullptr)
    {
        children["peer-id"] = peer_id;
    }

    if(encapsulation_info != nullptr)
    {
        children["encapsulation-info"] = encapsulation_info;
    }

    if(local_interface != nullptr)
    {
        children["local-interface"] = local_interface;
    }

    if(remote_interface != nullptr)
    {
        children["remote-interface"] = remote_interface;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    if(local_signalling != nullptr)
    {
        children["local-signalling"] = local_signalling;
    }

    if(remote_signalling != nullptr)
    {
        children["remote-signalling"] = remote_signalling;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(p2mp_pw != nullptr)
    {
        children["p2mp-pw"] = p2mp_pw;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-source-address")
    {
        local_source_address = value;
        local_source_address.value_namespace = name_space;
        local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address = value;
        ipv6_local_source_address.value_namespace = name_space;
        ipv6_local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id = value;
        pseudo_wire_id.value_namespace = name_space;
        pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type = value;
        is_pwr_type.value_namespace = name_space;
        is_pwr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-vpws-type")
    {
        is_evpn_vpws_type = value;
        is_evpn_vpws_type.value_namespace = name_space;
        is_evpn_vpws_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state = value;
        pseudo_wire_state.value_namespace = name_space;
        pseudo_wire_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
        pw_class_name.value_namespace = name_space;
        pw_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
        tag_rewrite.value_namespace = name_space;
        tag_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid = value;
        evpn_src_acid.value_namespace = name_space;
        evpn_src_acid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
        sequencing_type.value_namespace = name_space;
        sequencing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
        resync_enabled.value_namespace = name_space;
        resync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-control-word")
    {
        local_control_word = value;
        local_control_word.value_namespace = name_space;
        local_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word = value;
        remote_control_word.value_namespace = name_space;
        remote_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type = value;
        local_pseudo_wire_type.value_namespace = name_space;
        local_pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type = value;
        remote_pseudo_wire_type.value_namespace = name_space;
        remote_pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id = value;
        imposed_vlan_id.value_namespace = name_space;
        imposed_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-created")
    {
        time_created = value;
        time_created.value_namespace = name_space;
        time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation = value;
        time_elapsed_creation.value_namespace = name_space;
        time_elapsed_creation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed = value;
        last_time_status_changed.value_namespace = name_space;
        last_time_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed = value;
        time_elapsed_status_changed.value_namespace = name_space;
        time_elapsed_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down = value;
        last_time_status_down.value_namespace = name_space;
        last_time_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down = value;
        time_elapsed_status_down.value_namespace = name_space;
        time_elapsed_status_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched = value;
        pseudo_wire_type_mismatched.value_namespace = name_space;
        pseudo_wire_type_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched = value;
        payload_bytes_mismatched.value_namespace = name_space;
        payload_bytes_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched = value;
        bitrate_mismatched.value_namespace = name_space;
        bitrate_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched = value;
        rtp_mismatched.value_namespace = name_space;
        rtp_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched = value;
        diff_ts_mismatched.value_namespace = name_space;
        diff_ts_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched = value;
        sig_pkts_mismatched.value_namespace = name_space;
        sig_pkts_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched = value;
        cas_mismatched.value_namespace = name_space;
        cas_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched = value;
        payload_type_mismatched.value_namespace = name_space;
        payload_type_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched = value;
        freq_mismatched.value_namespace = name_space;
        freq_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched = value;
        ssrc_mismatched.value_namespace = name_space;
        ssrc_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word = value;
        illegal_control_word.value_namespace = name_space;
        illegal_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down = value;
        ad_remote_down.value_namespace = name_space;
        ad_remote_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq = value;
        not_supported_qinq.value_namespace = name_space;
        not_supported_qinq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed = value;
        local_label_failed.value_namespace = name_space;
        local_label_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed = value;
        remote_label_failed.value_namespace = name_space;
        remote_label_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
        preferred_path_disable_fallback.value_namespace = name_space;
        preferred_path_disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pw")
    {
        backup_pw = value;
        backup_pw.value_namespace = name_space;
        backup_pw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-pw")
    {
        primary_pw = value;
        primary_pw.value_namespace = name_space;
        primary_pw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active = value;
        backup_force_active.value_namespace = name_space;
        backup_force_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
        disable_never.value_namespace = name_space;
        disable_never.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
        disable_delay.value_namespace = name_space;
        disable_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id = value;
        primary_peer_id.value_namespace = name_space;
        primary_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id = value;
        primary_pseudo_wire_id.value_namespace = name_space;
        primary_pseudo_wire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent = value;
        number_ma_cwithdraw_message_sent.value_namespace = name_space;
        number_ma_cwithdraw_message_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received = value;
        num_ma_cwithdraw_msg_received.value_namespace = name_space;
        num_ma_cwithdraw_msg_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down = value;
        transport_lsp_down.value_namespace = name_space;
        transport_lsp_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use = value;
        pw_status_use.value_namespace = name_space;
        pw_status_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery = value;
        auto_discovery.value_namespace = name_space;
        auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-method")
    {
        ad_method = value;
        ad_method.value_namespace = name_space;
        ad_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed = value;
        pwlsd_rewrite_failed.value_namespace = name_space;
        pwlsd_rewrite_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed = value;
        ldp_label_advertise_failed.value_namespace = name_space;
        ldp_label_advertise_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vfi")
    {
        is_vfi = value;
        is_vfi.value_namespace = name_space;
        is_vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire = value;
        is_multi_segment_pseudowire.value_namespace = name_space;
        is_multi_segment_pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way = value;
        pw_redundancy_one_way.value_namespace = name_space;
        pw_redundancy_one_way.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type = value;
        pw_flow_label_type.value_namespace = name_space;
        pw_flow_label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
        pw_flow_label_type_cfg.value_namespace = name_space;
        pw_flow_label_type_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
        pw_flow_label_code17_disabled.value_namespace = name_space;
        pw_flow_label_code17_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
        is_flow_label_static.value_namespace = name_space;
        is_flow_label_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed = value;
        is_partially_programmed.value_namespace = name_space;
        is_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay = value;
        pw_redundancy_initial_delay.value_namespace = name_space;
        pw_redundancy_initial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch = value;
        bridge_pw_type_mismatch.value_namespace = name_space;
        bridge_pw_type_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "required-bw")
    {
        required_bw = value;
        required_bw.value_namespace = name_space;
        required_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admited-bw")
    {
        admited_bw = value;
        admited_bw.value_namespace = name_space;
        admited_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
        table_policy_name.value_namespace = name_space;
        table_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-source-address")
    {
        local_source_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-local-source-address")
    {
        ipv6_local_source_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id")
    {
        pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "is-pwr-type")
    {
        is_pwr_type.yfilter = yfilter;
    }
    if(value_path == "is-evpn-vpws-type")
    {
        is_evpn_vpws_type.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-state")
    {
        pseudo_wire_state.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name.yfilter = yfilter;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "evpn-src-acid")
    {
        evpn_src_acid.yfilter = yfilter;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type.yfilter = yfilter;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled.yfilter = yfilter;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
    if(value_path == "local-control-word")
    {
        local_control_word.yfilter = yfilter;
    }
    if(value_path == "remote-control-word")
    {
        remote_control_word.yfilter = yfilter;
    }
    if(value_path == "local-pseudo-wire-type")
    {
        local_pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "remote-pseudo-wire-type")
    {
        remote_pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "imposed-vlan-id")
    {
        imposed_vlan_id.yfilter = yfilter;
    }
    if(value_path == "time-created")
    {
        time_created.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-creation")
    {
        time_elapsed_creation.yfilter = yfilter;
    }
    if(value_path == "last-time-status-changed")
    {
        last_time_status_changed.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-status-changed")
    {
        time_elapsed_status_changed.yfilter = yfilter;
    }
    if(value_path == "last-time-status-down")
    {
        last_time_status_down.yfilter = yfilter;
    }
    if(value_path == "time-elapsed-status-down")
    {
        time_elapsed_status_down.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-type-mismatched")
    {
        pseudo_wire_type_mismatched.yfilter = yfilter;
    }
    if(value_path == "payload-bytes-mismatched")
    {
        payload_bytes_mismatched.yfilter = yfilter;
    }
    if(value_path == "bitrate-mismatched")
    {
        bitrate_mismatched.yfilter = yfilter;
    }
    if(value_path == "rtp-mismatched")
    {
        rtp_mismatched.yfilter = yfilter;
    }
    if(value_path == "diff-ts-mismatched")
    {
        diff_ts_mismatched.yfilter = yfilter;
    }
    if(value_path == "sig-pkts-mismatched")
    {
        sig_pkts_mismatched.yfilter = yfilter;
    }
    if(value_path == "cas-mismatched")
    {
        cas_mismatched.yfilter = yfilter;
    }
    if(value_path == "payload-type-mismatched")
    {
        payload_type_mismatched.yfilter = yfilter;
    }
    if(value_path == "freq-mismatched")
    {
        freq_mismatched.yfilter = yfilter;
    }
    if(value_path == "ssrc-mismatched")
    {
        ssrc_mismatched.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "illegal-control-word")
    {
        illegal_control_word.yfilter = yfilter;
    }
    if(value_path == "ad-remote-down")
    {
        ad_remote_down.yfilter = yfilter;
    }
    if(value_path == "not-supported-qinq")
    {
        not_supported_qinq.yfilter = yfilter;
    }
    if(value_path == "local-label-failed")
    {
        local_label_failed.yfilter = yfilter;
    }
    if(value_path == "remote-label-failed")
    {
        remote_label_failed.yfilter = yfilter;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback.yfilter = yfilter;
    }
    if(value_path == "backup-pw")
    {
        backup_pw.yfilter = yfilter;
    }
    if(value_path == "primary-pw")
    {
        primary_pw.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "backup-force-active")
    {
        backup_force_active.yfilter = yfilter;
    }
    if(value_path == "disable-never")
    {
        disable_never.yfilter = yfilter;
    }
    if(value_path == "disable-delay")
    {
        disable_delay.yfilter = yfilter;
    }
    if(value_path == "primary-peer-id")
    {
        primary_peer_id.yfilter = yfilter;
    }
    if(value_path == "primary-pseudo-wire-id")
    {
        primary_pseudo_wire_id.yfilter = yfilter;
    }
    if(value_path == "number-ma-cwithdraw-message-sent")
    {
        number_ma_cwithdraw_message_sent.yfilter = yfilter;
    }
    if(value_path == "num-ma-cwithdraw-msg-received")
    {
        num_ma_cwithdraw_msg_received.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "transport-lsp-down")
    {
        transport_lsp_down.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "pw-status-use")
    {
        pw_status_use.yfilter = yfilter;
    }
    if(value_path == "auto-discovery")
    {
        auto_discovery.yfilter = yfilter;
    }
    if(value_path == "ad-method")
    {
        ad_method.yfilter = yfilter;
    }
    if(value_path == "pwlsd-rewrite-failed")
    {
        pwlsd_rewrite_failed.yfilter = yfilter;
    }
    if(value_path == "ldp-label-advertise-failed")
    {
        ldp_label_advertise_failed.yfilter = yfilter;
    }
    if(value_path == "is-vfi")
    {
        is_vfi.yfilter = yfilter;
    }
    if(value_path == "is-multi-segment-pseudowire")
    {
        is_multi_segment_pseudowire.yfilter = yfilter;
    }
    if(value_path == "pw-redundancy-one-way")
    {
        pw_redundancy_one_way.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type")
    {
        pw_flow_label_type.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled.yfilter = yfilter;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static.yfilter = yfilter;
    }
    if(value_path == "is-partially-programmed")
    {
        is_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "pw-redundancy-initial-delay")
    {
        pw_redundancy_initial_delay.yfilter = yfilter;
    }
    if(value_path == "bridge-pw-type-mismatch")
    {
        bridge_pw_type_mismatch.yfilter = yfilter;
    }
    if(value_path == "required-bw")
    {
        required_bw.yfilter = yfilter;
    }
    if(value_path == "admited-bw")
    {
        admited_bw.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id" || name == "encapsulation-info" || name == "local-interface" || name == "remote-interface" || name == "preferred-path" || name == "local-signalling" || name == "remote-signalling" || name == "statistics" || name == "p2mp-pw" || name == "local-source-address" || name == "ipv6-local-source-address" || name == "pseudo-wire-id" || name == "is-pwr-type" || name == "is-evpn-vpws-type" || name == "xconnect-id" || name == "state" || name == "pseudo-wire-state" || name == "protocol" || name == "pw-class-name" || name == "tag-rewrite" || name == "interworking" || name == "fe-ctype" || name == "evpn-src-acid" || name == "sequencing-type" || name == "resync-enabled" || name == "resync-threshold" || name == "local-control-word" || name == "remote-control-word" || name == "local-pseudo-wire-type" || name == "remote-pseudo-wire-type" || name == "imposed-vlan-id" || name == "time-created" || name == "time-elapsed-creation" || name == "last-time-status-changed" || name == "time-elapsed-status-changed" || name == "last-time-status-down" || name == "time-elapsed-status-down" || name == "shutdown" || name == "pseudo-wire-type-mismatched" || name == "payload-bytes-mismatched" || name == "bitrate-mismatched" || name == "rtp-mismatched" || name == "diff-ts-mismatched" || name == "sig-pkts-mismatched" || name == "cas-mismatched" || name == "payload-type-mismatched" || name == "freq-mismatched" || name == "ssrc-mismatched" || name == "mtu-mismatched" || name == "illegal-control-word" || name == "ad-remote-down" || name == "not-supported-qinq" || name == "local-label-failed" || name == "remote-label-failed" || name == "preferred-path-disable-fallback" || name == "backup-pw" || name == "primary-pw" || name == "backup-active" || name == "backup-force-active" || name == "disable-never" || name == "disable-delay" || name == "primary-peer-id" || name == "primary-pseudo-wire-id" || name == "number-ma-cwithdraw-message-sent" || name == "num-ma-cwithdraw-msg-received" || name == "out-of-memory-state" || name == "transport-lsp-down" || name == "mac-limit-oper-down" || name == "pw-status-use" || name == "auto-discovery" || name == "ad-method" || name == "pwlsd-rewrite-failed" || name == "ldp-label-advertise-failed" || name == "is-vfi" || name == "is-multi-segment-pseudowire" || name == "pw-redundancy-one-way" || name == "load-balance" || name == "pw-flow-label-type" || name == "pw-flow-label-type-cfg" || name == "pw-flow-label-code17-disabled" || name == "is-flow-label-static" || name == "is-partially-programmed" || name == "pw-redundancy-initial-delay" || name == "bridge-pw-type-mismatch" || name == "required-bw" || name == "admited-bw" || name == "forward-class" || name == "table-policy-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::PeerId()
    :
    type{YType::enumeration, "type"},
    ipv4_peer_id{YType::str, "ipv4-peer-id"},
    ipv6_peer_id{YType::str, "ipv6-peer-id"},
    internal_label{YType::uint32, "internal-label"}
{

    yang_name = "peer-id"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::~PeerId()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::has_data() const
{
    return type.is_set
	|| ipv4_peer_id.is_set
	|| ipv6_peer_id.is_set
	|| internal_label.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_peer_id.yfilter)
	|| ydk::is_set(ipv6_peer_id.yfilter)
	|| ydk::is_set(internal_label.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_peer_id.is_set || is_set(ipv4_peer_id.yfilter)) leaf_name_data.push_back(ipv4_peer_id.get_name_leafdata());
    if (ipv6_peer_id.is_set || is_set(ipv6_peer_id.yfilter)) leaf_name_data.push_back(ipv6_peer_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id = value;
        ipv4_peer_id.value_namespace = name_space;
        ipv4_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id = value;
        ipv6_peer_id.value_namespace = name_space;
        ipv6_peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-peer-id")
    {
        ipv4_peer_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-peer-id")
    {
        ipv6_peer_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::PeerId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-peer-id" || name == "ipv6-peer-id" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    atom(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom>())
	,l2tpv3(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3>())
{
    atom->parent = this;
    l2tpv3->parent = this;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (atom !=  nullptr && atom->has_data())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (atom !=  nullptr && atom->has_operation())
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atom")
    {
        if(atom == nullptr)
        {
            atom = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom>();
        }
        return atom;
    }

    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 == nullptr)
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3>();
        }
        return l2tpv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atom != nullptr)
    {
        children["atom"] = atom;
    }

    if(l2tpv3 != nullptr)
    {
        children["l2tpv3"] = l2tpv3;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atom" || name == "l2tpv3" || name == "encapsulation")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::Atom()
    :
    is_pseudowire_headend{YType::boolean, "is-pseudowire-headend"},
    local_label{YType::uint32, "local-label"},
    remote_label{YType::uint32, "remote-label"},
    local_group_id{YType::uint32, "local-group-id"},
    remote_group_id{YType::uint32, "remote-group-id"},
    local_cv_type{YType::uint8, "local-cv-type"},
    local_c_ctype{YType::uint8, "local-c-ctype"},
    remote_cv_type{YType::uint8, "remote-cv-type"},
    remote_c_ctype{YType::uint8, "remote-c-ctype"},
    local_veid{YType::uint32, "local-veid"},
    remote_veid{YType::uint32, "remote-veid"},
    local_ceid{YType::uint32, "local-ceid"},
    remote_ceid{YType::uint32, "remote-ceid"},
    source_address{YType::str, "source-address"},
    remote_source_address{YType::str, "remote-source-address"},
    local_ldp_id{YType::str, "local-ldp-id"},
    remote_ldp_id{YType::str, "remote-ldp-id"},
    saii{YType::str, "saii"},
    taii{YType::str, "taii"},
    is_sai_itype2{YType::boolean, "is-sai-itype2"},
    local_saii_gbl_id{YType::uint32, "local-saii-gbl-id"},
    local_saiiac_id{YType::uint32, "local-saiiac-id"},
    is_tai_itype2{YType::boolean, "is-tai-itype2"},
    local_taii_gbl_id{YType::uint32, "local-taii-gbl-id"},
    local_taiiac_id{YType::uint32, "local-taiiac-id"},
    rem_saii_gbl_id{YType::uint32, "rem-saii-gbl-id"},
    rem_saiiac_id{YType::uint32, "rem-saiiac-id"},
    rem_taii_gbl_id{YType::uint32, "rem-taii-gbl-id"},
    rem_taiiac_id{YType::uint32, "rem-taiiac-id"},
    rem_saii{YType::str, "rem-saii"},
    rem_taii{YType::str, "rem-taii"},
    lsd_rewrite_failed{YType::boolean, "lsd-rewrite-failed"},
    ldp_label_advertisment_failed{YType::boolean, "ldp-label-advertisment-failed"}
    	,
    local_agi(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi>())
	,remote_agi(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi>())
	,multi_segment_pseudowire_stats(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>())
{
    local_agi->parent = this;
    remote_agi->parent = this;
    multi_segment_pseudowire_stats->parent = this;

    yang_name = "atom"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::~Atom()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::has_data() const
{
    return is_pseudowire_headend.is_set
	|| local_label.is_set
	|| remote_label.is_set
	|| local_group_id.is_set
	|| remote_group_id.is_set
	|| local_cv_type.is_set
	|| local_c_ctype.is_set
	|| remote_cv_type.is_set
	|| remote_c_ctype.is_set
	|| local_veid.is_set
	|| remote_veid.is_set
	|| local_ceid.is_set
	|| remote_ceid.is_set
	|| source_address.is_set
	|| remote_source_address.is_set
	|| local_ldp_id.is_set
	|| remote_ldp_id.is_set
	|| saii.is_set
	|| taii.is_set
	|| is_sai_itype2.is_set
	|| local_saii_gbl_id.is_set
	|| local_saiiac_id.is_set
	|| is_tai_itype2.is_set
	|| local_taii_gbl_id.is_set
	|| local_taiiac_id.is_set
	|| rem_saii_gbl_id.is_set
	|| rem_saiiac_id.is_set
	|| rem_taii_gbl_id.is_set
	|| rem_taiiac_id.is_set
	|| rem_saii.is_set
	|| rem_taii.is_set
	|| lsd_rewrite_failed.is_set
	|| ldp_label_advertisment_failed.is_set
	|| (local_agi !=  nullptr && local_agi->has_data())
	|| (remote_agi !=  nullptr && remote_agi->has_data())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_pseudowire_headend.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(local_group_id.yfilter)
	|| ydk::is_set(remote_group_id.yfilter)
	|| ydk::is_set(local_cv_type.yfilter)
	|| ydk::is_set(local_c_ctype.yfilter)
	|| ydk::is_set(remote_cv_type.yfilter)
	|| ydk::is_set(remote_c_ctype.yfilter)
	|| ydk::is_set(local_veid.yfilter)
	|| ydk::is_set(remote_veid.yfilter)
	|| ydk::is_set(local_ceid.yfilter)
	|| ydk::is_set(remote_ceid.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(remote_source_address.yfilter)
	|| ydk::is_set(local_ldp_id.yfilter)
	|| ydk::is_set(remote_ldp_id.yfilter)
	|| ydk::is_set(saii.yfilter)
	|| ydk::is_set(taii.yfilter)
	|| ydk::is_set(is_sai_itype2.yfilter)
	|| ydk::is_set(local_saii_gbl_id.yfilter)
	|| ydk::is_set(local_saiiac_id.yfilter)
	|| ydk::is_set(is_tai_itype2.yfilter)
	|| ydk::is_set(local_taii_gbl_id.yfilter)
	|| ydk::is_set(local_taiiac_id.yfilter)
	|| ydk::is_set(rem_saii_gbl_id.yfilter)
	|| ydk::is_set(rem_saiiac_id.yfilter)
	|| ydk::is_set(rem_taii_gbl_id.yfilter)
	|| ydk::is_set(rem_taiiac_id.yfilter)
	|| ydk::is_set(rem_saii.yfilter)
	|| ydk::is_set(rem_taii.yfilter)
	|| ydk::is_set(lsd_rewrite_failed.yfilter)
	|| ydk::is_set(ldp_label_advertisment_failed.yfilter)
	|| (local_agi !=  nullptr && local_agi->has_operation())
	|| (remote_agi !=  nullptr && remote_agi->has_operation())
	|| (multi_segment_pseudowire_stats !=  nullptr && multi_segment_pseudowire_stats->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atom";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pseudowire_headend.is_set || is_set(is_pseudowire_headend.yfilter)) leaf_name_data.push_back(is_pseudowire_headend.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (local_group_id.is_set || is_set(local_group_id.yfilter)) leaf_name_data.push_back(local_group_id.get_name_leafdata());
    if (remote_group_id.is_set || is_set(remote_group_id.yfilter)) leaf_name_data.push_back(remote_group_id.get_name_leafdata());
    if (local_cv_type.is_set || is_set(local_cv_type.yfilter)) leaf_name_data.push_back(local_cv_type.get_name_leafdata());
    if (local_c_ctype.is_set || is_set(local_c_ctype.yfilter)) leaf_name_data.push_back(local_c_ctype.get_name_leafdata());
    if (remote_cv_type.is_set || is_set(remote_cv_type.yfilter)) leaf_name_data.push_back(remote_cv_type.get_name_leafdata());
    if (remote_c_ctype.is_set || is_set(remote_c_ctype.yfilter)) leaf_name_data.push_back(remote_c_ctype.get_name_leafdata());
    if (local_veid.is_set || is_set(local_veid.yfilter)) leaf_name_data.push_back(local_veid.get_name_leafdata());
    if (remote_veid.is_set || is_set(remote_veid.yfilter)) leaf_name_data.push_back(remote_veid.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.yfilter)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.yfilter)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (remote_source_address.is_set || is_set(remote_source_address.yfilter)) leaf_name_data.push_back(remote_source_address.get_name_leafdata());
    if (local_ldp_id.is_set || is_set(local_ldp_id.yfilter)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (remote_ldp_id.is_set || is_set(remote_ldp_id.yfilter)) leaf_name_data.push_back(remote_ldp_id.get_name_leafdata());
    if (saii.is_set || is_set(saii.yfilter)) leaf_name_data.push_back(saii.get_name_leafdata());
    if (taii.is_set || is_set(taii.yfilter)) leaf_name_data.push_back(taii.get_name_leafdata());
    if (is_sai_itype2.is_set || is_set(is_sai_itype2.yfilter)) leaf_name_data.push_back(is_sai_itype2.get_name_leafdata());
    if (local_saii_gbl_id.is_set || is_set(local_saii_gbl_id.yfilter)) leaf_name_data.push_back(local_saii_gbl_id.get_name_leafdata());
    if (local_saiiac_id.is_set || is_set(local_saiiac_id.yfilter)) leaf_name_data.push_back(local_saiiac_id.get_name_leafdata());
    if (is_tai_itype2.is_set || is_set(is_tai_itype2.yfilter)) leaf_name_data.push_back(is_tai_itype2.get_name_leafdata());
    if (local_taii_gbl_id.is_set || is_set(local_taii_gbl_id.yfilter)) leaf_name_data.push_back(local_taii_gbl_id.get_name_leafdata());
    if (local_taiiac_id.is_set || is_set(local_taiiac_id.yfilter)) leaf_name_data.push_back(local_taiiac_id.get_name_leafdata());
    if (rem_saii_gbl_id.is_set || is_set(rem_saii_gbl_id.yfilter)) leaf_name_data.push_back(rem_saii_gbl_id.get_name_leafdata());
    if (rem_saiiac_id.is_set || is_set(rem_saiiac_id.yfilter)) leaf_name_data.push_back(rem_saiiac_id.get_name_leafdata());
    if (rem_taii_gbl_id.is_set || is_set(rem_taii_gbl_id.yfilter)) leaf_name_data.push_back(rem_taii_gbl_id.get_name_leafdata());
    if (rem_taiiac_id.is_set || is_set(rem_taiiac_id.yfilter)) leaf_name_data.push_back(rem_taiiac_id.get_name_leafdata());
    if (rem_saii.is_set || is_set(rem_saii.yfilter)) leaf_name_data.push_back(rem_saii.get_name_leafdata());
    if (rem_taii.is_set || is_set(rem_taii.yfilter)) leaf_name_data.push_back(rem_taii.get_name_leafdata());
    if (lsd_rewrite_failed.is_set || is_set(lsd_rewrite_failed.yfilter)) leaf_name_data.push_back(lsd_rewrite_failed.get_name_leafdata());
    if (ldp_label_advertisment_failed.is_set || is_set(ldp_label_advertisment_failed.yfilter)) leaf_name_data.push_back(ldp_label_advertisment_failed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-agi")
    {
        if(local_agi == nullptr)
        {
            local_agi = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi>();
        }
        return local_agi;
    }

    if(child_yang_name == "remote-agi")
    {
        if(remote_agi == nullptr)
        {
            remote_agi = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi>();
        }
        return remote_agi;
    }

    if(child_yang_name == "multi-segment-pseudowire-stats")
    {
        if(multi_segment_pseudowire_stats == nullptr)
        {
            multi_segment_pseudowire_stats = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats>();
        }
        return multi_segment_pseudowire_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_agi != nullptr)
    {
        children["local-agi"] = local_agi;
    }

    if(remote_agi != nullptr)
    {
        children["remote-agi"] = remote_agi;
    }

    if(multi_segment_pseudowire_stats != nullptr)
    {
        children["multi-segment-pseudowire-stats"] = multi_segment_pseudowire_stats;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend = value;
        is_pseudowire_headend.value_namespace = name_space;
        is_pseudowire_headend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-group-id")
    {
        local_group_id = value;
        local_group_id.value_namespace = name_space;
        local_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id = value;
        remote_group_id.value_namespace = name_space;
        remote_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type = value;
        local_cv_type.value_namespace = name_space;
        local_cv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype = value;
        local_c_ctype.value_namespace = name_space;
        local_c_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type = value;
        remote_cv_type.value_namespace = name_space;
        remote_cv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype = value;
        remote_c_ctype.value_namespace = name_space;
        remote_c_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-veid")
    {
        local_veid = value;
        local_veid.value_namespace = name_space;
        local_veid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-veid")
    {
        remote_veid = value;
        remote_veid.value_namespace = name_space;
        remote_veid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
        local_ceid.value_namespace = name_space;
        local_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
        remote_ceid.value_namespace = name_space;
        remote_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address = value;
        remote_source_address.value_namespace = name_space;
        remote_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
        local_ldp_id.value_namespace = name_space;
        local_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id = value;
        remote_ldp_id.value_namespace = name_space;
        remote_ldp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saii")
    {
        saii = value;
        saii.value_namespace = name_space;
        saii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "taii")
    {
        taii = value;
        taii.value_namespace = name_space;
        taii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2 = value;
        is_sai_itype2.value_namespace = name_space;
        is_sai_itype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id = value;
        local_saii_gbl_id.value_namespace = name_space;
        local_saii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id = value;
        local_saiiac_id.value_namespace = name_space;
        local_saiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2 = value;
        is_tai_itype2.value_namespace = name_space;
        is_tai_itype2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id = value;
        local_taii_gbl_id.value_namespace = name_space;
        local_taii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id = value;
        local_taiiac_id.value_namespace = name_space;
        local_taiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id = value;
        rem_saii_gbl_id.value_namespace = name_space;
        rem_saii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id = value;
        rem_saiiac_id.value_namespace = name_space;
        rem_saiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id = value;
        rem_taii_gbl_id.value_namespace = name_space;
        rem_taii_gbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id = value;
        rem_taiiac_id.value_namespace = name_space;
        rem_taiiac_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-saii")
    {
        rem_saii = value;
        rem_saii.value_namespace = name_space;
        rem_saii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rem-taii")
    {
        rem_taii = value;
        rem_taii.value_namespace = name_space;
        rem_taii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed = value;
        lsd_rewrite_failed.value_namespace = name_space;
        lsd_rewrite_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed = value;
        ldp_label_advertisment_failed.value_namespace = name_space;
        ldp_label_advertisment_failed.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-pseudowire-headend")
    {
        is_pseudowire_headend.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "local-group-id")
    {
        local_group_id.yfilter = yfilter;
    }
    if(value_path == "remote-group-id")
    {
        remote_group_id.yfilter = yfilter;
    }
    if(value_path == "local-cv-type")
    {
        local_cv_type.yfilter = yfilter;
    }
    if(value_path == "local-c-ctype")
    {
        local_c_ctype.yfilter = yfilter;
    }
    if(value_path == "remote-cv-type")
    {
        remote_cv_type.yfilter = yfilter;
    }
    if(value_path == "remote-c-ctype")
    {
        remote_c_ctype.yfilter = yfilter;
    }
    if(value_path == "local-veid")
    {
        local_veid.yfilter = yfilter;
    }
    if(value_path == "remote-veid")
    {
        remote_veid.yfilter = yfilter;
    }
    if(value_path == "local-ceid")
    {
        local_ceid.yfilter = yfilter;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "remote-source-address")
    {
        remote_source_address.yfilter = yfilter;
    }
    if(value_path == "local-ldp-id")
    {
        local_ldp_id.yfilter = yfilter;
    }
    if(value_path == "remote-ldp-id")
    {
        remote_ldp_id.yfilter = yfilter;
    }
    if(value_path == "saii")
    {
        saii.yfilter = yfilter;
    }
    if(value_path == "taii")
    {
        taii.yfilter = yfilter;
    }
    if(value_path == "is-sai-itype2")
    {
        is_sai_itype2.yfilter = yfilter;
    }
    if(value_path == "local-saii-gbl-id")
    {
        local_saii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "local-saiiac-id")
    {
        local_saiiac_id.yfilter = yfilter;
    }
    if(value_path == "is-tai-itype2")
    {
        is_tai_itype2.yfilter = yfilter;
    }
    if(value_path == "local-taii-gbl-id")
    {
        local_taii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "local-taiiac-id")
    {
        local_taiiac_id.yfilter = yfilter;
    }
    if(value_path == "rem-saii-gbl-id")
    {
        rem_saii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "rem-saiiac-id")
    {
        rem_saiiac_id.yfilter = yfilter;
    }
    if(value_path == "rem-taii-gbl-id")
    {
        rem_taii_gbl_id.yfilter = yfilter;
    }
    if(value_path == "rem-taiiac-id")
    {
        rem_taiiac_id.yfilter = yfilter;
    }
    if(value_path == "rem-saii")
    {
        rem_saii.yfilter = yfilter;
    }
    if(value_path == "rem-taii")
    {
        rem_taii.yfilter = yfilter;
    }
    if(value_path == "lsd-rewrite-failed")
    {
        lsd_rewrite_failed.yfilter = yfilter;
    }
    if(value_path == "ldp-label-advertisment-failed")
    {
        ldp_label_advertisment_failed.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-agi" || name == "remote-agi" || name == "multi-segment-pseudowire-stats" || name == "is-pseudowire-headend" || name == "local-label" || name == "remote-label" || name == "local-group-id" || name == "remote-group-id" || name == "local-cv-type" || name == "local-c-ctype" || name == "remote-cv-type" || name == "remote-c-ctype" || name == "local-veid" || name == "remote-veid" || name == "local-ceid" || name == "remote-ceid" || name == "source-address" || name == "remote-source-address" || name == "local-ldp-id" || name == "remote-ldp-id" || name == "saii" || name == "taii" || name == "is-sai-itype2" || name == "local-saii-gbl-id" || name == "local-saiiac-id" || name == "is-tai-itype2" || name == "local-taii-gbl-id" || name == "local-taiiac-id" || name == "rem-saii-gbl-id" || name == "rem-saiiac-id" || name == "rem-taii-gbl-id" || name == "rem-taiiac-id" || name == "rem-saii" || name == "rem-taii" || name == "lsd-rewrite-failed" || name == "ldp-label-advertisment-failed")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::LocalAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "local-agi"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::~LocalAgi()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-agi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "local-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::LocalAgi::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::RemoteAgi()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
    	,
    auto_(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_>())
	,two_byte_as(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "remote-agi"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::~RemoteAgi()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::has_data() const
{
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-agi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::Auto_()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::~Auto_()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_data() const
{
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_data() const
{
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "remote-agi"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::RemoteAgi::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::MultiSegmentPseudowireStats()
    :
    received_packets{YType::uint64, "received-packets"},
    received_bytes{YType::uint64, "received-bytes"}
{

    yang_name = "multi-segment-pseudowire-stats"; yang_parent_name = "atom"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::~MultiSegmentPseudowireStats()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_data() const
{
    return received_packets.is_set
	|| received_bytes.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_packets.yfilter)
	|| ydk::is_set(received_bytes.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-segment-pseudowire-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_packets.is_set || is_set(received_packets.yfilter)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (received_bytes.is_set || is_set(received_bytes.yfilter)) leaf_name_data.push_back(received_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-packets")
    {
        received_packets = value;
        received_packets.value_namespace = name_space;
        received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-bytes")
    {
        received_bytes = value;
        received_bytes.value_namespace = name_space;
        received_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-packets")
    {
        received_packets.yfilter = yfilter;
    }
    if(value_path == "received-bytes")
    {
        received_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::Atom::MultiSegmentPseudowireStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-packets" || name == "received-bytes")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    l2tp_class_name{YType::str, "l2tp-class-name"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    ipv6_source_address{YType::str, "ipv6-source-address"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    tos_mode{YType::enumeration, "tos-mode"},
    tos{YType::uint8, "tos"},
    ttl{YType::uint8, "ttl"},
    local_session_id{YType::uint32, "local-session-id"},
    remote_session_id{YType::uint32, "remote-session-id"},
    local_cookie_size{YType::uint8, "local-cookie-size"},
    remote_cookie_size{YType::uint8, "remote-cookie-size"},
    local_cookie_low_value{YType::uint32, "local-cookie-low-value"},
    remote_cookie_low_value{YType::uint32, "remote-cookie-low-value"},
    local_cookie_high_value{YType::uint32, "local-cookie-high-value"},
    remote_cookie_high_value{YType::uint32, "remote-cookie-high-value"},
    remote_circuit_status_up{YType::boolean, "remote-circuit-status-up"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    local_secondary_cookie_size{YType::uint8, "local-secondary-cookie-size"},
    local_secondary_cookie_low_value{YType::uint32, "local-secondary-cookie-low-value"},
    local_secondary_cookie_high_value{YType::uint32, "local-secondary-cookie-high-value"}
{

    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::has_data() const
{
    return l2tp_class_name.is_set
	|| ipv4_source_address.is_set
	|| ipv6_source_address.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| dont_fragment_bit.is_set
	|| tos_mode.is_set
	|| tos.is_set
	|| ttl.is_set
	|| local_session_id.is_set
	|| remote_session_id.is_set
	|| local_cookie_size.is_set
	|| remote_cookie_size.is_set
	|| local_cookie_low_value.is_set
	|| remote_cookie_low_value.is_set
	|| local_cookie_high_value.is_set
	|| remote_cookie_high_value.is_set
	|| remote_circuit_status_up.is_set
	|| tunnel_state.is_set
	|| local_secondary_cookie_size.is_set
	|| local_secondary_cookie_low_value.is_set
	|| local_secondary_cookie_high_value.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_class_name.yfilter)
	|| ydk::is_set(ipv4_source_address.yfilter)
	|| ydk::is_set(ipv6_source_address.yfilter)
	|| ydk::is_set(path_mtu_enabled.yfilter)
	|| ydk::is_set(path_mtu_max_value.yfilter)
	|| ydk::is_set(dont_fragment_bit.yfilter)
	|| ydk::is_set(tos_mode.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(local_cookie_size.yfilter)
	|| ydk::is_set(remote_cookie_size.yfilter)
	|| ydk::is_set(local_cookie_low_value.yfilter)
	|| ydk::is_set(remote_cookie_low_value.yfilter)
	|| ydk::is_set(local_cookie_high_value.yfilter)
	|| ydk::is_set(remote_cookie_high_value.yfilter)
	|| ydk::is_set(remote_circuit_status_up.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(local_secondary_cookie_size.yfilter)
	|| ydk::is_set(local_secondary_cookie_low_value.yfilter)
	|| ydk::is_set(local_secondary_cookie_high_value.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_class_name.is_set || is_set(l2tp_class_name.yfilter)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.yfilter)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (ipv6_source_address.is_set || is_set(ipv6_source_address.yfilter)) leaf_name_data.push_back(ipv6_source_address.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.yfilter)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.yfilter)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.yfilter)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.yfilter)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (local_cookie_size.is_set || is_set(local_cookie_size.yfilter)) leaf_name_data.push_back(local_cookie_size.get_name_leafdata());
    if (remote_cookie_size.is_set || is_set(remote_cookie_size.yfilter)) leaf_name_data.push_back(remote_cookie_size.get_name_leafdata());
    if (local_cookie_low_value.is_set || is_set(local_cookie_low_value.yfilter)) leaf_name_data.push_back(local_cookie_low_value.get_name_leafdata());
    if (remote_cookie_low_value.is_set || is_set(remote_cookie_low_value.yfilter)) leaf_name_data.push_back(remote_cookie_low_value.get_name_leafdata());
    if (local_cookie_high_value.is_set || is_set(local_cookie_high_value.yfilter)) leaf_name_data.push_back(local_cookie_high_value.get_name_leafdata());
    if (remote_cookie_high_value.is_set || is_set(remote_cookie_high_value.yfilter)) leaf_name_data.push_back(remote_cookie_high_value.get_name_leafdata());
    if (remote_circuit_status_up.is_set || is_set(remote_circuit_status_up.yfilter)) leaf_name_data.push_back(remote_circuit_status_up.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (local_secondary_cookie_size.is_set || is_set(local_secondary_cookie_size.yfilter)) leaf_name_data.push_back(local_secondary_cookie_size.get_name_leafdata());
    if (local_secondary_cookie_low_value.is_set || is_set(local_secondary_cookie_low_value.yfilter)) leaf_name_data.push_back(local_secondary_cookie_low_value.get_name_leafdata());
    if (local_secondary_cookie_high_value.is_set || is_set(local_secondary_cookie_high_value.yfilter)) leaf_name_data.push_back(local_secondary_cookie_high_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
        l2tp_class_name.value_namespace = name_space;
        l2tp_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
        ipv4_source_address.value_namespace = name_space;
        ipv4_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address = value;
        ipv6_source_address.value_namespace = name_space;
        ipv6_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
        path_mtu_enabled.value_namespace = name_space;
        path_mtu_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
        path_mtu_max_value.value_namespace = name_space;
        path_mtu_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
        dont_fragment_bit.value_namespace = name_space;
        dont_fragment_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
        tos_mode.value_namespace = name_space;
        tos_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size = value;
        local_cookie_size.value_namespace = name_space;
        local_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size = value;
        remote_cookie_size.value_namespace = name_space;
        remote_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value = value;
        local_cookie_low_value.value_namespace = name_space;
        local_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value = value;
        remote_cookie_low_value.value_namespace = name_space;
        remote_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value = value;
        local_cookie_high_value.value_namespace = name_space;
        local_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value = value;
        remote_cookie_high_value.value_namespace = name_space;
        remote_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up = value;
        remote_circuit_status_up.value_namespace = name_space;
        remote_circuit_status_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size = value;
        local_secondary_cookie_size.value_namespace = name_space;
        local_secondary_cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value = value;
        local_secondary_cookie_low_value.value_namespace = name_space;
        local_secondary_cookie_low_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value = value;
        local_secondary_cookie_high_value.value_namespace = name_space;
        local_secondary_cookie_high_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-address")
    {
        ipv6_source_address.yfilter = yfilter;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled.yfilter = yfilter;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value.yfilter = yfilter;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit.yfilter = yfilter;
    }
    if(value_path == "tos-mode")
    {
        tos_mode.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "local-cookie-size")
    {
        local_cookie_size.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-size")
    {
        remote_cookie_size.yfilter = yfilter;
    }
    if(value_path == "local-cookie-low-value")
    {
        local_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-low-value")
    {
        remote_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "local-cookie-high-value")
    {
        local_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "remote-cookie-high-value")
    {
        remote_cookie_high_value.yfilter = yfilter;
    }
    if(value_path == "remote-circuit-status-up")
    {
        remote_circuit_status_up.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-size")
    {
        local_secondary_cookie_size.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-low-value")
    {
        local_secondary_cookie_low_value.yfilter = yfilter;
    }
    if(value_path == "local-secondary-cookie-high-value")
    {
        local_secondary_cookie_high_value.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::EncapsulationInfo::L2Tpv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-class-name" || name == "ipv4-source-address" || name == "ipv6-source-address" || name == "path-mtu-enabled" || name == "path-mtu-max-value" || name == "dont-fragment-bit" || name == "tos-mode" || name == "tos" || name == "ttl" || name == "local-session-id" || name == "remote-session-id" || name == "local-cookie-size" || name == "remote-cookie-size" || name == "local-cookie-low-value" || name == "remote-cookie-low-value" || name == "local-cookie-high-value" || name == "remote-cookie-high-value" || name == "remote-circuit-status-up" || name == "tunnel-state" || name == "local-secondary-cookie-size" || name == "local-secondary-cookie-low-value" || name == "local-secondary-cookie-high-value")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::LocalInterface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "local-interface"; yang_parent_name = "pseudo-wire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::~LocalInterface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::has_data() const
{
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    ethernet(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm>())
	,atm(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "local-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::has_data() const
{
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::has_data() const
{
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::has_data() const
{
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::Xconnects::Xconnect::Backup::PseudoWire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}


}
}

