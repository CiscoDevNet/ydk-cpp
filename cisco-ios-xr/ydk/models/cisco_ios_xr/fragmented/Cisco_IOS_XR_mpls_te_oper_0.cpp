
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsLcac::MplsLcac()
    :
    admission_control(std::make_shared<MplsLcac::AdmissionControl>())
	,advertisements(std::make_shared<MplsLcac::Advertisements>())
	,bandwidth_account(std::make_shared<MplsLcac::BandwidthAccount>())
	,bandwidth_allocation(std::make_shared<MplsLcac::BandwidthAllocation>())
	,bfd_neighbors(std::make_shared<MplsLcac::BfdNeighbors>())
	,gmpls(std::make_shared<MplsLcac::Gmpls>())
	,link_information(std::make_shared<MplsLcac::LinkInformation>())
	,link_summary(std::make_shared<MplsLcac::LinkSummary>())
	,neighbors(std::make_shared<MplsLcac::Neighbors>())
	,preemption_events(std::make_shared<MplsLcac::PreemptionEvents>())
	,soft_preemption_global_info(std::make_shared<MplsLcac::SoftPreemptionGlobalInfo>())
	,soft_preemptions(std::make_shared<MplsLcac::SoftPreemptions>())
	,statistics(std::make_shared<MplsLcac::Statistics>())
{
    admission_control->parent = this;
    advertisements->parent = this;
    bandwidth_account->parent = this;
    bandwidth_allocation->parent = this;
    bfd_neighbors->parent = this;
    gmpls->parent = this;
    link_information->parent = this;
    link_summary->parent = this;
    neighbors->parent = this;
    preemption_events->parent = this;
    soft_preemption_global_info->parent = this;
    soft_preemptions->parent = this;
    statistics->parent = this;

    yang_name = "mpls-lcac"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsLcac::~MplsLcac()
{
}

bool MplsLcac::has_data() const
{
    return (admission_control !=  nullptr && admission_control->has_data())
	|| (advertisements !=  nullptr && advertisements->has_data())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_data())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_data())
	|| (gmpls !=  nullptr && gmpls->has_data())
	|| (link_information !=  nullptr && link_information->has_data())
	|| (link_summary !=  nullptr && link_summary->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (preemption_events !=  nullptr && preemption_events->has_data())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_data())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsLcac::has_operation() const
{
    return is_set(yfilter)
	|| (admission_control !=  nullptr && admission_control->has_operation())
	|| (advertisements !=  nullptr && advertisements->has_operation())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_operation())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_operation())
	|| (gmpls !=  nullptr && gmpls->has_operation())
	|| (link_information !=  nullptr && link_information->has_operation())
	|| (link_summary !=  nullptr && link_summary->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (preemption_events !=  nullptr && preemption_events->has_operation())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_operation())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsLcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admission-control")
    {
        if(admission_control == nullptr)
        {
            admission_control = std::make_shared<MplsLcac::AdmissionControl>();
        }
        return admission_control;
    }

    if(child_yang_name == "advertisements")
    {
        if(advertisements == nullptr)
        {
            advertisements = std::make_shared<MplsLcac::Advertisements>();
        }
        return advertisements;
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account == nullptr)
        {
            bandwidth_account = std::make_shared<MplsLcac::BandwidthAccount>();
        }
        return bandwidth_account;
    }

    if(child_yang_name == "bandwidth-allocation")
    {
        if(bandwidth_allocation == nullptr)
        {
            bandwidth_allocation = std::make_shared<MplsLcac::BandwidthAllocation>();
        }
        return bandwidth_allocation;
    }

    if(child_yang_name == "bfd-neighbors")
    {
        if(bfd_neighbors == nullptr)
        {
            bfd_neighbors = std::make_shared<MplsLcac::BfdNeighbors>();
        }
        return bfd_neighbors;
    }

    if(child_yang_name == "gmpls")
    {
        if(gmpls == nullptr)
        {
            gmpls = std::make_shared<MplsLcac::Gmpls>();
        }
        return gmpls;
    }

    if(child_yang_name == "link-information")
    {
        if(link_information == nullptr)
        {
            link_information = std::make_shared<MplsLcac::LinkInformation>();
        }
        return link_information;
    }

    if(child_yang_name == "link-summary")
    {
        if(link_summary == nullptr)
        {
            link_summary = std::make_shared<MplsLcac::LinkSummary>();
        }
        return link_summary;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<MplsLcac::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "preemption-events")
    {
        if(preemption_events == nullptr)
        {
            preemption_events = std::make_shared<MplsLcac::PreemptionEvents>();
        }
        return preemption_events;
    }

    if(child_yang_name == "soft-preemption-global-info")
    {
        if(soft_preemption_global_info == nullptr)
        {
            soft_preemption_global_info = std::make_shared<MplsLcac::SoftPreemptionGlobalInfo>();
        }
        return soft_preemption_global_info;
    }

    if(child_yang_name == "soft-preemptions")
    {
        if(soft_preemptions == nullptr)
        {
            soft_preemptions = std::make_shared<MplsLcac::SoftPreemptions>();
        }
        return soft_preemptions;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsLcac::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admission_control != nullptr)
    {
        children["admission-control"] = admission_control;
    }

    if(advertisements != nullptr)
    {
        children["advertisements"] = advertisements;
    }

    if(bandwidth_account != nullptr)
    {
        children["bandwidth-account"] = bandwidth_account;
    }

    if(bandwidth_allocation != nullptr)
    {
        children["bandwidth-allocation"] = bandwidth_allocation;
    }

    if(bfd_neighbors != nullptr)
    {
        children["bfd-neighbors"] = bfd_neighbors;
    }

    if(gmpls != nullptr)
    {
        children["gmpls"] = gmpls;
    }

    if(link_information != nullptr)
    {
        children["link-information"] = link_information;
    }

    if(link_summary != nullptr)
    {
        children["link-summary"] = link_summary;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(preemption_events != nullptr)
    {
        children["preemption-events"] = preemption_events;
    }

    if(soft_preemption_global_info != nullptr)
    {
        children["soft-preemption-global-info"] = soft_preemption_global_info;
    }

    if(soft_preemptions != nullptr)
    {
        children["soft-preemptions"] = soft_preemptions;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsLcac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLcac::clone_ptr() const
{
    return std::make_shared<MplsLcac>();
}

std::string MplsLcac::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLcac::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLcac::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLcac::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsLcac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admission-control" || name == "advertisements" || name == "bandwidth-account" || name == "bandwidth-allocation" || name == "bfd-neighbors" || name == "gmpls" || name == "link-information" || name == "link-summary" || name == "neighbors" || name == "preemption-events" || name == "soft-preemption-global-info" || name == "soft-preemptions" || name == "statistics")
        return true;
    return false;
}

MplsLcac::AdmissionControl::AdmissionControl()
    :
    admitted_tunnels(std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels>())
	,global(std::make_shared<MplsLcac::AdmissionControl::Global>())
	,link_interfaces(std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces>())
{
    admitted_tunnels->parent = this;
    global->parent = this;
    link_interfaces->parent = this;

    yang_name = "admission-control"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::~AdmissionControl()
{
}

bool MplsLcac::AdmissionControl::has_data() const
{
    return (admitted_tunnels !=  nullptr && admitted_tunnels->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (link_interfaces !=  nullptr && link_interfaces->has_data());
}

bool MplsLcac::AdmissionControl::has_operation() const
{
    return is_set(yfilter)
	|| (admitted_tunnels !=  nullptr && admitted_tunnels->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (link_interfaces !=  nullptr && link_interfaces->has_operation());
}

std::string MplsLcac::AdmissionControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admitted-tunnels")
    {
        if(admitted_tunnels == nullptr)
        {
            admitted_tunnels = std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels>();
        }
        return admitted_tunnels;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcac::AdmissionControl::Global>();
        }
        return global;
    }

    if(child_yang_name == "link-interfaces")
    {
        if(link_interfaces == nullptr)
        {
            link_interfaces = std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces>();
        }
        return link_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admitted_tunnels != nullptr)
    {
        children["admitted-tunnels"] = admitted_tunnels;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(link_interfaces != nullptr)
    {
        children["link-interfaces"] = link_interfaces;
    }

    return children;
}

void MplsLcac::AdmissionControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::AdmissionControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::AdmissionControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admitted-tunnels" || name == "global" || name == "link-interfaces")
        return true;
    return false;
}

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnels()
{

    yang_name = "admitted-tunnels"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::AdmittedTunnels::~AdmittedTunnels()
{
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::has_data() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::has_operation() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::AdmittedTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::AdmittedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admitted-tunnel")
    {
        for(auto const & c : admitted_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel>();
        c->parent = this;
        admitted_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::AdmittedTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : admitted_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::AdmissionControl::AdmittedTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::AdmissionControl::AdmittedTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admitted-tunnel")
        return true;
    return false;
}

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::AdmittedTunnel()
    :
    source_address{YType::str, "source-address"},
    destination_port{YType::int32, "destination-port"},
    source_port{YType::int32, "source-port"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    next_hop_address{YType::str, "next-hop-address"},
    ctype{YType::enumeration, "ctype"},
    p2mp_id{YType::int32, "p2mp-id"},
    backup_interface{YType::str, "backup-interface"},
    bandwidth{YType::uint64, "bandwidth"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    bandwidth_state{YType::enumeration, "bandwidth-state"},
    down_link_name{YType::str, "down-link-name"},
    hold_priority{YType::uint8, "hold-priority"},
    is_rerouted{YType::boolean, "is-rerouted"},
    local_label{YType::uint32, "local-label"},
    outgoing_label{YType::uint32, "outgoing-label"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    up_link_name{YType::str, "up-link-name"}
{

    yang_name = "admitted-tunnel"; yang_parent_name = "admitted-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::~AdmittedTunnel()
{
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_data() const
{
    return source_address.is_set
	|| destination_port.is_set
	|| source_port.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| next_hop_address.is_set
	|| ctype.is_set
	|| p2mp_id.is_set
	|| backup_interface.is_set
	|| bandwidth.is_set
	|| bandwidth_pool.is_set
	|| bandwidth_state.is_set
	|| down_link_name.is_set
	|| hold_priority.is_set
	|| is_rerouted.is_set
	|| local_label.is_set
	|| outgoing_label.is_set
	|| setup_priority.is_set
	|| tunnel_name.is_set
	|| tunnel_state.is_set
	|| up_link_name.is_set;
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(bandwidth_pool.yfilter)
	|| ydk::is_set(bandwidth_state.yfilter)
	|| ydk::is_set(down_link_name.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_rerouted.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(up_link_name.yfilter);
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/admitted-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnel" <<"[source-address='" <<source_address <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[source-port='" <<source_port <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[ctype='" <<ctype <<"']" <<"[p2mp-id='" <<p2mp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.yfilter)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (bandwidth_state.is_set || is_set(bandwidth_state.yfilter)) leaf_name_data.push_back(bandwidth_state.get_name_leafdata());
    if (down_link_name.is_set || is_set(down_link_name.yfilter)) leaf_name_data.push_back(down_link_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_rerouted.is_set || is_set(is_rerouted.yfilter)) leaf_name_data.push_back(is_rerouted.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (up_link_name.is_set || is_set(up_link_name.yfilter)) leaf_name_data.push_back(up_link_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
        bandwidth_pool.value_namespace = name_space;
        bandwidth_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-state")
    {
        bandwidth_state = value;
        bandwidth_state.value_namespace = name_space;
        bandwidth_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-link-name")
    {
        down_link_name = value;
        down_link_name.value_namespace = name_space;
        down_link_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rerouted")
    {
        is_rerouted = value;
        is_rerouted.value_namespace = name_space;
        is_rerouted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-link-name")
    {
        up_link_name = value;
        up_link_name.value_namespace = name_space;
        up_link_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool.yfilter = yfilter;
    }
    if(value_path == "bandwidth-state")
    {
        bandwidth_state.yfilter = yfilter;
    }
    if(value_path == "down-link-name")
    {
        down_link_name.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-rerouted")
    {
        is_rerouted.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "up-link-name")
    {
        up_link_name.yfilter = yfilter;
    }
}

bool MplsLcac::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-port" || name == "source-port" || name == "destination-address" || name == "extended-tunnel-id" || name == "next-hop-address" || name == "ctype" || name == "p2mp-id" || name == "backup-interface" || name == "bandwidth" || name == "bandwidth-pool" || name == "bandwidth-state" || name == "down-link-name" || name == "hold-priority" || name == "is-rerouted" || name == "local-label" || name == "outgoing-label" || name == "setup-priority" || name == "tunnel-name" || name == "tunnel-state" || name == "up-link-name")
        return true;
    return false;
}

MplsLcac::AdmissionControl::Global::Global()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_role_standby{YType::boolean, "is-role-standby"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "global"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::Global::~Global()
{
}

bool MplsLcac::AdmissionControl::Global::has_data() const
{
    return bandwidth_units.is_set
	|| is_role_standby.is_set
	|| selected_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsLcac::AdmissionControl::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(selected_tunnels.yfilter)
	|| ydk::is_set(total_p2mp_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsLcac::AdmissionControl::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.yfilter)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.yfilter)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::AdmissionControl::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
        selected_tunnels.value_namespace = name_space;
        selected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
        total_p2mp_tunnels.value_namespace = name_space;
        total_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::AdmissionControl::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsLcac::AdmissionControl::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-units" || name == "is-role-standby" || name == "selected-tunnels" || name == "total-p2mp-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterfaces()
{

    yang_name = "link-interfaces"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::LinkInterfaces::~LinkInterfaces()
{
}

bool MplsLcac::AdmissionControl::LinkInterfaces::has_data() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::AdmissionControl::LinkInterfaces::has_operation() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::LinkInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::LinkInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-interface")
    {
        for(auto const & c : link_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface>();
        c->parent = this;
        link_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::LinkInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::AdmissionControl::LinkInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::AdmissionControl::LinkInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::AdmissionControl::LinkInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-interface")
        return true;
    return false;
}

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::LinkInterface()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_role_standby{YType::boolean, "is-role-standby"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "link-interface"; yang_parent_name = "link-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::~LinkInterface()
{
}

bool MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::has_data() const
{
    return interface_name.is_set
	|| bandwidth_units.is_set
	|| is_role_standby.is_set
	|| selected_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(selected_tunnels.yfilter)
	|| ydk::is_set(total_p2mp_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/admission-control/link-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.yfilter)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.yfilter)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
        selected_tunnels.value_namespace = name_space;
        selected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
        total_p2mp_tunnels.value_namespace = name_space;
        total_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsLcac::AdmissionControl::LinkInterfaces::LinkInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bandwidth-units" || name == "is-role-standby" || name == "selected-tunnels" || name == "total-p2mp-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsLcac::Advertisements::Advertisements()
    :
    ds_te_mode{YType::enumeration, "ds-te-mode"},
    flooding_status_message{YType::str, "flooding-status-message"},
    last_flooding_time{YType::uint32, "last-flooding-time"},
    last_flooding_trigger{YType::enumeration, "last-flooding-trigger"},
    next_flooding_time{YType::uint32, "next-flooding-time"}
{

    yang_name = "advertisements"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::~Advertisements()
{
}

bool MplsLcac::Advertisements::has_data() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_data())
            return true;
    }
    return ds_te_mode.is_set
	|| flooding_status_message.is_set
	|| last_flooding_time.is_set
	|| last_flooding_trigger.is_set
	|| next_flooding_time.is_set;
}

bool MplsLcac::Advertisements::has_operation() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ds_te_mode.yfilter)
	|| ydk::is_set(flooding_status_message.yfilter)
	|| ydk::is_set(last_flooding_time.yfilter)
	|| ydk::is_set(last_flooding_trigger.yfilter)
	|| ydk::is_set(next_flooding_time.yfilter);
}

std::string MplsLcac::Advertisements::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ds_te_mode.is_set || is_set(ds_te_mode.yfilter)) leaf_name_data.push_back(ds_te_mode.get_name_leafdata());
    if (flooding_status_message.is_set || is_set(flooding_status_message.yfilter)) leaf_name_data.push_back(flooding_status_message.get_name_leafdata());
    if (last_flooding_time.is_set || is_set(last_flooding_time.yfilter)) leaf_name_data.push_back(last_flooding_time.get_name_leafdata());
    if (last_flooding_trigger.is_set || is_set(last_flooding_trigger.yfilter)) leaf_name_data.push_back(last_flooding_trigger.get_name_leafdata());
    if (next_flooding_time.is_set || is_set(next_flooding_time.yfilter)) leaf_name_data.push_back(next_flooding_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertized-areas")
    {
        for(auto const & c : advertized_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas>();
        c->parent = this;
        advertized_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : advertized_areas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::Advertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ds-te-mode")
    {
        ds_te_mode = value;
        ds_te_mode.value_namespace = name_space;
        ds_te_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-status-message")
    {
        flooding_status_message = value;
        flooding_status_message.value_namespace = name_space;
        flooding_status_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time = value;
        last_flooding_time.value_namespace = name_space;
        last_flooding_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger = value;
        last_flooding_trigger.value_namespace = name_space;
        last_flooding_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time = value;
        next_flooding_time.value_namespace = name_space;
        next_flooding_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ds-te-mode")
    {
        ds_te_mode.yfilter = yfilter;
    }
    if(value_path == "flooding-status-message")
    {
        flooding_status_message.yfilter = yfilter;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time.yfilter = yfilter;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger.yfilter = yfilter;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertized-areas" || name == "ds-te-mode" || name == "flooding-status-message" || name == "last-flooding-time" || name == "last-flooding-trigger" || name == "next-flooding-time")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::AdvertizedAreas()
    :
    igp_area_id{YType::str, "igp-area-id"},
    protocol{YType::enumeration, "protocol"},
    router_id{YType::str, "router-id"},
    system_id{YType::str, "system-id"}
{

    yang_name = "advertized-areas"; yang_parent_name = "advertisements"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::~AdvertizedAreas()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::has_data() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_data())
            return true;
    }
    return igp_area_id.is_set
	|| protocol.is_set
	|| router_id.is_set
	|| system_id.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::has_operation() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertized-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooded-link")
    {
        for(auto const & c : flooded_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink>();
        c->parent = this;
        flooded_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flooded_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-link" || name == "igp-area-id" || name == "protocol" || name == "router-id" || name == "system-id")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::FloodedLink()
    :
    affinity_attribute_flags{YType::uint32, "affinity-attribute-flags"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    designated_router_igp_id{YType::str, "designated-router-igp-id"},
    igp_metric{YType::uint32, "igp-metric"},
    igp_neighbor_address{YType::str, "igp-neighbor-address"},
    incoming_interface_id{YType::uint32, "incoming-interface-id"},
    interface_name{YType::str, "interface-name"},
    is_designated_router{YType::boolean, "is-designated-router"},
    is_receiving_reservable_bandwidth_enabled{YType::boolean, "is-receiving-reservable-bandwidth-enabled"},
    is_transmitting_reservable_bandwidth_enabled{YType::boolean, "is-transmitting-reservable-bandwidth-enabled"},
    link_address{YType::str, "link-address"},
    link_id{YType::uint16, "link-id"},
    link_maximum_reservable_bandwidth{YType::uint32, "link-maximum-reservable-bandwidth"},
    neighbor_igp_id{YType::str, "neighbor-igp-id"},
    outgoing_interface_id{YType::uint32, "outgoing-interface-id"},
    physical_bandwidth{YType::uint32, "physical-bandwidth"},
    receiving_direction{YType::enumeration, "receiving-direction"},
    reservable_pool0_bandwidth{YType::uint32, "reservable-pool0-bandwidth"},
    reservable_pool1_bandwidth{YType::uint32, "reservable-pool1-bandwidth"},
    subnet_type{YType::enumeration, "subnet-type"},
    te_metric{YType::uint32, "te-metric"},
    transmitting_direction{YType::enumeration, "transmitting-direction"},
    uni_link_delay{YType::uint32, "uni-link-delay"}
    	,
    odu_link_capabilities(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>())
{
    odu_link_capabilities->parent = this;

    yang_name = "flooded-link"; yang_parent_name = "advertized-areas"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::~FloodedLink()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::has_data() const
{
    for (std::size_t index=0; index<extended_affinity_attribute_flag.size(); index++)
    {
        if(extended_affinity_attribute_flag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_data())
            return true;
    }
    return affinity_attribute_flags.is_set
	|| bandwidth_units.is_set
	|| bcm_id.is_set
	|| designated_router_igp_id.is_set
	|| igp_metric.is_set
	|| igp_neighbor_address.is_set
	|| incoming_interface_id.is_set
	|| interface_name.is_set
	|| is_designated_router.is_set
	|| is_receiving_reservable_bandwidth_enabled.is_set
	|| is_transmitting_reservable_bandwidth_enabled.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| link_maximum_reservable_bandwidth.is_set
	|| neighbor_igp_id.is_set
	|| outgoing_interface_id.is_set
	|| physical_bandwidth.is_set
	|| receiving_direction.is_set
	|| reservable_pool0_bandwidth.is_set
	|| reservable_pool1_bandwidth.is_set
	|| subnet_type.is_set
	|| te_metric.is_set
	|| transmitting_direction.is_set
	|| uni_link_delay.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::has_operation() const
{
    for (std::size_t index=0; index<extended_affinity_attribute_flag.size(); index++)
    {
        if(extended_affinity_attribute_flag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_attribute_flags.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(designated_router_igp_id.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(igp_neighbor_address.yfilter)
	|| ydk::is_set(incoming_interface_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_designated_router.yfilter)
	|| ydk::is_set(is_receiving_reservable_bandwidth_enabled.yfilter)
	|| ydk::is_set(is_transmitting_reservable_bandwidth_enabled.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(neighbor_igp_id.yfilter)
	|| ydk::is_set(outgoing_interface_id.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(receiving_direction.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(subnet_type.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(transmitting_direction.yfilter)
	|| ydk::is_set(uni_link_delay.yfilter)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_attribute_flags.is_set || is_set(affinity_attribute_flags.yfilter)) leaf_name_data.push_back(affinity_attribute_flags.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (designated_router_igp_id.is_set || is_set(designated_router_igp_id.yfilter)) leaf_name_data.push_back(designated_router_igp_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (igp_neighbor_address.is_set || is_set(igp_neighbor_address.yfilter)) leaf_name_data.push_back(igp_neighbor_address.get_name_leafdata());
    if (incoming_interface_id.is_set || is_set(incoming_interface_id.yfilter)) leaf_name_data.push_back(incoming_interface_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_designated_router.is_set || is_set(is_designated_router.yfilter)) leaf_name_data.push_back(is_designated_router.get_name_leafdata());
    if (is_receiving_reservable_bandwidth_enabled.is_set || is_set(is_receiving_reservable_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_receiving_reservable_bandwidth_enabled.get_name_leafdata());
    if (is_transmitting_reservable_bandwidth_enabled.is_set || is_set(is_transmitting_reservable_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_transmitting_reservable_bandwidth_enabled.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_maximum_reservable_bandwidth.is_set || is_set(link_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(link_maximum_reservable_bandwidth.get_name_leafdata());
    if (neighbor_igp_id.is_set || is_set(neighbor_igp_id.yfilter)) leaf_name_data.push_back(neighbor_igp_id.get_name_leafdata());
    if (outgoing_interface_id.is_set || is_set(outgoing_interface_id.yfilter)) leaf_name_data.push_back(outgoing_interface_id.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (receiving_direction.is_set || is_set(receiving_direction.yfilter)) leaf_name_data.push_back(receiving_direction.get_name_leafdata());
    if (reservable_pool0_bandwidth.is_set || is_set(reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth.get_name_leafdata());
    if (reservable_pool1_bandwidth.is_set || is_set(reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth.get_name_leafdata());
    if (subnet_type.is_set || is_set(subnet_type.yfilter)) leaf_name_data.push_back(subnet_type.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (transmitting_direction.is_set || is_set(transmitting_direction.yfilter)) leaf_name_data.push_back(transmitting_direction.get_name_leafdata());
    if (uni_link_delay.is_set || is_set(uni_link_delay.yfilter)) leaf_name_data.push_back(uni_link_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-affinity-attribute-flag")
    {
        for(auto const & c : extended_affinity_attribute_flag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag>();
        c->parent = this;
        extended_affinity_attribute_flag.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities == nullptr)
        {
            odu_link_capabilities = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>();
        }
        return odu_link_capabilities;
    }

    if(child_yang_name == "receiving-reservable-bandwidth")
    {
        for(auto const & c : receiving_reservable_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth>();
        c->parent = this;
        receiving_reservable_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "transmitting-reservable-bandwidth")
    {
        for(auto const & c : transmitting_reservable_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth>();
        c->parent = this;
        transmitting_reservable_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_affinity_attribute_flag)
    {
        children[c->get_segment_path()] = c;
    }

    if(odu_link_capabilities != nullptr)
    {
        children["odu-link-capabilities"] = odu_link_capabilities;
    }

    for (auto const & c : receiving_reservable_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : transmitting_reservable_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags = value;
        affinity_attribute_flags.value_namespace = name_space;
        affinity_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id = value;
        designated_router_igp_id.value_namespace = name_space;
        designated_router_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address = value;
        igp_neighbor_address.value_namespace = name_space;
        igp_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id = value;
        incoming_interface_id.value_namespace = name_space;
        incoming_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router = value;
        is_designated_router.value_namespace = name_space;
        is_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled = value;
        is_receiving_reservable_bandwidth_enabled.value_namespace = name_space;
        is_receiving_reservable_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled = value;
        is_transmitting_reservable_bandwidth_enabled.value_namespace = name_space;
        is_transmitting_reservable_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth = value;
        link_maximum_reservable_bandwidth.value_namespace = name_space;
        link_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id = value;
        neighbor_igp_id.value_namespace = name_space;
        neighbor_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id = value;
        outgoing_interface_id.value_namespace = name_space;
        outgoing_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction = value;
        receiving_direction.value_namespace = name_space;
        receiving_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth = value;
        reservable_pool0_bandwidth.value_namespace = name_space;
        reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth = value;
        reservable_pool1_bandwidth.value_namespace = name_space;
        reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-type")
    {
        subnet_type = value;
        subnet_type.value_namespace = name_space;
        subnet_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction = value;
        transmitting_direction.value_namespace = name_space;
        transmitting_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay = value;
        uni_link_delay.value_namespace = name_space;
        uni_link_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router.yfilter = yfilter;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "subnet-type")
    {
        subnet_type.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction.yfilter = yfilter;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-affinity-attribute-flag" || name == "odu-link-capabilities" || name == "receiving-reservable-bandwidth" || name == "shared-risk-link-group" || name == "transmitting-reservable-bandwidth" || name == "affinity-attribute-flags" || name == "bandwidth-units" || name == "bcm-id" || name == "designated-router-igp-id" || name == "igp-metric" || name == "igp-neighbor-address" || name == "incoming-interface-id" || name == "interface-name" || name == "is-designated-router" || name == "is-receiving-reservable-bandwidth-enabled" || name == "is-transmitting-reservable-bandwidth-enabled" || name == "link-address" || name == "link-id" || name == "link-maximum-reservable-bandwidth" || name == "neighbor-igp-id" || name == "outgoing-interface-id" || name == "physical-bandwidth" || name == "receiving-direction" || name == "reservable-pool0-bandwidth" || name == "reservable-pool1-bandwidth" || name == "subnet-type" || name == "te-metric" || name == "transmitting-direction" || name == "uni-link-delay")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::ExtendedAffinityAttributeFlag()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-affinity-attribute-flag"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::~ExtendedAffinityAttributeFlag()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-affinity-attribute-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduLinkCapabilities()
{

    yang_name = "odu-link-capabilities"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-lsp-bandwidth")
    {
        for(auto const & c : max_lsp_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth>();
        c->parent = this;
        max_lsp_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-capability")
    {
        for(auto const & c : odu_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : max_lsp_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : odu_capability)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsp-bandwidth" || name == "odu-capability")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::MaxLspBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "max-lsp-bandwidth"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::~MaxLspBandwidth()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsp-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    lcas_capable{YType::boolean, "lcas-capable"},
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    switchable{YType::boolean, "switchable"},
    terminable{YType::boolean, "terminable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"}
    	,
    bandwidth_info(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return lcas_capable.is_set
	|| signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| switchable.is_set
	|| terminable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lcas_capable.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage1.yfilter)
	|| ydk::is_set(stage2.yfilter)
	|| ydk::is_set(stage3.yfilter)
	|| ydk::is_set(stage4.yfilter)
	|| ydk::is_set(switchable.yfilter)
	|| ydk::is_set(terminable.yfilter)
	|| ydk::is_set(tsg1p25.yfilter)
	|| ydk::is_set(tsg2p5.yfilter)
	|| ydk::is_set(vcat_capable.yfilter)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lcas_capable.is_set || is_set(lcas_capable.yfilter)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.yfilter)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.yfilter)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.yfilter)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.yfilter)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.yfilter)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.yfilter)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.yfilter)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.yfilter)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.yfilter)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info == nullptr)
        {
            bandwidth_info = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
        }
        return bandwidth_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_info != nullptr)
    {
        children["bandwidth-info"] = bandwidth_info;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
        lcas_capable.value_namespace = name_space;
        lcas_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
        stage1.value_namespace = name_space;
        stage1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
        stage2.value_namespace = name_space;
        stage2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
        stage3.value_namespace = name_space;
        stage3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
        stage4.value_namespace = name_space;
        stage4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchable")
    {
        switchable = value;
        switchable.value_namespace = name_space;
        switchable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminable")
    {
        terminable = value;
        terminable.value_namespace = name_space;
        terminable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
        tsg1p25.value_namespace = name_space;
        tsg1p25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
        tsg2p5.value_namespace = name_space;
        tsg2p5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
        vcat_capable.value_namespace = name_space;
        vcat_capable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage1")
    {
        stage1.yfilter = yfilter;
    }
    if(value_path == "stage2")
    {
        stage2.yfilter = yfilter;
    }
    if(value_path == "stage3")
    {
        stage3.yfilter = yfilter;
    }
    if(value_path == "stage4")
    {
        stage4.yfilter = yfilter;
    }
    if(value_path == "switchable")
    {
        switchable.yfilter = yfilter;
    }
    if(value_path == "terminable")
    {
        terminable.yfilter = yfilter;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25.yfilter = yfilter;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5.yfilter = yfilter;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-info" || name == "lcas-capable" || name == "signal-type" || name == "stage1" || name == "stage2" || name == "stage3" || name == "stage4" || name == "switchable" || name == "terminable" || name == "tsg1p25" || name == "tsg2p5" || name == "vcat-capable")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    flex->parent = this;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed")
    {
        if(fixed == nullptr)
        {
            fixed = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
        }
        return fixed;
    }

    if(child_yang_name == "flex")
    {
        if(flex == nullptr)
        {
            flex = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
        }
        return flex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed != nullptr)
    {
        children["fixed"] = fixed;
    }

    if(flex != nullptr)
    {
        children["flex"] = flex;
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "flex" || name == "type")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{

    yang_name = "fixed"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_od_us.yfilter)
	|| ydk::is_set(unreserved_od_us.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.yfilter)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.yfilter)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
        maximum_od_us.value_namespace = name_space;
        maximum_od_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
        unreserved_od_us.value_namespace = name_space;
        unreserved_od_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us.yfilter = yfilter;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-od-us" || name == "unreserved-od-us")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"}
{

    yang_name = "flex"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| max_lsp_bandwidth.is_set
	|| unreserved_bandwidth.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_lsp_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.yfilter)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
        max_lsp_bandwidth.value_namespace = name_space;
        max_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-bandwidth" || name == "max-lsp-bandwidth" || name == "unreserved-bandwidth")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::ReceivingReservableBandwidth()
    :
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"},
    priority{YType::uint8, "priority"}
{

    yang_name = "receiving-reservable-bandwidth"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::~ReceivingReservableBandwidth()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_data() const
{
    return pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set
	|| priority.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool0_bandwidth.yfilter)
	|| ydk::is_set(pool1_bandwidth.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiving-reservable-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.yfilter)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.yfilter)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
        pool0_bandwidth.value_namespace = name_space;
        pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
        pool1_bandwidth.value_namespace = name_space;
        pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool0-bandwidth" || name == "pool1-bandwidth" || name == "priority")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::TransmittingReservableBandwidth()
    :
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"},
    priority{YType::uint8, "priority"}
{

    yang_name = "transmitting-reservable-bandwidth"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::~TransmittingReservableBandwidth()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_data() const
{
    return pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set
	|| priority.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool0_bandwidth.yfilter)
	|| ydk::is_set(pool1_bandwidth.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitting-reservable-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.yfilter)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.yfilter)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
        pool0_bandwidth.value_namespace = name_space;
        pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
        pool1_bandwidth.value_namespace = name_space;
        pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool0-bandwidth" || name == "pool1-bandwidth" || name == "priority")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_links(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks>())
{
    bandwidth_account_links->parent = this;

    yang_name = "bandwidth-account"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcac::BandwidthAccount::has_data() const
{
    return (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_data());
}

bool MplsLcac::BandwidthAccount::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_operation());
}

std::string MplsLcac::BandwidthAccount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-links")
    {
        if(bandwidth_account_links == nullptr)
        {
            bandwidth_account_links = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks>();
        }
        return bandwidth_account_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_account_links != nullptr)
    {
        children["bandwidth-account-links"] = bandwidth_account_links;
    }

    return children;
}

void MplsLcac::BandwidthAccount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAccount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAccount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-links")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLinks()
{

    yang_name = "bandwidth-account-links"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::~BandwidthAccountLinks()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-account/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-link")
    {
        for(auto const & c : bandwidth_account_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink>();
        c->parent = this;
        bandwidth_account_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth_account_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-link")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::BandwidthAccountLink()
    :
    interface_name{YType::str, "interface-name"},
    link_id{YType::str, "link-id"}
    	,
    common_info(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>())
	,rsvp_te_sample_history(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory>())
	,sr_sample_history(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory>())
{
    common_info->parent = this;
    rsvp_te_sample_history->parent = this;
    sr_sample_history->parent = this;

    yang_name = "bandwidth-account-link"; yang_parent_name = "bandwidth-account-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::~BandwidthAccountLink()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_data() const
{
    return interface_name.is_set
	|| link_id.is_set
	|| (common_info !=  nullptr && common_info->has_data())
	|| (rsvp_te_sample_history !=  nullptr && rsvp_te_sample_history->has_data())
	|| (sr_sample_history !=  nullptr && sr_sample_history->has_data());
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (rsvp_te_sample_history !=  nullptr && rsvp_te_sample_history->has_operation())
	|| (sr_sample_history !=  nullptr && sr_sample_history->has_operation());
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-account/bandwidth-account-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-info")
    {
        if(common_info == nullptr)
        {
            common_info = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>();
        }
        return common_info;
    }

    if(child_yang_name == "rsvp-te-sample-history")
    {
        if(rsvp_te_sample_history == nullptr)
        {
            rsvp_te_sample_history = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory>();
        }
        return rsvp_te_sample_history;
    }

    if(child_yang_name == "sr-sample-history")
    {
        if(sr_sample_history == nullptr)
        {
            sr_sample_history = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory>();
        }
        return sr_sample_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_info != nullptr)
    {
        children["common-info"] = common_info;
    }

    if(rsvp_te_sample_history != nullptr)
    {
        children["rsvp-te-sample-history"] = rsvp_te_sample_history;
    }

    if(sr_sample_history != nullptr)
    {
        children["sr-sample-history"] = sr_sample_history;
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-info" || name == "rsvp-te-sample-history" || name == "sr-sample-history" || name == "interface-name" || name == "link-id")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::CommonInfo()
    :
    application_enforced{YType::boolean, "application-enforced"},
    application_time_remaining_nanosec{YType::uint64, "application-time-remaining-nanosec"},
    collection_type{YType::enumeration, "collection-type"},
    effective_maximum_reservable_bandwidth{YType::uint64, "effective-maximum-reservable-bandwidth"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    last_application_timestamp_nanosec{YType::uint64, "last-application-timestamp-nanosec"},
    last_sample_collection_timestamp_nanosec{YType::uint64, "last-sample-collection-timestamp-nanosec"},
    next_application_timestamp_nanosec{YType::uint64, "next-application-timestamp-nanosec"},
    next_sample_collection_nanosec{YType::uint64, "next-sample-collection-nanosec"},
    sample_time_remaining_timestamp_nanosec{YType::uint64, "sample-time-remaining-timestamp-nanosec"}
    	,
    rsvp_te_bandwidth_utilization(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization>())
	,sr_bandwidth_utilization(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization>())
{
    rsvp_te_bandwidth_utilization->parent = this;
    sr_bandwidth_utilization->parent = this;

    yang_name = "common-info"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::~CommonInfo()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_data() const
{
    return application_enforced.is_set
	|| application_time_remaining_nanosec.is_set
	|| collection_type.is_set
	|| effective_maximum_reservable_bandwidth.is_set
	|| is_bandwidth_account_enabled.is_set
	|| last_application_timestamp_nanosec.is_set
	|| last_sample_collection_timestamp_nanosec.is_set
	|| next_application_timestamp_nanosec.is_set
	|| next_sample_collection_nanosec.is_set
	|| sample_time_remaining_timestamp_nanosec.is_set
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_data())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_data());
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(application_time_remaining_nanosec.yfilter)
	|| ydk::is_set(collection_type.yfilter)
	|| ydk::is_set(effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(last_application_timestamp_nanosec.yfilter)
	|| ydk::is_set(last_sample_collection_timestamp_nanosec.yfilter)
	|| ydk::is_set(next_application_timestamp_nanosec.yfilter)
	|| ydk::is_set(next_sample_collection_nanosec.yfilter)
	|| ydk::is_set(sample_time_remaining_timestamp_nanosec.yfilter)
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_operation())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_operation());
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (application_time_remaining_nanosec.is_set || is_set(application_time_remaining_nanosec.yfilter)) leaf_name_data.push_back(application_time_remaining_nanosec.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.yfilter)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (effective_maximum_reservable_bandwidth.is_set || is_set(effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (last_application_timestamp_nanosec.is_set || is_set(last_application_timestamp_nanosec.yfilter)) leaf_name_data.push_back(last_application_timestamp_nanosec.get_name_leafdata());
    if (last_sample_collection_timestamp_nanosec.is_set || is_set(last_sample_collection_timestamp_nanosec.yfilter)) leaf_name_data.push_back(last_sample_collection_timestamp_nanosec.get_name_leafdata());
    if (next_application_timestamp_nanosec.is_set || is_set(next_application_timestamp_nanosec.yfilter)) leaf_name_data.push_back(next_application_timestamp_nanosec.get_name_leafdata());
    if (next_sample_collection_nanosec.is_set || is_set(next_sample_collection_nanosec.yfilter)) leaf_name_data.push_back(next_sample_collection_nanosec.get_name_leafdata());
    if (sample_time_remaining_timestamp_nanosec.is_set || is_set(sample_time_remaining_timestamp_nanosec.yfilter)) leaf_name_data.push_back(sample_time_remaining_timestamp_nanosec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-bandwidth-utilization")
    {
        if(rsvp_te_bandwidth_utilization == nullptr)
        {
            rsvp_te_bandwidth_utilization = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization>();
        }
        return rsvp_te_bandwidth_utilization;
    }

    if(child_yang_name == "sr-bandwidth-utilization")
    {
        if(sr_bandwidth_utilization == nullptr)
        {
            sr_bandwidth_utilization = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization>();
        }
        return sr_bandwidth_utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_te_bandwidth_utilization != nullptr)
    {
        children["rsvp-te-bandwidth-utilization"] = rsvp_te_bandwidth_utilization;
    }

    if(sr_bandwidth_utilization != nullptr)
    {
        children["sr-bandwidth-utilization"] = sr_bandwidth_utilization;
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining-nanosec")
    {
        application_time_remaining_nanosec = value;
        application_time_remaining_nanosec.value_namespace = name_space;
        application_time_remaining_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
        collection_type.value_namespace = name_space;
        collection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth = value;
        effective_maximum_reservable_bandwidth.value_namespace = name_space;
        effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-timestamp-nanosec")
    {
        last_application_timestamp_nanosec = value;
        last_application_timestamp_nanosec.value_namespace = name_space;
        last_application_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-collection-timestamp-nanosec")
    {
        last_sample_collection_timestamp_nanosec = value;
        last_sample_collection_timestamp_nanosec.value_namespace = name_space;
        last_sample_collection_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-application-timestamp-nanosec")
    {
        next_application_timestamp_nanosec = value;
        next_application_timestamp_nanosec.value_namespace = name_space;
        next_application_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-sample-collection-nanosec")
    {
        next_sample_collection_nanosec = value;
        next_sample_collection_nanosec.value_namespace = name_space;
        next_sample_collection_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining-timestamp-nanosec")
    {
        sample_time_remaining_timestamp_nanosec = value;
        sample_time_remaining_timestamp_nanosec.value_namespace = name_space;
        sample_time_remaining_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining-nanosec")
    {
        application_time_remaining_nanosec.yfilter = yfilter;
    }
    if(value_path == "collection-type")
    {
        collection_type.yfilter = yfilter;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "last-application-timestamp-nanosec")
    {
        last_application_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "last-sample-collection-timestamp-nanosec")
    {
        last_sample_collection_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "next-application-timestamp-nanosec")
    {
        next_application_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "next-sample-collection-nanosec")
    {
        next_sample_collection_nanosec.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining-timestamp-nanosec")
    {
        sample_time_remaining_timestamp_nanosec.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "application-enforced" || name == "application-time-remaining-nanosec" || name == "collection-type" || name == "effective-maximum-reservable-bandwidth" || name == "is-bandwidth-account-enabled" || name == "last-application-timestamp-nanosec" || name == "last-sample-collection-timestamp-nanosec" || name == "next-application-timestamp-nanosec" || name == "next-sample-collection-nanosec" || name == "sample-time-remaining-timestamp-nanosec")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::RsvpTeBandwidthUtilization()
    :
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_adjusted_bandwidth_utilization{YType::uint64, "rsvp-te-adjusted-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    rsvp_te_enforced_bandwidth_utilization{YType::uint64, "rsvp-te-enforced-bandwidth-utilization"},
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"}
{

    yang_name = "rsvp-te-bandwidth-utilization"; yang_parent_name = "common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::~RsvpTeBandwidthUtilization()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_data() const
{
    return non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_adjusted_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_enforced_bandwidth_utilization.is_set
	|| total_link_bandwidth_utilization.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)
	|| ydk::is_set(total_link_bandwidth_utilization.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_adjusted_bandwidth_utilization.is_set || is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_adjusted_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_enforced_bandwidth_utilization.is_set || is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_enforced_bandwidth_utilization.get_name_leafdata());
    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.yfilter)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
        non_rsvp_te_bandwidth_utilization.value_namespace = name_space;
        non_rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization = value;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
        rsvp_te_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization = value;
        rsvp_te_enforced_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
        total_link_bandwidth_utilization.value_namespace = name_space;
        total_link_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-bandwidth-utilization" || name == "rsvp-te-adjusted-bandwidth-utilization" || name == "rsvp-te-bandwidth-utilization" || name == "rsvp-te-enforced-bandwidth-utilization" || name == "total-link-bandwidth-utilization")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::SrBandwidthUtilization()
    :
    sr_adjusted_bandwidth_utilization{YType::uint64, "sr-adjusted-bandwidth-utilization"},
    sr_bandwidth_utilization{YType::uint64, "sr-bandwidth-utilization"},
    sr_enforced_bandwidth_utilization{YType::uint64, "sr-enforced-bandwidth-utilization"}
{

    yang_name = "sr-bandwidth-utilization"; yang_parent_name = "common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::~SrBandwidthUtilization()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_data() const
{
    return sr_adjusted_bandwidth_utilization.is_set
	|| sr_bandwidth_utilization.is_set
	|| sr_enforced_bandwidth_utilization.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_adjusted_bandwidth_utilization.is_set || is_set(sr_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_adjusted_bandwidth_utilization.get_name_leafdata());
    if (sr_bandwidth_utilization.is_set || is_set(sr_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_bandwidth_utilization.get_name_leafdata());
    if (sr_enforced_bandwidth_utilization.is_set || is_set(sr_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization = value;
        sr_adjusted_bandwidth_utilization.value_namespace = name_space;
        sr_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization = value;
        sr_bandwidth_utilization.value_namespace = name_space;
        sr_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization = value;
        sr_enforced_bandwidth_utilization.value_namespace = name_space;
        sr_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-adjusted-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "sr-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeSampleHistory()
{

    yang_name = "rsvp-te-sample-history"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::~RsvpTeSampleHistory()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_data() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-active-interval-sample")
    {
        for(auto const & c : rsvp_te_active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample>();
        c->parent = this;
        rsvp_te_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "rsvp-te-previous-interval-sample")
    {
        for(auto const & c : rsvp_te_previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample>();
        c->parent = this;
        rsvp_te_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvp_te_active_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rsvp_te_previous_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-active-interval-sample" || name == "rsvp-te-previous-interval-sample")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::RsvpTeActiveIntervalSample()
    :
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    total_rate{YType::uint64, "total-rate"}
{

    yang_name = "rsvp-te-active-interval-sample"; yang_parent_name = "rsvp-te-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::~RsvpTeActiveIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_data() const
{
    return non_rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp_nanosec.is_set
	|| total_packet_rate.is_set
	|| total_rate.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(total_packet_rate.yfilter)
	|| ydk::is_set(total_rate.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.yfilter)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
        non_rsvp_te_packet_rate.value_namespace = name_space;
        non_rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
        rsvp_te_packet_rate.value_namespace = name_space;
        rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
        total_packet_rate.value_namespace = name_space;
        total_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-packet-rate" || name == "non-rsvp-te-rate" || name == "rsvp-te-packet-rate" || name == "rsvp-te-rate" || name == "timestamp-nanosec" || name == "total-packet-rate" || name == "total-rate")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::RsvpTePreviousIntervalSample()
    :
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    total_rate{YType::uint64, "total-rate"}
{

    yang_name = "rsvp-te-previous-interval-sample"; yang_parent_name = "rsvp-te-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::~RsvpTePreviousIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_data() const
{
    return non_rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp_nanosec.is_set
	|| total_packet_rate.is_set
	|| total_rate.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(total_packet_rate.yfilter)
	|| ydk::is_set(total_rate.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.yfilter)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
        non_rsvp_te_packet_rate.value_namespace = name_space;
        non_rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
        rsvp_te_packet_rate.value_namespace = name_space;
        rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
        total_packet_rate.value_namespace = name_space;
        total_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-packet-rate" || name == "non-rsvp-te-rate" || name == "rsvp-te-packet-rate" || name == "rsvp-te-rate" || name == "timestamp-nanosec" || name == "total-packet-rate" || name == "total-rate")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrSampleHistory()
{

    yang_name = "sr-sample-history"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::~SrSampleHistory()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_data() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-active-interval-sample")
    {
        for(auto const & c : sr_active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample>();
        c->parent = this;
        sr_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-previous-interval-sample")
    {
        for(auto const & c : sr_previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample>();
        c->parent = this;
        sr_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_active_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_previous_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-active-interval-sample" || name == "sr-previous-interval-sample")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::SrActiveIntervalSample()
    :
    sr_packet_rate{YType::uint64, "sr-packet-rate"},
    sr_rate{YType::uint64, "sr-rate"},
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"}
{

    yang_name = "sr-active-interval-sample"; yang_parent_name = "sr-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::~SrActiveIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_data() const
{
    return sr_packet_rate.is_set
	|| sr_rate.is_set
	|| timestamp_nanosec.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_packet_rate.yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_packet_rate.is_set || is_set(sr_packet_rate.yfilter)) leaf_name_data.push_back(sr_packet_rate.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate = value;
        sr_packet_rate.value_namespace = name_space;
        sr_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate.yfilter = yfilter;
    }
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-packet-rate" || name == "sr-rate" || name == "timestamp-nanosec")
        return true;
    return false;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::SrPreviousIntervalSample()
    :
    sr_packet_rate{YType::uint64, "sr-packet-rate"},
    sr_rate{YType::uint64, "sr-rate"},
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"}
{

    yang_name = "sr-previous-interval-sample"; yang_parent_name = "sr-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::~SrPreviousIntervalSample()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_data() const
{
    return sr_packet_rate.is_set
	|| sr_rate.is_set
	|| timestamp_nanosec.is_set;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_packet_rate.yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_packet_rate.is_set || is_set(sr_packet_rate.yfilter)) leaf_name_data.push_back(sr_packet_rate.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate = value;
        sr_packet_rate.value_namespace = name_space;
        sr_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate.yfilter = yfilter;
    }
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-packet-rate" || name == "sr-rate" || name == "timestamp-nanosec")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocation()
    :
    bandwidth_allocation_links(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks>())
	,global(std::make_shared<MplsLcac::BandwidthAllocation::Global>())
{
    bandwidth_allocation_links->parent = this;
    global->parent = this;

    yang_name = "bandwidth-allocation"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAllocation::~BandwidthAllocation()
{
}

bool MplsLcac::BandwidthAllocation::has_data() const
{
    return (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool MplsLcac::BandwidthAllocation::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsLcac::BandwidthAllocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-allocation-links")
    {
        if(bandwidth_allocation_links == nullptr)
        {
            bandwidth_allocation_links = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks>();
        }
        return bandwidth_allocation_links;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcac::BandwidthAllocation::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_allocation_links != nullptr)
    {
        children["bandwidth-allocation-links"] = bandwidth_allocation_links;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAllocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAllocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-allocation-links" || name == "global")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLinks()
{

    yang_name = "bandwidth-allocation-links"; yang_parent_name = "bandwidth-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::~BandwidthAllocationLinks()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-allocation-link")
    {
        for(auto const & c : bandwidth_allocation_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink>();
        c->parent = this;
        bandwidth_allocation_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth_allocation_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-allocation-link")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::BandwidthAllocationLink()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth_descriptors{YType::uint16, "bandwidth-descriptors"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    flooding_down_thresholds_are_default{YType::boolean, "flooding-down-thresholds-are-default"},
    flooding_down_thresholds_are_global{YType::boolean, "flooding-down-thresholds-are-global"},
    flooding_up_thresholds_are_default{YType::boolean, "flooding-up-thresholds-are-default"},
    flooding_up_thresholds_are_global{YType::boolean, "flooding-up-thresholds-are-global"},
    total_bandwidth_descriptors{YType::uint16, "total-bandwidth-descriptors"}
    	,
    downstream_bandwidth(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>())
	,link_common(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>())
	,upstream_bandwidth(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>())
{
    downstream_bandwidth->parent = this;
    link_common->parent = this;
    upstream_bandwidth->parent = this;

    yang_name = "bandwidth-allocation-link"; yang_parent_name = "bandwidth-allocation-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::~BandwidthAllocationLink()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_data() const
{
    for (std::size_t index=0; index<flooding_down_threshold.size(); index++)
    {
        if(flooding_down_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flooding_up_threshold.size(); index++)
    {
        if(flooding_up_threshold[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| bandwidth_descriptors.is_set
	|| bandwidth_pool.is_set
	|| flooding_down_thresholds_are_default.is_set
	|| flooding_down_thresholds_are_global.is_set
	|| flooding_up_thresholds_are_default.is_set
	|| flooding_up_thresholds_are_global.is_set
	|| total_bandwidth_descriptors.is_set
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_data())
	|| (link_common !=  nullptr && link_common->has_data())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_data());
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_operation() const
{
    for (std::size_t index=0; index<flooding_down_threshold.size(); index++)
    {
        if(flooding_down_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flooding_up_threshold.size(); index++)
    {
        if(flooding_up_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bandwidth_descriptors.yfilter)
	|| ydk::is_set(bandwidth_pool.yfilter)
	|| ydk::is_set(flooding_down_thresholds_are_default.yfilter)
	|| ydk::is_set(flooding_down_thresholds_are_global.yfilter)
	|| ydk::is_set(flooding_up_thresholds_are_default.yfilter)
	|| ydk::is_set(flooding_up_thresholds_are_global.yfilter)
	|| ydk::is_set(total_bandwidth_descriptors.yfilter)
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_operation())
	|| (link_common !=  nullptr && link_common->has_operation())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_operation());
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/bandwidth-allocation-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth_descriptors.is_set || is_set(bandwidth_descriptors.yfilter)) leaf_name_data.push_back(bandwidth_descriptors.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.yfilter)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (flooding_down_thresholds_are_default.is_set || is_set(flooding_down_thresholds_are_default.yfilter)) leaf_name_data.push_back(flooding_down_thresholds_are_default.get_name_leafdata());
    if (flooding_down_thresholds_are_global.is_set || is_set(flooding_down_thresholds_are_global.yfilter)) leaf_name_data.push_back(flooding_down_thresholds_are_global.get_name_leafdata());
    if (flooding_up_thresholds_are_default.is_set || is_set(flooding_up_thresholds_are_default.yfilter)) leaf_name_data.push_back(flooding_up_thresholds_are_default.get_name_leafdata());
    if (flooding_up_thresholds_are_global.is_set || is_set(flooding_up_thresholds_are_global.yfilter)) leaf_name_data.push_back(flooding_up_thresholds_are_global.get_name_leafdata());
    if (total_bandwidth_descriptors.is_set || is_set(total_bandwidth_descriptors.yfilter)) leaf_name_data.push_back(total_bandwidth_descriptors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "downstream-bandwidth")
    {
        if(downstream_bandwidth == nullptr)
        {
            downstream_bandwidth = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>();
        }
        return downstream_bandwidth;
    }

    if(child_yang_name == "flooding-down-threshold")
    {
        for(auto const & c : flooding_down_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold>();
        c->parent = this;
        flooding_down_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "flooding-up-threshold")
    {
        for(auto const & c : flooding_up_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold>();
        c->parent = this;
        flooding_up_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "link-common")
    {
        if(link_common == nullptr)
        {
            link_common = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>();
        }
        return link_common;
    }

    if(child_yang_name == "upstream-bandwidth")
    {
        if(upstream_bandwidth == nullptr)
        {
            upstream_bandwidth = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>();
        }
        return upstream_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(downstream_bandwidth != nullptr)
    {
        children["downstream-bandwidth"] = downstream_bandwidth;
    }

    for (auto const & c : flooding_down_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : flooding_up_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    if(link_common != nullptr)
    {
        children["link-common"] = link_common;
    }

    if(upstream_bandwidth != nullptr)
    {
        children["upstream-bandwidth"] = upstream_bandwidth;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors = value;
        bandwidth_descriptors.value_namespace = name_space;
        bandwidth_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
        bandwidth_pool.value_namespace = name_space;
        bandwidth_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default = value;
        flooding_down_thresholds_are_default.value_namespace = name_space;
        flooding_down_thresholds_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global = value;
        flooding_down_thresholds_are_global.value_namespace = name_space;
        flooding_down_thresholds_are_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default = value;
        flooding_up_thresholds_are_default.value_namespace = name_space;
        flooding_up_thresholds_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global = value;
        flooding_up_thresholds_are_global.value_namespace = name_space;
        flooding_up_thresholds_are_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors = value;
        total_bandwidth_descriptors.value_namespace = name_space;
        total_bandwidth_descriptors.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool.yfilter = yfilter;
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default.yfilter = yfilter;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global.yfilter = yfilter;
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default.yfilter = yfilter;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream-bandwidth" || name == "flooding-down-threshold" || name == "flooding-up-threshold" || name == "link-common" || name == "upstream-bandwidth" || name == "interface-name" || name == "bandwidth-descriptors" || name == "bandwidth-pool" || name == "flooding-down-thresholds-are-default" || name == "flooding-down-thresholds-are-global" || name == "flooding-up-thresholds-are-default" || name == "flooding-up-thresholds-are-global" || name == "total-bandwidth-descriptors")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::DownstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"}
{

    yang_name = "downstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::~DownstreamBandwidth()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| bandwidth_units.is_set
	|| is_admission_method_allocated_bandwidth.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_direction.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(is_admission_method_allocated_bandwidth.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.yfilter)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.yfilter)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-pool0")
    {
        for(auto const & c : bandwidth_pool0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        for(auto const & c : bandwidth_pool1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth_pool0)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bandwidth_pool1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
        bandwidth_direction.value_namespace = name_space;
        bandwidth_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
        is_admission_method_allocated_bandwidth.value_namespace = name_space;
        is_admission_method_allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-pool0" || name == "bandwidth-pool1" || name == "bandwidth-direction" || name == "bandwidth-units" || name == "is-admission-method-allocated-bandwidth")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool0"; yang_parent_name = "downstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "held-amount" || name == "hold-priority" || name == "locked-amount" || name == "total-held-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool1"; yang_parent_name = "downstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "held-amount" || name == "hold-priority" || name == "locked-amount" || name == "total-held-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::FloodingDownThreshold()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "flooding-down-threshold"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::~FloodingDownThreshold()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-down-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::FloodingUpThreshold()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "flooding-up-threshold"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::~FloodingUpThreshold()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-up-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkCommon()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    capability{YType::uint32, "capability"},
    has_protection{YType::boolean, "has-protection"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    link_address{YType::str, "link-address"},
    link_id{YType::str, "link-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    resource_provider{YType::enumeration, "resource-provider"},
    working_priority{YType::uint32, "working-priority"}
    	,
    link_flags(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;

    yang_name = "link-common"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::~LinkCommon()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return bandwidth_units.is_set
	|| bcm_id.is_set
	|| capability.is_set
	|| has_protection.is_set
	|| igp_neighbors.is_set
	|| inbound_admission_method.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| is_resource_provider_installed.is_set
	|| is_unnumbered.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| outbound_admission_method.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| physical_bandwidth.is_set
	|| resource_provider.is_set
	|| working_priority.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(has_protection.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| ydk::is_set(inbound_admission_method.yfilter)
	|| ydk::is_set(incoming_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(is_resource_provider_installed.yfilter)
	|| ydk::is_set(is_unnumbered.yfilter)
	|| ydk::is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(maximum_reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(maximum_reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(outbound_admission_method.yfilter)
	|| ydk::is_set(outgoing_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(resource_provider.yfilter)
	|| ydk::is_set(working_priority.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.yfilter)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.yfilter)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.yfilter)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.yfilter)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.yfilter)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.yfilter)) leaf_name_data.push_back(working_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooded-areas")
    {
        for(auto const & c : flooded_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        for(auto const & c : interface_switching_capability_descriptor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(c);
        return c;
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flooded_areas)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_switching_capability_descriptor)
    {
        children[c->get_segment_path()] = c;
    }

    if(link_flags != nullptr)
    {
        children["link-flags"] = link_flags;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
        has_protection.value_namespace = name_space;
        has_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
        inbound_admission_method.value_namespace = name_space;
        inbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
        incoming_reservable_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
        is_resource_provider_installed.value_namespace = name_space;
        is_resource_provider_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace = name_space;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
        maximum_reservable_bandwidth.value_namespace = name_space;
        maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
        maximum_reservable_pool0_bandwidth.value_namespace = name_space;
        maximum_reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
        maximum_reservable_pool1_bandwidth.value_namespace = name_space;
        maximum_reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
        outbound_admission_method.value_namespace = name_space;
        outbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
        outgoing_reservable_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
        resource_provider.value_namespace = name_space;
        resource_provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
        working_priority.value_namespace = name_space;
        working_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "has-protection")
    {
        has_protection.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed.yfilter = yfilter;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "resource-provider")
    {
        resource_provider.yfilter = yfilter;
    }
    if(value_path == "working-priority")
    {
        working_priority.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-areas" || name == "interface-switching-capability-descriptor" || name == "link-flags" || name == "shared-risk-link-group" || name == "bandwidth-units" || name == "bcm-id" || name == "capability" || name == "has-protection" || name == "igp-neighbors" || name == "inbound-admission-method" || name == "incoming-reservable-bandwidth-percentage" || name == "incoming-reservable-pool0-bandwidth-percentage" || name == "incoming-reservable-pool1-bandwidth-percentage" || name == "is-resource-provider-installed" || name == "is-unnumbered" || name == "last-flooded-effective-maximum-reservable-bandwidth" || name == "link-address" || name == "link-id" || name == "maximum-reservable-bandwidth" || name == "maximum-reservable-pool0-bandwidth" || name == "maximum-reservable-pool1-bandwidth" || name == "outbound-admission-method" || name == "outgoing-reservable-bandwidth-percentage" || name == "outgoing-reservable-pool0-bandwidth-percentage" || name == "outgoing-reservable-pool1-bandwidth-percentage" || name == "physical-bandwidth" || name == "resource-provider" || name == "working-priority")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{

    yang_name = "flooded-areas"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flooded_area.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.yfilter)) leaf_name_data.push_back(flooded_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
        flooded_area.value_namespace = name_space;
        flooded_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooded-area")
    {
        flooded_area.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-area")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    encoding{YType::uint8, "encoding"},
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"}
{

    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return encoding.is_set
	|| key.is_set
	|| switching_capability.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(switching_capability.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.yfilter)) leaf_name_data.push_back(switching_capability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
        switching_capability.value_namespace = name_space;
        switching_capability.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "switching-capability")
    {
        switching_capability.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encoding" || name == "key" || name == "switching-capability")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::LinkFlags()
    :
    is_admin_up{YType::boolean, "is-admin-up"},
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"}
{

    yang_name = "link-flags"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_data() const
{
    return is_admin_up.is_set
	|| is_mpls_te_on.is_set
	|| signaling_agent.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_admin_up.yfilter)
	|| ydk::is_set(is_mpls_te_on.yfilter)
	|| ydk::is_set(signaling_agent.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_up.is_set || is_set(is_admin_up.yfilter)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());
    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.yfilter)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.yfilter)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
        is_admin_up.value_namespace = name_space;
        is_admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
        is_mpls_te_on.value_namespace = name_space;
        is_mpls_te_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
        signaling_agent.value_namespace = name_space;
        signaling_agent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up.yfilter = yfilter;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on.yfilter = yfilter;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-admin-up" || name == "is-mpls-te-on" || name == "signaling-agent")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::UpstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"}
{

    yang_name = "upstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::~UpstreamBandwidth()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| bandwidth_units.is_set
	|| is_admission_method_allocated_bandwidth.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_direction.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(is_admission_method_allocated_bandwidth.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upstream-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.yfilter)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.yfilter)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-pool0")
    {
        for(auto const & c : bandwidth_pool0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        for(auto const & c : bandwidth_pool1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth_pool0)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bandwidth_pool1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
        bandwidth_direction.value_namespace = name_space;
        bandwidth_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
        is_admission_method_allocated_bandwidth.value_namespace = name_space;
        is_admission_method_allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-pool0" || name == "bandwidth-pool1" || name == "bandwidth-direction" || name == "bandwidth-units" || name == "is-admission-method-allocated-bandwidth")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool0"; yang_parent_name = "upstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "held-amount" || name == "hold-priority" || name == "locked-amount" || name == "total-held-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool1"; yang_parent_name = "upstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "held-amount" || name == "hold-priority" || name == "locked-amount" || name == "total-held-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcac::BandwidthAllocation::Global::Global()
    :
    bandwidth_hold_time{YType::uint16, "bandwidth-hold-time"},
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"}
{

    yang_name = "global"; yang_parent_name = "bandwidth-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BandwidthAllocation::Global::~Global()
{
}

bool MplsLcac::BandwidthAllocation::Global::has_data() const
{
    return bandwidth_hold_time.is_set
	|| is_role_standby.is_set
	|| links.is_set;
}

bool MplsLcac::BandwidthAllocation::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_hold_time.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter);
}

std::string MplsLcac::BandwidthAllocation::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BandwidthAllocation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BandwidthAllocation::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold_time.is_set || is_set(bandwidth_hold_time.yfilter)) leaf_name_data.push_back(bandwidth_hold_time.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BandwidthAllocation::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BandwidthAllocation::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time = value;
        bandwidth_hold_time.value_namespace = name_space;
        bandwidth_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BandwidthAllocation::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool MplsLcac::BandwidthAllocation::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-hold-time" || name == "is-role-standby" || name == "links")
        return true;
    return false;
}

MplsLcac::BfdNeighbors::BfdNeighbors()
{

    yang_name = "bfd-neighbors"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BfdNeighbors::~BfdNeighbors()
{
}

bool MplsLcac::BfdNeighbors::has_data() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BfdNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::BfdNeighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BfdNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BfdNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-neighbor")
    {
        for(auto const & c : bfd_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BfdNeighbors::BfdNeighbor>();
        c->parent = this;
        bfd_neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BfdNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BfdNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::BfdNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::BfdNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-neighbor")
        return true;
    return false;
}

MplsLcac::BfdNeighbors::BfdNeighbor::BfdNeighbor()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "bfd-neighbor"; yang_parent_name = "bfd-neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::BfdNeighbors::BfdNeighbor::~BfdNeighbor()
{
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLcac::BfdNeighbors::BfdNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bfd-neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::BfdNeighbors::BfdNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbor" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BfdNeighbors::BfdNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::BfdNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BfdNeighbors::BfdNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::BfdNeighbors::BfdNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BfdNeighbors::BfdNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::Neighbor()
    :
    is_bfd_up{YType::boolean, "is-bfd-up"},
    neighbor_address{YType::str, "neighbor-address"}
{

    yang_name = "neighbor"; yang_parent_name = "bfd-neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::~Neighbor()
{
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::has_data() const
{
    return is_bfd_up.is_set
	|| neighbor_address.is_set;
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_bfd_up.yfilter)
	|| ydk::is_set(neighbor_address.yfilter);
}

std::string MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bfd_up.is_set || is_set(is_bfd_up.yfilter)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
        is_bfd_up.value_namespace = name_space;
        is_bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bfd-up" || name == "neighbor-address")
        return true;
    return false;
}

MplsLcac::Gmpls::Gmpls()
    :
    nni(std::make_shared<MplsLcac::Gmpls::Nni>())
	,uni(std::make_shared<MplsLcac::Gmpls::Uni>())
{
    nni->parent = this;
    uni->parent = this;

    yang_name = "gmpls"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Gmpls::~Gmpls()
{
}

bool MplsLcac::Gmpls::has_data() const
{
    return (nni !=  nullptr && nni->has_data())
	|| (uni !=  nullptr && uni->has_data());
}

bool MplsLcac::Gmpls::has_operation() const
{
    return is_set(yfilter)
	|| (nni !=  nullptr && nni->has_operation())
	|| (uni !=  nullptr && uni->has_operation());
}

std::string MplsLcac::Gmpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Gmpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Gmpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nni")
    {
        if(nni == nullptr)
        {
            nni = std::make_shared<MplsLcac::Gmpls::Nni>();
        }
        return nni;
    }

    if(child_yang_name == "uni")
    {
        if(uni == nullptr)
        {
            uni = std::make_shared<MplsLcac::Gmpls::Uni>();
        }
        return uni;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Gmpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nni != nullptr)
    {
        children["nni"] = nni;
    }

    if(uni != nullptr)
    {
        children["uni"] = uni;
    }

    return children;
}

void MplsLcac::Gmpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Gmpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Gmpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nni" || name == "uni")
        return true;
    return false;
}

MplsLcac::Gmpls::Nni::Nni()
{

    yang_name = "nni"; yang_parent_name = "gmpls"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Gmpls::Nni::~Nni()
{
}

bool MplsLcac::Gmpls::Nni::has_data() const
{
    return false;
}

bool MplsLcac::Gmpls::Nni::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsLcac::Gmpls::Nni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/gmpls/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Gmpls::Nni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Gmpls::Nni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::Nni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Gmpls::Nni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Gmpls::Nni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Gmpls::Nni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Gmpls::Nni::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsLcac::Gmpls::Uni::Uni()
{

    yang_name = "uni"; yang_parent_name = "gmpls"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Gmpls::Uni::~Uni()
{
}

bool MplsLcac::Gmpls::Uni::has_data() const
{
    return false;
}

bool MplsLcac::Gmpls::Uni::has_operation() const
{
    return is_set(yfilter);
}

std::string MplsLcac::Gmpls::Uni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/gmpls/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Gmpls::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Gmpls::Uni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Gmpls::Uni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Gmpls::Uni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Gmpls::Uni::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Gmpls::Uni::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

MplsLcac::LinkInformation::LinkInformation()
    :
    global(std::make_shared<MplsLcac::LinkInformation::Global>())
	,links(std::make_shared<MplsLcac::LinkInformation::Links>())
{
    global->parent = this;
    links->parent = this;

    yang_name = "link-information"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkInformation::~LinkInformation()
{
}

bool MplsLcac::LinkInformation::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (links !=  nullptr && links->has_data());
}

bool MplsLcac::LinkInformation::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsLcac::LinkInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcac::LinkInformation::Global>();
        }
        return global;
    }

    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsLcac::LinkInformation::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(links != nullptr)
    {
        children["links"] = links;
    }

    return children;
}

void MplsLcac::LinkInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "links")
        return true;
    return false;
}

MplsLcac::LinkInformation::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
{

    yang_name = "global"; yang_parent_name = "link-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkInformation::Global::~Global()
{
}

bool MplsLcac::LinkInformation::Global::has_data() const
{
    return is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set;
}

bool MplsLcac::LinkInformation::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(maximum_links.yfilter);
}

std::string MplsLcac::LinkInformation::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkInformation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.yfilter)) leaf_name_data.push_back(maximum_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
        maximum_links.value_namespace = name_space;
        maximum_links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "maximum-links")
    {
        maximum_links.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-role-standby" || name == "links" || name == "maximum-links")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Links()
{

    yang_name = "links"; yang_parent_name = "link-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkInformation::Links::~Links()
{
}

bool MplsLcac::LinkInformation::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::LinkInformation::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::LinkInformation::Links::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkInformation::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"},
    is_attribute_incomplete{YType::boolean, "is-attribute-incomplete"},
    is_name_based_attribute{YType::boolean, "is-name-based-attribute"},
    is_te_metric_valid{YType::boolean, "is-te-metric-valid"},
    link_attributes{YType::uint32, "link-attributes"},
    maximum_reservation_bandwidth_mam{YType::uint64, "maximum-reservation-bandwidth-mam"},
    maximum_reservation_bandwidth_rdm{YType::uint64, "maximum-reservation-bandwidth-rdm"},
    reason_not_flooded{YType::str, "reason-not-flooded"},
    reservable_pool0_bandwidth_mam{YType::uint64, "reservable-pool0-bandwidth-mam"},
    reservable_pool0_bandwidth_rdm{YType::uint64, "reservable-pool0-bandwidth-rdm"},
    reservable_pool1_bandwidth_mam{YType::uint64, "reservable-pool1-bandwidth-mam"},
    reservable_pool1_bandwidth_rdm{YType::uint64, "reservable-pool1-bandwidth-rdm"},
    te_metric{YType::uint32, "te-metric"}
    	,
    bandwidth_account(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount>())
	,hw_oor(std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor>())
	,link_common(std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon>())
{
    bandwidth_account->parent = this;
    hw_oor->parent = this;
    link_common->parent = this;

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkInformation::Links::Link::~Link()
{
}

bool MplsLcac::LinkInformation::Links::Link::has_data() const
{
    for (std::size_t index=0; index<affinity_map.size(); index++)
    {
        if(affinity_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_extended_attribute.size(); index++)
    {
        if(link_extended_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_forwad_ref_value.size(); index++)
    {
        if(link_forwad_ref_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lockout.size(); index++)
    {
        if(lockout[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_attribute_incomplete.is_set
	|| is_name_based_attribute.is_set
	|| is_te_metric_valid.is_set
	|| link_attributes.is_set
	|| maximum_reservation_bandwidth_mam.is_set
	|| maximum_reservation_bandwidth_rdm.is_set
	|| reason_not_flooded.is_set
	|| reservable_pool0_bandwidth_mam.is_set
	|| reservable_pool0_bandwidth_rdm.is_set
	|| reservable_pool1_bandwidth_mam.is_set
	|| reservable_pool1_bandwidth_rdm.is_set
	|| te_metric.is_set
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (hw_oor !=  nullptr && hw_oor->has_data())
	|| (link_common !=  nullptr && link_common->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::has_operation() const
{
    for (std::size_t index=0; index<affinity_map.size(); index++)
    {
        if(affinity_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_extended_attribute.size(); index++)
    {
        if(link_extended_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_forwad_ref_value.size(); index++)
    {
        if(link_forwad_ref_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lockout.size(); index++)
    {
        if(lockout[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_attribute_incomplete.yfilter)
	|| ydk::is_set(is_name_based_attribute.yfilter)
	|| ydk::is_set(is_te_metric_valid.yfilter)
	|| ydk::is_set(link_attributes.yfilter)
	|| ydk::is_set(maximum_reservation_bandwidth_mam.yfilter)
	|| ydk::is_set(maximum_reservation_bandwidth_rdm.yfilter)
	|| ydk::is_set(reason_not_flooded.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth_mam.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth_rdm.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth_mam.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth_rdm.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (hw_oor !=  nullptr && hw_oor->has_operation())
	|| (link_common !=  nullptr && link_common->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-information/links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkInformation::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_attribute_incomplete.is_set || is_set(is_attribute_incomplete.yfilter)) leaf_name_data.push_back(is_attribute_incomplete.get_name_leafdata());
    if (is_name_based_attribute.is_set || is_set(is_name_based_attribute.yfilter)) leaf_name_data.push_back(is_name_based_attribute.get_name_leafdata());
    if (is_te_metric_valid.is_set || is_set(is_te_metric_valid.yfilter)) leaf_name_data.push_back(is_te_metric_valid.get_name_leafdata());
    if (link_attributes.is_set || is_set(link_attributes.yfilter)) leaf_name_data.push_back(link_attributes.get_name_leafdata());
    if (maximum_reservation_bandwidth_mam.is_set || is_set(maximum_reservation_bandwidth_mam.yfilter)) leaf_name_data.push_back(maximum_reservation_bandwidth_mam.get_name_leafdata());
    if (maximum_reservation_bandwidth_rdm.is_set || is_set(maximum_reservation_bandwidth_rdm.yfilter)) leaf_name_data.push_back(maximum_reservation_bandwidth_rdm.get_name_leafdata());
    if (reason_not_flooded.is_set || is_set(reason_not_flooded.yfilter)) leaf_name_data.push_back(reason_not_flooded.get_name_leafdata());
    if (reservable_pool0_bandwidth_mam.is_set || is_set(reservable_pool0_bandwidth_mam.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth_mam.get_name_leafdata());
    if (reservable_pool0_bandwidth_rdm.is_set || is_set(reservable_pool0_bandwidth_rdm.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth_rdm.get_name_leafdata());
    if (reservable_pool1_bandwidth_mam.is_set || is_set(reservable_pool1_bandwidth_mam.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth_mam.get_name_leafdata());
    if (reservable_pool1_bandwidth_rdm.is_set || is_set(reservable_pool1_bandwidth_rdm.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth_rdm.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-map")
    {
        for(auto const & c : affinity_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::AffinityMap>();
        c->parent = this;
        affinity_map.push_back(c);
        return c;
    }

    if(child_yang_name == "areas")
    {
        for(auto const & c : areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::Areas>();
        c->parent = this;
        areas.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account == nullptr)
        {
            bandwidth_account = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount>();
        }
        return bandwidth_account;
    }

    if(child_yang_name == "hw-oor")
    {
        if(hw_oor == nullptr)
        {
            hw_oor = std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor>();
        }
        return hw_oor;
    }

    if(child_yang_name == "link-common")
    {
        if(link_common == nullptr)
        {
            link_common = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon>();
        }
        return link_common;
    }

    if(child_yang_name == "link-extended-attribute")
    {
        for(auto const & c : link_extended_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute>();
        c->parent = this;
        link_extended_attribute.push_back(c);
        return c;
    }

    if(child_yang_name == "link-forwad-ref-value")
    {
        for(auto const & c : link_forwad_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue>();
        c->parent = this;
        link_forwad_ref_value.push_back(c);
        return c;
    }

    if(child_yang_name == "lockout")
    {
        for(auto const & c : lockout)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::Lockout>();
        c->parent = this;
        lockout.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : affinity_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : areas)
    {
        children[c->get_segment_path()] = c;
    }

    if(bandwidth_account != nullptr)
    {
        children["bandwidth-account"] = bandwidth_account;
    }

    if(hw_oor != nullptr)
    {
        children["hw-oor"] = hw_oor;
    }

    if(link_common != nullptr)
    {
        children["link-common"] = link_common;
    }

    for (auto const & c : link_extended_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : link_forwad_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lockout)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-incomplete")
    {
        is_attribute_incomplete = value;
        is_attribute_incomplete.value_namespace = name_space;
        is_attribute_incomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-name-based-attribute")
    {
        is_name_based_attribute = value;
        is_name_based_attribute.value_namespace = name_space;
        is_name_based_attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-te-metric-valid")
    {
        is_te_metric_valid = value;
        is_te_metric_valid.value_namespace = name_space;
        is_te_metric_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-attributes")
    {
        link_attributes = value;
        link_attributes.value_namespace = name_space;
        link_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservation-bandwidth-mam")
    {
        maximum_reservation_bandwidth_mam = value;
        maximum_reservation_bandwidth_mam.value_namespace = name_space;
        maximum_reservation_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservation-bandwidth-rdm")
    {
        maximum_reservation_bandwidth_rdm = value;
        maximum_reservation_bandwidth_rdm.value_namespace = name_space;
        maximum_reservation_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason-not-flooded")
    {
        reason_not_flooded = value;
        reason_not_flooded.value_namespace = name_space;
        reason_not_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth-mam")
    {
        reservable_pool0_bandwidth_mam = value;
        reservable_pool0_bandwidth_mam.value_namespace = name_space;
        reservable_pool0_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth-rdm")
    {
        reservable_pool0_bandwidth_rdm = value;
        reservable_pool0_bandwidth_rdm.value_namespace = name_space;
        reservable_pool0_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth-mam")
    {
        reservable_pool1_bandwidth_mam = value;
        reservable_pool1_bandwidth_mam.value_namespace = name_space;
        reservable_pool1_bandwidth_mam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth-rdm")
    {
        reservable_pool1_bandwidth_rdm = value;
        reservable_pool1_bandwidth_rdm.value_namespace = name_space;
        reservable_pool1_bandwidth_rdm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-attribute-incomplete")
    {
        is_attribute_incomplete.yfilter = yfilter;
    }
    if(value_path == "is-name-based-attribute")
    {
        is_name_based_attribute.yfilter = yfilter;
    }
    if(value_path == "is-te-metric-valid")
    {
        is_te_metric_valid.yfilter = yfilter;
    }
    if(value_path == "link-attributes")
    {
        link_attributes.yfilter = yfilter;
    }
    if(value_path == "maximum-reservation-bandwidth-mam")
    {
        maximum_reservation_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "maximum-reservation-bandwidth-rdm")
    {
        maximum_reservation_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "reason-not-flooded")
    {
        reason_not_flooded.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth-mam")
    {
        reservable_pool0_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth-rdm")
    {
        reservable_pool0_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth-mam")
    {
        reservable_pool1_bandwidth_mam.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth-rdm")
    {
        reservable_pool1_bandwidth_rdm.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-map" || name == "areas" || name == "bandwidth-account" || name == "hw-oor" || name == "link-common" || name == "link-extended-attribute" || name == "link-forwad-ref-value" || name == "lockout" || name == "interface-name" || name == "is-attribute-incomplete" || name == "is-name-based-attribute" || name == "is-te-metric-valid" || name == "link-attributes" || name == "maximum-reservation-bandwidth-mam" || name == "maximum-reservation-bandwidth-rdm" || name == "reason-not-flooded" || name == "reservable-pool0-bandwidth-mam" || name == "reservable-pool0-bandwidth-rdm" || name == "reservable-pool1-bandwidth-mam" || name == "reservable-pool1-bandwidth-rdm" || name == "te-metric")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityMap()
    :
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_name{YType::str, "affinity-name"},
    affinity_table_id{YType::enumeration, "affinity-table-id"},
    affinity_value{YType::uint32, "affinity-value"}
{

    yang_name = "affinity-map"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::~AffinityMap()
{
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::has_data() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_data())
            return true;
    }
    return affinity_bit_position.is_set
	|| affinity_name.is_set
	|| affinity_table_id.is_set
	|| affinity_value.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::has_operation() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bit_position.yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(affinity_table_id.yfilter)
	|| ydk::is_set(affinity_value.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::AffinityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bit_position.is_set || is_set(affinity_bit_position.yfilter)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.yfilter)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.yfilter)) leaf_name_data.push_back(affinity_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-extended-value")
    {
        for(auto const & c : affinity_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue>();
        c->parent = this;
        affinity_extended_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::AffinityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : affinity_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::AffinityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
        affinity_bit_position.value_namespace = name_space;
        affinity_bit_position.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
        affinity_table_id.value_namespace = name_space;
        affinity_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
        affinity_value.value_namespace = name_space;
        affinity_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::AffinityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position.yfilter = yfilter;
    }
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id.yfilter = yfilter;
    }
    if(value_path == "affinity-value")
    {
        affinity_value.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-extended-value" || name == "affinity-bit-position" || name == "affinity-name" || name == "affinity-table-id" || name == "affinity-value")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::AffinityExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "affinity-extended-value"; yang_parent_name = "affinity-map"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::~AffinityExtendedValue()
{
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::AffinityMap::AffinityExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    igp_metric{YType::uint32, "igp-metric"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "areas"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::Areas::~Areas()
{
}

bool MplsLcac::LinkInformation::Links::Link::Areas::has_data() const
{
    return area_id.is_set
	|| igp_metric.is_set
	|| is_neighbor_up.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::Areas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(is_neighbor_up.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.yfilter)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
        is_neighbor_up.value_namespace = name_space;
        is_neighbor_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "igp-metric" || name == "is-neighbor-up" || name == "neighbor-address" || name == "neighbor-id")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_common_info(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>())
	,rsvp_te_bandwidth_sample_history(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory>())
	,sr_bandwidth_sample_history(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory>())
{
    bandwidth_account_common_info->parent = this;
    rsvp_te_bandwidth_sample_history->parent = this;
    sr_bandwidth_sample_history->parent = this;

    yang_name = "bandwidth-account"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::has_data() const
{
    return (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_data())
	|| (rsvp_te_bandwidth_sample_history !=  nullptr && rsvp_te_bandwidth_sample_history->has_data())
	|| (sr_bandwidth_sample_history !=  nullptr && sr_bandwidth_sample_history->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_operation())
	|| (rsvp_te_bandwidth_sample_history !=  nullptr && rsvp_te_bandwidth_sample_history->has_operation())
	|| (sr_bandwidth_sample_history !=  nullptr && sr_bandwidth_sample_history->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-common-info")
    {
        if(bandwidth_account_common_info == nullptr)
        {
            bandwidth_account_common_info = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>();
        }
        return bandwidth_account_common_info;
    }

    if(child_yang_name == "rsvp-te-bandwidth-sample-history")
    {
        if(rsvp_te_bandwidth_sample_history == nullptr)
        {
            rsvp_te_bandwidth_sample_history = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory>();
        }
        return rsvp_te_bandwidth_sample_history;
    }

    if(child_yang_name == "sr-bandwidth-sample-history")
    {
        if(sr_bandwidth_sample_history == nullptr)
        {
            sr_bandwidth_sample_history = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory>();
        }
        return sr_bandwidth_sample_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_account_common_info != nullptr)
    {
        children["bandwidth-account-common-info"] = bandwidth_account_common_info;
    }

    if(rsvp_te_bandwidth_sample_history != nullptr)
    {
        children["rsvp-te-bandwidth-sample-history"] = rsvp_te_bandwidth_sample_history;
    }

    if(sr_bandwidth_sample_history != nullptr)
    {
        children["sr-bandwidth-sample-history"] = sr_bandwidth_sample_history;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-common-info" || name == "rsvp-te-bandwidth-sample-history" || name == "sr-bandwidth-sample-history")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthAccountCommonInfo()
    :
    adjustment_factor{YType::uint32, "adjustment-factor"},
    application_enforced{YType::boolean, "application-enforced"},
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    collection_type{YType::enumeration, "collection-type"},
    down_threshold_max_reservable_bandwidth{YType::uint8, "down-threshold-max-reservable-bandwidth"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    last_application_timestamp{YType::uint32, "last-application-timestamp"},
    last_sample_collection_timestamp{YType::uint32, "last-sample-collection-timestamp"},
    max_reservable_bandwidth_threshold_are_default{YType::boolean, "max-reservable-bandwidth-threshold-are-default"},
    next_application{YType::uint32, "next-application"},
    next_sample_collection{YType::uint32, "next-sample-collection"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"},
    up_threshold_max_reservable_bandwidth{YType::uint8, "up-threshold-max-reservable-bandwidth"}
    	,
    rsvp_te_bandwidth_utilization(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization>())
	,sr_bandwidth_utilization(std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization>())
{
    rsvp_te_bandwidth_utilization->parent = this;
    sr_bandwidth_utilization->parent = this;

    yang_name = "bandwidth-account-common-info"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::~BandwidthAccountCommonInfo()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_data() const
{
    return adjustment_factor.is_set
	|| application_enforced.is_set
	|| application_interval.is_set
	|| application_time_remaining.is_set
	|| collection_type.is_set
	|| down_threshold_max_reservable_bandwidth.is_set
	|| is_bandwidth_account_enabled.is_set
	|| last_application_timestamp.is_set
	|| last_sample_collection_timestamp.is_set
	|| max_reservable_bandwidth_threshold_are_default.is_set
	|| next_application.is_set
	|| next_sample_collection.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set
	|| up_threshold_max_reservable_bandwidth.is_set
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_data())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_factor.yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(application_interval.yfilter)
	|| ydk::is_set(application_time_remaining.yfilter)
	|| ydk::is_set(collection_type.yfilter)
	|| ydk::is_set(down_threshold_max_reservable_bandwidth.yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(last_application_timestamp.yfilter)
	|| ydk::is_set(last_sample_collection_timestamp.yfilter)
	|| ydk::is_set(max_reservable_bandwidth_threshold_are_default.yfilter)
	|| ydk::is_set(next_application.yfilter)
	|| ydk::is_set(next_sample_collection.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_time_remaining.yfilter)
	|| ydk::is_set(up_threshold_max_reservable_bandwidth.yfilter)
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_operation())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_factor.is_set || is_set(adjustment_factor.yfilter)) leaf_name_data.push_back(adjustment_factor.get_name_leafdata());
    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.yfilter)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.yfilter)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (down_threshold_max_reservable_bandwidth.is_set || is_set(down_threshold_max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(down_threshold_max_reservable_bandwidth.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (last_application_timestamp.is_set || is_set(last_application_timestamp.yfilter)) leaf_name_data.push_back(last_application_timestamp.get_name_leafdata());
    if (last_sample_collection_timestamp.is_set || is_set(last_sample_collection_timestamp.yfilter)) leaf_name_data.push_back(last_sample_collection_timestamp.get_name_leafdata());
    if (max_reservable_bandwidth_threshold_are_default.is_set || is_set(max_reservable_bandwidth_threshold_are_default.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth_threshold_are_default.get_name_leafdata());
    if (next_application.is_set || is_set(next_application.yfilter)) leaf_name_data.push_back(next_application.get_name_leafdata());
    if (next_sample_collection.is_set || is_set(next_sample_collection.yfilter)) leaf_name_data.push_back(next_sample_collection.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.yfilter)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());
    if (up_threshold_max_reservable_bandwidth.is_set || is_set(up_threshold_max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(up_threshold_max_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-bandwidth-utilization")
    {
        if(rsvp_te_bandwidth_utilization == nullptr)
        {
            rsvp_te_bandwidth_utilization = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization>();
        }
        return rsvp_te_bandwidth_utilization;
    }

    if(child_yang_name == "sr-bandwidth-utilization")
    {
        if(sr_bandwidth_utilization == nullptr)
        {
            sr_bandwidth_utilization = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization>();
        }
        return sr_bandwidth_utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_te_bandwidth_utilization != nullptr)
    {
        children["rsvp-te-bandwidth-utilization"] = rsvp_te_bandwidth_utilization;
    }

    if(sr_bandwidth_utilization != nullptr)
    {
        children["sr-bandwidth-utilization"] = sr_bandwidth_utilization;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-factor")
    {
        adjustment_factor = value;
        adjustment_factor.value_namespace = name_space;
        adjustment_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-interval")
    {
        application_interval = value;
        application_interval.value_namespace = name_space;
        application_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
        application_time_remaining.value_namespace = name_space;
        application_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
        collection_type.value_namespace = name_space;
        collection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-threshold-max-reservable-bandwidth")
    {
        down_threshold_max_reservable_bandwidth = value;
        down_threshold_max_reservable_bandwidth.value_namespace = name_space;
        down_threshold_max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-timestamp")
    {
        last_application_timestamp = value;
        last_application_timestamp.value_namespace = name_space;
        last_application_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-collection-timestamp")
    {
        last_sample_collection_timestamp = value;
        last_sample_collection_timestamp.value_namespace = name_space;
        last_sample_collection_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth-threshold-are-default")
    {
        max_reservable_bandwidth_threshold_are_default = value;
        max_reservable_bandwidth_threshold_are_default.value_namespace = name_space;
        max_reservable_bandwidth_threshold_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-application")
    {
        next_application = value;
        next_application.value_namespace = name_space;
        next_application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-sample-collection")
    {
        next_sample_collection = value;
        next_sample_collection.value_namespace = name_space;
        next_sample_collection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
        sample_time_remaining.value_namespace = name_space;
        sample_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-threshold-max-reservable-bandwidth")
    {
        up_threshold_max_reservable_bandwidth = value;
        up_threshold_max_reservable_bandwidth.value_namespace = name_space;
        up_threshold_max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-factor")
    {
        adjustment_factor.yfilter = yfilter;
    }
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "application-interval")
    {
        application_interval.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining.yfilter = yfilter;
    }
    if(value_path == "collection-type")
    {
        collection_type.yfilter = yfilter;
    }
    if(value_path == "down-threshold-max-reservable-bandwidth")
    {
        down_threshold_max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "last-application-timestamp")
    {
        last_application_timestamp.yfilter = yfilter;
    }
    if(value_path == "last-sample-collection-timestamp")
    {
        last_sample_collection_timestamp.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth-threshold-are-default")
    {
        max_reservable_bandwidth_threshold_are_default.yfilter = yfilter;
    }
    if(value_path == "next-application")
    {
        next_application.yfilter = yfilter;
    }
    if(value_path == "next-sample-collection")
    {
        next_sample_collection.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining.yfilter = yfilter;
    }
    if(value_path == "up-threshold-max-reservable-bandwidth")
    {
        up_threshold_max_reservable_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "adjustment-factor" || name == "application-enforced" || name == "application-interval" || name == "application-time-remaining" || name == "collection-type" || name == "down-threshold-max-reservable-bandwidth" || name == "is-bandwidth-account-enabled" || name == "last-application-timestamp" || name == "last-sample-collection-timestamp" || name == "max-reservable-bandwidth-threshold-are-default" || name == "next-application" || name == "next-sample-collection" || name == "sample-interval" || name == "sample-time-remaining" || name == "up-threshold-max-reservable-bandwidth")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::RsvpTeBandwidthUtilization()
    :
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_adjusted_bandwidth_utilization{YType::uint64, "rsvp-te-adjusted-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    rsvp_te_enforced_bandwidth_utilization{YType::uint64, "rsvp-te-enforced-bandwidth-utilization"},
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"}
{

    yang_name = "rsvp-te-bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::~RsvpTeBandwidthUtilization()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_data() const
{
    return non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_adjusted_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_enforced_bandwidth_utilization.is_set
	|| total_link_bandwidth_utilization.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)
	|| ydk::is_set(total_link_bandwidth_utilization.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_adjusted_bandwidth_utilization.is_set || is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_adjusted_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_enforced_bandwidth_utilization.is_set || is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_enforced_bandwidth_utilization.get_name_leafdata());
    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.yfilter)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
        non_rsvp_te_bandwidth_utilization.value_namespace = name_space;
        non_rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization = value;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
        rsvp_te_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization = value;
        rsvp_te_enforced_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
        total_link_bandwidth_utilization.value_namespace = name_space;
        total_link_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::RsvpTeBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-bandwidth-utilization" || name == "rsvp-te-adjusted-bandwidth-utilization" || name == "rsvp-te-bandwidth-utilization" || name == "rsvp-te-enforced-bandwidth-utilization" || name == "total-link-bandwidth-utilization")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::SrBandwidthUtilization()
    :
    sr_adjusted_bandwidth_utilization{YType::uint64, "sr-adjusted-bandwidth-utilization"},
    sr_bandwidth_utilization{YType::uint64, "sr-bandwidth-utilization"},
    sr_enforced_bandwidth_utilization{YType::uint64, "sr-enforced-bandwidth-utilization"}
{

    yang_name = "sr-bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::~SrBandwidthUtilization()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_data() const
{
    return sr_adjusted_bandwidth_utilization.is_set
	|| sr_bandwidth_utilization.is_set
	|| sr_enforced_bandwidth_utilization.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_adjusted_bandwidth_utilization.is_set || is_set(sr_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_adjusted_bandwidth_utilization.get_name_leafdata());
    if (sr_bandwidth_utilization.is_set || is_set(sr_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_bandwidth_utilization.get_name_leafdata());
    if (sr_enforced_bandwidth_utilization.is_set || is_set(sr_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization = value;
        sr_adjusted_bandwidth_utilization.value_namespace = name_space;
        sr_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization = value;
        sr_bandwidth_utilization.value_namespace = name_space;
        sr_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization = value;
        sr_enforced_bandwidth_utilization.value_namespace = name_space;
        sr_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::SrBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-adjusted-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "sr-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeBandwidthSampleHistory()
{

    yang_name = "rsvp-te-bandwidth-sample-history"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::~RsvpTeBandwidthSampleHistory()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_data() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-active-interval-sample")
    {
        for(auto const & c : rsvp_te_active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample>();
        c->parent = this;
        rsvp_te_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "rsvp-te-previous-interval-sample")
    {
        for(auto const & c : rsvp_te_previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample>();
        c->parent = this;
        rsvp_te_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvp_te_active_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rsvp_te_previous_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-active-interval-sample" || name == "rsvp-te-previous-interval-sample")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::RsvpTeActiveIntervalSample()
    :
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"}
{

    yang_name = "rsvp-te-active-interval-sample"; yang_parent_name = "rsvp-te-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::~RsvpTeActiveIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_data() const
{
    return non_rsvp_te_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp.is_set
	|| total_rate.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(total_rate.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTeActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-rate" || name == "rsvp-te-rate" || name == "timestamp" || name == "total-rate")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::RsvpTePreviousIntervalSample()
    :
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"}
{

    yang_name = "rsvp-te-previous-interval-sample"; yang_parent_name = "rsvp-te-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::~RsvpTePreviousIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_data() const
{
    return non_rsvp_te_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp.is_set
	|| total_rate.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(total_rate.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::RsvpTeBandwidthSampleHistory::RsvpTePreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-rate" || name == "rsvp-te-rate" || name == "timestamp" || name == "total-rate")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrBandwidthSampleHistory()
{

    yang_name = "sr-bandwidth-sample-history"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::~SrBandwidthSampleHistory()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_data() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-active-interval-sample")
    {
        for(auto const & c : sr_active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample>();
        c->parent = this;
        sr_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-previous-interval-sample")
    {
        for(auto const & c : sr_previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample>();
        c->parent = this;
        sr_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_active_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_previous_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-active-interval-sample" || name == "sr-previous-interval-sample")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::SrActiveIntervalSample()
    :
    sr_rate{YType::uint64, "sr-rate"},
    timestamp{YType::uint32, "timestamp"}
{

    yang_name = "sr-active-interval-sample"; yang_parent_name = "sr-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::~SrActiveIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_data() const
{
    return sr_rate.is_set
	|| timestamp.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-rate" || name == "timestamp")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::SrPreviousIntervalSample()
    :
    sr_rate{YType::uint64, "sr-rate"},
    timestamp{YType::uint32, "timestamp"}
{

    yang_name = "sr-previous-interval-sample"; yang_parent_name = "sr-bandwidth-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::~SrPreviousIntervalSample()
{
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_data() const
{
    return sr_rate.is_set
	|| timestamp.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(timestamp.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::BandwidthAccount::SrBandwidthSampleHistory::SrPreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-rate" || name == "timestamp")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::HwOor::HwOor()
    :
    hw_o_or_green_recovery_time{YType::uint32, "hw-o-or-green-recovery-time"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    hw_oor_timestamp{YType::uint32, "hw-oor-timestamp"}
{

    yang_name = "hw-oor"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::HwOor::~HwOor()
{
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::has_data() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_data())
            return true;
    }
    return hw_o_or_green_recovery_time.is_set
	|| hw_oor_state.is_set
	|| hw_oor_timestamp.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::has_operation() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hw_o_or_green_recovery_time.yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(hw_oor_timestamp.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::HwOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-oor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::HwOor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_o_or_green_recovery_time.is_set || is_set(hw_o_or_green_recovery_time.yfilter)) leaf_name_data.push_back(hw_o_or_green_recovery_time.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (hw_oor_timestamp.is_set || is_set(hw_oor_timestamp.yfilter)) leaf_name_data.push_back(hw_oor_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::HwOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-o-or-link-statistic")
    {
        for(auto const & c : hw_o_or_link_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic>();
        c->parent = this;
        hw_o_or_link_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::HwOor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hw_o_or_link_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::HwOor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hw-o-or-green-recovery-time")
    {
        hw_o_or_green_recovery_time = value;
        hw_o_or_green_recovery_time.value_namespace = name_space;
        hw_o_or_green_recovery_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-timestamp")
    {
        hw_oor_timestamp = value;
        hw_oor_timestamp.value_namespace = name_space;
        hw_oor_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::HwOor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hw-o-or-green-recovery-time")
    {
        hw_o_or_green_recovery_time.yfilter = yfilter;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "hw-oor-timestamp")
    {
        hw_oor_timestamp.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-o-or-link-statistic" || name == "hw-o-or-green-recovery-time" || name == "hw-oor-state" || name == "hw-oor-timestamp")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::HwOOrLinkStatistic()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{

    yang_name = "hw-o-or-link-statistic"; yang_parent_name = "hw-oor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::~HwOOrLinkStatistic()
{
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| hw_oor_state.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(node_protection_disable_number.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(transitions.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-o-or-link-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.yfilter)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
        accepted_ls_ps_number.value_namespace = name_space;
        accepted_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
        accepted_reopt_ls_ps_number.value_namespace = name_space;
        accepted_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
        node_protection_disable_number.value_namespace = name_space;
        node_protection_disable_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "hw-oor-state" || name == "node-protection-disable-number" || name == "rejected-ls-ps-number" || name == "rejected-reopt-ls-ps-number" || name == "transitions")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkCommon()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    capability{YType::uint32, "capability"},
    has_protection{YType::boolean, "has-protection"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    link_address{YType::str, "link-address"},
    link_id{YType::str, "link-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    resource_provider{YType::enumeration, "resource-provider"},
    working_priority{YType::uint32, "working-priority"}
    	,
    link_flags(std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;

    yang_name = "link-common"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::~LinkCommon()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return bandwidth_units.is_set
	|| bcm_id.is_set
	|| capability.is_set
	|| has_protection.is_set
	|| igp_neighbors.is_set
	|| inbound_admission_method.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| is_resource_provider_installed.is_set
	|| is_unnumbered.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| outbound_admission_method.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| physical_bandwidth.is_set
	|| resource_provider.is_set
	|| working_priority.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(has_protection.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| ydk::is_set(inbound_admission_method.yfilter)
	|| ydk::is_set(incoming_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(is_resource_provider_installed.yfilter)
	|| ydk::is_set(is_unnumbered.yfilter)
	|| ydk::is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(maximum_reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(maximum_reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(outbound_admission_method.yfilter)
	|| ydk::is_set(outgoing_reservable_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)
	|| ydk::is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(resource_provider.yfilter)
	|| ydk::is_set(working_priority.yfilter)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.yfilter)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.yfilter)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.yfilter)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.yfilter)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.yfilter)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.yfilter)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.yfilter)) leaf_name_data.push_back(working_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooded-areas")
    {
        for(auto const & c : flooded_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(c);
        return c;
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        for(auto const & c : interface_switching_capability_descriptor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(c);
        return c;
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags == nullptr)
        {
            link_flags = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags>();
        }
        return link_flags;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flooded_areas)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface_switching_capability_descriptor)
    {
        children[c->get_segment_path()] = c;
    }

    if(link_flags != nullptr)
    {
        children["link-flags"] = link_flags;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
        has_protection.value_namespace = name_space;
        has_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
        inbound_admission_method.value_namespace = name_space;
        inbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
        incoming_reservable_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        incoming_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
        is_resource_provider_installed.value_namespace = name_space;
        is_resource_provider_installed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace = name_space;
        last_flooded_effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
        maximum_reservable_bandwidth.value_namespace = name_space;
        maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
        maximum_reservable_pool0_bandwidth.value_namespace = name_space;
        maximum_reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
        maximum_reservable_pool1_bandwidth.value_namespace = name_space;
        maximum_reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
        outbound_admission_method.value_namespace = name_space;
        outbound_admission_method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
        outgoing_reservable_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool0_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace = name_space;
        outgoing_reservable_pool1_bandwidth_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
        resource_provider.value_namespace = name_space;
        resource_provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
        working_priority.value_namespace = name_space;
        working_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "has-protection")
    {
        has_protection.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed.yfilter = yfilter;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "resource-provider")
    {
        resource_provider.yfilter = yfilter;
    }
    if(value_path == "working-priority")
    {
        working_priority.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-areas" || name == "interface-switching-capability-descriptor" || name == "link-flags" || name == "shared-risk-link-group" || name == "bandwidth-units" || name == "bcm-id" || name == "capability" || name == "has-protection" || name == "igp-neighbors" || name == "inbound-admission-method" || name == "incoming-reservable-bandwidth-percentage" || name == "incoming-reservable-pool0-bandwidth-percentage" || name == "incoming-reservable-pool1-bandwidth-percentage" || name == "is-resource-provider-installed" || name == "is-unnumbered" || name == "last-flooded-effective-maximum-reservable-bandwidth" || name == "link-address" || name == "link-id" || name == "maximum-reservable-bandwidth" || name == "maximum-reservable-pool0-bandwidth" || name == "maximum-reservable-pool1-bandwidth" || name == "outbound-admission-method" || name == "outgoing-reservable-bandwidth-percentage" || name == "outgoing-reservable-pool0-bandwidth-percentage" || name == "outgoing-reservable-pool1-bandwidth-percentage" || name == "physical-bandwidth" || name == "resource-provider" || name == "working-priority")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{

    yang_name = "flooded-areas"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flooded_area.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.yfilter)) leaf_name_data.push_back(flooded_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
        flooded_area.value_namespace = name_space;
        flooded_area.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooded-area")
    {
        flooded_area.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-area")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    encoding{YType::uint8, "encoding"},
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"}
{

    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return encoding.is_set
	|| key.is_set
	|| switching_capability.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encoding.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(switching_capability.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.yfilter)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.yfilter)) leaf_name_data.push_back(switching_capability.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encoding")
    {
        encoding = value;
        encoding.value_namespace = name_space;
        encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
        switching_capability.value_namespace = name_space;
        switching_capability.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encoding")
    {
        encoding.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "switching-capability")
    {
        switching_capability.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encoding" || name == "key" || name == "switching-capability")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::LinkFlags()
    :
    is_admin_up{YType::boolean, "is-admin-up"},
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"}
{

    yang_name = "link-flags"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_data() const
{
    return is_admin_up.is_set
	|| is_mpls_te_on.is_set
	|| signaling_agent.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_admin_up.yfilter)
	|| ydk::is_set(is_mpls_te_on.yfilter)
	|| ydk::is_set(signaling_agent.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_up.is_set || is_set(is_admin_up.yfilter)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());
    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.yfilter)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.yfilter)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
        is_admin_up.value_namespace = name_space;
        is_admin_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
        is_mpls_te_on.value_namespace = name_space;
        is_mpls_te_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
        signaling_agent.value_namespace = name_space;
        signaling_agent.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up.yfilter = yfilter;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on.yfilter = yfilter;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-admin-up" || name == "is-mpls-te-on" || name == "signaling-agent")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::LinkExtendedAttribute()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "link-extended-attribute"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::~LinkExtendedAttribute()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-extended-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkExtendedAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::LinkForwadRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "link-forwad-ref-value"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::~LinkForwadRefValue()
{
}

bool MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-forwad-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::LinkForwadRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcac::LinkInformation::Links::Link::Lockout::Lockout()
    :
    is_lockout{YType::boolean, "is-lockout"},
    lockout_off_timestamp{YType::uint32, "lockout-off-timestamp"},
    lockout_on_timestamp{YType::uint32, "lockout-on-timestamp"}
{

    yang_name = "lockout"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::LinkInformation::Links::Link::Lockout::~Lockout()
{
}

bool MplsLcac::LinkInformation::Links::Link::Lockout::has_data() const
{
    return is_lockout.is_set
	|| lockout_off_timestamp.is_set
	|| lockout_on_timestamp.is_set;
}

bool MplsLcac::LinkInformation::Links::Link::Lockout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_lockout.yfilter)
	|| ydk::is_set(lockout_off_timestamp.yfilter)
	|| ydk::is_set(lockout_on_timestamp.yfilter);
}

std::string MplsLcac::LinkInformation::Links::Link::Lockout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkInformation::Links::Link::Lockout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_lockout.is_set || is_set(is_lockout.yfilter)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_off_timestamp.is_set || is_set(lockout_off_timestamp.yfilter)) leaf_name_data.push_back(lockout_off_timestamp.get_name_leafdata());
    if (lockout_on_timestamp.is_set || is_set(lockout_on_timestamp.yfilter)) leaf_name_data.push_back(lockout_on_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkInformation::Links::Link::Lockout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkInformation::Links::Link::Lockout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkInformation::Links::Link::Lockout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-lockout")
    {
        is_lockout = value;
        is_lockout.value_namespace = name_space;
        is_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-off-timestamp")
    {
        lockout_off_timestamp = value;
        lockout_off_timestamp.value_namespace = name_space;
        lockout_off_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout-on-timestamp")
    {
        lockout_on_timestamp = value;
        lockout_on_timestamp.value_namespace = name_space;
        lockout_on_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkInformation::Links::Link::Lockout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-lockout")
    {
        is_lockout.yfilter = yfilter;
    }
    if(value_path == "lockout-off-timestamp")
    {
        lockout_off_timestamp.yfilter = yfilter;
    }
    if(value_path == "lockout-on-timestamp")
    {
        lockout_on_timestamp.yfilter = yfilter;
    }
}

bool MplsLcac::LinkInformation::Links::Link::Lockout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-lockout" || name == "lockout-off-timestamp" || name == "lockout-on-timestamp")
        return true;
    return false;
}

MplsLcac::LinkSummary::LinkSummary()
    :
    is_flooding_enabled{YType::boolean, "is-flooding-enabled"},
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
    	,
    bandwidth_account_summary(std::make_shared<MplsLcac::LinkSummary::BandwidthAccountSummary>())
{
    bandwidth_account_summary->parent = this;

    yang_name = "link-summary"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkSummary::~LinkSummary()
{
}

bool MplsLcac::LinkSummary::has_data() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_data())
            return true;
    }
    return is_flooding_enabled.is_set
	|| is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_data());
}

bool MplsLcac::LinkSummary::has_operation() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_flooding_enabled.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(maximum_links.yfilter)
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_operation());
}

std::string MplsLcac::LinkSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_flooding_enabled.is_set || is_set(is_flooding_enabled.yfilter)) leaf_name_data.push_back(is_flooding_enabled.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.yfilter)) leaf_name_data.push_back(maximum_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areas-summary")
    {
        for(auto const & c : areas_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::LinkSummary::AreasSummary>();
        c->parent = this;
        areas_summary.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-account-summary")
    {
        if(bandwidth_account_summary == nullptr)
        {
            bandwidth_account_summary = std::make_shared<MplsLcac::LinkSummary::BandwidthAccountSummary>();
        }
        return bandwidth_account_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : areas_summary)
    {
        children[c->get_segment_path()] = c;
    }

    if(bandwidth_account_summary != nullptr)
    {
        children["bandwidth-account-summary"] = bandwidth_account_summary;
    }

    return children;
}

void MplsLcac::LinkSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-flooding-enabled")
    {
        is_flooding_enabled = value;
        is_flooding_enabled.value_namespace = name_space;
        is_flooding_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
        maximum_links.value_namespace = name_space;
        maximum_links.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-flooding-enabled")
    {
        is_flooding_enabled.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "maximum-links")
    {
        maximum_links.yfilter = yfilter;
    }
}

bool MplsLcac::LinkSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areas-summary" || name == "bandwidth-account-summary" || name == "is-flooding-enabled" || name == "is-role-standby" || name == "links" || name == "maximum-links")
        return true;
    return false;
}

MplsLcac::LinkSummary::AreasSummary::AreasSummary()
    :
    area_id{YType::str, "area-id"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    is_flooded{YType::boolean, "is-flooded"},
    is_periodic_flooding_on{YType::boolean, "is-periodic-flooding-on"},
    links_flooded{YType::uint16, "links-flooded"},
    local_node_router_id{YType::str, "local-node-router-id"},
    periodic_flooding_interval{YType::uint16, "periodic-flooding-interval"},
    protocol{YType::enumeration, "protocol"},
    system_id{YType::str, "system-id"}
{

    yang_name = "areas-summary"; yang_parent_name = "link-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkSummary::AreasSummary::~AreasSummary()
{
}

bool MplsLcac::LinkSummary::AreasSummary::has_data() const
{
    return area_id.is_set
	|| igp_neighbors.is_set
	|| is_flooded.is_set
	|| is_periodic_flooding_on.is_set
	|| links_flooded.is_set
	|| local_node_router_id.is_set
	|| periodic_flooding_interval.is_set
	|| protocol.is_set
	|| system_id.is_set;
}

bool MplsLcac::LinkSummary::AreasSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(igp_neighbors.yfilter)
	|| ydk::is_set(is_flooded.yfilter)
	|| ydk::is_set(is_periodic_flooding_on.yfilter)
	|| ydk::is_set(links_flooded.yfilter)
	|| ydk::is_set(local_node_router_id.yfilter)
	|| ydk::is_set(periodic_flooding_interval.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string MplsLcac::LinkSummary::AreasSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkSummary::AreasSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkSummary::AreasSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.yfilter)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (is_flooded.is_set || is_set(is_flooded.yfilter)) leaf_name_data.push_back(is_flooded.get_name_leafdata());
    if (is_periodic_flooding_on.is_set || is_set(is_periodic_flooding_on.yfilter)) leaf_name_data.push_back(is_periodic_flooding_on.get_name_leafdata());
    if (links_flooded.is_set || is_set(links_flooded.yfilter)) leaf_name_data.push_back(links_flooded.get_name_leafdata());
    if (local_node_router_id.is_set || is_set(local_node_router_id.yfilter)) leaf_name_data.push_back(local_node_router_id.get_name_leafdata());
    if (periodic_flooding_interval.is_set || is_set(periodic_flooding_interval.yfilter)) leaf_name_data.push_back(periodic_flooding_interval.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkSummary::AreasSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkSummary::AreasSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkSummary::AreasSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
        igp_neighbors.value_namespace = name_space;
        igp_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flooded")
    {
        is_flooded = value;
        is_flooded.value_namespace = name_space;
        is_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-periodic-flooding-on")
    {
        is_periodic_flooding_on = value;
        is_periodic_flooding_on.value_namespace = name_space;
        is_periodic_flooding_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links-flooded")
    {
        links_flooded = value;
        links_flooded.value_namespace = name_space;
        links_flooded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-router-id")
    {
        local_node_router_id = value;
        local_node_router_id.value_namespace = name_space;
        local_node_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-flooding-interval")
    {
        periodic_flooding_interval = value;
        periodic_flooding_interval.value_namespace = name_space;
        periodic_flooding_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkSummary::AreasSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors.yfilter = yfilter;
    }
    if(value_path == "is-flooded")
    {
        is_flooded.yfilter = yfilter;
    }
    if(value_path == "is-periodic-flooding-on")
    {
        is_periodic_flooding_on.yfilter = yfilter;
    }
    if(value_path == "links-flooded")
    {
        links_flooded.yfilter = yfilter;
    }
    if(value_path == "local-node-router-id")
    {
        local_node_router_id.yfilter = yfilter;
    }
    if(value_path == "periodic-flooding-interval")
    {
        periodic_flooding_interval.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool MplsLcac::LinkSummary::AreasSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "igp-neighbors" || name == "is-flooded" || name == "is-periodic-flooding-on" || name == "links-flooded" || name == "local-node-router-id" || name == "periodic-flooding-interval" || name == "protocol" || name == "system-id")
        return true;
    return false;
}

MplsLcac::LinkSummary::BandwidthAccountSummary::BandwidthAccountSummary()
    :
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"}
{

    yang_name = "bandwidth-account-summary"; yang_parent_name = "link-summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::LinkSummary::BandwidthAccountSummary::~BandwidthAccountSummary()
{
}

bool MplsLcac::LinkSummary::BandwidthAccountSummary::has_data() const
{
    return application_interval.is_set
	|| application_time_remaining.is_set
	|| is_bandwidth_account_enabled.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set;
}

bool MplsLcac::LinkSummary::BandwidthAccountSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_interval.yfilter)
	|| ydk::is_set(application_time_remaining.yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(sample_interval.yfilter)
	|| ydk::is_set(sample_time_remaining.yfilter);
}

std::string MplsLcac::LinkSummary::BandwidthAccountSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/link-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::LinkSummary::BandwidthAccountSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::LinkSummary::BandwidthAccountSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_interval.is_set || is_set(application_interval.yfilter)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.yfilter)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.yfilter)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.yfilter)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::LinkSummary::BandwidthAccountSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::LinkSummary::BandwidthAccountSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::LinkSummary::BandwidthAccountSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-interval")
    {
        application_interval = value;
        application_interval.value_namespace = name_space;
        application_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
        application_time_remaining.value_namespace = name_space;
        application_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
        sample_interval.value_namespace = name_space;
        sample_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
        sample_time_remaining.value_namespace = name_space;
        sample_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::LinkSummary::BandwidthAccountSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-interval")
    {
        application_interval.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "sample-interval")
    {
        sample_interval.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining.yfilter = yfilter;
    }
}

bool MplsLcac::LinkSummary::BandwidthAccountSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-interval" || name == "application-time-remaining" || name == "is-bandwidth-account-enabled" || name == "sample-interval" || name == "sample-time-remaining")
        return true;
    return false;
}

MplsLcac::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Neighbors::~Neighbors()
{
}

bool MplsLcac::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

MplsLcac::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLcac::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcac::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLcac::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Neighbors::Neighbor::Neighbor_>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLcac::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsLcac::Neighbors::Neighbor::Neighbor_::Neighbor_()
    :
    area_id{YType::str, "area-id"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Neighbors::Neighbor::Neighbor_::~Neighbor_()
{
}

bool MplsLcac::Neighbors::Neighbor::Neighbor_::has_data() const
{
    return area_id.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set;
}

bool MplsLcac::Neighbors::Neighbor::Neighbor_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string MplsLcac::Neighbors::Neighbor::Neighbor_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Neighbors::Neighbor::Neighbor_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::Neighbor::Neighbor_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Neighbors::Neighbor::Neighbor_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Neighbors::Neighbor::Neighbor_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Neighbors::Neighbor::Neighbor_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool MplsLcac::Neighbors::Neighbor::Neighbor_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-id")
        return true;
    return false;
}

MplsLcac::PreemptionEvents::PreemptionEvents()
{

    yang_name = "preemption-events"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::PreemptionEvents::~PreemptionEvents()
{
}

bool MplsLcac::PreemptionEvents::has_data() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::PreemptionEvents::has_operation() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::PreemptionEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::PreemptionEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::PreemptionEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preemption-event")
    {
        for(auto const & c : preemption_event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::PreemptionEvents::PreemptionEvent>();
        c->parent = this;
        preemption_event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::PreemptionEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : preemption_event)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::PreemptionEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::PreemptionEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::PreemptionEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preemption-event")
        return true;
    return false;
}

MplsLcac::PreemptionEvents::PreemptionEvent::PreemptionEvent()
    :
    event_index{YType::uint32, "event-index"},
    bandwidth_overshoot0{YType::uint64, "bandwidth-overshoot0"},
    bandwidth_overshoot1{YType::uint64, "bandwidth-overshoot1"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    event_time{YType::uint32, "event-time"},
    hard_preempted_bandwidth_bc0{YType::uint64, "hard-preempted-bandwidth-bc0"},
    hard_preempted_bandwidth_bc1{YType::uint64, "hard-preempted-bandwidth-bc1"},
    hard_preempted_ls_ps{YType::uint16, "hard-preempted-ls-ps"},
    hard_preempted_tunnels{YType::uint16, "hard-preempted-tunnels"},
    hold_priority{YType::uint8, "hold-priority"},
    interface_name{YType::str, "interface-name"},
    ls_ps{YType::uint16, "ls-ps"},
    lsp_id{YType::uint16, "lsp-id"},
    new_bandwidth_bc0{YType::uint64, "new-bandwidth-bc0"},
    new_bandwidth_bc1{YType::uint64, "new-bandwidth-bc1"},
    old_bandwidth_bc0{YType::uint64, "old-bandwidth-bc0"},
    old_bandwidth_bc1{YType::uint64, "old-bandwidth-bc1"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted_fr_rrewrite_bandwidth_bc0{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc0"},
    soft_preempted_fr_rrewrite_bandwidth_bc1{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc1"},
    soft_preempted_ls_ps{YType::uint16, "soft-preempted-ls-ps"},
    soft_preempted_ls_ps_fr_rrewrite{YType::uint16, "soft-preempted-ls-ps-fr-rrewrite"},
    soft_preempted_tunnels{YType::uint16, "soft-preempted-tunnels"},
    soft_preempted_tunnels_fr_rrewrite{YType::uint16, "soft-preempted-tunnels-fr-rrewrite"},
    softly_preempted_bandwidth_bc0{YType::uint64, "softly-preempted-bandwidth-bc0"},
    softly_preempted_bandwidth_bc1{YType::uint64, "softly-preempted-bandwidth-bc1"},
    source_address{YType::str, "source-address"},
    total_preempted_bandwidth_bc0{YType::uint64, "total-preempted-bandwidth-bc0"},
    total_preempted_bandwidth_bc1{YType::uint64, "total-preempted-bandwidth-bc1"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnels{YType::uint16, "tunnels"}
{

    yang_name = "preemption-event"; yang_parent_name = "preemption-events"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::PreemptionEvents::PreemptionEvent::~PreemptionEvent()
{
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return event_index.is_set
	|| bandwidth_overshoot0.is_set
	|| bandwidth_overshoot1.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| event_time.is_set
	|| hard_preempted_bandwidth_bc0.is_set
	|| hard_preempted_bandwidth_bc1.is_set
	|| hard_preempted_ls_ps.is_set
	|| hard_preempted_tunnels.is_set
	|| hold_priority.is_set
	|| interface_name.is_set
	|| ls_ps.is_set
	|| lsp_id.is_set
	|| new_bandwidth_bc0.is_set
	|| new_bandwidth_bc1.is_set
	|| old_bandwidth_bc0.is_set
	|| old_bandwidth_bc1.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc0.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc1.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preempted_ls_ps_fr_rrewrite.is_set
	|| soft_preempted_tunnels.is_set
	|| soft_preempted_tunnels_fr_rrewrite.is_set
	|| softly_preempted_bandwidth_bc0.is_set
	|| softly_preempted_bandwidth_bc1.is_set
	|| source_address.is_set
	|| total_preempted_bandwidth_bc0.is_set
	|| total_preempted_bandwidth_bc1.is_set
	|| tunnel_id.is_set
	|| tunnels.is_set;
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_index.yfilter)
	|| ydk::is_set(bandwidth_overshoot0.yfilter)
	|| ydk::is_set(bandwidth_overshoot1.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(hard_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(hard_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(hard_preempted_ls_ps.yfilter)
	|| ydk::is_set(hard_preempted_tunnels.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(new_bandwidth_bc0.yfilter)
	|| ydk::is_set(new_bandwidth_bc1.yfilter)
	|| ydk::is_set(old_bandwidth_bc0.yfilter)
	|| ydk::is_set(old_bandwidth_bc1.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps_fr_rrewrite.yfilter)
	|| ydk::is_set(soft_preempted_tunnels.yfilter)
	|| ydk::is_set(soft_preempted_tunnels_fr_rrewrite.yfilter)
	|| ydk::is_set(softly_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(softly_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(total_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(total_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnels.yfilter);
}

std::string MplsLcac::PreemptionEvents::PreemptionEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/preemption-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::PreemptionEvents::PreemptionEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-event" <<"[event-index='" <<event_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::PreemptionEvents::PreemptionEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_index.is_set || is_set(event_index.yfilter)) leaf_name_data.push_back(event_index.get_name_leafdata());
    if (bandwidth_overshoot0.is_set || is_set(bandwidth_overshoot0.yfilter)) leaf_name_data.push_back(bandwidth_overshoot0.get_name_leafdata());
    if (bandwidth_overshoot1.is_set || is_set(bandwidth_overshoot1.yfilter)) leaf_name_data.push_back(bandwidth_overshoot1.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (hard_preempted_bandwidth_bc0.is_set || is_set(hard_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(hard_preempted_bandwidth_bc0.get_name_leafdata());
    if (hard_preempted_bandwidth_bc1.is_set || is_set(hard_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(hard_preempted_bandwidth_bc1.get_name_leafdata());
    if (hard_preempted_ls_ps.is_set || is_set(hard_preempted_ls_ps.yfilter)) leaf_name_data.push_back(hard_preempted_ls_ps.get_name_leafdata());
    if (hard_preempted_tunnels.is_set || is_set(hard_preempted_tunnels.yfilter)) leaf_name_data.push_back(hard_preempted_tunnels.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (new_bandwidth_bc0.is_set || is_set(new_bandwidth_bc0.yfilter)) leaf_name_data.push_back(new_bandwidth_bc0.get_name_leafdata());
    if (new_bandwidth_bc1.is_set || is_set(new_bandwidth_bc1.yfilter)) leaf_name_data.push_back(new_bandwidth_bc1.get_name_leafdata());
    if (old_bandwidth_bc0.is_set || is_set(old_bandwidth_bc0.yfilter)) leaf_name_data.push_back(old_bandwidth_bc0.get_name_leafdata());
    if (old_bandwidth_bc1.is_set || is_set(old_bandwidth_bc1.yfilter)) leaf_name_data.push_back(old_bandwidth_bc1.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc0.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc0.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc1.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc1.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps_fr_rrewrite.is_set || is_set(soft_preempted_ls_ps_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps_fr_rrewrite.get_name_leafdata());
    if (soft_preempted_tunnels.is_set || is_set(soft_preempted_tunnels.yfilter)) leaf_name_data.push_back(soft_preempted_tunnels.get_name_leafdata());
    if (soft_preempted_tunnels_fr_rrewrite.is_set || is_set(soft_preempted_tunnels_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_tunnels_fr_rrewrite.get_name_leafdata());
    if (softly_preempted_bandwidth_bc0.is_set || is_set(softly_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(softly_preempted_bandwidth_bc0.get_name_leafdata());
    if (softly_preempted_bandwidth_bc1.is_set || is_set(softly_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(softly_preempted_bandwidth_bc1.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (total_preempted_bandwidth_bc0.is_set || is_set(total_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(total_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_preempted_bandwidth_bc1.is_set || is_set(total_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(total_preempted_bandwidth_bc1.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::PreemptionEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::PreemptionEvents::PreemptionEvent::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::PreemptionEvents::PreemptionEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::PreemptionEvents::PreemptionEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-index")
    {
        event_index = value;
        event_index.value_namespace = name_space;
        event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0 = value;
        bandwidth_overshoot0.value_namespace = name_space;
        bandwidth_overshoot0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1 = value;
        bandwidth_overshoot1.value_namespace = name_space;
        bandwidth_overshoot1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0 = value;
        hard_preempted_bandwidth_bc0.value_namespace = name_space;
        hard_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1 = value;
        hard_preempted_bandwidth_bc1.value_namespace = name_space;
        hard_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps = value;
        hard_preempted_ls_ps.value_namespace = name_space;
        hard_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels = value;
        hard_preempted_tunnels.value_namespace = name_space;
        hard_preempted_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0 = value;
        new_bandwidth_bc0.value_namespace = name_space;
        new_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1 = value;
        new_bandwidth_bc1.value_namespace = name_space;
        new_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0 = value;
        old_bandwidth_bc0.value_namespace = name_space;
        old_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1 = value;
        old_bandwidth_bc1.value_namespace = name_space;
        old_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0 = value;
        soft_preempted_fr_rrewrite_bandwidth_bc0.value_namespace = name_space;
        soft_preempted_fr_rrewrite_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1 = value;
        soft_preempted_fr_rrewrite_bandwidth_bc1.value_namespace = name_space;
        soft_preempted_fr_rrewrite_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
        soft_preempted_ls_ps.value_namespace = name_space;
        soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite = value;
        soft_preempted_ls_ps_fr_rrewrite.value_namespace = name_space;
        soft_preempted_ls_ps_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels = value;
        soft_preempted_tunnels.value_namespace = name_space;
        soft_preempted_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite = value;
        soft_preempted_tunnels_fr_rrewrite.value_namespace = name_space;
        soft_preempted_tunnels_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0 = value;
        softly_preempted_bandwidth_bc0.value_namespace = name_space;
        softly_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1 = value;
        softly_preempted_bandwidth_bc1.value_namespace = name_space;
        softly_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0 = value;
        total_preempted_bandwidth_bc0.value_namespace = name_space;
        total_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1 = value;
        total_preempted_bandwidth_bc1.value_namespace = name_space;
        total_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::PreemptionEvents::PreemptionEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-index")
    {
        event_index.yfilter = yfilter;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0.yfilter = yfilter;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "event-index" || name == "bandwidth-overshoot0" || name == "bandwidth-overshoot1" || name == "bandwidth-type" || name == "destination-address" || name == "event-time" || name == "hard-preempted-bandwidth-bc0" || name == "hard-preempted-bandwidth-bc1" || name == "hard-preempted-ls-ps" || name == "hard-preempted-tunnels" || name == "hold-priority" || name == "interface-name" || name == "ls-ps" || name == "lsp-id" || name == "new-bandwidth-bc0" || name == "new-bandwidth-bc1" || name == "old-bandwidth-bc0" || name == "old-bandwidth-bc1" || name == "requested-bandwidth" || name == "setup-priority" || name == "soft-preempted-fr-rrewrite-bandwidth-bc0" || name == "soft-preempted-fr-rrewrite-bandwidth-bc1" || name == "soft-preempted-ls-ps" || name == "soft-preempted-ls-ps-fr-rrewrite" || name == "soft-preempted-tunnels" || name == "soft-preempted-tunnels-fr-rrewrite" || name == "softly-preempted-bandwidth-bc0" || name == "softly-preempted-bandwidth-bc1" || name == "source-address" || name == "total-preempted-bandwidth-bc0" || name == "total-preempted-bandwidth-bc1" || name == "tunnel-id" || name == "tunnels")
        return true;
    return false;
}

MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::Lsp()
    :
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    hold_priority{YType::uint8, "hold-priority"},
    lsp_id{YType::uint16, "lsp-id"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "lsp"; yang_parent_name = "preemption-event"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::~Lsp()
{
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::has_data() const
{
    return bandwidth_preempted.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| hold_priority.is_set
	|| lsp_id.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set
	|| soft_preemption_timeout.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_preempted.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(soft_preempted.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.yfilter)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.yfilter)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
        bandwidth_preempted.value_namespace = name_space;
        bandwidth_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
        soft_preempted.value_namespace = name_space;
        soft_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
        soft_preempted_fr_rrewrite.value_namespace = name_space;
        soft_preempted_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-preempted" || name == "bandwidth-type" || name == "destination-address" || name == "hold-priority" || name == "lsp-id" || name == "requested-bandwidth" || name == "setup-priority" || name == "soft-preempted" || name == "soft-preempted-fr-rrewrite" || name == "soft-preemption-timeout" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsLcac::SoftPreemptionGlobalInfo::SoftPreemptionGlobalInfo()
    :
    is_configured{YType::boolean, "is-configured"},
    is_timeout_interval_configured{YType::boolean, "is-timeout-interval-configured"},
    timeout_interval{YType::uint32, "timeout-interval"}
{

    yang_name = "soft-preemption-global-info"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::SoftPreemptionGlobalInfo::~SoftPreemptionGlobalInfo()
{
}

bool MplsLcac::SoftPreemptionGlobalInfo::has_data() const
{
    return is_configured.is_set
	|| is_timeout_interval_configured.is_set
	|| timeout_interval.is_set;
}

bool MplsLcac::SoftPreemptionGlobalInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(is_timeout_interval_configured.yfilter)
	|| ydk::is_set(timeout_interval.yfilter);
}

std::string MplsLcac::SoftPreemptionGlobalInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::SoftPreemptionGlobalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-global-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::SoftPreemptionGlobalInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (is_timeout_interval_configured.is_set || is_set(is_timeout_interval_configured.yfilter)) leaf_name_data.push_back(is_timeout_interval_configured.get_name_leafdata());
    if (timeout_interval.is_set || is_set(timeout_interval.yfilter)) leaf_name_data.push_back(timeout_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptionGlobalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::SoftPreemptionGlobalInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::SoftPreemptionGlobalInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-timeout-interval-configured")
    {
        is_timeout_interval_configured = value;
        is_timeout_interval_configured.value_namespace = name_space;
        is_timeout_interval_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval = value;
        timeout_interval.value_namespace = name_space;
        timeout_interval.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::SoftPreemptionGlobalInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "is-timeout-interval-configured")
    {
        is_timeout_interval_configured.yfilter = yfilter;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval.yfilter = yfilter;
    }
}

bool MplsLcac::SoftPreemptionGlobalInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "is-timeout-interval-configured" || name == "timeout-interval")
        return true;
    return false;
}

MplsLcac::SoftPreemptions::SoftPreemptions()
{

    yang_name = "soft-preemptions"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::SoftPreemptions::~SoftPreemptions()
{
}

bool MplsLcac::SoftPreemptions::has_data() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::SoftPreemptions::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::SoftPreemptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::SoftPreemptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemptions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::SoftPreemptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "soft-preemption")
    {
        for(auto const & c : soft_preemption)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::SoftPreemptions::SoftPreemption>();
        c->parent = this;
        soft_preemption.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::SoftPreemptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : soft_preemption)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::SoftPreemptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::SoftPreemptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::SoftPreemptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "soft-preemption")
        return true;
    return false;
}

MplsLcac::SoftPreemptions::SoftPreemption::SoftPreemption()
    :
    interface_name{YType::str, "interface-name"},
    current_over_subscribed_bandwidth_bc0{YType::uint64, "current-over-subscribed-bandwidth-bc0"},
    current_over_subscribed_bandwidth_bc1{YType::uint64, "current-over-subscribed-bandwidth-bc1"},
    current_soft_preempted_bandwidth_bc0{YType::uint64, "current-soft-preempted-bandwidth-bc0"},
    current_soft_preempted_bandwidth_bc1{YType::uint64, "current-soft-preempted-bandwidth-bc1"},
    link_address{YType::str, "link-address"},
    release_soft_preempted_bandwidth_bc0{YType::uint64, "release-soft-preempted-bandwidth-bc0"},
    release_soft_preempted_bandwidth_bc1{YType::uint64, "release-soft-preempted-bandwidth-bc1"},
    total_soft_preempted_bandwidth_bc0{YType::uint64, "total-soft-preempted-bandwidth-bc0"},
    total_soft_preempted_bandwidth_bc1{YType::uint64, "total-soft-preempted-bandwidth-bc1"}
{

    yang_name = "soft-preemption"; yang_parent_name = "soft-preemptions"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::SoftPreemptions::SoftPreemption::~SoftPreemption()
{
}

bool MplsLcac::SoftPreemptions::SoftPreemption::has_data() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| current_over_subscribed_bandwidth_bc0.is_set
	|| current_over_subscribed_bandwidth_bc1.is_set
	|| current_soft_preempted_bandwidth_bc0.is_set
	|| current_soft_preempted_bandwidth_bc1.is_set
	|| link_address.is_set
	|| release_soft_preempted_bandwidth_bc0.is_set
	|| release_soft_preempted_bandwidth_bc1.is_set
	|| total_soft_preempted_bandwidth_bc0.is_set
	|| total_soft_preempted_bandwidth_bc1.is_set;
}

bool MplsLcac::SoftPreemptions::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(current_over_subscribed_bandwidth_bc0.yfilter)
	|| ydk::is_set(current_over_subscribed_bandwidth_bc1.yfilter)
	|| ydk::is_set(current_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(current_soft_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(release_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(release_soft_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(total_soft_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(total_soft_preempted_bandwidth_bc1.yfilter);
}

std::string MplsLcac::SoftPreemptions::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/soft-preemptions/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::SoftPreemptions::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::SoftPreemptions::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc0.is_set || is_set(current_over_subscribed_bandwidth_bc0.yfilter)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc0.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc1.is_set || is_set(current_over_subscribed_bandwidth_bc1.yfilter)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc1.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc0.is_set || is_set(current_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc1.is_set || is_set(current_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc0.is_set || is_set(release_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc1.is_set || is_set(release_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc0.is_set || is_set(total_soft_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc1.is_set || is_set(total_soft_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-soft-preemption-lsp")
    {
        for(auto const & c : current_soft_preemption_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp>();
        c->parent = this;
        current_soft_preemption_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::SoftPreemptions::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : current_soft_preemption_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::SoftPreemptions::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc0")
    {
        current_over_subscribed_bandwidth_bc0 = value;
        current_over_subscribed_bandwidth_bc0.value_namespace = name_space;
        current_over_subscribed_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc1")
    {
        current_over_subscribed_bandwidth_bc1 = value;
        current_over_subscribed_bandwidth_bc1.value_namespace = name_space;
        current_over_subscribed_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc0")
    {
        current_soft_preempted_bandwidth_bc0 = value;
        current_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        current_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc1")
    {
        current_soft_preempted_bandwidth_bc1 = value;
        current_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        current_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc0")
    {
        release_soft_preempted_bandwidth_bc0 = value;
        release_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        release_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc1")
    {
        release_soft_preempted_bandwidth_bc1 = value;
        release_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        release_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc0")
    {
        total_soft_preempted_bandwidth_bc0 = value;
        total_soft_preempted_bandwidth_bc0.value_namespace = name_space;
        total_soft_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc1")
    {
        total_soft_preempted_bandwidth_bc1 = value;
        total_soft_preempted_bandwidth_bc1.value_namespace = name_space;
        total_soft_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::SoftPreemptions::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc0")
    {
        current_over_subscribed_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc1")
    {
        current_over_subscribed_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc0")
    {
        current_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc1")
    {
        current_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc0")
    {
        release_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc1")
    {
        release_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc0")
    {
        total_soft_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc1")
    {
        total_soft_preempted_bandwidth_bc1.yfilter = yfilter;
    }
}

bool MplsLcac::SoftPreemptions::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-soft-preemption-lsp" || name == "interface-name" || name == "current-over-subscribed-bandwidth-bc0" || name == "current-over-subscribed-bandwidth-bc1" || name == "current-soft-preempted-bandwidth-bc0" || name == "current-soft-preempted-bandwidth-bc1" || name == "link-address" || name == "release-soft-preempted-bandwidth-bc0" || name == "release-soft-preempted-bandwidth-bc1" || name == "total-soft-preempted-bandwidth-bc0" || name == "total-soft-preempted-bandwidth-bc1")
        return true;
    return false;
}

MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::CurrentSoftPreemptionLsp()
    :
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    hold_priority{YType::uint8, "hold-priority"},
    lsp_id{YType::uint16, "lsp-id"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "current-soft-preemption-lsp"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::~CurrentSoftPreemptionLsp()
{
}

bool MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_data() const
{
    return bandwidth_preempted.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| hold_priority.is_set
	|| lsp_id.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set
	|| soft_preemption_timeout.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_preempted.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(soft_preempted.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-soft-preemption-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.yfilter)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.yfilter)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
        bandwidth_preempted.value_namespace = name_space;
        bandwidth_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
        soft_preempted.value_namespace = name_space;
        soft_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
        soft_preempted_fr_rrewrite.value_namespace = name_space;
        soft_preempted_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsLcac::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-preempted" || name == "bandwidth-type" || name == "destination-address" || name == "hold-priority" || name == "lsp-id" || name == "requested-bandwidth" || name == "setup-priority" || name == "soft-preempted" || name == "soft-preempted-fr-rrewrite" || name == "soft-preemption-timeout" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
}

MplsLcac::Statistics::Statistics()
    :
    statstics_links(std::make_shared<MplsLcac::Statistics::StatsticsLinks>())
	,summary(std::make_shared<MplsLcac::Statistics::Summary>())
{
    statstics_links->parent = this;
    summary->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-lcac"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::~Statistics()
{
}

bool MplsLcac::Statistics::has_data() const
{
    return (statstics_links !=  nullptr && statstics_links->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsLcac::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (statstics_links !=  nullptr && statstics_links->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsLcac::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statstics-links")
    {
        if(statstics_links == nullptr)
        {
            statstics_links = std::make_shared<MplsLcac::Statistics::StatsticsLinks>();
        }
        return statstics_links;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLcac::Statistics::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statstics_links != nullptr)
    {
        children["statstics-links"] = statstics_links;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsLcac::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statstics-links" || name == "summary")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLinks()
{

    yang_name = "statstics-links"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::StatsticsLinks::~StatsticsLinks()
{
}

bool MplsLcac::Statistics::StatsticsLinks::has_data() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::Statistics::StatsticsLinks::has_operation() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::StatsticsLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statstics-link")
    {
        for(auto const & c : statstics_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink>();
        c->parent = this;
        statstics_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statstics_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcac::Statistics::StatsticsLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcac::Statistics::StatsticsLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcac::Statistics::StatsticsLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statstics-link")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::StatsticsLink()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    link_address{YType::str, "link-address"}
    	,
    incoming_path_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>())
	,incoming_path_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>())
	,incoming_reservation_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>())
	,incoming_reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>())
	,outgoing_path_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>())
	,outgoing_path_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>())
	,outgoing_reservation_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>())
	,outgoing_reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>())
{
    incoming_path_statistics->parent = this;
    incoming_path_statistics32_bit->parent = this;
    incoming_reservation_statistics->parent = this;
    incoming_reservation_statistics32_bit->parent = this;
    outgoing_path_statistics->parent = this;
    outgoing_path_statistics32_bit->parent = this;
    outgoing_reservation_statistics->parent = this;
    outgoing_reservation_statistics32_bit->parent = this;

    yang_name = "statstics-link"; yang_parent_name = "statstics-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::~StatsticsLink()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| link_address.is_set
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_data())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_data())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_data())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_data())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_data())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_data())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_data())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_data());
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_operation())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_operation())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_operation())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_operation())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_operation())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_operation())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_operation())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_operation());
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/statstics-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-path-statistics")
    {
        if(incoming_path_statistics == nullptr)
        {
            incoming_path_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>();
        }
        return incoming_path_statistics;
    }

    if(child_yang_name == "incoming-path-statistics32-bit")
    {
        if(incoming_path_statistics32_bit == nullptr)
        {
            incoming_path_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>();
        }
        return incoming_path_statistics32_bit;
    }

    if(child_yang_name == "incoming-reservation-statistics")
    {
        if(incoming_reservation_statistics == nullptr)
        {
            incoming_reservation_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>();
        }
        return incoming_reservation_statistics;
    }

    if(child_yang_name == "incoming-reservation-statistics32-bit")
    {
        if(incoming_reservation_statistics32_bit == nullptr)
        {
            incoming_reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>();
        }
        return incoming_reservation_statistics32_bit;
    }

    if(child_yang_name == "outgoing-path-statistics")
    {
        if(outgoing_path_statistics == nullptr)
        {
            outgoing_path_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>();
        }
        return outgoing_path_statistics;
    }

    if(child_yang_name == "outgoing-path-statistics32-bit")
    {
        if(outgoing_path_statistics32_bit == nullptr)
        {
            outgoing_path_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>();
        }
        return outgoing_path_statistics32_bit;
    }

    if(child_yang_name == "outgoing-reservation-statistics")
    {
        if(outgoing_reservation_statistics == nullptr)
        {
            outgoing_reservation_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>();
        }
        return outgoing_reservation_statistics;
    }

    if(child_yang_name == "outgoing-reservation-statistics32-bit")
    {
        if(outgoing_reservation_statistics32_bit == nullptr)
        {
            outgoing_reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>();
        }
        return outgoing_reservation_statistics32_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(incoming_path_statistics != nullptr)
    {
        children["incoming-path-statistics"] = incoming_path_statistics;
    }

    if(incoming_path_statistics32_bit != nullptr)
    {
        children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
    }

    if(incoming_reservation_statistics != nullptr)
    {
        children["incoming-reservation-statistics"] = incoming_reservation_statistics;
    }

    if(incoming_reservation_statistics32_bit != nullptr)
    {
        children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
    }

    if(outgoing_path_statistics != nullptr)
    {
        children["outgoing-path-statistics"] = outgoing_path_statistics;
    }

    if(outgoing_path_statistics32_bit != nullptr)
    {
        children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
    }

    if(outgoing_reservation_statistics != nullptr)
    {
        children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
    }

    if(outgoing_reservation_statistics32_bit != nullptr)
    {
        children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
    }

    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-path-statistics" || name == "incoming-path-statistics32-bit" || name == "incoming-reservation-statistics" || name == "incoming-reservation-statistics32-bit" || name == "outgoing-path-statistics" || name == "outgoing-path-statistics32-bit" || name == "outgoing-reservation-statistics" || name == "outgoing-reservation-statistics32-bit" || name == "interface-name" || name == "interface-name-xr" || name == "link-address")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::IncomingPathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "incoming-path-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::~IncomingPathStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::IncomingPathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "incoming-path-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::~IncomingPathStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::IncomingReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "incoming-reservation-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::~IncomingReservationStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::IncomingReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "incoming-reservation-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::~IncomingReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::OutgoingPathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "outgoing-path-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::~OutgoingPathStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::OutgoingPathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "outgoing-path-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::~OutgoingPathStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::OutgoingReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "outgoing-reservation-statistics"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::~OutgoingReservationStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::OutgoingReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "outgoing-reservation-statistics32-bit"; yang_parent_name = "statstics-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::~OutgoingReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::Summary()
    :
    is_role_standby{YType::boolean, "is-role-standby"}
    	,
    path_statistics(std::make_shared<MplsLcac::Statistics::Summary::PathStatistics>())
	,path_statistics32_bit(std::make_shared<MplsLcac::Statistics::Summary::PathStatistics32Bit>())
	,reservation_statistics(std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics>())
	,reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics32Bit>())
{
    path_statistics->parent = this;
    path_statistics32_bit->parent = this;
    reservation_statistics->parent = this;
    reservation_statistics32_bit->parent = this;

    yang_name = "summary"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::~Summary()
{
}

bool MplsLcac::Statistics::Summary::has_data() const
{
    return is_role_standby.is_set
	|| (path_statistics !=  nullptr && path_statistics->has_data())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_data())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_data())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_data());
}

bool MplsLcac::Statistics::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| (path_statistics !=  nullptr && path_statistics->has_operation())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_operation())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_operation())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_operation());
}

std::string MplsLcac::Statistics::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-statistics")
    {
        if(path_statistics == nullptr)
        {
            path_statistics = std::make_shared<MplsLcac::Statistics::Summary::PathStatistics>();
        }
        return path_statistics;
    }

    if(child_yang_name == "path-statistics32-bit")
    {
        if(path_statistics32_bit == nullptr)
        {
            path_statistics32_bit = std::make_shared<MplsLcac::Statistics::Summary::PathStatistics32Bit>();
        }
        return path_statistics32_bit;
    }

    if(child_yang_name == "reservation-statistics")
    {
        if(reservation_statistics == nullptr)
        {
            reservation_statistics = std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics>();
        }
        return reservation_statistics;
    }

    if(child_yang_name == "reservation-statistics32-bit")
    {
        if(reservation_statistics32_bit == nullptr)
        {
            reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics32Bit>();
        }
        return reservation_statistics32_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_statistics != nullptr)
    {
        children["path-statistics"] = path_statistics;
    }

    if(path_statistics32_bit != nullptr)
    {
        children["path-statistics32-bit"] = path_statistics32_bit;
    }

    if(reservation_statistics != nullptr)
    {
        children["reservation-statistics"] = reservation_statistics;
    }

    if(reservation_statistics32_bit != nullptr)
    {
        children["reservation-statistics32-bit"] = reservation_statistics32_bit;
    }

    return children;
}

void MplsLcac::Statistics::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-statistics" || name == "path-statistics32-bit" || name == "reservation-statistics" || name == "reservation-statistics32-bit" || name == "is-role-standby")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::PathStatistics::PathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "path-statistics"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::PathStatistics::~PathStatistics()
{
}

bool MplsLcac::Statistics::Summary::PathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::Summary::PathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::Summary::PathStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::PathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::PathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::PathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::PathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::Summary::PathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::PathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::PathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::PathStatistics32Bit::PathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "path-statistics32-bit"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::PathStatistics32Bit::~PathStatistics32Bit()
{
}

bool MplsLcac::Statistics::Summary::PathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::Summary::PathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::Summary::PathStatistics32Bit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::PathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::PathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::PathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::PathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::Summary::PathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::PathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::PathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::ReservationStatistics::ReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{

    yang_name = "reservation-statistics"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::ReservationStatistics::~ReservationStatistics()
{
}

bool MplsLcac::Statistics::Summary::ReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::Summary::ReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::ReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::ReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::ReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::Summary::ReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::ReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::ReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcac::Statistics::Summary::ReservationStatistics32Bit::ReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{

    yang_name = "reservation-statistics32-bit"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcac::Statistics::Summary::ReservationStatistics32Bit::~ReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::Summary::ReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::Summary::ReservationStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter)
	|| ydk::is_set(tear_requests.yfilter);
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcac::Statistics::Summary::ReservationStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcac::Statistics::Summary::ReservationStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
}

bool MplsLcac::Statistics::Summary::ReservationStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-admits" || name == "setup-errors" || name == "setup-rejects" || name == "setup-requests" || name == "tear-errors" || name == "tear-preempts" || name == "tear-requests")
        return true;
    return false;
}

MplsLcacStandby::MplsLcacStandby()
    :
    admission_control(std::make_shared<MplsLcacStandby::AdmissionControl>())
	,advertisements(std::make_shared<MplsLcacStandby::Advertisements>())
	,bandwidth_account(std::make_shared<MplsLcacStandby::BandwidthAccount>())
	,bandwidth_allocation(std::make_shared<MplsLcacStandby::BandwidthAllocation>())
	,bfd_neighbors(std::make_shared<MplsLcacStandby::BfdNeighbors>())
	,gmpls(std::make_shared<MplsLcacStandby::Gmpls>())
	,link_information(std::make_shared<MplsLcacStandby::LinkInformation>())
	,link_summary(std::make_shared<MplsLcacStandby::LinkSummary>())
	,neighbors(std::make_shared<MplsLcacStandby::Neighbors>())
	,preemption_events(std::make_shared<MplsLcacStandby::PreemptionEvents>())
	,soft_preemption_global_info(std::make_shared<MplsLcacStandby::SoftPreemptionGlobalInfo>())
	,soft_preemptions(std::make_shared<MplsLcacStandby::SoftPreemptions>())
	,statistics(std::make_shared<MplsLcacStandby::Statistics>())
{
    admission_control->parent = this;
    advertisements->parent = this;
    bandwidth_account->parent = this;
    bandwidth_allocation->parent = this;
    bfd_neighbors->parent = this;
    gmpls->parent = this;
    link_information->parent = this;
    link_summary->parent = this;
    neighbors->parent = this;
    preemption_events->parent = this;
    soft_preemption_global_info->parent = this;
    soft_preemptions->parent = this;
    statistics->parent = this;

    yang_name = "mpls-lcac-standby"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsLcacStandby::~MplsLcacStandby()
{
}

bool MplsLcacStandby::has_data() const
{
    return (admission_control !=  nullptr && admission_control->has_data())
	|| (advertisements !=  nullptr && advertisements->has_data())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_data())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_data())
	|| (gmpls !=  nullptr && gmpls->has_data())
	|| (link_information !=  nullptr && link_information->has_data())
	|| (link_summary !=  nullptr && link_summary->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (preemption_events !=  nullptr && preemption_events->has_data())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_data())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsLcacStandby::has_operation() const
{
    return is_set(yfilter)
	|| (admission_control !=  nullptr && admission_control->has_operation())
	|| (advertisements !=  nullptr && advertisements->has_operation())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_operation())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_operation())
	|| (gmpls !=  nullptr && gmpls->has_operation())
	|| (link_information !=  nullptr && link_information->has_operation())
	|| (link_summary !=  nullptr && link_summary->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (preemption_events !=  nullptr && preemption_events->has_operation())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_operation())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsLcacStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admission-control")
    {
        if(admission_control == nullptr)
        {
            admission_control = std::make_shared<MplsLcacStandby::AdmissionControl>();
        }
        return admission_control;
    }

    if(child_yang_name == "advertisements")
    {
        if(advertisements == nullptr)
        {
            advertisements = std::make_shared<MplsLcacStandby::Advertisements>();
        }
        return advertisements;
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account == nullptr)
        {
            bandwidth_account = std::make_shared<MplsLcacStandby::BandwidthAccount>();
        }
        return bandwidth_account;
    }

    if(child_yang_name == "bandwidth-allocation")
    {
        if(bandwidth_allocation == nullptr)
        {
            bandwidth_allocation = std::make_shared<MplsLcacStandby::BandwidthAllocation>();
        }
        return bandwidth_allocation;
    }

    if(child_yang_name == "bfd-neighbors")
    {
        if(bfd_neighbors == nullptr)
        {
            bfd_neighbors = std::make_shared<MplsLcacStandby::BfdNeighbors>();
        }
        return bfd_neighbors;
    }

    if(child_yang_name == "gmpls")
    {
        if(gmpls == nullptr)
        {
            gmpls = std::make_shared<MplsLcacStandby::Gmpls>();
        }
        return gmpls;
    }

    if(child_yang_name == "link-information")
    {
        if(link_information == nullptr)
        {
            link_information = std::make_shared<MplsLcacStandby::LinkInformation>();
        }
        return link_information;
    }

    if(child_yang_name == "link-summary")
    {
        if(link_summary == nullptr)
        {
            link_summary = std::make_shared<MplsLcacStandby::LinkSummary>();
        }
        return link_summary;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<MplsLcacStandby::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "preemption-events")
    {
        if(preemption_events == nullptr)
        {
            preemption_events = std::make_shared<MplsLcacStandby::PreemptionEvents>();
        }
        return preemption_events;
    }

    if(child_yang_name == "soft-preemption-global-info")
    {
        if(soft_preemption_global_info == nullptr)
        {
            soft_preemption_global_info = std::make_shared<MplsLcacStandby::SoftPreemptionGlobalInfo>();
        }
        return soft_preemption_global_info;
    }

    if(child_yang_name == "soft-preemptions")
    {
        if(soft_preemptions == nullptr)
        {
            soft_preemptions = std::make_shared<MplsLcacStandby::SoftPreemptions>();
        }
        return soft_preemptions;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsLcacStandby::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admission_control != nullptr)
    {
        children["admission-control"] = admission_control;
    }

    if(advertisements != nullptr)
    {
        children["advertisements"] = advertisements;
    }

    if(bandwidth_account != nullptr)
    {
        children["bandwidth-account"] = bandwidth_account;
    }

    if(bandwidth_allocation != nullptr)
    {
        children["bandwidth-allocation"] = bandwidth_allocation;
    }

    if(bfd_neighbors != nullptr)
    {
        children["bfd-neighbors"] = bfd_neighbors;
    }

    if(gmpls != nullptr)
    {
        children["gmpls"] = gmpls;
    }

    if(link_information != nullptr)
    {
        children["link-information"] = link_information;
    }

    if(link_summary != nullptr)
    {
        children["link-summary"] = link_summary;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(preemption_events != nullptr)
    {
        children["preemption-events"] = preemption_events;
    }

    if(soft_preemption_global_info != nullptr)
    {
        children["soft-preemption-global-info"] = soft_preemption_global_info;
    }

    if(soft_preemptions != nullptr)
    {
        children["soft-preemptions"] = soft_preemptions;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsLcacStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLcacStandby::clone_ptr() const
{
    return std::make_shared<MplsLcacStandby>();
}

std::string MplsLcacStandby::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLcacStandby::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLcacStandby::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLcacStandby::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsLcacStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admission-control" || name == "advertisements" || name == "bandwidth-account" || name == "bandwidth-allocation" || name == "bfd-neighbors" || name == "gmpls" || name == "link-information" || name == "link-summary" || name == "neighbors" || name == "preemption-events" || name == "soft-preemption-global-info" || name == "soft-preemptions" || name == "statistics")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::AdmissionControl()
    :
    admitted_tunnels(std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels>())
	,global(std::make_shared<MplsLcacStandby::AdmissionControl::Global>())
	,link_interfaces(std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces>())
{
    admitted_tunnels->parent = this;
    global->parent = this;
    link_interfaces->parent = this;

    yang_name = "admission-control"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::~AdmissionControl()
{
}

bool MplsLcacStandby::AdmissionControl::has_data() const
{
    return (admitted_tunnels !=  nullptr && admitted_tunnels->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (link_interfaces !=  nullptr && link_interfaces->has_data());
}

bool MplsLcacStandby::AdmissionControl::has_operation() const
{
    return is_set(yfilter)
	|| (admitted_tunnels !=  nullptr && admitted_tunnels->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (link_interfaces !=  nullptr && link_interfaces->has_operation());
}

std::string MplsLcacStandby::AdmissionControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admitted-tunnels")
    {
        if(admitted_tunnels == nullptr)
        {
            admitted_tunnels = std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels>();
        }
        return admitted_tunnels;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcacStandby::AdmissionControl::Global>();
        }
        return global;
    }

    if(child_yang_name == "link-interfaces")
    {
        if(link_interfaces == nullptr)
        {
            link_interfaces = std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces>();
        }
        return link_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admitted_tunnels != nullptr)
    {
        children["admitted-tunnels"] = admitted_tunnels;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(link_interfaces != nullptr)
    {
        children["link-interfaces"] = link_interfaces;
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::AdmissionControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::AdmissionControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admitted-tunnels" || name == "global" || name == "link-interfaces")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnels()
{

    yang_name = "admitted-tunnels"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::~AdmittedTunnels()
{
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::has_data() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::has_operation() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admitted-tunnel")
    {
        for(auto const & c : admitted_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel>();
        c->parent = this;
        admitted_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : admitted_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admitted-tunnel")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::AdmittedTunnel()
    :
    source_address{YType::str, "source-address"},
    destination_port{YType::int32, "destination-port"},
    source_port{YType::int32, "source-port"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    next_hop_address{YType::str, "next-hop-address"},
    ctype{YType::enumeration, "ctype"},
    p2mp_id{YType::int32, "p2mp-id"},
    backup_interface{YType::str, "backup-interface"},
    bandwidth{YType::uint64, "bandwidth"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    bandwidth_state{YType::enumeration, "bandwidth-state"},
    down_link_name{YType::str, "down-link-name"},
    hold_priority{YType::uint8, "hold-priority"},
    is_rerouted{YType::boolean, "is-rerouted"},
    local_label{YType::uint32, "local-label"},
    outgoing_label{YType::uint32, "outgoing-label"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    up_link_name{YType::str, "up-link-name"}
{

    yang_name = "admitted-tunnel"; yang_parent_name = "admitted-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::~AdmittedTunnel()
{
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_data() const
{
    return source_address.is_set
	|| destination_port.is_set
	|| source_port.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| next_hop_address.is_set
	|| ctype.is_set
	|| p2mp_id.is_set
	|| backup_interface.is_set
	|| bandwidth.is_set
	|| bandwidth_pool.is_set
	|| bandwidth_state.is_set
	|| down_link_name.is_set
	|| hold_priority.is_set
	|| is_rerouted.is_set
	|| local_label.is_set
	|| outgoing_label.is_set
	|| setup_priority.is_set
	|| tunnel_name.is_set
	|| tunnel_state.is_set
	|| up_link_name.is_set;
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(backup_interface.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(bandwidth_pool.yfilter)
	|| ydk::is_set(bandwidth_state.yfilter)
	|| ydk::is_set(down_link_name.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_rerouted.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_state.yfilter)
	|| ydk::is_set(up_link_name.yfilter);
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/admitted-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnel" <<"[source-address='" <<source_address <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[source-port='" <<source_port <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[ctype='" <<ctype <<"']" <<"[p2mp-id='" <<p2mp_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.yfilter)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.yfilter)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (bandwidth_state.is_set || is_set(bandwidth_state.yfilter)) leaf_name_data.push_back(bandwidth_state.get_name_leafdata());
    if (down_link_name.is_set || is_set(down_link_name.yfilter)) leaf_name_data.push_back(down_link_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_rerouted.is_set || is_set(is_rerouted.yfilter)) leaf_name_data.push_back(is_rerouted.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (up_link_name.is_set || is_set(up_link_name.yfilter)) leaf_name_data.push_back(up_link_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
        backup_interface.value_namespace = name_space;
        backup_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
        bandwidth_pool.value_namespace = name_space;
        bandwidth_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-state")
    {
        bandwidth_state = value;
        bandwidth_state.value_namespace = name_space;
        bandwidth_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-link-name")
    {
        down_link_name = value;
        down_link_name.value_namespace = name_space;
        down_link_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rerouted")
    {
        is_rerouted = value;
        is_rerouted.value_namespace = name_space;
        is_rerouted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-link-name")
    {
        up_link_name = value;
        up_link_name.value_namespace = name_space;
        up_link_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "backup-interface")
    {
        backup_interface.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool.yfilter = yfilter;
    }
    if(value_path == "bandwidth-state")
    {
        bandwidth_state.yfilter = yfilter;
    }
    if(value_path == "down-link-name")
    {
        down_link_name.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-rerouted")
    {
        is_rerouted.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
    if(value_path == "up-link-name")
    {
        up_link_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-port" || name == "source-port" || name == "destination-address" || name == "extended-tunnel-id" || name == "next-hop-address" || name == "ctype" || name == "p2mp-id" || name == "backup-interface" || name == "bandwidth" || name == "bandwidth-pool" || name == "bandwidth-state" || name == "down-link-name" || name == "hold-priority" || name == "is-rerouted" || name == "local-label" || name == "outgoing-label" || name == "setup-priority" || name == "tunnel-name" || name == "tunnel-state" || name == "up-link-name")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::Global::Global()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_role_standby{YType::boolean, "is-role-standby"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "global"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::Global::~Global()
{
}

bool MplsLcacStandby::AdmissionControl::Global::has_data() const
{
    return bandwidth_units.is_set
	|| is_role_standby.is_set
	|| selected_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsLcacStandby::AdmissionControl::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(selected_tunnels.yfilter)
	|| ydk::is_set(total_p2mp_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsLcacStandby::AdmissionControl::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.yfilter)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.yfilter)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::AdmissionControl::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
        selected_tunnels.value_namespace = name_space;
        selected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
        total_p2mp_tunnels.value_namespace = name_space;
        total_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::AdmissionControl::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsLcacStandby::AdmissionControl::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-units" || name == "is-role-standby" || name == "selected-tunnels" || name == "total-p2mp-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterfaces()
{

    yang_name = "link-interfaces"; yang_parent_name = "admission-control"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::~LinkInterfaces()
{
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::has_data() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::has_operation() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::LinkInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::LinkInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-interface")
    {
        for(auto const & c : link_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface>();
        c->parent = this;
        link_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::LinkInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-interface")
        return true;
    return false;
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::LinkInterface()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_role_standby{YType::boolean, "is-role-standby"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "link-interface"; yang_parent_name = "link-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::~LinkInterface()
{
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::has_data() const
{
    return interface_name.is_set
	|| bandwidth_units.is_set
	|| is_role_standby.is_set
	|| selected_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| ydk::is_set(selected_tunnels.yfilter)
	|| ydk::is_set(total_p2mp_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/link-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.yfilter)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.yfilter)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
        selected_tunnels.value_namespace = name_space;
        selected_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
        total_p2mp_tunnels.value_namespace = name_space;
        total_p2mp_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bandwidth-units" || name == "is-role-standby" || name == "selected-tunnels" || name == "total-p2mp-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::Advertisements()
    :
    ds_te_mode{YType::enumeration, "ds-te-mode"},
    flooding_status_message{YType::str, "flooding-status-message"},
    last_flooding_time{YType::uint32, "last-flooding-time"},
    last_flooding_trigger{YType::enumeration, "last-flooding-trigger"},
    next_flooding_time{YType::uint32, "next-flooding-time"}
{

    yang_name = "advertisements"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::~Advertisements()
{
}

bool MplsLcacStandby::Advertisements::has_data() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_data())
            return true;
    }
    return ds_te_mode.is_set
	|| flooding_status_message.is_set
	|| last_flooding_time.is_set
	|| last_flooding_trigger.is_set
	|| next_flooding_time.is_set;
}

bool MplsLcacStandby::Advertisements::has_operation() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ds_te_mode.yfilter)
	|| ydk::is_set(flooding_status_message.yfilter)
	|| ydk::is_set(last_flooding_time.yfilter)
	|| ydk::is_set(last_flooding_trigger.yfilter)
	|| ydk::is_set(next_flooding_time.yfilter);
}

std::string MplsLcacStandby::Advertisements::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ds_te_mode.is_set || is_set(ds_te_mode.yfilter)) leaf_name_data.push_back(ds_te_mode.get_name_leafdata());
    if (flooding_status_message.is_set || is_set(flooding_status_message.yfilter)) leaf_name_data.push_back(flooding_status_message.get_name_leafdata());
    if (last_flooding_time.is_set || is_set(last_flooding_time.yfilter)) leaf_name_data.push_back(last_flooding_time.get_name_leafdata());
    if (last_flooding_trigger.is_set || is_set(last_flooding_trigger.yfilter)) leaf_name_data.push_back(last_flooding_trigger.get_name_leafdata());
    if (next_flooding_time.is_set || is_set(next_flooding_time.yfilter)) leaf_name_data.push_back(next_flooding_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertized-areas")
    {
        for(auto const & c : advertized_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas>();
        c->parent = this;
        advertized_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : advertized_areas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::Advertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ds-te-mode")
    {
        ds_te_mode = value;
        ds_te_mode.value_namespace = name_space;
        ds_te_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-status-message")
    {
        flooding_status_message = value;
        flooding_status_message.value_namespace = name_space;
        flooding_status_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time = value;
        last_flooding_time.value_namespace = name_space;
        last_flooding_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger = value;
        last_flooding_trigger.value_namespace = name_space;
        last_flooding_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time = value;
        next_flooding_time.value_namespace = name_space;
        next_flooding_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ds-te-mode")
    {
        ds_te_mode.yfilter = yfilter;
    }
    if(value_path == "flooding-status-message")
    {
        flooding_status_message.yfilter = yfilter;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time.yfilter = yfilter;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger.yfilter = yfilter;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertized-areas" || name == "ds-te-mode" || name == "flooding-status-message" || name == "last-flooding-time" || name == "last-flooding-trigger" || name == "next-flooding-time")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::AdvertizedAreas()
    :
    igp_area_id{YType::str, "igp-area-id"},
    protocol{YType::enumeration, "protocol"},
    router_id{YType::str, "router-id"},
    system_id{YType::str, "system-id"}
{

    yang_name = "advertized-areas"; yang_parent_name = "advertisements"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::~AdvertizedAreas()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::has_data() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_data())
            return true;
    }
    return igp_area_id.is_set
	|| protocol.is_set
	|| router_id.is_set
	|| system_id.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::has_operation() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertized-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooded-link")
    {
        for(auto const & c : flooded_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink>();
        c->parent = this;
        flooded_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flooded_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-link" || name == "igp-area-id" || name == "protocol" || name == "router-id" || name == "system-id")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::FloodedLink()
    :
    affinity_attribute_flags{YType::uint32, "affinity-attribute-flags"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    designated_router_igp_id{YType::str, "designated-router-igp-id"},
    igp_metric{YType::uint32, "igp-metric"},
    igp_neighbor_address{YType::str, "igp-neighbor-address"},
    incoming_interface_id{YType::uint32, "incoming-interface-id"},
    interface_name{YType::str, "interface-name"},
    is_designated_router{YType::boolean, "is-designated-router"},
    is_receiving_reservable_bandwidth_enabled{YType::boolean, "is-receiving-reservable-bandwidth-enabled"},
    is_transmitting_reservable_bandwidth_enabled{YType::boolean, "is-transmitting-reservable-bandwidth-enabled"},
    link_address{YType::str, "link-address"},
    link_id{YType::uint16, "link-id"},
    link_maximum_reservable_bandwidth{YType::uint32, "link-maximum-reservable-bandwidth"},
    neighbor_igp_id{YType::str, "neighbor-igp-id"},
    outgoing_interface_id{YType::uint32, "outgoing-interface-id"},
    physical_bandwidth{YType::uint32, "physical-bandwidth"},
    receiving_direction{YType::enumeration, "receiving-direction"},
    reservable_pool0_bandwidth{YType::uint32, "reservable-pool0-bandwidth"},
    reservable_pool1_bandwidth{YType::uint32, "reservable-pool1-bandwidth"},
    subnet_type{YType::enumeration, "subnet-type"},
    te_metric{YType::uint32, "te-metric"},
    transmitting_direction{YType::enumeration, "transmitting-direction"},
    uni_link_delay{YType::uint32, "uni-link-delay"}
    	,
    odu_link_capabilities(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>())
{
    odu_link_capabilities->parent = this;

    yang_name = "flooded-link"; yang_parent_name = "advertized-areas"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::~FloodedLink()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::has_data() const
{
    for (std::size_t index=0; index<extended_affinity_attribute_flag.size(); index++)
    {
        if(extended_affinity_attribute_flag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_data())
            return true;
    }
    return affinity_attribute_flags.is_set
	|| bandwidth_units.is_set
	|| bcm_id.is_set
	|| designated_router_igp_id.is_set
	|| igp_metric.is_set
	|| igp_neighbor_address.is_set
	|| incoming_interface_id.is_set
	|| interface_name.is_set
	|| is_designated_router.is_set
	|| is_receiving_reservable_bandwidth_enabled.is_set
	|| is_transmitting_reservable_bandwidth_enabled.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| link_maximum_reservable_bandwidth.is_set
	|| neighbor_igp_id.is_set
	|| outgoing_interface_id.is_set
	|| physical_bandwidth.is_set
	|| receiving_direction.is_set
	|| reservable_pool0_bandwidth.is_set
	|| reservable_pool1_bandwidth.is_set
	|| subnet_type.is_set
	|| te_metric.is_set
	|| transmitting_direction.is_set
	|| uni_link_delay.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::has_operation() const
{
    for (std::size_t index=0; index<extended_affinity_attribute_flag.size(); index++)
    {
        if(extended_affinity_attribute_flag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_attribute_flags.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(designated_router_igp_id.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(igp_neighbor_address.yfilter)
	|| ydk::is_set(incoming_interface_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_designated_router.yfilter)
	|| ydk::is_set(is_receiving_reservable_bandwidth_enabled.yfilter)
	|| ydk::is_set(is_transmitting_reservable_bandwidth_enabled.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(neighbor_igp_id.yfilter)
	|| ydk::is_set(outgoing_interface_id.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(receiving_direction.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(subnet_type.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(transmitting_direction.yfilter)
	|| ydk::is_set(uni_link_delay.yfilter)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_attribute_flags.is_set || is_set(affinity_attribute_flags.yfilter)) leaf_name_data.push_back(affinity_attribute_flags.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (designated_router_igp_id.is_set || is_set(designated_router_igp_id.yfilter)) leaf_name_data.push_back(designated_router_igp_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (igp_neighbor_address.is_set || is_set(igp_neighbor_address.yfilter)) leaf_name_data.push_back(igp_neighbor_address.get_name_leafdata());
    if (incoming_interface_id.is_set || is_set(incoming_interface_id.yfilter)) leaf_name_data.push_back(incoming_interface_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_designated_router.is_set || is_set(is_designated_router.yfilter)) leaf_name_data.push_back(is_designated_router.get_name_leafdata());
    if (is_receiving_reservable_bandwidth_enabled.is_set || is_set(is_receiving_reservable_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_receiving_reservable_bandwidth_enabled.get_name_leafdata());
    if (is_transmitting_reservable_bandwidth_enabled.is_set || is_set(is_transmitting_reservable_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_transmitting_reservable_bandwidth_enabled.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_maximum_reservable_bandwidth.is_set || is_set(link_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(link_maximum_reservable_bandwidth.get_name_leafdata());
    if (neighbor_igp_id.is_set || is_set(neighbor_igp_id.yfilter)) leaf_name_data.push_back(neighbor_igp_id.get_name_leafdata());
    if (outgoing_interface_id.is_set || is_set(outgoing_interface_id.yfilter)) leaf_name_data.push_back(outgoing_interface_id.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (receiving_direction.is_set || is_set(receiving_direction.yfilter)) leaf_name_data.push_back(receiving_direction.get_name_leafdata());
    if (reservable_pool0_bandwidth.is_set || is_set(reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth.get_name_leafdata());
    if (reservable_pool1_bandwidth.is_set || is_set(reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth.get_name_leafdata());
    if (subnet_type.is_set || is_set(subnet_type.yfilter)) leaf_name_data.push_back(subnet_type.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (transmitting_direction.is_set || is_set(transmitting_direction.yfilter)) leaf_name_data.push_back(transmitting_direction.get_name_leafdata());
    if (uni_link_delay.is_set || is_set(uni_link_delay.yfilter)) leaf_name_data.push_back(uni_link_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended-affinity-attribute-flag")
    {
        for(auto const & c : extended_affinity_attribute_flag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag>();
        c->parent = this;
        extended_affinity_attribute_flag.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities == nullptr)
        {
            odu_link_capabilities = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>();
        }
        return odu_link_capabilities;
    }

    if(child_yang_name == "receiving-reservable-bandwidth")
    {
        for(auto const & c : receiving_reservable_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth>();
        c->parent = this;
        receiving_reservable_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "transmitting-reservable-bandwidth")
    {
        for(auto const & c : transmitting_reservable_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth>();
        c->parent = this;
        transmitting_reservable_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended_affinity_attribute_flag)
    {
        children[c->get_segment_path()] = c;
    }

    if(odu_link_capabilities != nullptr)
    {
        children["odu-link-capabilities"] = odu_link_capabilities;
    }

    for (auto const & c : receiving_reservable_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : transmitting_reservable_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags = value;
        affinity_attribute_flags.value_namespace = name_space;
        affinity_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id = value;
        designated_router_igp_id.value_namespace = name_space;
        designated_router_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address = value;
        igp_neighbor_address.value_namespace = name_space;
        igp_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id = value;
        incoming_interface_id.value_namespace = name_space;
        incoming_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router = value;
        is_designated_router.value_namespace = name_space;
        is_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled = value;
        is_receiving_reservable_bandwidth_enabled.value_namespace = name_space;
        is_receiving_reservable_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled = value;
        is_transmitting_reservable_bandwidth_enabled.value_namespace = name_space;
        is_transmitting_reservable_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth = value;
        link_maximum_reservable_bandwidth.value_namespace = name_space;
        link_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id = value;
        neighbor_igp_id.value_namespace = name_space;
        neighbor_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id = value;
        outgoing_interface_id.value_namespace = name_space;
        outgoing_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction = value;
        receiving_direction.value_namespace = name_space;
        receiving_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth = value;
        reservable_pool0_bandwidth.value_namespace = name_space;
        reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth = value;
        reservable_pool1_bandwidth.value_namespace = name_space;
        reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-type")
    {
        subnet_type = value;
        subnet_type.value_namespace = name_space;
        subnet_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction = value;
        transmitting_direction.value_namespace = name_space;
        transmitting_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay = value;
        uni_link_delay.value_namespace = name_space;
        uni_link_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router.yfilter = yfilter;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "subnet-type")
    {
        subnet_type.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction.yfilter = yfilter;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-affinity-attribute-flag" || name == "odu-link-capabilities" || name == "receiving-reservable-bandwidth" || name == "shared-risk-link-group" || name == "transmitting-reservable-bandwidth" || name == "affinity-attribute-flags" || name == "bandwidth-units" || name == "bcm-id" || name == "designated-router-igp-id" || name == "igp-metric" || name == "igp-neighbor-address" || name == "incoming-interface-id" || name == "interface-name" || name == "is-designated-router" || name == "is-receiving-reservable-bandwidth-enabled" || name == "is-transmitting-reservable-bandwidth-enabled" || name == "link-address" || name == "link-id" || name == "link-maximum-reservable-bandwidth" || name == "neighbor-igp-id" || name == "outgoing-interface-id" || name == "physical-bandwidth" || name == "receiving-direction" || name == "reservable-pool0-bandwidth" || name == "reservable-pool1-bandwidth" || name == "subnet-type" || name == "te-metric" || name == "transmitting-direction" || name == "uni-link-delay")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::ExtendedAffinityAttributeFlag()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-affinity-attribute-flag"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::~ExtendedAffinityAttributeFlag()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-affinity-attribute-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduLinkCapabilities()
{

    yang_name = "odu-link-capabilities"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-lsp-bandwidth")
    {
        for(auto const & c : max_lsp_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth>();
        c->parent = this;
        max_lsp_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-capability")
    {
        for(auto const & c : odu_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : max_lsp_bandwidth)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : odu_capability)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsp-bandwidth" || name == "odu-capability")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::MaxLspBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "max-lsp-bandwidth"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::~MaxLspBandwidth()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsp-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    lcas_capable{YType::boolean, "lcas-capable"},
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    switchable{YType::boolean, "switchable"},
    terminable{YType::boolean, "terminable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"}
    	,
    bandwidth_info(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return lcas_capable.is_set
	|| signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| switchable.is_set
	|| terminable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lcas_capable.yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage1.yfilter)
	|| ydk::is_set(stage2.yfilter)
	|| ydk::is_set(stage3.yfilter)
	|| ydk::is_set(stage4.yfilter)
	|| ydk::is_set(switchable.yfilter)
	|| ydk::is_set(terminable.yfilter)
	|| ydk::is_set(tsg1p25.yfilter)
	|| ydk::is_set(tsg2p5.yfilter)
	|| ydk::is_set(vcat_capable.yfilter)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lcas_capable.is_set || is_set(lcas_capable.yfilter)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.yfilter)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.yfilter)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.yfilter)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.yfilter)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.yfilter)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.yfilter)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.yfilter)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.yfilter)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.yfilter)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info == nullptr)
        {
            bandwidth_info = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
        }
        return bandwidth_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_info != nullptr)
    {
        children["bandwidth-info"] = bandwidth_info;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
        lcas_capable.value_namespace = name_space;
        lcas_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
        stage1.value_namespace = name_space;
        stage1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
        stage2.value_namespace = name_space;
        stage2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
        stage3.value_namespace = name_space;
        stage3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
        stage4.value_namespace = name_space;
        stage4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchable")
    {
        switchable = value;
        switchable.value_namespace = name_space;
        switchable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminable")
    {
        terminable = value;
        terminable.value_namespace = name_space;
        terminable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
        tsg1p25.value_namespace = name_space;
        tsg1p25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
        tsg2p5.value_namespace = name_space;
        tsg2p5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
        vcat_capable.value_namespace = name_space;
        vcat_capable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable.yfilter = yfilter;
    }
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage1")
    {
        stage1.yfilter = yfilter;
    }
    if(value_path == "stage2")
    {
        stage2.yfilter = yfilter;
    }
    if(value_path == "stage3")
    {
        stage3.yfilter = yfilter;
    }
    if(value_path == "stage4")
    {
        stage4.yfilter = yfilter;
    }
    if(value_path == "switchable")
    {
        switchable.yfilter = yfilter;
    }
    if(value_path == "terminable")
    {
        terminable.yfilter = yfilter;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25.yfilter = yfilter;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5.yfilter = yfilter;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-info" || name == "lcas-capable" || name == "signal-type" || name == "stage1" || name == "stage2" || name == "stage3" || name == "stage4" || name == "switchable" || name == "terminable" || name == "tsg1p25" || name == "tsg2p5" || name == "vcat-capable")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    flex->parent = this;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed")
    {
        if(fixed == nullptr)
        {
            fixed = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
        }
        return fixed;
    }

    if(child_yang_name == "flex")
    {
        if(flex == nullptr)
        {
            flex = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
        }
        return flex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed != nullptr)
    {
        children["fixed"] = fixed;
    }

    if(flex != nullptr)
    {
        children["flex"] = flex;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "flex" || name == "type")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{

    yang_name = "fixed"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_od_us.yfilter)
	|| ydk::is_set(unreserved_od_us.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.yfilter)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.yfilter)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
        maximum_od_us.value_namespace = name_space;
        maximum_od_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
        unreserved_od_us.value_namespace = name_space;
        unreserved_od_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us.yfilter = yfilter;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-od-us" || name == "unreserved-od-us")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"}
{

    yang_name = "flex"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| max_lsp_bandwidth.is_set
	|| unreserved_bandwidth.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_lsp_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.yfilter)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
        max_lsp_bandwidth.value_namespace = name_space;
        max_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-bandwidth" || name == "max-lsp-bandwidth" || name == "unreserved-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::ReceivingReservableBandwidth()
    :
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"},
    priority{YType::uint8, "priority"}
{

    yang_name = "receiving-reservable-bandwidth"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::~ReceivingReservableBandwidth()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_data() const
{
    return pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set
	|| priority.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool0_bandwidth.yfilter)
	|| ydk::is_set(pool1_bandwidth.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiving-reservable-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.yfilter)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.yfilter)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
        pool0_bandwidth.value_namespace = name_space;
        pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
        pool1_bandwidth.value_namespace = name_space;
        pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool0-bandwidth" || name == "pool1-bandwidth" || name == "priority")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::TransmittingReservableBandwidth()
    :
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"},
    priority{YType::uint8, "priority"}
{

    yang_name = "transmitting-reservable-bandwidth"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::~TransmittingReservableBandwidth()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_data() const
{
    return pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set
	|| priority.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool0_bandwidth.yfilter)
	|| ydk::is_set(pool1_bandwidth.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitting-reservable-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.yfilter)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.yfilter)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
        pool0_bandwidth.value_namespace = name_space;
        pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
        pool1_bandwidth.value_namespace = name_space;
        pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool0-bandwidth" || name == "pool1-bandwidth" || name == "priority")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_links(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks>())
{
    bandwidth_account_links->parent = this;

    yang_name = "bandwidth-account"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcacStandby::BandwidthAccount::has_data() const
{
    return (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_data());
}

bool MplsLcacStandby::BandwidthAccount::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-links")
    {
        if(bandwidth_account_links == nullptr)
        {
            bandwidth_account_links = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks>();
        }
        return bandwidth_account_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_account_links != nullptr)
    {
        children["bandwidth-account-links"] = bandwidth_account_links;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAccount::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAccount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-links")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLinks()
{

    yang_name = "bandwidth-account-links"; yang_parent_name = "bandwidth-account"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::~BandwidthAccountLinks()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-account/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-account-link")
    {
        for(auto const & c : bandwidth_account_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink>();
        c->parent = this;
        bandwidth_account_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth_account_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-account-link")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::BandwidthAccountLink()
    :
    interface_name{YType::str, "interface-name"},
    link_id{YType::str, "link-id"}
    	,
    common_info(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>())
	,rsvp_te_sample_history(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory>())
	,sr_sample_history(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory>())
{
    common_info->parent = this;
    rsvp_te_sample_history->parent = this;
    sr_sample_history->parent = this;

    yang_name = "bandwidth-account-link"; yang_parent_name = "bandwidth-account-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::~BandwidthAccountLink()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_data() const
{
    return interface_name.is_set
	|| link_id.is_set
	|| (common_info !=  nullptr && common_info->has_data())
	|| (rsvp_te_sample_history !=  nullptr && rsvp_te_sample_history->has_data())
	|| (sr_sample_history !=  nullptr && sr_sample_history->has_data());
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (rsvp_te_sample_history !=  nullptr && rsvp_te_sample_history->has_operation())
	|| (sr_sample_history !=  nullptr && sr_sample_history->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-account/bandwidth-account-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-info")
    {
        if(common_info == nullptr)
        {
            common_info = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>();
        }
        return common_info;
    }

    if(child_yang_name == "rsvp-te-sample-history")
    {
        if(rsvp_te_sample_history == nullptr)
        {
            rsvp_te_sample_history = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory>();
        }
        return rsvp_te_sample_history;
    }

    if(child_yang_name == "sr-sample-history")
    {
        if(sr_sample_history == nullptr)
        {
            sr_sample_history = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory>();
        }
        return sr_sample_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_info != nullptr)
    {
        children["common-info"] = common_info;
    }

    if(rsvp_te_sample_history != nullptr)
    {
        children["rsvp-te-sample-history"] = rsvp_te_sample_history;
    }

    if(sr_sample_history != nullptr)
    {
        children["sr-sample-history"] = sr_sample_history;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-info" || name == "rsvp-te-sample-history" || name == "sr-sample-history" || name == "interface-name" || name == "link-id")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::CommonInfo()
    :
    application_enforced{YType::boolean, "application-enforced"},
    application_time_remaining_nanosec{YType::uint64, "application-time-remaining-nanosec"},
    collection_type{YType::enumeration, "collection-type"},
    effective_maximum_reservable_bandwidth{YType::uint64, "effective-maximum-reservable-bandwidth"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    last_application_timestamp_nanosec{YType::uint64, "last-application-timestamp-nanosec"},
    last_sample_collection_timestamp_nanosec{YType::uint64, "last-sample-collection-timestamp-nanosec"},
    next_application_timestamp_nanosec{YType::uint64, "next-application-timestamp-nanosec"},
    next_sample_collection_nanosec{YType::uint64, "next-sample-collection-nanosec"},
    sample_time_remaining_timestamp_nanosec{YType::uint64, "sample-time-remaining-timestamp-nanosec"}
    	,
    rsvp_te_bandwidth_utilization(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization>())
	,sr_bandwidth_utilization(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization>())
{
    rsvp_te_bandwidth_utilization->parent = this;
    sr_bandwidth_utilization->parent = this;

    yang_name = "common-info"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::~CommonInfo()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_data() const
{
    return application_enforced.is_set
	|| application_time_remaining_nanosec.is_set
	|| collection_type.is_set
	|| effective_maximum_reservable_bandwidth.is_set
	|| is_bandwidth_account_enabled.is_set
	|| last_application_timestamp_nanosec.is_set
	|| last_sample_collection_timestamp_nanosec.is_set
	|| next_application_timestamp_nanosec.is_set
	|| next_sample_collection_nanosec.is_set
	|| sample_time_remaining_timestamp_nanosec.is_set
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_data())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_data());
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_enforced.yfilter)
	|| ydk::is_set(application_time_remaining_nanosec.yfilter)
	|| ydk::is_set(collection_type.yfilter)
	|| ydk::is_set(effective_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(is_bandwidth_account_enabled.yfilter)
	|| ydk::is_set(last_application_timestamp_nanosec.yfilter)
	|| ydk::is_set(last_sample_collection_timestamp_nanosec.yfilter)
	|| ydk::is_set(next_application_timestamp_nanosec.yfilter)
	|| ydk::is_set(next_sample_collection_nanosec.yfilter)
	|| ydk::is_set(sample_time_remaining_timestamp_nanosec.yfilter)
	|| (rsvp_te_bandwidth_utilization !=  nullptr && rsvp_te_bandwidth_utilization->has_operation())
	|| (sr_bandwidth_utilization !=  nullptr && sr_bandwidth_utilization->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_enforced.is_set || is_set(application_enforced.yfilter)) leaf_name_data.push_back(application_enforced.get_name_leafdata());
    if (application_time_remaining_nanosec.is_set || is_set(application_time_remaining_nanosec.yfilter)) leaf_name_data.push_back(application_time_remaining_nanosec.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.yfilter)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (effective_maximum_reservable_bandwidth.is_set || is_set(effective_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.yfilter)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (last_application_timestamp_nanosec.is_set || is_set(last_application_timestamp_nanosec.yfilter)) leaf_name_data.push_back(last_application_timestamp_nanosec.get_name_leafdata());
    if (last_sample_collection_timestamp_nanosec.is_set || is_set(last_sample_collection_timestamp_nanosec.yfilter)) leaf_name_data.push_back(last_sample_collection_timestamp_nanosec.get_name_leafdata());
    if (next_application_timestamp_nanosec.is_set || is_set(next_application_timestamp_nanosec.yfilter)) leaf_name_data.push_back(next_application_timestamp_nanosec.get_name_leafdata());
    if (next_sample_collection_nanosec.is_set || is_set(next_sample_collection_nanosec.yfilter)) leaf_name_data.push_back(next_sample_collection_nanosec.get_name_leafdata());
    if (sample_time_remaining_timestamp_nanosec.is_set || is_set(sample_time_remaining_timestamp_nanosec.yfilter)) leaf_name_data.push_back(sample_time_remaining_timestamp_nanosec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-bandwidth-utilization")
    {
        if(rsvp_te_bandwidth_utilization == nullptr)
        {
            rsvp_te_bandwidth_utilization = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization>();
        }
        return rsvp_te_bandwidth_utilization;
    }

    if(child_yang_name == "sr-bandwidth-utilization")
    {
        if(sr_bandwidth_utilization == nullptr)
        {
            sr_bandwidth_utilization = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization>();
        }
        return sr_bandwidth_utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rsvp_te_bandwidth_utilization != nullptr)
    {
        children["rsvp-te-bandwidth-utilization"] = rsvp_te_bandwidth_utilization;
    }

    if(sr_bandwidth_utilization != nullptr)
    {
        children["sr-bandwidth-utilization"] = sr_bandwidth_utilization;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-enforced")
    {
        application_enforced = value;
        application_enforced.value_namespace = name_space;
        application_enforced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-time-remaining-nanosec")
    {
        application_time_remaining_nanosec = value;
        application_time_remaining_nanosec.value_namespace = name_space;
        application_time_remaining_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
        collection_type.value_namespace = name_space;
        collection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth = value;
        effective_maximum_reservable_bandwidth.value_namespace = name_space;
        effective_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
        is_bandwidth_account_enabled.value_namespace = name_space;
        is_bandwidth_account_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-application-timestamp-nanosec")
    {
        last_application_timestamp_nanosec = value;
        last_application_timestamp_nanosec.value_namespace = name_space;
        last_application_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sample-collection-timestamp-nanosec")
    {
        last_sample_collection_timestamp_nanosec = value;
        last_sample_collection_timestamp_nanosec.value_namespace = name_space;
        last_sample_collection_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-application-timestamp-nanosec")
    {
        next_application_timestamp_nanosec = value;
        next_application_timestamp_nanosec.value_namespace = name_space;
        next_application_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-sample-collection-nanosec")
    {
        next_sample_collection_nanosec = value;
        next_sample_collection_nanosec.value_namespace = name_space;
        next_sample_collection_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-time-remaining-timestamp-nanosec")
    {
        sample_time_remaining_timestamp_nanosec = value;
        sample_time_remaining_timestamp_nanosec.value_namespace = name_space;
        sample_time_remaining_timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-enforced")
    {
        application_enforced.yfilter = yfilter;
    }
    if(value_path == "application-time-remaining-nanosec")
    {
        application_time_remaining_nanosec.yfilter = yfilter;
    }
    if(value_path == "collection-type")
    {
        collection_type.yfilter = yfilter;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled.yfilter = yfilter;
    }
    if(value_path == "last-application-timestamp-nanosec")
    {
        last_application_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "last-sample-collection-timestamp-nanosec")
    {
        last_sample_collection_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "next-application-timestamp-nanosec")
    {
        next_application_timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "next-sample-collection-nanosec")
    {
        next_sample_collection_nanosec.yfilter = yfilter;
    }
    if(value_path == "sample-time-remaining-timestamp-nanosec")
    {
        sample_time_remaining_timestamp_nanosec.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "application-enforced" || name == "application-time-remaining-nanosec" || name == "collection-type" || name == "effective-maximum-reservable-bandwidth" || name == "is-bandwidth-account-enabled" || name == "last-application-timestamp-nanosec" || name == "last-sample-collection-timestamp-nanosec" || name == "next-application-timestamp-nanosec" || name == "next-sample-collection-nanosec" || name == "sample-time-remaining-timestamp-nanosec")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::RsvpTeBandwidthUtilization()
    :
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_adjusted_bandwidth_utilization{YType::uint64, "rsvp-te-adjusted-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    rsvp_te_enforced_bandwidth_utilization{YType::uint64, "rsvp-te-enforced-bandwidth-utilization"},
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"}
{

    yang_name = "rsvp-te-bandwidth-utilization"; yang_parent_name = "common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::~RsvpTeBandwidthUtilization()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_data() const
{
    return non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_adjusted_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_enforced_bandwidth_utilization.is_set
	|| total_link_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_bandwidth_utilization.yfilter)
	|| ydk::is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)
	|| ydk::is_set(total_link_bandwidth_utilization.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_adjusted_bandwidth_utilization.is_set || is_set(rsvp_te_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_adjusted_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_enforced_bandwidth_utilization.is_set || is_set(rsvp_te_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(rsvp_te_enforced_bandwidth_utilization.get_name_leafdata());
    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.yfilter)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
        non_rsvp_te_bandwidth_utilization.value_namespace = name_space;
        non_rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization = value;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
        rsvp_te_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization = value;
        rsvp_te_enforced_bandwidth_utilization.value_namespace = name_space;
        rsvp_te_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
        total_link_bandwidth_utilization.value_namespace = name_space;
        total_link_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-adjusted-bandwidth-utilization")
    {
        rsvp_te_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enforced-bandwidth-utilization")
    {
        rsvp_te_enforced_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::RsvpTeBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-bandwidth-utilization" || name == "rsvp-te-adjusted-bandwidth-utilization" || name == "rsvp-te-bandwidth-utilization" || name == "rsvp-te-enforced-bandwidth-utilization" || name == "total-link-bandwidth-utilization")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::SrBandwidthUtilization()
    :
    sr_adjusted_bandwidth_utilization{YType::uint64, "sr-adjusted-bandwidth-utilization"},
    sr_bandwidth_utilization{YType::uint64, "sr-bandwidth-utilization"},
    sr_enforced_bandwidth_utilization{YType::uint64, "sr-enforced-bandwidth-utilization"}
{

    yang_name = "sr-bandwidth-utilization"; yang_parent_name = "common-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::~SrBandwidthUtilization()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_data() const
{
    return sr_adjusted_bandwidth_utilization.is_set
	|| sr_bandwidth_utilization.is_set
	|| sr_enforced_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_adjusted_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_bandwidth_utilization.yfilter)
	|| ydk::is_set(sr_enforced_bandwidth_utilization.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-bandwidth-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_adjusted_bandwidth_utilization.is_set || is_set(sr_adjusted_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_adjusted_bandwidth_utilization.get_name_leafdata());
    if (sr_bandwidth_utilization.is_set || is_set(sr_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_bandwidth_utilization.get_name_leafdata());
    if (sr_enforced_bandwidth_utilization.is_set || is_set(sr_enforced_bandwidth_utilization.yfilter)) leaf_name_data.push_back(sr_enforced_bandwidth_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization = value;
        sr_adjusted_bandwidth_utilization.value_namespace = name_space;
        sr_adjusted_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization = value;
        sr_bandwidth_utilization.value_namespace = name_space;
        sr_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization = value;
        sr_enforced_bandwidth_utilization.value_namespace = name_space;
        sr_enforced_bandwidth_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-adjusted-bandwidth-utilization")
    {
        sr_adjusted_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-bandwidth-utilization")
    {
        sr_bandwidth_utilization.yfilter = yfilter;
    }
    if(value_path == "sr-enforced-bandwidth-utilization")
    {
        sr_enforced_bandwidth_utilization.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::SrBandwidthUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-adjusted-bandwidth-utilization" || name == "sr-bandwidth-utilization" || name == "sr-enforced-bandwidth-utilization")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeSampleHistory()
{

    yang_name = "rsvp-te-sample-history"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::~RsvpTeSampleHistory()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_data() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<rsvp_te_active_interval_sample.size(); index++)
    {
        if(rsvp_te_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rsvp_te_previous_interval_sample.size(); index++)
    {
        if(rsvp_te_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rsvp-te-active-interval-sample")
    {
        for(auto const & c : rsvp_te_active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample>();
        c->parent = this;
        rsvp_te_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "rsvp-te-previous-interval-sample")
    {
        for(auto const & c : rsvp_te_previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample>();
        c->parent = this;
        rsvp_te_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rsvp_te_active_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rsvp_te_previous_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsvp-te-active-interval-sample" || name == "rsvp-te-previous-interval-sample")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::RsvpTeActiveIntervalSample()
    :
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    total_rate{YType::uint64, "total-rate"}
{

    yang_name = "rsvp-te-active-interval-sample"; yang_parent_name = "rsvp-te-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::~RsvpTeActiveIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_data() const
{
    return non_rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp_nanosec.is_set
	|| total_packet_rate.is_set
	|| total_rate.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(total_packet_rate.yfilter)
	|| ydk::is_set(total_rate.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.yfilter)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
        non_rsvp_te_packet_rate.value_namespace = name_space;
        non_rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
        rsvp_te_packet_rate.value_namespace = name_space;
        rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
        total_packet_rate.value_namespace = name_space;
        total_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTeActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-packet-rate" || name == "non-rsvp-te-rate" || name == "rsvp-te-packet-rate" || name == "rsvp-te-rate" || name == "timestamp-nanosec" || name == "total-packet-rate" || name == "total-rate")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::RsvpTePreviousIntervalSample()
    :
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    total_rate{YType::uint64, "total-rate"}
{

    yang_name = "rsvp-te-previous-interval-sample"; yang_parent_name = "rsvp-te-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::~RsvpTePreviousIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_data() const
{
    return non_rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp_nanosec.is_set
	|| total_packet_rate.is_set
	|| total_rate.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(non_rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(non_rsvp_te_rate.yfilter)
	|| ydk::is_set(rsvp_te_packet_rate.yfilter)
	|| ydk::is_set(rsvp_te_rate.yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter)
	|| ydk::is_set(total_packet_rate.yfilter)
	|| ydk::is_set(total_rate.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-te-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.yfilter)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.yfilter)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.yfilter)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.yfilter)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.yfilter)) leaf_name_data.push_back(total_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
        non_rsvp_te_packet_rate.value_namespace = name_space;
        non_rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
        non_rsvp_te_rate.value_namespace = name_space;
        non_rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
        rsvp_te_packet_rate.value_namespace = name_space;
        rsvp_te_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
        rsvp_te_rate.value_namespace = name_space;
        rsvp_te_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
        total_packet_rate.value_namespace = name_space;
        total_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
        total_rate.value_namespace = name_space;
        total_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate.yfilter = yfilter;
    }
    if(value_path == "total-rate")
    {
        total_rate.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::RsvpTeSampleHistory::RsvpTePreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-rsvp-te-packet-rate" || name == "non-rsvp-te-rate" || name == "rsvp-te-packet-rate" || name == "rsvp-te-rate" || name == "timestamp-nanosec" || name == "total-packet-rate" || name == "total-rate")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrSampleHistory()
{

    yang_name = "sr-sample-history"; yang_parent_name = "bandwidth-account-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::~SrSampleHistory()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_data() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<sr_active_interval_sample.size(); index++)
    {
        if(sr_active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_previous_interval_sample.size(); index++)
    {
        if(sr_previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-sample-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-active-interval-sample")
    {
        for(auto const & c : sr_active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample>();
        c->parent = this;
        sr_active_interval_sample.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-previous-interval-sample")
    {
        for(auto const & c : sr_previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample>();
        c->parent = this;
        sr_previous_interval_sample.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_active_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_previous_interval_sample)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-active-interval-sample" || name == "sr-previous-interval-sample")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::SrActiveIntervalSample()
    :
    sr_packet_rate{YType::uint64, "sr-packet-rate"},
    sr_rate{YType::uint64, "sr-rate"},
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"}
{

    yang_name = "sr-active-interval-sample"; yang_parent_name = "sr-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::~SrActiveIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_data() const
{
    return sr_packet_rate.is_set
	|| sr_rate.is_set
	|| timestamp_nanosec.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_packet_rate.yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-active-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_packet_rate.is_set || is_set(sr_packet_rate.yfilter)) leaf_name_data.push_back(sr_packet_rate.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate = value;
        sr_packet_rate.value_namespace = name_space;
        sr_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate.yfilter = yfilter;
    }
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrActiveIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-packet-rate" || name == "sr-rate" || name == "timestamp-nanosec")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::SrPreviousIntervalSample()
    :
    sr_packet_rate{YType::uint64, "sr-packet-rate"},
    sr_rate{YType::uint64, "sr-rate"},
    timestamp_nanosec{YType::uint64, "timestamp-nanosec"}
{

    yang_name = "sr-previous-interval-sample"; yang_parent_name = "sr-sample-history"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::~SrPreviousIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_data() const
{
    return sr_packet_rate.is_set
	|| sr_rate.is_set
	|| timestamp_nanosec.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sr_packet_rate.yfilter)
	|| ydk::is_set(sr_rate.yfilter)
	|| ydk::is_set(timestamp_nanosec.yfilter);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-previous-interval-sample";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_packet_rate.is_set || is_set(sr_packet_rate.yfilter)) leaf_name_data.push_back(sr_packet_rate.get_name_leafdata());
    if (sr_rate.is_set || is_set(sr_rate.yfilter)) leaf_name_data.push_back(sr_rate.get_name_leafdata());
    if (timestamp_nanosec.is_set || is_set(timestamp_nanosec.yfilter)) leaf_name_data.push_back(timestamp_nanosec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate = value;
        sr_packet_rate.value_namespace = name_space;
        sr_packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-rate")
    {
        sr_rate = value;
        sr_rate.value_namespace = name_space;
        sr_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec = value;
        timestamp_nanosec.value_namespace = name_space;
        timestamp_nanosec.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sr-packet-rate")
    {
        sr_packet_rate.yfilter = yfilter;
    }
    if(value_path == "sr-rate")
    {
        sr_rate.yfilter = yfilter;
    }
    if(value_path == "timestamp-nanosec")
    {
        timestamp_nanosec.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SrSampleHistory::SrPreviousIntervalSample::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-packet-rate" || name == "sr-rate" || name == "timestamp-nanosec")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocation()
    :
    bandwidth_allocation_links(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks>())
	,global(std::make_shared<MplsLcacStandby::BandwidthAllocation::Global>())
{
    bandwidth_allocation_links->parent = this;
    global->parent = this;

    yang_name = "bandwidth-allocation"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAllocation::~BandwidthAllocation()
{
}

bool MplsLcacStandby::BandwidthAllocation::has_data() const
{
    return (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-allocation-links")
    {
        if(bandwidth_allocation_links == nullptr)
        {
            bandwidth_allocation_links = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks>();
        }
        return bandwidth_allocation_links;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsLcacStandby::BandwidthAllocation::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_allocation_links != nullptr)
    {
        children["bandwidth-allocation-links"] = bandwidth_allocation_links;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAllocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAllocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-allocation-links" || name == "global")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLinks()
{

    yang_name = "bandwidth-allocation-links"; yang_parent_name = "bandwidth-allocation"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::~BandwidthAllocationLinks()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-allocation-link")
    {
        for(auto const & c : bandwidth_allocation_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink>();
        c->parent = this;
        bandwidth_allocation_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth_allocation_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-allocation-link")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::BandwidthAllocationLink()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth_descriptors{YType::uint16, "bandwidth-descriptors"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    flooding_down_thresholds_are_default{YType::boolean, "flooding-down-thresholds-are-default"},
    flooding_down_thresholds_are_global{YType::boolean, "flooding-down-thresholds-are-global"},
    flooding_up_thresholds_are_default{YType::boolean, "flooding-up-thresholds-are-default"},
    flooding_up_thresholds_are_global{YType::boolean, "flooding-up-thresholds-are-global"},
    total_bandwidth_descriptors{YType::uint16, "total-bandwidth-descriptors"}
    	,
    downstream_bandwidth(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>())
	,link_common(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>())
	,upstream_bandwidth(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>())
{
    downstream_bandwidth->parent = this;
    link_common->parent = this;
    upstream_bandwidth->parent = this;

    yang_name = "bandwidth-allocation-link"; yang_parent_name = "bandwidth-allocation-links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::~BandwidthAllocationLink()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_data() const
{
    for (std::size_t index=0; index<flooding_down_threshold.size(); index++)
    {
        if(flooding_down_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<flooding_up_threshold.size(); index++)
    {
        if(flooding_up_threshold[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| bandwidth_descriptors.is_set
	|| bandwidth_pool.is_set
	|| flooding_down_thresholds_are_default.is_set
	|| flooding_down_thresholds_are_global.is_set
	|| flooding_up_thresholds_are_default.is_set
	|| flooding_up_thresholds_are_global.is_set
	|| total_bandwidth_descriptors.is_set
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_data())
	|| (link_common !=  nullptr && link_common->has_data())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_operation() const
{
    for (std::size_t index=0; index<flooding_down_threshold.size(); index++)
    {
        if(flooding_down_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<flooding_up_threshold.size(); index++)
    {
        if(flooding_up_threshold[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bandwidth_descriptors.yfilter)
	|| ydk::is_set(bandwidth_pool.yfilter)
	|| ydk::is_set(flooding_down_thresholds_are_default.yfilter)
	|| ydk::is_set(flooding_down_thresholds_are_global.yfilter)
	|| ydk::is_set(flooding_up_thresholds_are_default.yfilter)
	|| ydk::is_set(flooding_up_thresholds_are_global.yfilter)
	|| ydk::is_set(total_bandwidth_descriptors.yfilter)
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_operation())
	|| (link_common !=  nullptr && link_common->has_operation())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/bandwidth-allocation-links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth_descriptors.is_set || is_set(bandwidth_descriptors.yfilter)) leaf_name_data.push_back(bandwidth_descriptors.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.yfilter)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (flooding_down_thresholds_are_default.is_set || is_set(flooding_down_thresholds_are_default.yfilter)) leaf_name_data.push_back(flooding_down_thresholds_are_default.get_name_leafdata());
    if (flooding_down_thresholds_are_global.is_set || is_set(flooding_down_thresholds_are_global.yfilter)) leaf_name_data.push_back(flooding_down_thresholds_are_global.get_name_leafdata());
    if (flooding_up_thresholds_are_default.is_set || is_set(flooding_up_thresholds_are_default.yfilter)) leaf_name_data.push_back(flooding_up_thresholds_are_default.get_name_leafdata());
    if (flooding_up_thresholds_are_global.is_set || is_set(flooding_up_thresholds_are_global.yfilter)) leaf_name_data.push_back(flooding_up_thresholds_are_global.get_name_leafdata());
    if (total_bandwidth_descriptors.is_set || is_set(total_bandwidth_descriptors.yfilter)) leaf_name_data.push_back(total_bandwidth_descriptors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "downstream-bandwidth")
    {
        if(downstream_bandwidth == nullptr)
        {
            downstream_bandwidth = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>();
        }
        return downstream_bandwidth;
    }

    if(child_yang_name == "flooding-down-threshold")
    {
        for(auto const & c : flooding_down_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold>();
        c->parent = this;
        flooding_down_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "flooding-up-threshold")
    {
        for(auto const & c : flooding_up_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingUpThreshold>();
        c->parent = this;
        flooding_up_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "link-common")
    {
        if(link_common == nullptr)
        {
            link_common = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>();
        }
        return link_common;
    }

    if(child_yang_name == "upstream-bandwidth")
    {
        if(upstream_bandwidth == nullptr)
        {
            upstream_bandwidth = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>();
        }
        return upstream_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(downstream_bandwidth != nullptr)
    {
        children["downstream-bandwidth"] = downstream_bandwidth;
    }

    for (auto const & c : flooding_down_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : flooding_up_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    if(link_common != nullptr)
    {
        children["link-common"] = link_common;
    }

    if(upstream_bandwidth != nullptr)
    {
        children["upstream-bandwidth"] = upstream_bandwidth;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors = value;
        bandwidth_descriptors.value_namespace = name_space;
        bandwidth_descriptors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
        bandwidth_pool.value_namespace = name_space;
        bandwidth_pool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default = value;
        flooding_down_thresholds_are_default.value_namespace = name_space;
        flooding_down_thresholds_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global = value;
        flooding_down_thresholds_are_global.value_namespace = name_space;
        flooding_down_thresholds_are_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default = value;
        flooding_up_thresholds_are_default.value_namespace = name_space;
        flooding_up_thresholds_are_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global = value;
        flooding_up_thresholds_are_global.value_namespace = name_space;
        flooding_up_thresholds_are_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors = value;
        total_bandwidth_descriptors.value_namespace = name_space;
        total_bandwidth_descriptors.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool.yfilter = yfilter;
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default.yfilter = yfilter;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global.yfilter = yfilter;
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default.yfilter = yfilter;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "downstream-bandwidth" || name == "flooding-down-threshold" || name == "flooding-up-threshold" || name == "link-common" || name == "upstream-bandwidth" || name == "interface-name" || name == "bandwidth-descriptors" || name == "bandwidth-pool" || name == "flooding-down-thresholds-are-default" || name == "flooding-down-thresholds-are-global" || name == "flooding-up-thresholds-are-default" || name == "flooding-up-thresholds-are-global" || name == "total-bandwidth-descriptors")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::DownstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"}
{

    yang_name = "downstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::~DownstreamBandwidth()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| bandwidth_units.is_set
	|| is_admission_method_allocated_bandwidth.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_direction.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(is_admission_method_allocated_bandwidth.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.yfilter)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.yfilter)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-pool0")
    {
        for(auto const & c : bandwidth_pool0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(c);
        return c;
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        for(auto const & c : bandwidth_pool1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bandwidth_pool0)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bandwidth_pool1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
        bandwidth_direction.value_namespace = name_space;
        bandwidth_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
        is_admission_method_allocated_bandwidth.value_namespace = name_space;
        is_admission_method_allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-pool0" || name == "bandwidth-pool1" || name == "bandwidth-direction" || name == "bandwidth-units" || name == "is-admission-method-allocated-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool0"; yang_parent_name = "downstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "held-amount" || name == "hold-priority" || name == "locked-amount" || name == "total-held-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{

    yang_name = "bandwidth-pool1"; yang_parent_name = "downstream-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(held_amount.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(locked_amount.yfilter)
	|| ydk::is_set(total_held_amount.yfilter)
	|| ydk::is_set(total_locked_amount.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.yfilter)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.yfilter)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.yfilter)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.yfilter)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
        held_amount.value_namespace = name_space;
        held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
        locked_amount.value_namespace = name_space;
        locked_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
        total_held_amount.value_namespace = name_space;
        total_held_amount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
        total_locked_amount.value_namespace = name_space;
        total_locked_amount.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "held-amount")
    {
        held_amount.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "locked-amount")
    {
        locked_amount.yfilter = yfilter;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount.yfilter = yfilter;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "held-amount" || name == "hold-priority" || name == "locked-amount" || name == "total-held-amount" || name == "total-locked-amount")
        return true;
    return false;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::FloodingDownThreshold()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "flooding-down-threshold"; yang_parent_name = "bandwidth-allocation-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::~FloodingDownThreshold()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding-down-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::FloodingDownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

const Enum::YLeaf MplsTeAttrSet::not_used {0, "not-used"};
const Enum::YLeaf MplsTeAttrSet::static_ {1, "static"};
const Enum::YLeaf MplsTeAttrSet::lsp {2, "lsp"};
const Enum::YLeaf MplsTeAttrSet::unassigned {3, "unassigned"};
const Enum::YLeaf MplsTeAttrSet::auto_backup {4, "auto-backup"};
const Enum::YLeaf MplsTeAttrSet::auto_mesh {5, "auto-mesh"};
const Enum::YLeaf MplsTeAttrSet::xro {6, "xro"};
const Enum::YLeaf MplsTeAttrSet::p2mp_te {7, "p2mp-te"};
const Enum::YLeaf MplsTeAttrSet::otn_pp {8, "otn-pp"};
const Enum::YLeaf MplsTeAttrSet::p2p_te {9, "p2p-te"};

const Enum::YLeaf PceSrSid::unknown_segment_id {0, "unknown-segment-id"};
const Enum::YLeaf PceSrSid::ipv4_node_segment_id {1, "ipv4-node-segment-id"};
const Enum::YLeaf PceSrSid::ipv4_adjacency_segment_id {2, "ipv4-adjacency-segment-id"};

const Enum::YLeaf MplsTeTunnelRole::tunnel_unknown {0, "tunnel-unknown"};
const Enum::YLeaf MplsTeTunnelRole::tunnel_head {1, "tunnel-head"};
const Enum::YLeaf MplsTeTunnelRole::tunnel_mid {2, "tunnel-mid"};
const Enum::YLeaf MplsTeTunnelRole::tunnel_tail {3, "tunnel-tail"};

const Enum::YLeaf TePathInvalAction::none {0, "none"};
const Enum::YLeaf TePathInvalAction::tear {1, "tear"};
const Enum::YLeaf TePathInvalAction::drop {2, "drop"};

const Enum::YLeaf TeAffinityTable::affinity_table_mapping {0, "affinity-table-mapping"};
const Enum::YLeaf TeAffinityTable::affinity_table_forward_reference {1, "affinity-table-forward-reference"};
const Enum::YLeaf TeAffinityTable::affinity_table_count {2, "affinity-table-count"};

const Enum::YLeaf OcMplsTeLsp::oc_mpls_te_lsp_type_not_set {0, "oc-mpls-te-lsp-type-not-set"};
const Enum::YLeaf OcMplsTeLsp::oc_mpls_te_lsp_type_p2p {1, "oc-mpls-te-lsp-type-p2p"};
const Enum::YLeaf OcMplsTeLsp::oc_mpls_te_lsp_type_p2mp {2, "oc-mpls-te-lsp-type-p2mp"};

const Enum::YLeaf TePceDisjoint::none {0, "none"};
const Enum::YLeaf TePceDisjoint::link {1, "link"};
const Enum::YLeaf TePceDisjoint::node {2, "node"};
const Enum::YLeaf TePceDisjoint::srlg {3, "srlg"};

const Enum::YLeaf TeSchFreq::sch_freq_not_set {0, "sch-freq-not-set"};
const Enum::YLeaf TeSchFreq::sch_freq_set_once {1, "sch-freq-set-once"};
const Enum::YLeaf TeSchFreq::sch_freq_set_daily {2, "sch-freq-set-daily"};
const Enum::YLeaf TeSchFreq::sch_freq_set_weekly {3, "sch-freq-set-weekly"};

const Enum::YLeaf OcMplsTeTunnel::unknown {0, "unknown"};
const Enum::YLeaf OcMplsTeTunnel::p2p {1, "p2p"};
const Enum::YLeaf OcMplsTeTunnel::p2mp {2, "p2mp"};

const Enum::YLeaf MplsTeLspMode::mpls_te_lsp_mode_not_set {0, "mpls-te-lsp-mode-not-set"};
const Enum::YLeaf MplsTeLspMode::mpls_te_lsp_mode_current {1, "mpls-te-lsp-mode-current"};
const Enum::YLeaf MplsTeLspMode::mpls_te_lsp_mode_reopt {2, "mpls-te-lsp-mode-reopt"};
const Enum::YLeaf MplsTeLspMode::mpls_te_lsp_mode_clean {3, "mpls-te-lsp-mode-clean"};
const Enum::YLeaf MplsTeLspMode::mpls_te_lsp_mode_standby {4, "mpls-te-lsp-mode-standby"};
const Enum::YLeaf MplsTeLspMode::mpls_te_lsp_mode_pp_clean {5, "mpls-te-lsp-mode-pp-clean"};
const Enum::YLeaf MplsTeLspMode::mpls_te_lsp_mode_restore {6, "mpls-te-lsp-mode-restore"};
const Enum::YLeaf MplsTeLspMode::mpls_te_lsp_mode_reopt_standby {7, "mpls-te-lsp-mode-reopt-standby"};

const Enum::YLeaf TeAttributeSetSrPrepend::te_attribute_set_sr_prepend_not_set {0, "te-attribute-set-sr-prepend-not-set"};
const Enum::YLeaf TeAttributeSetSrPrepend::te_attribute_set_sr_prepend_next_label {1, "te-attribute-set-sr-prepend-next-label"};
const Enum::YLeaf TeAttributeSetSrPrepend::te_attribute_set_sr_prepend_bgp_nhop {2, "te-attribute-set-sr-prepend-bgp-nhop"};

const Enum::YLeaf PceTunnelState::tunnel_state_none {0, "tunnel-state-none"};
const Enum::YLeaf PceTunnelState::tunnel_state_admin_down {1, "tunnel-state-admin-down"};
const Enum::YLeaf PceTunnelState::tunnel_state_down {2, "tunnel-state-down"};
const Enum::YLeaf PceTunnelState::tunnel_state_up {3, "tunnel-state-up"};

const Enum::YLeaf GmplsUniMgmtWdmGrid::not_set {0, "not-set"};
const Enum::YLeaf GmplsUniMgmtWdmGrid::dwdm {1, "dwdm"};
const Enum::YLeaf GmplsUniMgmtWdmGrid::cwdm {2, "cwdm"};

const Enum::YLeaf TeXroExclusion::mandatory {0, "mandatory"};
const Enum::YLeaf TeXroExclusion::best_effort {1, "best-effort"};

const Enum::YLeaf LspOorState::lsp_oor_green {0, "lsp-oor-green"};
const Enum::YLeaf LspOorState::lsp_oor_yellow {1, "lsp-oor-yellow"};
const Enum::YLeaf LspOorState::lsp_oor_red {2, "lsp-oor-red"};

const Enum::YLeaf RrrDsteMigrationMode::rrr_dste_mode_none {0, "rrr-dste-mode-none"};
const Enum::YLeaf RrrDsteMigrationMode::rrr_dste_mode_prestandard {1, "rrr-dste-mode-prestandard"};
const Enum::YLeaf RrrDsteMigrationMode::rrr_dste_mode_standard {3, "rrr-dste-mode-standard"};

const Enum::YLeaf MplsTeTunnelAnnounce::announce_type_not_set {0, "announce-type-not-set"};
const Enum::YLeaf MplsTeTunnelAnnounce::autoroute {1, "autoroute"};
const Enum::YLeaf MplsTeTunnelAnnounce::forward_adjacency {2, "forward-adjacency"};

const Enum::YLeaf TeApsSncMode::snc_mode_not_set {0, "snc-mode-not-set"};
const Enum::YLeaf TeApsSncMode::snc_mode_n {1, "snc-mode-n"};
const Enum::YLeaf TeApsSncMode::snc_mode_i {2, "snc-mode-i"};
const Enum::YLeaf TeApsSncMode::snc_mode_s {3, "snc-mode-s"};

const Enum::YLeaf BandwidthUnitEnum::kilo_bits_per_second {0, "kilo-bits-per-second"};
const Enum::YLeaf BandwidthUnitEnum::kilo_bytes_per_second {1, "kilo-bytes-per-second"};

const Enum::YLeaf TeVifBfdEncapMode::ip {0, "ip"};
const Enum::YLeaf TeVifBfdEncapMode::gal {1, "gal"};

const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_none {0, "tunnel-attribute-set-none"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_static {1, "tunnel-attribute-set-static"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_path_option {2, "tunnel-attribute-set-path-option"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_not_used {3, "tunnel-attribute-set-not-used"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_auto_backup {4, "tunnel-attribute-set-auto-backup"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_auto_mesh {5, "tunnel-attribute-set-auto-mesh"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_xro {6, "tunnel-attribute-set-xro"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_p2mpte {7, "tunnel-attribute-set-p2mpte"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_aps_pp {8, "tunnel-attribute-aps-pp"};
const Enum::YLeaf TunnelAttributeSet::tunnel_attribute_set_p2p_te {9, "tunnel-attribute-set-p2p-te"};

const Enum::YLeaf TeHopLimitIgnore::ignore_unknown {0, "ignore-unknown"};
const Enum::YLeaf TeHopLimitIgnore::ignore_explicit {1, "ignore-explicit"};
const Enum::YLeaf TeHopLimitIgnore::ignore_pce {2, "ignore-pce"};

const Enum::YLeaf MplsTeNextHop::egress_resolve {0, "egress-resolve"};
const Enum::YLeaf MplsTeNextHop::autoroute_dest {1, "autoroute-dest"};

const Enum::YLeaf AutoBackupSrlgMode::srlg_not_set {0, "srlg-not-set"};
const Enum::YLeaf AutoBackupSrlgMode::srlg_strict {1, "srlg-strict"};
const Enum::YLeaf AutoBackupSrlgMode::srlg_preferred {2, "srlg-preferred"};
const Enum::YLeaf AutoBackupSrlgMode::srlg_weighted {3, "srlg-weighted"};

const Enum::YLeaf IgpOspfAreaFormat::igp_area_format_number {0, "igp-area-format-number"};
const Enum::YLeaf IgpOspfAreaFormat::igp_area_format_ip_addr {1, "igp-area-format-ip-addr"};

const Enum::YLeaf LspOperStatus::mpls_te_lsp_oper_up {0, "mpls-te-lsp-oper-up"};
const Enum::YLeaf LspOperStatus::mpls_te_lsp_oper_down {1, "mpls-te-lsp-oper-down"};

const Enum::YLeaf MplsTeSoftPreemptionResolution::soft_preemption_resolution_none {0, "soft-preemption-resolution-none"};
const Enum::YLeaf MplsTeSoftPreemptionResolution::soft_preemption_resolution_pending {1, "soft-preemption-resolution-pending"};
const Enum::YLeaf MplsTeSoftPreemptionResolution::soft_preemption_resolution_reopt_completed {2, "soft-preemption-resolution-reopt-completed"};
const Enum::YLeaf MplsTeSoftPreemptionResolution::soft_preemption_resolution_teardown {3, "soft-preemption-resolution-teardown"};
const Enum::YLeaf MplsTeSoftPreemptionResolution::soft_preemption_resolution_frr_triggered {4, "soft-preemption-resolution-frr-triggered"};
const Enum::YLeaf MplsTeSoftPreemptionResolution::soft_preemption_resolution_path_protetion_switchover {5, "soft-preemption-resolution-path-protetion-switchover"};

const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_no_reason {0, "te-pce-fail-no-reason"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_no_pce {1, "te-pce-fail-no-pce"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_sub_pool {2, "te-pce-fail-sub-pool"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_intra_area {3, "te-pce-fail-intra-area"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_gmpls {4, "te-pce-fail-gmpls"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_pending {5, "te-pce-fail-pending"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_oor {6, "te-pce-fail-oor"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_bidirectional {7, "te-pce-fail-bidirectional"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_no_path {8, "te-pce-fail-no-path"};
const Enum::YLeaf MplsTePceFailReasons::te_pce_fail_request_timeout {9, "te-pce-fail-request-timeout"};

const Enum::YLeaf TeMgmtGenericTspec::te_generic_tspec_type_g709otn {0, "te-generic-tspec-type-g709otn"};

const Enum::YLeaf IgpProtocol::none {0, "none"};
const Enum::YLeaf IgpProtocol::isis {1, "isis"};
const Enum::YLeaf IgpProtocol::ospf {2, "ospf"};

const Enum::YLeaf MplsTeMetricQualifier::metric_default {0, "metric-default"};
const Enum::YLeaf MplsTeMetricQualifier::metric_global {1, "metric-global"};
const Enum::YLeaf MplsTeMetricQualifier::metric_interface {2, "metric-interface"};

const Enum::YLeaf BandwidthAccountingCollection::rsvp_te {0, "rsvp-te"};
const Enum::YLeaf BandwidthAccountingCollection::segment_routing {1, "segment-routing"};

const Enum::YLeaf MplsTeMetric::metric_not_set {0, "metric-not-set"};
const Enum::YLeaf MplsTeMetric::metric_igp {1, "metric-igp"};
const Enum::YLeaf MplsTeMetric::metric_te {2, "metric-te"};
const Enum::YLeaf MplsTeMetric::metric_delay {3, "metric-delay"};

const Enum::YLeaf GmplsUniMgmtDwdmCs::not_set {0, "not-set"};
const Enum::YLeaf GmplsUniMgmtDwdmCs::dwdm100g_hz {1, "dwdm100g-hz"};
const Enum::YLeaf GmplsUniMgmtDwdmCs::dwdm50g_hz {2, "dwdm50g-hz"};
const Enum::YLeaf GmplsUniMgmtDwdmCs::dwdm25g_hz {3, "dwdm25g-hz"};
const Enum::YLeaf GmplsUniMgmtDwdmCs::dwdm12g_hz {4, "dwdm12g-hz"};

const Enum::YLeaf TeP2MpS2LDeletionCause::no_cause {0, "no-cause"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hpath_cr_err {1, "hpath-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hpath_chg_setup {2, "hpath-chg-setup"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hpath_chg_up_err {3, "hpath-chg-up-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hresv_cr_err {4, "hresv-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hresv_chg_err {5, "hresv-chg-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hresv_chg_err_up {6, "hresv-chg-err-up"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hlbl_avail_err {7, "hlbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hup_lbl_avail_err {8, "hup-lbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hfrr_act_err {9, "hfrr-act-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hbkup_ch_err {10, "hbkup-ch-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hpath_ch_frr_err {11, "hpath-ch-frr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hcleanup {12, "hcleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hlingering_cleanup {13, "hlingering-cleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hpat_err {14, "hpat-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hresv_err {15, "hresv-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hresv_del {16, "hresv-del"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hrw_fail {17, "hrw-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCause::hup_rw_fail {18, "hup-rw-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCause::ha_failure {19, "ha-failure"};
const Enum::YLeaf TeP2MpS2LDeletionCause::rw_del {20, "rw-del"};
const Enum::YLeaf TeP2MpS2LDeletionCause::up_rw_del {21, "up-rw-del"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mpath_cr {22, "mpath-cr"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mpath_chg_setup_err {23, "mpath-chg-setup-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mpath_chg_up_err {24, "mpath-chg-up-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mresv_cr_err {25, "mresv-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mresv_chg_err {26, "mresv-chg-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mresv_chg_err_up {27, "mresv-chg-err-up"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mlbl_avail_err {28, "mlbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mlbl_rel_err {29, "mlbl-rel-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mup_lbl_avail_err {30, "mup-lbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mup_lbl_rel_err {31, "mup-lbl-rel-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mfrr_act_err {32, "mfrr-act-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mbkup_ch_err {33, "mbkup-ch-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mpath_ch_frr_err {34, "mpath-ch-frr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mresv_del {35, "mresv-del"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mresv_err {36, "mresv-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mpreempt {37, "mpreempt"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mcleanup {38, "mcleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mlingering_cleanup {39, "mlingering-cleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mrw_fail {40, "mrw-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCause::mup_rw_fail {41, "mup-rw-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCause::tpath_cr_err {42, "tpath-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::tpath_chg_err {43, "tpath-chg-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::tresv_cr_err {44, "tresv-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::tlbl_avail_err {45, "tlbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::tcleanup {46, "tcleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCause::tlingering_cleanup {47, "tlingering-cleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCause::lbl_err {48, "lbl-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::qfailure {49, "qfailure"};
const Enum::YLeaf TeP2MpS2LDeletionCause::rsvp_recovery {50, "rsvp-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCause::lsd_recovery {51, "lsd-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCause::lmrib_recovery {52, "lmrib-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCause::te_restart {53, "te-restart"};
const Enum::YLeaf TeP2MpS2LDeletionCause::switchover {54, "switchover"};
const Enum::YLeaf TeP2MpS2LDeletionCause::master_te_recovery {55, "master-te-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCause::optical_r_mgr_recovery {56, "optical-r-mgr-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCause::te_exit {57, "te-exit"};
const Enum::YLeaf TeP2MpS2LDeletionCause::bkup_assign_fail {58, "bkup-assign-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCause::bfd_fail {59, "bfd-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCause::bfd_recovery {60, "bfd-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCause::lsp_wrap_act_err {61, "lsp-wrap-act-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::lsp_wrap_rw_err {62, "lsp-wrap-rw-err"};
const Enum::YLeaf TeP2MpS2LDeletionCause::fsm_cause_must_be_last {63, "fsm-cause-must-be-last"};

const Enum::YLeaf MplsTeBackup::backup_static {0, "backup-static"};
const Enum::YLeaf MplsTeBackup::backup_auto {1, "backup-auto"};

const Enum::YLeaf OcMplsTeMetric::oc_mpls_te_metric_type_igp {0, "oc-mpls-te-metric-type-igp"};
const Enum::YLeaf OcMplsTeMetric::oc_mpls_te_metric_type_te {1, "oc-mpls-te-metric-type-te"};

const Enum::YLeaf MplsTeTunnelsSignalingStatus::down {0, "down"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::recovering {1, "recovering"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::recovered {2, "recovered"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::connected {3, "connected"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::disabled {4, "disabled"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::proceeding {5, "proceeding"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::wait_bfd_session_up {6, "wait-bfd-session-up"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::wait_sr_segment_path_up {7, "wait-sr-segment-path-up"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::wait_local_label {8, "wait-local-label"};
const Enum::YLeaf MplsTeTunnelsSignalingStatus::wait_local_label_rewrite {9, "wait-local-label-rewrite"};

const Enum::YLeaf MplsTeSoftPreemptionState::soft_preemption_not_pending {0, "soft-preemption-not-pending"};
const Enum::YLeaf MplsTeSoftPreemptionState::soft_preemption_pending {1, "soft-preemption-pending"};

const Enum::YLeaf AutoBackupProtection::protection_none {0, "protection-none"};
const Enum::YLeaf AutoBackupProtection::protection_next_hop {1, "protection-next-hop"};
const Enum::YLeaf AutoBackupProtection::protection_next_next_hop {2, "protection-next-next-hop"};

const Enum::YLeaf TeDestinationState::destination_disabled {0, "destination-disabled"};
const Enum::YLeaf TeDestinationState::destination_down {1, "destination-down"};
const Enum::YLeaf TeDestinationState::destination_up {2, "destination-up"};

const Enum::YLeaf MplsTePath::not_set {0, "not-set"};
const Enum::YLeaf MplsTePath::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePath::explicit_name {3, "explicit-name"};
const Enum::YLeaf MplsTePath::explicit_id {4, "explicit-id"};
const Enum::YLeaf MplsTePath::no_ero {5, "no-ero"};
const Enum::YLeaf MplsTePath::segment_routing {6, "segment-routing"};

const Enum::YLeaf MplsTpTunnelState::admin_down {0, "admin-down"};
const Enum::YLeaf MplsTpTunnelState::admin_up {1, "admin-up"};
const Enum::YLeaf MplsTpTunnelState::oper_up {2, "oper-up"};
const Enum::YLeaf MplsTpTunnelState::oper_down {3, "oper-down"};

const Enum::YLeaf MplsTpLspOamState::none {0, "none"};
const Enum::YLeaf MplsTpLspOamState::ldi {1, "ldi"};
const Enum::YLeaf MplsTpLspOamState::lkr {2, "lkr"};
const Enum::YLeaf MplsTpLspOamState::ais {3, "ais"};

const Enum::YLeaf TeRestorationStyle::restoration_style_not_set {0, "restoration-style-not-set"};
const Enum::YLeaf TeRestorationStyle::restoration_style_keep_failed_lsp {1, "restoration-style-keep-failed-lsp"};
const Enum::YLeaf TeRestorationStyle::restoration_style_delete_failed_lsp {2, "restoration-style-delete-failed-lsp"};

const Enum::YLeaf TeSrSid::srsid_not_set {0, "srsid-not-set"};
const Enum::YLeaf TeSrSid::srsid_node {1, "srsid-node"};
const Enum::YLeaf TeSrSid::srsid_adj {2, "srsid-adj"};
const Enum::YLeaf TeSrSid::srsid_unknown {3, "srsid-unknown"};

const Enum::YLeaf PceLspOperState::down {0, "down"};
const Enum::YLeaf PceLspOperState::up {1, "up"};
const Enum::YLeaf PceLspOperState::active {2, "active"};
const Enum::YLeaf PceLspOperState::going_down {3, "going-down"};
const Enum::YLeaf PceLspOperState::going_up {4, "going-up"};

const Enum::YLeaf MplsTeBwLimit::bandwidth_limited {0, "bandwidth-limited"};
const Enum::YLeaf MplsTeBwLimit::bandwidth_unlimited {1, "bandwidth-unlimited"};
const Enum::YLeaf MplsTeBwLimit::bandwidth_none {2, "bandwidth-none"};

const Enum::YLeaf MplsTePathoption::path_option_unknown {0, "path-option-unknown"};
const Enum::YLeaf MplsTePathoption::path_option_dynamic {1, "path-option-dynamic"};
const Enum::YLeaf MplsTePathoption::path_option_explicit_name {2, "path-option-explicit-name"};
const Enum::YLeaf MplsTePathoption::path_option_explicit_id {3, "path-option-explicit-id"};
const Enum::YLeaf MplsTePathoption::path_option_pce {4, "path-option-pce"};
const Enum::YLeaf MplsTePathoption::path_option_no_ero {5, "path-option-no-ero"};
const Enum::YLeaf MplsTePathoption::path_option_segment_routing {6, "path-option-segment-routing"};

const Enum::YLeaf TeSyncStatusShow::master_sync_status_show {0, "master-sync-status-show"};
const Enum::YLeaf TeSyncStatusShow::slave_sync_status_show {1, "slave-sync-status-show"};

const Enum::YLeaf TePpDiversity::diversity_none {0, "diversity-none"};
const Enum::YLeaf TePpDiversity::link {1, "link"};
const Enum::YLeaf TePpDiversity::node {2, "node"};
const Enum::YLeaf TePpDiversity::node_link {3, "node-link"};
const Enum::YLeaf TePpDiversity::srlg {4, "srlg"};
const Enum::YLeaf TePpDiversity::diversity_user {5, "diversity-user"};
const Enum::YLeaf TePpDiversity::diversity_reverse_ero {6, "diversity-reverse-ero"};

const Enum::YLeaf IgpteLibBwModel::rdm {0, "rdm"};
const Enum::YLeaf IgpteLibBwModel::mam {1, "mam"};
const Enum::YLeaf IgpteLibBwModel::not_set {2, "not-set"};

const Enum::YLeaf TePathProtProfile::path_prot_profile_type1_plus0 {0, "path-prot-profile-type1-plus0"};
const Enum::YLeaf TePathProtProfile::path_prot_profile_type1_plus_r {1, "path-prot-profile-type1-plus-r"};
const Enum::YLeaf TePathProtProfile::path_prot_profile_type1_plus1 {16, "path-prot-profile-type1-plus1"};
const Enum::YLeaf TePathProtProfile::path_prot_profile_type1_plus1_plus_r {32, "path-prot-profile-type1-plus1-plus-r"};
const Enum::YLeaf TePathProtProfile::path_prot_profile_type_invalid {255, "path-prot-profile-type-invalid"};

const Enum::YLeaf TpMidLspStatus::up {0, "up"};
const Enum::YLeaf TpMidLspStatus::down {1, "down"};

const Enum::YLeaf MplsLibC::mpls_lib_c_type_null {0, "mpls-lib-c-type-null"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_ipv4 {1, "mpls-lib-c-type-ipv4"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_ipv4_p2p_tunnel {7, "mpls-lib-c-type-ipv4-p2p-tunnel"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_ipv6_p2p_tunnel {8, "mpls-lib-c-type-ipv6-p2p-tunnel"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_ipv4_uni {9, "mpls-lib-c-type-ipv4-uni"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_ipv4_p2mp_tunnel {13, "mpls-lib-c-type-ipv4-p2mp-tunnel"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_ipv6_p2mp_tunnel {14, "mpls-lib-c-type-ipv6-p2mp-tunnel"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_ipv4_tp_tunnel {15, "mpls-lib-c-type-ipv4-tp-tunnel"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_ipv6_tp_tunnel {16, "mpls-lib-c-type-ipv6-tp-tunnel"};
const Enum::YLeaf MplsLibC::mpls_lib_c_type_p2p_binding_label {17, "mpls-lib-c-type-p2p-binding-label"};

const Enum::YLeaf TeSyncNotReadyReason::idt_in_progress {0, "idt-in-progress"};
const Enum::YLeaf TeSyncNotReadyReason::standby_not_connected {1, "standby-not-connected"};
const Enum::YLeaf TeSyncNotReadyReason::collaborator_disconnected {2, "collaborator-disconnected"};
const Enum::YLeaf TeSyncNotReadyReason::collaborator_timeout {3, "collaborator-timeout"};
const Enum::YLeaf TeSyncNotReadyReason::unknown {4, "unknown"};

const Enum::YLeaf MplsTeReoptDecisionReason::decision_reason_none {0, "decision-reason-none"};
const Enum::YLeaf MplsTeReoptDecisionReason::not_superset {1, "not-superset"};
const Enum::YLeaf MplsTeReoptDecisionReason::superset {2, "superset"};
const Enum::YLeaf MplsTeReoptDecisionReason::lsp_frr_active {3, "lsp-frr-active"};
const Enum::YLeaf MplsTeReoptDecisionReason::bandwidth_change {4, "bandwidth-change"};
const Enum::YLeaf MplsTeReoptDecisionReason::metric_type_change {5, "metric-type-change"};
const Enum::YLeaf MplsTeReoptDecisionReason::better_path_option_indexes {6, "better-path-option-indexes"};
const Enum::YLeaf MplsTeReoptDecisionReason::inter_area_preferred_path_exists {7, "inter-area-preferred-path-exists"};
const Enum::YLeaf MplsTeReoptDecisionReason::inter_area_preferred_tree_exists {8, "inter-area-preferred-tree-exists"};
const Enum::YLeaf MplsTeReoptDecisionReason::worse_path_option_indexes {9, "worse-path-option-indexes"};
const Enum::YLeaf MplsTeReoptDecisionReason::better_cumulative_metric {10, "better-cumulative-metric"};
const Enum::YLeaf MplsTeReoptDecisionReason::worse_cumulative_metric {11, "worse-cumulative-metric"};
const Enum::YLeaf MplsTeReoptDecisionReason::identical {12, "identical"};
const Enum::YLeaf MplsTeReoptDecisionReason::no_s2_ls {13, "no-s2-ls"};
const Enum::YLeaf MplsTeReoptDecisionReason::no_current_lsp {14, "no-current-lsp"};
const Enum::YLeaf MplsTeReoptDecisionReason::user_path_option_switchover {15, "user-path-option-switchover"};
const Enum::YLeaf MplsTeReoptDecisionReason::better_hops {16, "better-hops"};
const Enum::YLeaf MplsTeReoptDecisionReason::worse_hops {17, "worse-hops"};
const Enum::YLeaf MplsTeReoptDecisionReason::pce_force {18, "pce-force"};
const Enum::YLeaf MplsTeReoptDecisionReason::affinity_changed {19, "affinity-changed"};
const Enum::YLeaf MplsTeReoptDecisionReason::cost_limit {20, "cost-limit"};
const Enum::YLeaf MplsTeReoptDecisionReason::sig_timeout {21, "sig-timeout"};
const Enum::YLeaf MplsTeReoptDecisionReason::not_superset_inst_timer_expired {22, "not-superset-inst-timer-expired"};
const Enum::YLeaf MplsTeReoptDecisionReason::path_verifiction_failed {23, "path-verifiction-failed"};
const Enum::YLeaf MplsTeReoptDecisionReason::soft_preemption_recovery {24, "soft-preemption-recovery"};
const Enum::YLeaf MplsTeReoptDecisionReason::iep_changed {25, "iep-changed"};
const Enum::YLeaf MplsTeReoptDecisionReason::po_changed {26, "po-changed"};
const Enum::YLeaf MplsTeReoptDecisionReason::dest_changed {27, "dest-changed"};
const Enum::YLeaf MplsTeReoptDecisionReason::better_igp_area {28, "better-igp-area"};
const Enum::YLeaf MplsTeReoptDecisionReason::worse_igp_area {29, "worse-igp-area"};
const Enum::YLeaf MplsTeReoptDecisionReason::better_bandwidth_load_balancing {30, "better-bandwidth-load-balancing"};
const Enum::YLeaf MplsTeReoptDecisionReason::worse_bandwidth_load_balancing {31, "worse-bandwidth-load-balancing"};
const Enum::YLeaf MplsTeReoptDecisionReason::bfd_session_down {32, "bfd-session-down"};
const Enum::YLeaf MplsTeReoptDecisionReason::auto_pcc_reopt {33, "auto-pcc-reopt"};
const Enum::YLeaf MplsTeReoptDecisionReason::sr_egress_path_changed {34, "sr-egress-path-changed"};
const Enum::YLeaf MplsTeReoptDecisionReason::overload_bit_set {35, "overload-bit-set"};
const Enum::YLeaf MplsTeReoptDecisionReason::better_diversity {36, "better-diversity"};
const Enum::YLeaf MplsTeReoptDecisionReason::worse_diversity {37, "worse-diversity"};
const Enum::YLeaf MplsTeReoptDecisionReason::bfd_session_type_changed {38, "bfd-session-type-changed"};
const Enum::YLeaf MplsTeReoptDecisionReason::lsp_drop_mode {39, "lsp-drop-mode"};
const Enum::YLeaf MplsTeReoptDecisionReason::strict_spf {40, "strict-spf"};
const Enum::YLeaf MplsTeReoptDecisionReason::not_used {41, "not-used"};

const Enum::YLeaf MplsTeBackupStatus::backup_none {0, "backup-none"};
const Enum::YLeaf MplsTeBackupStatus::backup_unused {1, "backup-unused"};
const Enum::YLeaf MplsTeBackupStatus::backup_next_next_hop {2, "backup-next-next-hop"};
const Enum::YLeaf MplsTeBackupStatus::backup_next_hop {3, "backup-next-hop"};
const Enum::YLeaf MplsTeBackupStatus::backup_next_next_hop_srlg {4, "backup-next-next-hop-srlg"};
const Enum::YLeaf MplsTeBackupStatus::backup_next_hop_srlg {5, "backup-next-hop-srlg"};

const Enum::YLeaf MplsProtection::mpls_protection_type_unprotected {0, "mpls-protection-type-unprotected"};
const Enum::YLeaf MplsProtection::mpls_protection_type_link {1, "mpls-protection-type-link"};
const Enum::YLeaf MplsProtection::mpls_protection_type_link_node {2, "mpls-protection-type-link-node"};

const Enum::YLeaf SignalingAgentEnum::no_signaling {0, "no-signaling"};
const Enum::YLeaf SignalingAgentEnum::rsvp_signaling {1, "rsvp-signaling"};

const Enum::YLeaf MplsTeTunnelState::state_down {0, "state-down"};
const Enum::YLeaf MplsTeTunnelState::state_up {1, "state-up"};
const Enum::YLeaf MplsTeTunnelState::state_down_policy {2, "state-down-policy"};
const Enum::YLeaf MplsTeTunnelState::state_lockout {3, "state-lockout"};

const Enum::YLeaf TeSigNameAppend::none {0, "none"};
const Enum::YLeaf TeSigNameAppend::address {1, "address"};
const Enum::YLeaf TeSigNameAppend::name {2, "name"};

const Enum::YLeaf LinkDirectionEnum::link_direction_up_stream {0, "link-direction-up-stream"};
const Enum::YLeaf LinkDirectionEnum::link_direction_down_stream {1, "link-direction-down-stream"};
const Enum::YLeaf LinkDirectionEnum::link_direction_unknown {2, "link-direction-unknown"};

const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_unapplicable {0, "mtunnel-fail-reason-unapplicable"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_shutdown {1, "mtunnel-fail-reason-shutdown"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_no_destination {2, "mtunnel-fail-reason-no-destination"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_no_path_option {3, "mtunnel-fail-reason-no-path-option"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_no_source {4, "mtunnel-fail-reason-no-source"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_collaborator_disc {5, "mtunnel-fail-reason-collaborator-disc"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_unmatched_class_type_priority {6, "mtunnel-fail-reason-unmatched-class-type-priority"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_invalid_bidir_cfg {7, "mtunnel-fail-reason-invalid-bidir-cfg"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_po_switchover {8, "mtunnel-fail-reason-po-switchover"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_no_tunnel_id {9, "mtunnel-fail-reason-no-tunnel-id"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_no_link {10, "mtunnel-fail-reason-no-link"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_link_shutdown {11, "mtunnel-fail-reason-link-shutdown"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_link_lmp_down {12, "mtunnel-fail-reason-link-lmp-down"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_source_destination_same {13, "mtunnel-fail-reason-source-destination-same"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_otn_no_odu_level {14, "mtunnel-fail-reason-otn-no-odu-level"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_bidir_assoc_id_missing {15, "mtunnel-fail-reason-bidir-assoc-id-missing"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_bfdgal_on_unidirectional {16, "mtunnel-fail-reason-bfdgal-on-unidirectional"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_destination_invalid {17, "mtunnel-fail-reason-destination-invalid"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_termination_bandwidth_mismatch {18, "mtunnel-fail-reason-termination-bandwidth-mismatch"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_termination_has_protection {19, "mtunnel-fail-reason-termination-has-protection"};
const Enum::YLeaf MplsMteTunnelFailReason::mtunnel_fail_reason_termination_has_invalid_src_dest_ifindex {20, "mtunnel-fail-reason-termination-has-invalid-src-dest-ifindex"};

const Enum::YLeaf TeMgmtGenericFspec::te_generic_fspec_type_g709otn {0, "te-generic-fspec-type-g709otn"};

const Enum::YLeaf MplsTeLspWrapState::lsp_wrap_not_ready {0, "lsp-wrap-not-ready"};
const Enum::YLeaf MplsTeLspWrapState::lsp_wrap_active {1, "lsp-wrap-active"};
const Enum::YLeaf MplsTeLspWrapState::lsp_wrap_ready {2, "lsp-wrap-ready"};

const Enum::YLeaf MplsTeMgmtGmplsLabelOrigin::not_set {0, "not-set"};
const Enum::YLeaf MplsTeMgmtGmplsLabelOrigin::uni_c {1, "uni-c"};
const Enum::YLeaf MplsTeMgmtGmplsLabelOrigin::uni_n {2, "uni-n"};

const Enum::YLeaf HwOorState::oor_green {0, "oor-green"};
const Enum::YLeaf HwOorState::oor_yellow {1, "oor-yellow"};
const Enum::YLeaf HwOorState::oor_red {2, "oor-red"};

const Enum::YLeaf MplsTeUni::none {0, "none"};
const Enum::YLeaf MplsTeUni::xc {1, "xc"};
const Enum::YLeaf MplsTeUni::term {2, "term"};

const Enum::YLeaf TeSyncPendingReason::current_lspoos {0, "current-lspoos"};
const Enum::YLeaf TeSyncPendingReason::reopt_lspoos {1, "reopt-lspoos"};
const Enum::YLeaf TeSyncPendingReason::standby_lspoos {2, "standby-lspoos"};
const Enum::YLeaf TeSyncPendingReason::standby_reopt_lspoos {3, "standby-reopt-lspoos"};
const Enum::YLeaf TeSyncPendingReason::restore_lspoos {4, "restore-lspoos"};
const Enum::YLeaf TeSyncPendingReason::invalid_sync_id {5, "invalid-sync-id"};
const Enum::YLeaf TeSyncPendingReason::null_pointer {6, "null-pointer"};
const Enum::YLeaf TeSyncPendingReason::pending_flag {7, "pending-flag"};
const Enum::YLeaf TeSyncPendingReason::del_from_act_flag {8, "del-from-act-flag"};
const Enum::YLeaf TeSyncPendingReason::oos_from_act_flag {9, "oos-from-act-flag"};
const Enum::YLeaf TeSyncPendingReason::unknown {10, "unknown"};

const Enum::YLeaf TeProcRole::unknown {0, "unknown"};
const Enum::YLeaf TeProcRole::v1_active {1, "v1-active"};
const Enum::YLeaf TeProcRole::v2_active {2, "v2-active"};
const Enum::YLeaf TeProcRole::v1_standby {3, "v1-standby"};
const Enum::YLeaf TeProcRole::v2_standby {4, "v2-standby"};
const Enum::YLeaf TeProcRole::v1_active_post_big_bang {5, "v1-active-post-big-bang"};
const Enum::YLeaf TeProcRole::v1_standby_post_big_bang {6, "v1-standby-post-big-bang"};
const Enum::YLeaf TeProcRole::number_of_role {7, "number-of-role"};

const Enum::YLeaf TunnelStateEnum::tunnel_state_unknown {0, "tunnel-state-unknown"};
const Enum::YLeaf TunnelStateEnum::new_ {1, "new"};
const Enum::YLeaf TunnelStateEnum::preempting {2, "preempting"};
const Enum::YLeaf TunnelStateEnum::admitting {3, "admitting"};
const Enum::YLeaf TunnelStateEnum::half_admitted {4, "half-admitted"};
const Enum::YLeaf TunnelStateEnum::admitted {5, "admitted"};
const Enum::YLeaf TunnelStateEnum::reservation_admitting {6, "reservation-admitting"};
const Enum::YLeaf TunnelStateEnum::reservation_half_admitted {7, "reservation-half-admitted"};
const Enum::YLeaf TunnelStateEnum::reservation_admitted {8, "reservation-admitted"};

const Enum::YLeaf TeXroAttribute::interface {0, "interface"};
const Enum::YLeaf TeXroAttribute::node {1, "node"};
const Enum::YLeaf TeXroAttribute::srl_gs {2, "srl-gs"};

const Enum::YLeaf TePathSelectionTiebreaker::min_fill {1, "min-fill"};
const Enum::YLeaf TePathSelectionTiebreaker::max_fill {2, "max-fill"};
const Enum::YLeaf TePathSelectionTiebreaker::random {3, "random"};

const Enum::YLeaf FlexLspLockoutOrigination::lockout_origination_none {0, "lockout-origination-none"};
const Enum::YLeaf FlexLspLockoutOrigination::lockout_origination_local {1, "lockout-origination-local"};
const Enum::YLeaf FlexLspLockoutOrigination::lockout_origination_remote {2, "lockout-origination-remote"};

const Enum::YLeaf BandwidthStateEnum::bandwidth_held {0, "bandwidth-held"};
const Enum::YLeaf BandwidthStateEnum::bandwidth_reserved {1, "bandwidth-reserved"};
const Enum::YLeaf BandwidthStateEnum::bandwidth_unknown {2, "bandwidth-unknown"};

const Enum::YLeaf MplsTeFrrState::frr_inactive {0, "frr-inactive"};
const Enum::YLeaf MplsTeFrrState::frr_active {1, "frr-active"};
const Enum::YLeaf MplsTeFrrState::frr_ready {2, "frr-ready"};

const Enum::YLeaf TeAddr::not_set {0, "not-set"};
const Enum::YLeaf TeAddr::ipv4 {1, "ipv4"};
const Enum::YLeaf TeAddr::ipv4_unnumbered {2, "ipv4-unnumbered"};

const Enum::YLeaf TeBfdLspSessionState::bfd_over_lsp_session_state_none {0, "bfd-over-lsp-session-state-none"};
const Enum::YLeaf TeBfdLspSessionState::bfd_over_lsp_session_state_created {1, "bfd-over-lsp-session-state-created"};
const Enum::YLeaf TeBfdLspSessionState::bfd_over_lsp_session_state_up {2, "bfd-over-lsp-session-state-up"};
const Enum::YLeaf TeBfdLspSessionState::bfd_over_lsp_session_state_down {3, "bfd-over-lsp-session-state-down"};
const Enum::YLeaf TeBfdLspSessionState::bfd_over_lsp_session_state_admin_down {4, "bfd-over-lsp-session-state-admin-down"};
const Enum::YLeaf TeBfdLspSessionState::bfd_over_lsp_session_state_deleted {5, "bfd-over-lsp-session-state-deleted"};
const Enum::YLeaf TeBfdLspSessionState::bfd_over_lsp_session_state_create_failed {6, "bfd-over-lsp-session-state-create-failed"};

const Enum::YLeaf PceState::tcp_close {0, "tcp-close"};
const Enum::YLeaf PceState::tcp_listen {1, "tcp-listen"};
const Enum::YLeaf PceState::tcp_connect {2, "tcp-connect"};
const Enum::YLeaf PceState::pcep_closed {3, "pcep-closed"};
const Enum::YLeaf PceState::pcep_opening {4, "pcep-opening"};
const Enum::YLeaf PceState::pcep_open {5, "pcep-open"};

const Enum::YLeaf MtePathOption::none {0, "none"};
const Enum::YLeaf MtePathOption::dynamic {1, "dynamic"};
const Enum::YLeaf MtePathOption::explicit_ {2, "explicit"};
const Enum::YLeaf MtePathOption::no_ero {3, "no-ero"};
const Enum::YLeaf MtePathOption::segment_routing {4, "segment-routing"};
const Enum::YLeaf MtePathOption::po_count {5, "po-count"};

const Enum::YLeaf TeControllerState::notready {0, "notready"};
const Enum::YLeaf TeControllerState::admin_down {1, "admin-down"};
const Enum::YLeaf TeControllerState::down {2, "down"};
const Enum::YLeaf TeControllerState::shutdown {3, "shutdown"};
const Enum::YLeaf TeControllerState::error_disabled {4, "error-disabled"};
const Enum::YLeaf TeControllerState::up {5, "up"};
const Enum::YLeaf TeControllerState::unknown {6, "unknown"};

const Enum::YLeaf TePnrRevertOptions::pnr_optionnot_set {0, "pnr-optionnot-set"};
const Enum::YLeaf TePnrRevertOptions::pnr_option_revertive {1, "pnr-option-revertive"};
const Enum::YLeaf TePnrRevertOptions::pnr_option_non_revertive {2, "pnr-option-non-revertive"};

const Enum::YLeaf TeXroSubobj::ipv4 {1, "ipv4"};
const Enum::YLeaf TeXroSubobj::ipv6 {2, "ipv6"};
const Enum::YLeaf TeXroSubobj::unnumbered {6, "unnumbered"};
const Enum::YLeaf TeXroSubobj::as {32, "as"};
const Enum::YLeaf TeXroSubobj::srlg {34, "srlg"};
const Enum::YLeaf TeXroSubobj::p2p_lsp {36, "p2p-lsp"};

const Enum::YLeaf TeOduLevel::te_odu_level_not_set {0, "te-odu-level-not-set"};
const Enum::YLeaf TeOduLevel::te_odu_level_one {1, "te-odu-level-one"};
const Enum::YLeaf TeOduLevel::te_odu_level_two {2, "te-odu-level-two"};
const Enum::YLeaf TeOduLevel::te_odu_level_three {3, "te-odu-level-three"};
const Enum::YLeaf TeOduLevel::te_odu_level_four {4, "te-odu-level-four"};
const Enum::YLeaf TeOduLevel::te_odu_zero {10, "te-odu-zero"};
const Enum::YLeaf TeOduLevel::te_odu_level_two_e {11, "te-odu-level-two-e"};
const Enum::YLeaf TeOduLevel::te_odu_level_flex_cbr {20, "te-odu-level-flex-cbr"};
const Enum::YLeaf TeOduLevel::te_odu_level_flex_gfpf_resizeable {21, "te-odu-level-flex-gfpf-resizeable"};
const Enum::YLeaf TeOduLevel::te_odu_level_flex_gfpf_non_resizable {22, "te-odu-level-flex-gfpf-non-resizable"};
const Enum::YLeaf TeOduLevel::te_odu_level_one_e {23, "te-odu-level-one-e"};
const Enum::YLeaf TeOduLevel::te_odu_level_one_f {24, "te-odu-level-one-f"};
const Enum::YLeaf TeOduLevel::te_odu_level_two_f {25, "te-odu-level-two-f"};
const Enum::YLeaf TeOduLevel::te_odu_level_three_e_one {26, "te-odu-level-three-e-one"};
const Enum::YLeaf TeOduLevel::te_odu_level_three_e_two {27, "te-odu-level-three-e-two"};
const Enum::YLeaf TeOduLevel::te_odu_level_c_two {38, "te-odu-level-c-two"};
const Enum::YLeaf TeOduLevel::te_odu_level_c_three {39, "te-odu-level-c-three"};
const Enum::YLeaf TeOduLevel::te_odu_level_c_four {40, "te-odu-level-c-four"};

const Enum::YLeaf TeProtect::protect_type1_plus1_unidir_no_aps {4, "protect-type1-plus1-unidir-no-aps"};
const Enum::YLeaf TeProtect::protect_type1_plus1_unidir_aps {8, "protect-type1-plus1-unidir-aps"};
const Enum::YLeaf TeProtect::protect_type1_plus1_bidir_aps {16, "protect-type1-plus1-bidir-aps"};
const Enum::YLeaf TeProtect::protect_type_not_set {255, "protect-type-not-set"};

const Enum::YLeaf MplsTeProtocol::mpls_te_signaling_type_unknown {0, "mpls-te-signaling-type-unknown"};
const Enum::YLeaf MplsTeProtocol::mpls_te_signaling_type_rsvp {1, "mpls-te-signaling-type-rsvp"};

const Enum::YLeaf MplsTeBfdSessionDownAction1::reopt {0, "reopt"};
const Enum::YLeaf MplsTeBfdSessionDownAction1::re_setup {1, "re-setup"};

const Enum::YLeaf MplsTeNode::router {1, "router"};
const Enum::YLeaf MplsTeNode::network {2, "network"};

const Enum::YLeaf TeAutobwAppRej::application_allowed {0, "application-allowed"};
const Enum::YLeaf TeAutobwAppRej::auto_bw_disabled {1, "auto-bw-disabled"};
const Enum::YLeaf TeAutobwAppRej::tunnel_is_down {2, "tunnel-is-down"};
const Enum::YLeaf TeAutobwAppRej::tunnel_is_frr {3, "tunnel-is-frr"};
const Enum::YLeaf TeAutobwAppRej::tunnel_is_backup {4, "tunnel-is-backup"};
const Enum::YLeaf TeAutobwAppRej::tunnel_is_lock_down {5, "tunnel-is-lock-down"};

const Enum::YLeaf MplsTeFrrSharing::sharing_none {0, "sharing-none"};
const Enum::YLeaf MplsTeFrrSharing::sharing_pri_oi_backup_oi_parent {1, "sharing-pri-oi-backup-oi-parent"};
const Enum::YLeaf MplsTeFrrSharing::sharing_pri_oi_parent_backup_oi {2, "sharing-pri-oi-parent-backup-oi"};
const Enum::YLeaf MplsTeFrrSharing::sharing_pri_oi_parent_backup_oi_parent {3, "sharing-pri-oi-parent-backup-oi-parent"};

const Enum::YLeaf TeAutoTunExpPathHop::ipv4_address_type {0, "ipv4-address-type"};
const Enum::YLeaf TeAutoTunExpPathHop::mpls_label_type {1, "mpls-label-type"};
const Enum::YLeaf TeAutoTunExpPathHop::ipv4_and_label_type {2, "ipv4-and-label-type"};

const Enum::YLeaf MplsTpLspState::down {0, "down"};
const Enum::YLeaf MplsTpLspState::up {1, "up"};
const Enum::YLeaf MplsTpLspState::active {2, "active"};
const Enum::YLeaf MplsTpLspState::unknown {3, "unknown"};

const Enum::YLeaf TpLinkState::down {0, "down"};
const Enum::YLeaf TpLinkState::admin_down {1, "admin-down"};
const Enum::YLeaf TpLinkState::up {2, "up"};
const Enum::YLeaf TpLinkState::unknown {3, "unknown"};

const Enum::YLeaf FloodingTrigger::flooding_reason_unknown {0, "flooding-reason-unknown"};
const Enum::YLeaf FloodingTrigger::link_up {1, "link-up"};
const Enum::YLeaf FloodingTrigger::link_down {2, "link-down"};
const Enum::YLeaf FloodingTrigger::threshold_up {3, "threshold-up"};
const Enum::YLeaf FloodingTrigger::threshold_down {4, "threshold-down"};
const Enum::YLeaf FloodingTrigger::threshold_up_pool1 {5, "threshold-up-pool1"};
const Enum::YLeaf FloodingTrigger::threshold_down_pool1 {6, "threshold-down-pool1"};
const Enum::YLeaf FloodingTrigger::timer_expired {7, "timer-expired"};
const Enum::YLeaf FloodingTrigger::bandwidth_change {8, "bandwidth-change"};
const Enum::YLeaf FloodingTrigger::user {9, "user"};
const Enum::YLeaf FloodingTrigger::rsvp_timeout {10, "rsvp-timeout"};
const Enum::YLeaf FloodingTrigger::rsvp_reconnect {11, "rsvp-reconnect"};
const Enum::YLeaf FloodingTrigger::te_exited {12, "te-exited"};
const Enum::YLeaf FloodingTrigger::srlg_change {13, "srlg-change"};
const Enum::YLeaf FloodingTrigger::hw_oor_green {14, "hw-oor-green"};
const Enum::YLeaf FloodingTrigger::hw_oor_yellow {15, "hw-oor-yellow"};
const Enum::YLeaf FloodingTrigger::hw_oor_red {16, "hw-oor-red"};
const Enum::YLeaf FloodingTrigger::hw_oor_recovery_duration_expired {17, "hw-oor-recovery-duration-expired"};
const Enum::YLeaf FloodingTrigger::lsp_oor_green {18, "lsp-oor-green"};
const Enum::YLeaf FloodingTrigger::lsp_oor_yellow {19, "lsp-oor-yellow"};
const Enum::YLeaf FloodingTrigger::lsp_oor_red {20, "lsp-oor-red"};
const Enum::YLeaf FloodingTrigger::lsp_oor_recovery_duration_expired {21, "lsp-oor-recovery-duration-expired"};
const Enum::YLeaf FloodingTrigger::max_res_bandwidth_threshold_up {22, "max-res-bandwidth-threshold-up"};
const Enum::YLeaf FloodingTrigger::max_res_bandwidth_threshold_down {23, "max-res-bandwidth-threshold-down"};

const Enum::YLeaf TeS2LSrPathSelection::te_s2l_sr_path_selection_any {0, "te-s2l-sr-path-selection-any"};
const Enum::YLeaf TeS2LSrPathSelection::te_s2l_sr_path_selection_adj_unprotected {1, "te-s2l-sr-path-selection-adj-unprotected"};
const Enum::YLeaf TeS2LSrPathSelection::te_s2l_sr_path_selection_adj_protected {2, "te-s2l-sr-path-selection-adj-protected"};

const Enum::YLeaf MteTunnelOperState::tunnel_state_oper_unknown {0, "tunnel-state-oper-unknown"};
const Enum::YLeaf MteTunnelOperState::operational_down {1, "operational-down"};
const Enum::YLeaf MteTunnelOperState::operational_up {2, "operational-up"};

const Enum::YLeaf IgpSubnet::igp_subnet_type_none {0, "igp-subnet-type-none"};
const Enum::YLeaf IgpSubnet::p2p {1, "p2p"};
const Enum::YLeaf IgpSubnet::broadcast {2, "broadcast"};
const Enum::YLeaf IgpSubnet::non_broadcast_multiaccess {3, "non-broadcast-multiaccess"};
const Enum::YLeaf IgpSubnet::p2mp {4, "p2mp"};
const Enum::YLeaf IgpSubnet::loopback {5, "loopback"};

const Enum::YLeaf TeStatsSigFilter::te_stat_sig_filter_vif {0, "te-stat-sig-filter-vif"};
const Enum::YLeaf TeStatsSigFilter::te_stat_sig_filter_lsp {1, "te-stat-sig-filter-lsp"};

const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_not_set {0, "mpls-te-lsp-type-not-set"};
const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_p2p {1, "mpls-te-lsp-type-p2p"};
const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_p2mp {2, "mpls-te-lsp-type-p2mp"};
const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_gmpls_ouni {3, "mpls-te-lsp-type-gmpls-ouni"};
const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_gmpls_nni {4, "mpls-te-lsp-type-gmpls-nni"};
const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_p2p_bidir {5, "mpls-te-lsp-type-p2p-bidir"};
const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_gmpls_tp {6, "mpls-te-lsp-type-gmpls-tp"};
const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_gmpls_nni_otn {7, "mpls-te-lsp-type-gmpls-nni-otn"};
const Enum::YLeaf MplsTeLsp::mpls_te_lsp_type_segment_routing_p2p {8, "mpls-te-lsp-type-segment-routing-p2p"};

const Enum::YLeaf TeMeshgroup::meshgroup_type_automesh {0, "meshgroup-type-automesh"};
const Enum::YLeaf TeMeshgroup::meshgroup_type_onehop {1, "meshgroup-type-onehop"};

const Enum::YLeaf TeAssociationTieRole::none {0, "none"};
const Enum::YLeaf TeAssociationTieRole::master {1, "master"};
const Enum::YLeaf TeAssociationTieRole::slave {2, "slave"};

const Enum::YLeaf RsvpMgmtEroSubobj::rsvp_mgmt_ero_type_ipv4 {1, "rsvp-mgmt-ero-type-ipv4"};
const Enum::YLeaf RsvpMgmtEroSubobj::rsvp_mgmt_ero_type_un_num {4, "rsvp-mgmt-ero-type-un-num"};

const Enum::YLeaf MplsTpTunnelSwitchoverTrig::none {0, "none"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrig::bfd {1, "bfd"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrig::local_lockout {2, "local-lockout"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrig::remote_lockout {3, "remote-lockout"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrig::ais {4, "ais"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrig::ldi {5, "ldi"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrig::lkr {6, "lkr"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrig::link_down {7, "link-down"};

const Enum::YLeaf BandwidthTypeEnum::pool0 {0, "pool0"};
const Enum::YLeaf BandwidthTypeEnum::pool1 {1, "pool1"};
const Enum::YLeaf BandwidthTypeEnum::unknown {2, "unknown"};

const Enum::YLeaf MplsTeIepHop::iep_hop_type_unknown {0, "iep-hop-type-unknown"};
const Enum::YLeaf MplsTeIepHop::iep_hop_type_strict_next {1, "iep-hop-type-strict-next"};
const Enum::YLeaf MplsTeIepHop::iep_hop_type_exclude {2, "iep-hop-type-exclude"};
const Enum::YLeaf MplsTeIepHop::iep_hop_type_exclude_node {3, "iep-hop-type-exclude-node"};
const Enum::YLeaf MplsTeIepHop::iep_hop_type_exclude_srlg {4, "iep-hop-type-exclude-srlg"};
const Enum::YLeaf MplsTeIepHop::iep_hop_type_loose_next {5, "iep-hop-type-loose-next"};
const Enum::YLeaf MplsTeIepHop::iep_hop_type_next {6, "iep-hop-type-next"};
const Enum::YLeaf MplsTeIepHop::iep_hop_type_share_srlg {7, "iep-hop-type-share-srlg"};

const Enum::YLeaf LspAdminStatus::mpls_te_lsp_admin_up {0, "mpls-te-lsp-admin-up"};
const Enum::YLeaf LspAdminStatus::mpls_te_lsp_admin_shutdown {1, "mpls-te-lsp-admin-shutdown"};

const Enum::YLeaf MplsTeTunnelsProcessStatus::not_running {0, "not-running"};
const Enum::YLeaf MplsTeTunnelsProcessStatus::running {1, "running"};
const Enum::YLeaf MplsTeTunnelsProcessStatus::not_registered_with_rsvp {2, "not-registered-with-rsvp"};

const Enum::YLeaf TeS2LOutputRwExplicitNull::tes2l_output_rw_exp_null {0, "tes2l-output-rw-exp-null"};
const Enum::YLeaf TeS2LOutputRwExplicitNull::tes2l_output_rw_exp_null_v4 {1, "tes2l-output-rw-exp-null-v4"};
const Enum::YLeaf TeS2LOutputRwExplicitNull::tes2l_output_rw_exp_null_v6 {2, "tes2l-output-rw-exp-null-v6"};

const Enum::YLeaf MplsTeP2MpTimer::lmrib_restart {0, "lmrib-restart"};
const Enum::YLeaf MplsTeP2MpTimer::lmrib_recovery {1, "lmrib-recovery"};
const Enum::YLeaf MplsTeP2MpTimer::rsvp_restart {2, "rsvp-restart"};
const Enum::YLeaf MplsTeP2MpTimer::lsd_restart {3, "lsd-restart"};
const Enum::YLeaf MplsTeP2MpTimer::lsd_recovery {4, "lsd-recovery"};
const Enum::YLeaf MplsTeP2MpTimer::clear_in_progress_bandwidth {5, "clear-in-progress-bandwidth"};
const Enum::YLeaf MplsTeP2MpTimer::rsi_restart {6, "rsi-restart"};
const Enum::YLeaf MplsTeP2MpTimer::rsi_recovery {7, "rsi-recovery"};
const Enum::YLeaf MplsTeP2MpTimer::ipv4_caps_replay {8, "ipv4-caps-replay"};
const Enum::YLeaf MplsTeP2MpTimer::retry_acl_registration_timer {9, "retry-acl-registration-timer"};
const Enum::YLeaf MplsTeP2MpTimer::mpls_te_exit {10, "mpls-te-exit"};
const Enum::YLeaf MplsTeP2MpTimer::mpls_te_nsr_peer_restart {11, "mpls-te-nsr-peer-restart"};
const Enum::YLeaf MplsTeP2MpTimer::mpls_te_issu_peer_restart {12, "mpls-te-issu-peer-restart"};
const Enum::YLeaf MplsTeP2MpTimer::bfd_restart {13, "bfd-restart"};
const Enum::YLeaf MplsTeP2MpTimer::bfd_recovery {14, "bfd-recovery"};
const Enum::YLeaf MplsTeP2MpTimer::im_oc_restart {15, "im-oc-restart"};
const Enum::YLeaf MplsTeP2MpTimer::im_oc_recovery {16, "im-oc-recovery"};
const Enum::YLeaf MplsTeP2MpTimer::rib_restart {17, "rib-restart"};
const Enum::YLeaf MplsTeP2MpTimer::rib_recovery {18, "rib-recovery"};
const Enum::YLeaf MplsTeP2MpTimer::rib_next_hop_route_cleanup {19, "rib-next-hop-route-cleanup"};
const Enum::YLeaf MplsTeP2MpTimer::rsi_srlg_producer_retry {20, "rsi-srlg-producer-retry"};
const Enum::YLeaf MplsTeP2MpTimer::eoc_reg_retry {21, "eoc-reg-retry"};
const Enum::YLeaf MplsTeP2MpTimer::fib_restart {22, "fib-restart"};
const Enum::YLeaf MplsTeP2MpTimer::fib_recovery {23, "fib-recovery"};
const Enum::YLeaf MplsTeP2MpTimer::fib_next_hop_route_cleanup {24, "fib-next-hop-route-cleanup"};
const Enum::YLeaf MplsTeP2MpTimer::fib_next_hop_register_retry {25, "fib-next-hop-register-retry"};
const Enum::YLeaf MplsTeP2MpTimer::tun_backend_scan_retry {26, "tun-backend-scan-retry"};
const Enum::YLeaf MplsTeP2MpTimer::tunnel_checkpoint_list_service {27, "tunnel-checkpoint-list-service"};
const Enum::YLeaf MplsTeP2MpTimer::tunnel_service_binding_sid_allocation_retry {28, "tunnel-service-binding-sid-allocation-retry"};
const Enum::YLeaf MplsTeP2MpTimer::timer_not_used {29, "timer-not-used"};

const Enum::YLeaf MplsTeLspRole::mpls_te_lsp_role_unknown {0, "mpls-te-lsp-role-unknown"};
const Enum::YLeaf MplsTeLspRole::mpls_te_lsp_role_head {1, "mpls-te-lsp-role-head"};
const Enum::YLeaf MplsTeLspRole::mpls_te_lsp_role_transit {2, "mpls-te-lsp-role-transit"};
const Enum::YLeaf MplsTeLspRole::mpls_te_lsp_role_tail {3, "mpls-te-lsp-role-tail"};

const Enum::YLeaf MplsTeTermination::none {0, "none"};
const Enum::YLeaf MplsTeTermination::ether {1, "ether"};

const Enum::YLeaf MplsTpLspBfdState::down {0, "down"};
const Enum::YLeaf MplsTpLspBfdState::up {1, "up"};

const Enum::YLeaf MteReoptTrigger::no_trigger {0, "no-trigger"};
const Enum::YLeaf MteReoptTrigger::timer_trigger {1, "timer-trigger"};
const Enum::YLeaf MteReoptTrigger::bandwidth_change_trigger {2, "bandwidth-change-trigger"};
const Enum::YLeaf MteReoptTrigger::auto_bandwidth_overflow_trigger {3, "auto-bandwidth-overflow-trigger"};
const Enum::YLeaf MteReoptTrigger::auto_bandwidth_underflow_trigger {4, "auto-bandwidth-underflow-trigger"};
const Enum::YLeaf MteReoptTrigger::auto_bandwidth_adjustment_trigger {5, "auto-bandwidth-adjustment-trigger"};
const Enum::YLeaf MteReoptTrigger::metric_type_change_trigger {6, "metric-type-change-trigger"};
const Enum::YLeaf MteReoptTrigger::user_trigger {7, "user-trigger"};
const Enum::YLeaf MteReoptTrigger::frr_trigger {8, "frr-trigger"};
const Enum::YLeaf MteReoptTrigger::remerge_error_trigger {9, "remerge-error-trigger"};
const Enum::YLeaf MteReoptTrigger::preferred_path_trigger {10, "preferred-path-trigger"};
const Enum::YLeaf MteReoptTrigger::preferred_tree_trigger {11, "preferred-tree-trigger"};
const Enum::YLeaf MteReoptTrigger::due_to_maximum_metric {12, "due-to-maximum-metric"};
const Enum::YLeaf MteReoptTrigger::path_option_switchover_trigger {13, "path-option-switchover-trigger"};
const Enum::YLeaf MteReoptTrigger::path_protection_switchover_trigger {14, "path-protection-switchover-trigger"};
const Enum::YLeaf MteReoptTrigger::iep_enable_reoptimization_trigger {15, "iep-enable-reoptimization-trigger"};
const Enum::YLeaf MteReoptTrigger::affinity_path_verification_fail_trigger {16, "affinity-path-verification-fail-trigger"};
const Enum::YLeaf MteReoptTrigger::cost_limit_path_verification_fail_trigger {17, "cost-limit-path-verification-fail-trigger"};
const Enum::YLeaf MteReoptTrigger::soft_preemption_trigger {18, "soft-preemption-trigger"};
const Enum::YLeaf MteReoptTrigger::iep_changed {19, "iep-changed"};
const Enum::YLeaf MteReoptTrigger::po_changed {20, "po-changed"};
const Enum::YLeaf MteReoptTrigger::dest_changed {21, "dest-changed"};
const Enum::YLeaf MteReoptTrigger::reopt_try_to_force_it {22, "reopt-try-to-force-it"};
const Enum::YLeaf MteReoptTrigger::topology_change_trigger {23, "topology-change-trigger"};
const Enum::YLeaf MteReoptTrigger::reopt_link_up_event {24, "reopt-link-up-event"};
const Enum::YLeaf MteReoptTrigger::bfd_session_down_trigger {25, "bfd-session-down-trigger"};
const Enum::YLeaf MteReoptTrigger::reverse_assoc_s2l_received_trigger {26, "reverse-assoc-s2l-received-trigger"};
const Enum::YLeaf MteReoptTrigger::gmpls_uni_multilayer_trigger {27, "gmpls-uni-multilayer-trigger"};
const Enum::YLeaf MteReoptTrigger::gmpls_uni_user_trigger {28, "gmpls-uni-user-trigger"};
const Enum::YLeaf MteReoptTrigger::path_selection_tiebreaker_change_trigger {29, "path-selection-tiebreaker-change-trigger"};
const Enum::YLeaf MteReoptTrigger::sr_egress_path_change_trigger {30, "sr-egress-path-change-trigger"};
const Enum::YLeaf MteReoptTrigger::overload_bit_trigger {31, "overload-bit-trigger"};
const Enum::YLeaf MteReoptTrigger::pce_trigger {32, "pce-trigger"};
const Enum::YLeaf MteReoptTrigger::lockout_metric_trigger {33, "lockout-metric-trigger"};
const Enum::YLeaf MteReoptTrigger::bfd_session_config_change_trigger {34, "bfd-session-config-change-trigger"};
const Enum::YLeaf MteReoptTrigger::higher_priority_po_change_trigger {35, "higher-priority-po-change-trigger"};
const Enum::YLeaf MteReoptTrigger::sr_area_spf_support_change_trigger {36, "sr-area-spf-support-change-trigger"};
const Enum::YLeaf MteReoptTrigger::trigger_not_used {37, "trigger-not-used"};

const Enum::YLeaf TeP2MpS2LDeletionSubcause::no_subcause {0, "no-subcause"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::cleanup_req {1, "cleanup-req"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::invalid_data {2, "invalid-data"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::fsm_inv_ctxt {3, "fsm-inv-ctxt"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::fsm_inv_ctxt_data {4, "fsm-inv-ctxt-data"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::fsm_inv_role {5, "fsm-inv-role"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::ll_failure {6, "ll-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::ll_rel_fail {7, "ll-rel-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::ll_mismatch {8, "ll-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::ll_invalid {9, "ll-invalid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::ll_set_failure {10, "ll-set-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::bad_out_label {11, "bad-out-label"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::sl_err {12, "sl-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::rl_mismatch {13, "rl-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::sl_alloc_err {14, "sl-alloc-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::upstream_downstream_label_mismatch {15, "upstream-downstream-label-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::upstream_label_failure {16, "upstream-label-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::upstream_label_rel_fail {17, "upstream-label-rel-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::upstream_label_mismatch {18, "upstream-label-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::upstream_label_invalid {19, "upstream-label-invalid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::bad_upstream_label {20, "bad-upstream-label"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::ul_set_failure {21, "ul-set-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::gmpls_label_alloc_err {22, "gmpls-label-alloc-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::gmpls_label_clone_err {23, "gmpls-label-clone-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::rw_err {24, "rw-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::up_rw_err {25, "up-rw-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_admit {26, "path-admit"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::bw {27, "bw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::admit_resv {28, "admit-resv"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::rrrm_err {29, "rrrm-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::hardware_out_of_resources {30, "hardware-out-of-resources"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::comp_rid {31, "comp-rid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::comp_lcl_rid {32, "comp-lcl-rid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::comp_up_rid {33, "comp-up-rid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::comp_down_rid {34, "comp-down-rid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::rest_if_hop {35, "rest-if-hop"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::inv_in_if {36, "inv-in-if"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::nh_err {37, "nh-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::inv_in_ero {38, "inv-in-ero"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::out_ero_fail {39, "out-ero-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::frr_bk_asssign {40, "frr-bk-asssign"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::frr_bk_rm {41, "frr-bk-rm"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::frr_bk_send {42, "frr-bk-send"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::frr_needs_del {43, "frr-needs-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::frr_reopt_lsp {44, "frr-reopt-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::rsvp_api_h {45, "rsvp-api-h"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::insane_path {46, "insane-path"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::remerge_chk_fail {47, "remerge-chk-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::remerge_detected {48, "remerge-detected"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::xro {49, "xro"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::resv_bw_set {50, "resv-bw-set"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::resv_prep_fail {51, "resv-prep-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_ch_proc {52, "path-ch-proc"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_ch_frr {53, "path-ch-frr"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_ch_sess_attri_fl {54, "path-ch-sess-attri-fl"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_ch_bw_ch {55, "path-ch-bw-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_err_proc {56, "path-err-proc"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_err {57, "path-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_err_wpsr {58, "path-err-wpsr"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_del {59, "path-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::resv_ch_proc {60, "resv-ch-proc"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::resv_ch_rro {61, "resv-ch-rro"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::resv_del {62, "resv-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::resv_err {63, "resv-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::perr_send_fail {64, "perr-send-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::perr_proc_fail {65, "perr-proc-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::perr_rcv {66, "perr-rcv"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::resv_err_rcv {67, "resv-err-rcv"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::flowspec {68, "flowspec"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::setup_conn_api_fail {69, "setup-conn-api-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_not_replayed {70, "path-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::resv_not_replayed {71, "resv-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::rewrite_not_replayed {72, "rewrite-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::label_not_replayed {73, "label-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::connection_not_ready {74, "connection-not-ready"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::master_did_not_replay {75, "master-did-not-replay"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::head_s2l_has_no_vif {76, "head-s2l-has-no-vif"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::frr_assigned_s2l_has_no_backup {77, "frr-assigned-s2l-has-no-backup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::frr_assigned_s2l_has_down_backup {78, "frr-assigned-s2l-has-down-backup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::out_link_down_and_no_frr {79, "out-link-down-and-no-frr"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::collaborator_timeout_rsvp {80, "collaborator-timeout-rsvp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::collaborator_timeout_lsd {81, "collaborator-timeout-lsd"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::collaborator_timeout_lmrib {82, "collaborator-timeout-lmrib"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::collaborator_timeout_im {83, "collaborator-timeout-im"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::collaborator_timeout_error {84, "collaborator-timeout-error"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::topo_flush {85, "topo-flush"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::area_shut {86, "area-shut"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::active_po_del {87, "active-po-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_verify_failed {88, "path-verify-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::srlg_path_verify_failed {89, "srlg-path-verify-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::affinity_path_verify_failed {90, "affinity-path-verify-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::aff_fail_delayed_tear_timeout_failed {91, "aff-fail-delayed-tear-timeout-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::cost_limit_verify_failed {92, "cost-limit-verify-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::path_setup_timeout {93, "path-setup-timeout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::vif_destroyed {94, "vif-destroyed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::vif_shut {95, "vif-shut"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lsp_shut {96, "lsp-shut"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::gmpls_uni_head {97, "gmpls-uni-head"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::head_resetup {98, "head-resetup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::none_head_resetup {99, "none-head-resetup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dest_disabled {100, "dest-disabled"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::iep_ch_act_po {101, "iep-ch-act-po"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::iep_ch_reopt {102, "iep-ch-reopt"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::iep_ch_standby {103, "iep-ch-standby"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dste_mode_ch {104, "dste-mode-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_del_frr_act {105, "reopt-del-frr-act"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::new_reopt_tear_old {106, "new-reopt-tear-old"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_failed_verify {107, "reopt-failed-verify"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_failed_install {108, "reopt-failed-install"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_failed_rw {109, "reopt-failed-rw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_failed_not_superset {110, "reopt-failed-not-superset"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dclean_at_install_time {111, "dclean-at-install-time"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dclean_at_clean_timer {112, "dclean-at-clean-timer"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dclean_at_reopt_active {113, "dclean-at-reopt-active"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lcl_notif_head {114, "lcl-notif-head"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::in_if_fail {115, "in-if-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::out_if_fail {116, "out-if-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::if_fail_lc_oir {117, "if-fail-lc-oir"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_rid_rm {118, "te-rid-rm"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_rsvp_oos_bkup {119, "te-rsvp-oos-bkup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::in_if_fail_exp_null_cfg_ch {120, "in-if-fail-exp-null-cfg-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::new_curr_lsp_sig {121, "new-curr-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::new_reopt_lsp_sig {122, "new-reopt-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::new_stdby_lsp_sig {123, "new-stdby-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::new_restore_lsp_sig {124, "new-restore-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::new_cl_pp_lsp_sig {125, "new-cl-pp-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::chkpt_recovery_failed {126, "chkpt-recovery-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::stdby_cr_failed {127, "stdby-cr-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_lsp_rej {128, "reopt-lsp-rej"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_po_sw_failed {129, "reopt-po-sw-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::failed_to_find_path {130, "failed-to-find-path"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::sig_rcv_fail_path_cr_ch {131, "sig-rcv-fail-path-cr-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lsp_db_shut {132, "lsp-db-shut"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_hold_start {133, "reopt-hold-start"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::vif_lspid_mismatch {134, "vif-lspid-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::s2l_has_no_vif {135, "s2l-has-no-vif"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::overload_reopt_timeout {136, "overload-reopt-timeout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::hop_limit_exceeded {137, "hop-limit-exceeded"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lingering_current_lsp {138, "lingering-current-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lingering_standby_lsp {139, "lingering-standby-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lingering_restore_lsp {140, "lingering-restore-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::double_lockout {141, "double-lockout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lockout_no_protection {142, "lockout-no-protection"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lockout_cleanup {143, "lockout-cleanup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_ppsw_lsp_mismatch {144, "te-ppsw-lsp-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_stdbyup_no_curr_lsp {145, "te-stdbyup-no-curr-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::stdby_failed_rw {146, "stdby-failed-rw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_lsp_tear_ppsw {147, "reopt-lsp-tear-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::delay_pp_lsp_tear_ppsw {148, "delay-pp-lsp-tear-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::stdby_failed_verify {149, "stdby-failed-verify"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::stdby_not_needed_due_to_restore {150, "stdby-not-needed-due-to-restore"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::restore_failed_verify {151, "restore-failed-verify"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::restore_failed_install {152, "restore-failed-install"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::restore_failed_rewrite {153, "restore-failed-rewrite"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_ppsw_cfg_rmvd {154, "te-ppsw-cfg-rmvd"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_ppsw_manual_ppsw {155, "te-ppsw-manual-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_ppsw_bidir_p_chg_ppsw {156, "te-ppsw-bidir-p-chg-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_ppsw_bidir_lockout_ppsw {157, "te-ppsw-bidir-lockout-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dclean_at_pp_clean_timer {158, "dclean-at-pp-clean-timer"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reopt_standby_failed {159, "reopt-standby-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::standby_reoptimized {160, "standby-reoptimized"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::standby_reoptimize_aborted {161, "standby-reoptimize-aborted"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_reoptup_no_curr_lsp {162, "te-reoptup-no-curr-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_reopt_curr_lsp_down {163, "te-reopt-curr-lsp-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_cleanedt_curr_lsp_down {164, "te-cleanedt-curr-lsp-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_delay_lsp_up {165, "te-delay-lsp-up"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::no_route_due_to_affinity {166, "no-route-due-to-affinity"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::no_rib_lkup_bad_ero_gmpls {167, "no-rib-lkup-bad-ero-gmpls"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::cleanup_lingering {168, "cleanup-lingering"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_soft_preemption_timeout {169, "te-s2l-del-sc-soft-preemption-timeout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_soft_preempted_non_current {170, "te-s2l-del-sc-soft-preempted-non-current"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_vif_sync_lsp_del {171, "te-s2l-del-sc-vif-sync-lsp-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::rsvp_api_cleanup_req {172, "rsvp-api-cleanup-req"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_frr_wrong_backup {173, "te-s2l-del-sc-frr-wrong-backup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_bfd_session_create_failed {174, "te-s2l-del-sc-bfd-session-create-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_bfd_session_bringup_timeout {175, "te-s2l-del-sc-bfd-session-bringup-timeout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_bfd_session_down {176, "te-s2l-del-sc-bfd-session-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_bfd_session_not_replayed {177, "te-s2l-del-sc-bfd-session-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::te_s2l_del_sc_reopt_p2mp_egress_info_fail {178, "te-s2l-del-sc-reopt-p2mp-egress-info-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::non_curr_frr_lcl_notif_event {179, "non-curr-frr-lcl-notif-event"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::unsupported_encoding {180, "unsupported-encoding"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::unsupported_gpid {181, "unsupported-gpid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::unsupported_switching_type {182, "unsupported-switching-type"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::upstream_label_change_not_permitted {183, "upstream-label-change-not-permitted"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::encoding_type_change_not_permitted {184, "encoding-type-change-not-permitted"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::aps_protect_info_change_failed {185, "aps-protect-info-change-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::incorrect_lsp_type {186, "incorrect-lsp-type"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::local_hop_error {187, "local-hop-error"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::unsupported_gmpls_attributes {188, "unsupported-gmpls-attributes"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::gmpls_uni_reopt_triggered {189, "gmpls-uni-reopt-triggered"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::maximum_acceptable_label_retries {190, "maximum-acceptable-label-retries"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::invalid_direction {191, "invalid-direction"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::invalid_rewrite_context {192, "invalid-rewrite-context"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::invalid_label_context {193, "invalid-label-context"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dwdm_capability_changed {194, "dwdm-capability-changed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dwdm_capability_removed {195, "dwdm-capability-removed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::dwdm_wavelength_removed {196, "dwdm-wavelength-removed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::gmpls_uni_multilayer_restoration {197, "gmpls-uni-multilayer-restoration"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::gmpls_uni_user_triggered_reoptimization {198, "gmpls-uni-user-triggered-reoptimization"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::gmpls_uni_active_path_change_triggered_reopt {199, "gmpls-uni-active-path-change-triggered-reopt"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::passive_match_err {200, "passive-match-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::egress_control_err {201, "egress-control-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::egress_control_map_err {202, "egress-control-map-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::restore_not_needed_for_current {203, "restore-not-needed-for-current"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::restore_not_needed_for_standby {204, "restore-not-needed-for-standby"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::restore_dp_down {205, "restore-dp-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::current_not_needed_dp_down {206, "current-not-needed-dp-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::bad_protct_obj {207, "bad-protct-obj"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_down {208, "optical-link-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_lsp_out_of_sync {209, "optical-link-lsp-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_owner_out_of_sync {210, "optical-link-owner-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_interface_handle_out_of_sync {211, "optical-link-interface-handle-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_hop_out_of_sync {212, "optical-link-hop-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_role_out_of_sync {213, "optical-link-role-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_downstream_router_id_out_of_sync {214, "optical-link-downstream-router-id-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_upstream_router_id_out_of_sync {215, "optical-link-upstream-router-id-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_encoding_type_out_of_sync {216, "optical-link-encoding-type-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_switching_type_out_of_sync {217, "optical-link-switching-type-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::optical_link_gpid_out_of_sync {218, "optical-link-gpid-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::egress_optical_link_not_found {219, "egress-optical-link-not-found"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::ingress_optical_link_not_found {220, "ingress-optical-link-not-found"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::sync_dest_state {221, "sync-dest-state"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::prot_object_err {222, "prot-object-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reverse_s2l_deleted {223, "reverse-s2l-deleted"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::cancel_inprogress_by_slave {224, "cancel-inprogress-by-slave"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::invalid_reverse_ero {225, "invalid-reverse-ero"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reverse_lsp_not_found {226, "reverse-lsp-not-found"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reverse_lsp_not_present {227, "reverse-lsp-not-present"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::associated_vif_down {228, "associated-vif-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::vif_sync_processing {229, "vif-sync-processing"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::incoming_interface_lockout {230, "incoming-interface-lockout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::sr_egress_path_changed {231, "sr-egress-path-changed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::in_if_fail_imp_null_cfg_ch {232, "in-if-fail-imp-null-cfg-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::reverse_lsp_failure {233, "reverse-lsp-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lsp_wrap_label_error {234, "lsp-wrap-label-error"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::lsp_wrap_rewrite_error {235, "lsp-wrap-rewrite-error"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::transit_lsp_out_of_resources {236, "transit-lsp-out-of-resources"};
const Enum::YLeaf TeP2MpS2LDeletionSubcause::fsm_sc_must_be_last {237, "fsm-sc-must-be-last"};

const Enum::YLeaf TeOduCapability::not_set {0, "not-set"};
const Enum::YLeaf TeOduCapability::fixed {1, "fixed"};
const Enum::YLeaf TeOduCapability::flex {2, "flex"};

const Enum::YLeaf PceTunPathState::state_none {0, "state-none"};
const Enum::YLeaf PceTunPathState::state_pending {1, "state-pending"};
const Enum::YLeaf PceTunPathState::state_received_path {2, "state-received-path"};
const Enum::YLeaf PceTunPathState::state_no_peer {3, "state-no-peer"};
const Enum::YLeaf PceTunPathState::state_pcep_down {4, "state-pcep-down"};
const Enum::YLeaf PceTunPathState::state_received_no_path {5, "state-received-no-path"};

const Enum::YLeaf MteTunnelAdminState::tunnel_state_admin_unknown {0, "tunnel-state-admin-unknown"};
const Enum::YLeaf MteTunnelAdminState::admin_shutdown {1, "admin-shutdown"};
const Enum::YLeaf MteTunnelAdminState::admin_up {2, "admin-up"};

const Enum::YLeaf Ctype::ctype_null {0, "ctype-null"};
const Enum::YLeaf Ctype::ctype_ipv4 {1, "ctype-ipv4"};
const Enum::YLeaf Ctype::ctype_ipv4_p2p_tunnel {7, "ctype-ipv4-p2p-tunnel"};
const Enum::YLeaf Ctype::ctype_ipv6_p2p_tunnel {8, "ctype-ipv6-p2p-tunnel"};
const Enum::YLeaf Ctype::ctype_ipv4_uni {9, "ctype-ipv4-uni"};
const Enum::YLeaf Ctype::ctype_ipv4_p2mp_tunnel {13, "ctype-ipv4-p2mp-tunnel"};
const Enum::YLeaf Ctype::ctype_ipv6_p2mp_tunnel {14, "ctype-ipv6-p2mp-tunnel"};

const Enum::YLeaf MplsTpTunnelActiveLsp::working {0, "working"};
const Enum::YLeaf MplsTpTunnelActiveLsp::protect {1, "protect"};
const Enum::YLeaf MplsTpTunnelActiveLsp::none {2, "none"};

const Enum::YLeaf MplsTeIgpProtocol::none {0, "none"};
const Enum::YLeaf MplsTeIgpProtocol::isis {1, "isis"};
const Enum::YLeaf MplsTeIgpProtocol::ospf {2, "ospf"};

const Enum::YLeaf MplsTeDsteClassStatus::configured {0, "configured"};
const Enum::YLeaf MplsTeDsteClassStatus::default_ {1, "default"};
const Enum::YLeaf MplsTeDsteClassStatus::unused {2, "unused"};

const Enum::YLeaf PceLspAutorouteMetric::none {0, "none"};
const Enum::YLeaf PceLspAutorouteMetric::relative {1, "relative"};
const Enum::YLeaf PceLspAutorouteMetric::absolute {2, "absolute"};

const Enum::YLeaf TeAcl::acl_type_unknown {0, "acl-type-unknown"};
const Enum::YLeaf TeAcl::acl_type_access_list {1, "acl-type-access-list"};
const Enum::YLeaf TeAcl::acl_type_prefix_list {2, "acl-type-prefix-list"};
const Enum::YLeaf TeAcl::acl_type_unregistered {3, "acl-type-unregistered"};

const Enum::YLeaf MplsTeLoadshare::loadshare_equal {0, "loadshare-equal"};
const Enum::YLeaf MplsTeLoadshare::loadshare_bandwidth_based {1, "loadshare-bandwidth-based"};
const Enum::YLeaf MplsTeLoadshare::loadshare_configured {2, "loadshare-configured"};

const Enum::YLeaf IgpteAaMetricMode::metric_mode_none {0, "metric-mode-none"};
const Enum::YLeaf IgpteAaMetricMode::relative {1, "relative"};
const Enum::YLeaf IgpteAaMetricMode::absolute {2, "absolute"};
const Enum::YLeaf IgpteAaMetricMode::constant {3, "constant"};

const Enum::YLeaf MplsTeBwPool::te_bandwidth_pool0 {0, "te-bandwidth-pool0"};
const Enum::YLeaf MplsTeBwPool::te_bandwidth_pool1 {1, "te-bandwidth-pool1"};
const Enum::YLeaf MplsTeBwPool::te_bandwidth_any_pool {2, "te-bandwidth-any-pool"};

const Enum::YLeaf TeTargetAddr::invalid_te_target_type {0, "invalid-te-target-type"};
const Enum::YLeaf TeTargetAddr::te_target_type_ipv4 {1, "te-target-type-ipv4"};
const Enum::YLeaf TeTargetAddr::te_target_type_label {2, "te-target-type-label"};

const Enum::YLeaf TeAutobwAppTrigger::application_none {0, "application-none"};
const Enum::YLeaf TeAutobwAppTrigger::application_periodic {1, "application-periodic"};
const Enum::YLeaf TeAutobwAppTrigger::application_manual {2, "application-manual"};
const Enum::YLeaf TeAutobwAppTrigger::application_overflow {3, "application-overflow"};
const Enum::YLeaf TeAutobwAppTrigger::application_underflow {4, "application-underflow"};

const Enum::YLeaf AdmissionPolicy::reject_all {0, "reject-all"};
const Enum::YLeaf AdmissionPolicy::allow_all {1, "allow-all"};
const Enum::YLeaf AdmissionPolicy::reject_huge {2, "reject-huge"};
const Enum::YLeaf AdmissionPolicy::allow_if_room {3, "allow-if-room"};

const Enum::YLeaf MplsTeAfi::ipv4_unicast {0, "ipv4-unicast"};
const Enum::YLeaf MplsTeAfi::ipv4_multicast {1, "ipv4-multicast"};
const Enum::YLeaf MplsTeAfi::ipv6_unicast {2, "ipv6-unicast"};
const Enum::YLeaf MplsTeAfi::ipv6_multicast {3, "ipv6-multicast"};

const Enum::YLeaf MplsTeBackupUsage::backup_not_protecting {0, "backup-not-protecting"};
const Enum::YLeaf MplsTeBackupUsage::backup_protecting {1, "backup-protecting"};

const Enum::YLeaf TeBfdReversePath::bfd_reverse_path_none {0, "bfd-reverse-path-none"};
const Enum::YLeaf TeBfdReversePath::bfd_reverse_path_binding_label {1, "bfd-reverse-path-binding-label"};

const Enum::YLeaf MplsTeMgmtGmplsLabel::not_set {0, "not-set"};
const Enum::YLeaf MplsTeMgmtGmplsLabel::fixed_wdm {1, "fixed-wdm"};
const Enum::YLeaf MplsTeMgmtGmplsLabel::fixed_g709otn {2, "fixed-g709otn"};

const Enum::YLeaf RsvpMgmtEroSubobjStatus::rsvp_mgmt_ero_status_not_available {0, "rsvp-mgmt-ero-status-not-available"};
const Enum::YLeaf RsvpMgmtEroSubobjStatus::rsvp_mgmt_ero_status_available {1, "rsvp-mgmt-ero-status-available"};
const Enum::YLeaf RsvpMgmtEroSubobjStatus::rsvp_mgmt_ero_status_bw_not_available {2, "rsvp-mgmt-ero-status-bw-not-available"};

const Enum::YLeaf TeRevEroRejectReasons::none {0, "none"};
const Enum::YLeaf TeRevEroRejectReasons::bad_reverse_ero {1, "bad-reverse-ero"};
const Enum::YLeaf TeRevEroRejectReasons::tie_rejected {2, "tie-rejected"};
const Enum::YLeaf TeRevEroRejectReasons::standby_not_required {3, "standby-not-required"};
const Enum::YLeaf TeRevEroRejectReasons::admin_state {4, "admin-state"};
const Enum::YLeaf TeRevEroRejectReasons::priority {5, "priority"};
const Enum::YLeaf TeRevEroRejectReasons::class_type {6, "class-type"};
const Enum::YLeaf TeRevEroRejectReasons::bad_association {7, "bad-association"};

const Enum::YLeaf RsvpMgmtRroSubobj::ipv4rro_type {1, "ipv4rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobj::label_rro_type {3, "label-rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobj::unnumbered_rro_type {4, "unnumbered-rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobj::srlg_rro_type {34, "srlg-rro-type"};

const Enum::YLeaf TeVifBfd::bfd_disabled {0, "bfd-disabled"};
const Enum::YLeaf TeVifBfd::bfd_enabled {1, "bfd-enabled"};
const Enum::YLeaf TeVifBfd::sbfd_enabled {2, "sbfd-enabled"};

const Enum::YLeaf TeServTunClient::te_serv_auto_tun_client_invalid {0, "te-serv-auto-tun-client-invalid"};
const Enum::YLeaf TeServTunClient::te_serv_p2mp_tun_client_mvpn {1, "te-serv-p2mp-tun-client-mvpn"};
const Enum::YLeaf TeServTunClient::te_serv_p2mp_tun_client_vpls {2, "te-serv-p2mp-tun-client-vpls"};
const Enum::YLeaf TeServTunClient::te_serv_p2mp_tun_client_mvpn6 {3, "te-serv-p2mp-tun-client-mvpn6"};
const Enum::YLeaf TeServTunClient::te_serv_p2p_tun_client_bgp {4, "te-serv-p2p-tun-client-bgp"};
const Enum::YLeaf TeServTunClient::te_serv_p2p_tun_client_staticv4 {5, "te-serv-p2p-tun-client-staticv4"};
const Enum::YLeaf TeServTunClient::te_serv_p2p_tun_client_staticv6 {6, "te-serv-p2p-tun-client-staticv6"};
const Enum::YLeaf TeServTunClient::te_serv_p2p_tun_client_isis {7, "te-serv-p2p-tun-client-isis"};
const Enum::YLeaf TeServTunClient::te_serv_p2p_tun_client_ospf {8, "te-serv-p2p-tun-client-ospf"};
const Enum::YLeaf TeServTunClient::te_serv_auto_tun_client_count {9, "te-serv-auto-tun-client-count"};

const Enum::YLeaf TeSrlgCollectRequest::none {0, "none"};
const Enum::YLeaf TeSrlgCollectRequest::mandatory {1, "mandatory"};
const Enum::YLeaf TeSrlgCollectRequest::optional {2, "optional"};

const Enum::YLeaf ResourceProvider::resource_provider_none {0, "resource-provider-none"};
const Enum::YLeaf ResourceProvider::packet_switch_capable {1, "packet-switch-capable"};
const Enum::YLeaf ResourceProvider::time_division_multiplex {2, "time-division-multiplex"};
const Enum::YLeaf ResourceProvider::lambda_switch_capable {3, "lambda-switch-capable"};
const Enum::YLeaf ResourceProvider::fiber_switch_capable {4, "fiber-switch-capable"};
const Enum::YLeaf ResourceProvider::g709odu_capable {5, "g709odu-capable"};


}
}

