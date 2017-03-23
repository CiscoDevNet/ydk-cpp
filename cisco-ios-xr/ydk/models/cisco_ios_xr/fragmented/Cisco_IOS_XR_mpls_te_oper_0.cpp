
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_0.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_25.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_24.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_26.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_12.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::MplsTe()
    :
    affinity_map(std::make_shared<MplsTe::AffinityMap>())
	,announce_tunnels_info(std::make_shared<MplsTe::AnnounceTunnelsInfo>())
	,attribute_sets(std::make_shared<MplsTe::AttributeSets>())
	,auto_route_destination_entries(std::make_shared<MplsTe::AutoRouteDestinationEntries>())
	,auto_tunnel(std::make_shared<MplsTe::AutoTunnel>())
	,auto_tunnel_services(std::make_shared<MplsTe::AutoTunnelServices>())
	,bfd(std::make_shared<MplsTe::Bfd>())
	,collaborator_timers(std::make_shared<MplsTe::CollaboratorTimers>())
	,diff_serv_te_classes(std::make_shared<MplsTe::DiffServTeClasses>())
	,fast_reroute(std::make_shared<MplsTe::FastReroute>())
	,fib_next_hop_label_routes(std::make_shared<MplsTe::FibNextHopLabelRoutes>())
	,fib_next_hop_routes(std::make_shared<MplsTe::FibNextHopRoutes>())
	,forwarding_adjacency_destinations(std::make_shared<MplsTe::ForwardingAdjacencyDestinations>())
	,hardware_out_of_resources(std::make_shared<MplsTe::HardwareOutOfResources>())
	,igp_area_briefs(std::make_shared<MplsTe::IgpAreaBriefs>())
	,igp_areas(std::make_shared<MplsTe::IgpAreas>())
	,issu(std::make_shared<MplsTe::Issu>())
	,lsp_out_of_resources(std::make_shared<MplsTe::LspOutOfResources>())
	,maximum_tunnels(std::make_shared<MplsTe::MaximumTunnels>())
	,next_hop_routes(std::make_shared<MplsTe::NextHopRoutes>())
	,nsr(std::make_shared<MplsTe::Nsr>())
	,open_config(std::make_shared<MplsTe::OpenConfig>())
	,p2mp(std::make_shared<MplsTe::P2Mp>())
	,p2p_p2mp_tunnel(std::make_shared<MplsTe::P2PP2MpTunnel>())
	,path_protection(std::make_shared<MplsTe::PathProtection>())
	,segment_routing(std::make_shared<MplsTe::SegmentRouting>())
	,signalling_counters(std::make_shared<MplsTe::SignallingCounters>())
	,soft_preemption(std::make_shared<MplsTe::SoftPreemption>())
	,te_mib(std::make_shared<MplsTe::TeMib>())
	,topology(std::make_shared<MplsTe::Topology>())
	,topology_briefs(std::make_shared<MplsTe::TopologyBriefs>())
	,topology_nodes(std::make_shared<MplsTe::TopologyNodes>())
	,tunnels(std::make_shared<MplsTe::Tunnels>())
	,wrap_protection(std::make_shared<MplsTe::WrapProtection>())
{
    affinity_map->parent = this;
    children["affinity-map"] = affinity_map;

    announce_tunnels_info->parent = this;
    children["announce-tunnels-info"] = announce_tunnels_info;

    attribute_sets->parent = this;
    children["attribute-sets"] = attribute_sets;

    auto_route_destination_entries->parent = this;
    children["auto-route-destination-entries"] = auto_route_destination_entries;

    auto_tunnel->parent = this;
    children["auto-tunnel"] = auto_tunnel;

    auto_tunnel_services->parent = this;
    children["auto-tunnel-services"] = auto_tunnel_services;

    bfd->parent = this;
    children["bfd"] = bfd;

    collaborator_timers->parent = this;
    children["collaborator-timers"] = collaborator_timers;

    diff_serv_te_classes->parent = this;
    children["diff-serv-te-classes"] = diff_serv_te_classes;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    fib_next_hop_label_routes->parent = this;
    children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;

    fib_next_hop_routes->parent = this;
    children["fib-next-hop-routes"] = fib_next_hop_routes;

    forwarding_adjacency_destinations->parent = this;
    children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;

    hardware_out_of_resources->parent = this;
    children["hardware-out-of-resources"] = hardware_out_of_resources;

    igp_area_briefs->parent = this;
    children["igp-area-briefs"] = igp_area_briefs;

    igp_areas->parent = this;
    children["igp-areas"] = igp_areas;

    issu->parent = this;
    children["issu"] = issu;

    lsp_out_of_resources->parent = this;
    children["lsp-out-of-resources"] = lsp_out_of_resources;

    maximum_tunnels->parent = this;
    children["maximum-tunnels"] = maximum_tunnels;

    next_hop_routes->parent = this;
    children["next-hop-routes"] = next_hop_routes;

    nsr->parent = this;
    children["nsr"] = nsr;

    open_config->parent = this;
    children["open-config"] = open_config;

    p2mp->parent = this;
    children["p2mp"] = p2mp;

    p2p_p2mp_tunnel->parent = this;
    children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;

    path_protection->parent = this;
    children["path-protection"] = path_protection;

    segment_routing->parent = this;
    children["segment-routing"] = segment_routing;

    signalling_counters->parent = this;
    children["signalling-counters"] = signalling_counters;

    soft_preemption->parent = this;
    children["soft-preemption"] = soft_preemption;

    te_mib->parent = this;
    children["te-mib"] = te_mib;

    topology->parent = this;
    children["topology"] = topology;

    topology_briefs->parent = this;
    children["topology-briefs"] = topology_briefs;

    topology_nodes->parent = this;
    children["topology-nodes"] = topology_nodes;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    wrap_protection->parent = this;
    children["wrap-protection"] = wrap_protection;

    yang_name = "mpls-te"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper";
}

MplsTe::~MplsTe()
{
}

bool MplsTe::has_data() const
{
    return (affinity_map !=  nullptr && affinity_map->has_data())
	|| (announce_tunnels_info !=  nullptr && announce_tunnels_info->has_data())
	|| (attribute_sets !=  nullptr && attribute_sets->has_data())
	|| (auto_route_destination_entries !=  nullptr && auto_route_destination_entries->has_data())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_data())
	|| (auto_tunnel_services !=  nullptr && auto_tunnel_services->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_data())
	|| (diff_serv_te_classes !=  nullptr && diff_serv_te_classes->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (fib_next_hop_label_routes !=  nullptr && fib_next_hop_label_routes->has_data())
	|| (fib_next_hop_routes !=  nullptr && fib_next_hop_routes->has_data())
	|| (forwarding_adjacency_destinations !=  nullptr && forwarding_adjacency_destinations->has_data())
	|| (hardware_out_of_resources !=  nullptr && hardware_out_of_resources->has_data())
	|| (igp_area_briefs !=  nullptr && igp_area_briefs->has_data())
	|| (igp_areas !=  nullptr && igp_areas->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (lsp_out_of_resources !=  nullptr && lsp_out_of_resources->has_data())
	|| (maximum_tunnels !=  nullptr && maximum_tunnels->has_data())
	|| (next_hop_routes !=  nullptr && next_hop_routes->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (open_config !=  nullptr && open_config->has_data())
	|| (p2mp !=  nullptr && p2mp->has_data())
	|| (p2p_p2mp_tunnel !=  nullptr && p2p_p2mp_tunnel->has_data())
	|| (path_protection !=  nullptr && path_protection->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (signalling_counters !=  nullptr && signalling_counters->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (te_mib !=  nullptr && te_mib->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (topology_briefs !=  nullptr && topology_briefs->has_data())
	|| (topology_nodes !=  nullptr && topology_nodes->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data())
	|| (wrap_protection !=  nullptr && wrap_protection->has_data());
}

bool MplsTe::has_operation() const
{
    return is_set(operation)
	|| (affinity_map !=  nullptr && affinity_map->has_operation())
	|| (announce_tunnels_info !=  nullptr && announce_tunnels_info->has_operation())
	|| (attribute_sets !=  nullptr && attribute_sets->has_operation())
	|| (auto_route_destination_entries !=  nullptr && auto_route_destination_entries->has_operation())
	|| (auto_tunnel !=  nullptr && auto_tunnel->has_operation())
	|| (auto_tunnel_services !=  nullptr && auto_tunnel_services->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (collaborator_timers !=  nullptr && collaborator_timers->has_operation())
	|| (diff_serv_te_classes !=  nullptr && diff_serv_te_classes->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (fib_next_hop_label_routes !=  nullptr && fib_next_hop_label_routes->has_operation())
	|| (fib_next_hop_routes !=  nullptr && fib_next_hop_routes->has_operation())
	|| (forwarding_adjacency_destinations !=  nullptr && forwarding_adjacency_destinations->has_operation())
	|| (hardware_out_of_resources !=  nullptr && hardware_out_of_resources->has_operation())
	|| (igp_area_briefs !=  nullptr && igp_area_briefs->has_operation())
	|| (igp_areas !=  nullptr && igp_areas->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (lsp_out_of_resources !=  nullptr && lsp_out_of_resources->has_operation())
	|| (maximum_tunnels !=  nullptr && maximum_tunnels->has_operation())
	|| (next_hop_routes !=  nullptr && next_hop_routes->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (open_config !=  nullptr && open_config->has_operation())
	|| (p2mp !=  nullptr && p2mp->has_operation())
	|| (p2p_p2mp_tunnel !=  nullptr && p2p_p2mp_tunnel->has_operation())
	|| (path_protection !=  nullptr && path_protection->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (signalling_counters !=  nullptr && signalling_counters->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (te_mib !=  nullptr && te_mib->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (topology_briefs !=  nullptr && topology_briefs->has_operation())
	|| (topology_nodes !=  nullptr && topology_nodes->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (wrap_protection !=  nullptr && wrap_protection->has_operation());
}

std::string MplsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te";

    return path_buffer.str();

}

EntityPath MplsTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-map")
    {
        if(affinity_map != nullptr)
        {
            children["affinity-map"] = affinity_map;
        }
        else
        {
            affinity_map = std::make_shared<MplsTe::AffinityMap>();
            affinity_map->parent = this;
            children["affinity-map"] = affinity_map;
        }
        return children.at("affinity-map");
    }

    if(child_yang_name == "announce-tunnels-info")
    {
        if(announce_tunnels_info != nullptr)
        {
            children["announce-tunnels-info"] = announce_tunnels_info;
        }
        else
        {
            announce_tunnels_info = std::make_shared<MplsTe::AnnounceTunnelsInfo>();
            announce_tunnels_info->parent = this;
            children["announce-tunnels-info"] = announce_tunnels_info;
        }
        return children.at("announce-tunnels-info");
    }

    if(child_yang_name == "attribute-sets")
    {
        if(attribute_sets != nullptr)
        {
            children["attribute-sets"] = attribute_sets;
        }
        else
        {
            attribute_sets = std::make_shared<MplsTe::AttributeSets>();
            attribute_sets->parent = this;
            children["attribute-sets"] = attribute_sets;
        }
        return children.at("attribute-sets");
    }

    if(child_yang_name == "auto-route-destination-entries")
    {
        if(auto_route_destination_entries != nullptr)
        {
            children["auto-route-destination-entries"] = auto_route_destination_entries;
        }
        else
        {
            auto_route_destination_entries = std::make_shared<MplsTe::AutoRouteDestinationEntries>();
            auto_route_destination_entries->parent = this;
            children["auto-route-destination-entries"] = auto_route_destination_entries;
        }
        return children.at("auto-route-destination-entries");
    }

    if(child_yang_name == "auto-tunnel")
    {
        if(auto_tunnel != nullptr)
        {
            children["auto-tunnel"] = auto_tunnel;
        }
        else
        {
            auto_tunnel = std::make_shared<MplsTe::AutoTunnel>();
            auto_tunnel->parent = this;
            children["auto-tunnel"] = auto_tunnel;
        }
        return children.at("auto-tunnel");
    }

    if(child_yang_name == "auto-tunnel-services")
    {
        if(auto_tunnel_services != nullptr)
        {
            children["auto-tunnel-services"] = auto_tunnel_services;
        }
        else
        {
            auto_tunnel_services = std::make_shared<MplsTe::AutoTunnelServices>();
            auto_tunnel_services->parent = this;
            children["auto-tunnel-services"] = auto_tunnel_services;
        }
        return children.at("auto-tunnel-services");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<MplsTe::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "collaborator-timers")
    {
        if(collaborator_timers != nullptr)
        {
            children["collaborator-timers"] = collaborator_timers;
        }
        else
        {
            collaborator_timers = std::make_shared<MplsTe::CollaboratorTimers>();
            collaborator_timers->parent = this;
            children["collaborator-timers"] = collaborator_timers;
        }
        return children.at("collaborator-timers");
    }

    if(child_yang_name == "diff-serv-te-classes")
    {
        if(diff_serv_te_classes != nullptr)
        {
            children["diff-serv-te-classes"] = diff_serv_te_classes;
        }
        else
        {
            diff_serv_te_classes = std::make_shared<MplsTe::DiffServTeClasses>();
            diff_serv_te_classes->parent = this;
            children["diff-serv-te-classes"] = diff_serv_te_classes;
        }
        return children.at("diff-serv-te-classes");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<MplsTe::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "fib-next-hop-label-routes")
    {
        if(fib_next_hop_label_routes != nullptr)
        {
            children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;
        }
        else
        {
            fib_next_hop_label_routes = std::make_shared<MplsTe::FibNextHopLabelRoutes>();
            fib_next_hop_label_routes->parent = this;
            children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;
        }
        return children.at("fib-next-hop-label-routes");
    }

    if(child_yang_name == "fib-next-hop-routes")
    {
        if(fib_next_hop_routes != nullptr)
        {
            children["fib-next-hop-routes"] = fib_next_hop_routes;
        }
        else
        {
            fib_next_hop_routes = std::make_shared<MplsTe::FibNextHopRoutes>();
            fib_next_hop_routes->parent = this;
            children["fib-next-hop-routes"] = fib_next_hop_routes;
        }
        return children.at("fib-next-hop-routes");
    }

    if(child_yang_name == "forwarding-adjacency-destinations")
    {
        if(forwarding_adjacency_destinations != nullptr)
        {
            children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;
        }
        else
        {
            forwarding_adjacency_destinations = std::make_shared<MplsTe::ForwardingAdjacencyDestinations>();
            forwarding_adjacency_destinations->parent = this;
            children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;
        }
        return children.at("forwarding-adjacency-destinations");
    }

    if(child_yang_name == "hardware-out-of-resources")
    {
        if(hardware_out_of_resources != nullptr)
        {
            children["hardware-out-of-resources"] = hardware_out_of_resources;
        }
        else
        {
            hardware_out_of_resources = std::make_shared<MplsTe::HardwareOutOfResources>();
            hardware_out_of_resources->parent = this;
            children["hardware-out-of-resources"] = hardware_out_of_resources;
        }
        return children.at("hardware-out-of-resources");
    }

    if(child_yang_name == "igp-area-briefs")
    {
        if(igp_area_briefs != nullptr)
        {
            children["igp-area-briefs"] = igp_area_briefs;
        }
        else
        {
            igp_area_briefs = std::make_shared<MplsTe::IgpAreaBriefs>();
            igp_area_briefs->parent = this;
            children["igp-area-briefs"] = igp_area_briefs;
        }
        return children.at("igp-area-briefs");
    }

    if(child_yang_name == "igp-areas")
    {
        if(igp_areas != nullptr)
        {
            children["igp-areas"] = igp_areas;
        }
        else
        {
            igp_areas = std::make_shared<MplsTe::IgpAreas>();
            igp_areas->parent = this;
            children["igp-areas"] = igp_areas;
        }
        return children.at("igp-areas");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
        else
        {
            issu = std::make_shared<MplsTe::Issu>();
            issu->parent = this;
            children["issu"] = issu;
        }
        return children.at("issu");
    }

    if(child_yang_name == "lsp-out-of-resources")
    {
        if(lsp_out_of_resources != nullptr)
        {
            children["lsp-out-of-resources"] = lsp_out_of_resources;
        }
        else
        {
            lsp_out_of_resources = std::make_shared<MplsTe::LspOutOfResources>();
            lsp_out_of_resources->parent = this;
            children["lsp-out-of-resources"] = lsp_out_of_resources;
        }
        return children.at("lsp-out-of-resources");
    }

    if(child_yang_name == "maximum-tunnels")
    {
        if(maximum_tunnels != nullptr)
        {
            children["maximum-tunnels"] = maximum_tunnels;
        }
        else
        {
            maximum_tunnels = std::make_shared<MplsTe::MaximumTunnels>();
            maximum_tunnels->parent = this;
            children["maximum-tunnels"] = maximum_tunnels;
        }
        return children.at("maximum-tunnels");
    }

    if(child_yang_name == "next-hop-routes")
    {
        if(next_hop_routes != nullptr)
        {
            children["next-hop-routes"] = next_hop_routes;
        }
        else
        {
            next_hop_routes = std::make_shared<MplsTe::NextHopRoutes>();
            next_hop_routes->parent = this;
            children["next-hop-routes"] = next_hop_routes;
        }
        return children.at("next-hop-routes");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<MplsTe::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "open-config")
    {
        if(open_config != nullptr)
        {
            children["open-config"] = open_config;
        }
        else
        {
            open_config = std::make_shared<MplsTe::OpenConfig>();
            open_config->parent = this;
            children["open-config"] = open_config;
        }
        return children.at("open-config");
    }

    if(child_yang_name == "p2mp")
    {
        if(p2mp != nullptr)
        {
            children["p2mp"] = p2mp;
        }
        else
        {
            p2mp = std::make_shared<MplsTe::P2Mp>();
            p2mp->parent = this;
            children["p2mp"] = p2mp;
        }
        return children.at("p2mp");
    }

    if(child_yang_name == "p2p-p2mp-tunnel")
    {
        if(p2p_p2mp_tunnel != nullptr)
        {
            children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;
        }
        else
        {
            p2p_p2mp_tunnel = std::make_shared<MplsTe::P2PP2MpTunnel>();
            p2p_p2mp_tunnel->parent = this;
            children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;
        }
        return children.at("p2p-p2mp-tunnel");
    }

    if(child_yang_name == "path-protection")
    {
        if(path_protection != nullptr)
        {
            children["path-protection"] = path_protection;
        }
        else
        {
            path_protection = std::make_shared<MplsTe::PathProtection>();
            path_protection->parent = this;
            children["path-protection"] = path_protection;
        }
        return children.at("path-protection");
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
        else
        {
            segment_routing = std::make_shared<MplsTe::SegmentRouting>();
            segment_routing->parent = this;
            children["segment-routing"] = segment_routing;
        }
        return children.at("segment-routing");
    }

    if(child_yang_name == "signalling-counters")
    {
        if(signalling_counters != nullptr)
        {
            children["signalling-counters"] = signalling_counters;
        }
        else
        {
            signalling_counters = std::make_shared<MplsTe::SignallingCounters>();
            signalling_counters->parent = this;
            children["signalling-counters"] = signalling_counters;
        }
        return children.at("signalling-counters");
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
        else
        {
            soft_preemption = std::make_shared<MplsTe::SoftPreemption>();
            soft_preemption->parent = this;
            children["soft-preemption"] = soft_preemption;
        }
        return children.at("soft-preemption");
    }

    if(child_yang_name == "te-mib")
    {
        if(te_mib != nullptr)
        {
            children["te-mib"] = te_mib;
        }
        else
        {
            te_mib = std::make_shared<MplsTe::TeMib>();
            te_mib->parent = this;
            children["te-mib"] = te_mib;
        }
        return children.at("te-mib");
    }

    if(child_yang_name == "topology")
    {
        if(topology != nullptr)
        {
            children["topology"] = topology;
        }
        else
        {
            topology = std::make_shared<MplsTe::Topology>();
            topology->parent = this;
            children["topology"] = topology;
        }
        return children.at("topology");
    }

    if(child_yang_name == "topology-briefs")
    {
        if(topology_briefs != nullptr)
        {
            children["topology-briefs"] = topology_briefs;
        }
        else
        {
            topology_briefs = std::make_shared<MplsTe::TopologyBriefs>();
            topology_briefs->parent = this;
            children["topology-briefs"] = topology_briefs;
        }
        return children.at("topology-briefs");
    }

    if(child_yang_name == "topology-nodes")
    {
        if(topology_nodes != nullptr)
        {
            children["topology-nodes"] = topology_nodes;
        }
        else
        {
            topology_nodes = std::make_shared<MplsTe::TopologyNodes>();
            topology_nodes->parent = this;
            children["topology-nodes"] = topology_nodes;
        }
        return children.at("topology-nodes");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<MplsTe::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    if(child_yang_name == "wrap-protection")
    {
        if(wrap_protection != nullptr)
        {
            children["wrap-protection"] = wrap_protection;
        }
        else
        {
            wrap_protection = std::make_shared<MplsTe::WrapProtection>();
            wrap_protection->parent = this;
            children["wrap-protection"] = wrap_protection;
        }
        return children.at("wrap-protection");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::get_children()
{
    if(children.find("affinity-map") == children.end())
    {
        if(affinity_map != nullptr)
        {
            children["affinity-map"] = affinity_map;
        }
    }

    if(children.find("announce-tunnels-info") == children.end())
    {
        if(announce_tunnels_info != nullptr)
        {
            children["announce-tunnels-info"] = announce_tunnels_info;
        }
    }

    if(children.find("attribute-sets") == children.end())
    {
        if(attribute_sets != nullptr)
        {
            children["attribute-sets"] = attribute_sets;
        }
    }

    if(children.find("auto-route-destination-entries") == children.end())
    {
        if(auto_route_destination_entries != nullptr)
        {
            children["auto-route-destination-entries"] = auto_route_destination_entries;
        }
    }

    if(children.find("auto-tunnel") == children.end())
    {
        if(auto_tunnel != nullptr)
        {
            children["auto-tunnel"] = auto_tunnel;
        }
    }

    if(children.find("auto-tunnel-services") == children.end())
    {
        if(auto_tunnel_services != nullptr)
        {
            children["auto-tunnel-services"] = auto_tunnel_services;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("collaborator-timers") == children.end())
    {
        if(collaborator_timers != nullptr)
        {
            children["collaborator-timers"] = collaborator_timers;
        }
    }

    if(children.find("diff-serv-te-classes") == children.end())
    {
        if(diff_serv_te_classes != nullptr)
        {
            children["diff-serv-te-classes"] = diff_serv_te_classes;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("fib-next-hop-label-routes") == children.end())
    {
        if(fib_next_hop_label_routes != nullptr)
        {
            children["fib-next-hop-label-routes"] = fib_next_hop_label_routes;
        }
    }

    if(children.find("fib-next-hop-routes") == children.end())
    {
        if(fib_next_hop_routes != nullptr)
        {
            children["fib-next-hop-routes"] = fib_next_hop_routes;
        }
    }

    if(children.find("forwarding-adjacency-destinations") == children.end())
    {
        if(forwarding_adjacency_destinations != nullptr)
        {
            children["forwarding-adjacency-destinations"] = forwarding_adjacency_destinations;
        }
    }

    if(children.find("hardware-out-of-resources") == children.end())
    {
        if(hardware_out_of_resources != nullptr)
        {
            children["hardware-out-of-resources"] = hardware_out_of_resources;
        }
    }

    if(children.find("igp-area-briefs") == children.end())
    {
        if(igp_area_briefs != nullptr)
        {
            children["igp-area-briefs"] = igp_area_briefs;
        }
    }

    if(children.find("igp-areas") == children.end())
    {
        if(igp_areas != nullptr)
        {
            children["igp-areas"] = igp_areas;
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
    }

    if(children.find("lsp-out-of-resources") == children.end())
    {
        if(lsp_out_of_resources != nullptr)
        {
            children["lsp-out-of-resources"] = lsp_out_of_resources;
        }
    }

    if(children.find("maximum-tunnels") == children.end())
    {
        if(maximum_tunnels != nullptr)
        {
            children["maximum-tunnels"] = maximum_tunnels;
        }
    }

    if(children.find("next-hop-routes") == children.end())
    {
        if(next_hop_routes != nullptr)
        {
            children["next-hop-routes"] = next_hop_routes;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("open-config") == children.end())
    {
        if(open_config != nullptr)
        {
            children["open-config"] = open_config;
        }
    }

    if(children.find("p2mp") == children.end())
    {
        if(p2mp != nullptr)
        {
            children["p2mp"] = p2mp;
        }
    }

    if(children.find("p2p-p2mp-tunnel") == children.end())
    {
        if(p2p_p2mp_tunnel != nullptr)
        {
            children["p2p-p2mp-tunnel"] = p2p_p2mp_tunnel;
        }
    }

    if(children.find("path-protection") == children.end())
    {
        if(path_protection != nullptr)
        {
            children["path-protection"] = path_protection;
        }
    }

    if(children.find("segment-routing") == children.end())
    {
        if(segment_routing != nullptr)
        {
            children["segment-routing"] = segment_routing;
        }
    }

    if(children.find("signalling-counters") == children.end())
    {
        if(signalling_counters != nullptr)
        {
            children["signalling-counters"] = signalling_counters;
        }
    }

    if(children.find("soft-preemption") == children.end())
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
    }

    if(children.find("te-mib") == children.end())
    {
        if(te_mib != nullptr)
        {
            children["te-mib"] = te_mib;
        }
    }

    if(children.find("topology") == children.end())
    {
        if(topology != nullptr)
        {
            children["topology"] = topology;
        }
    }

    if(children.find("topology-briefs") == children.end())
    {
        if(topology_briefs != nullptr)
        {
            children["topology-briefs"] = topology_briefs;
        }
    }

    if(children.find("topology-nodes") == children.end())
    {
        if(topology_nodes != nullptr)
        {
            children["topology-nodes"] = topology_nodes;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    if(children.find("wrap-protection") == children.end())
    {
        if(wrap_protection != nullptr)
        {
            children["wrap-protection"] = wrap_protection;
        }
    }

    return children;
}

void MplsTe::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsTe::clone_ptr() const
{
    return std::make_shared<MplsTe>();
}

std::string MplsTe::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsTe::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsTe::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MplsTe::SegmentRouting::SegmentRouting()
    :
    sr_node_infos(std::make_shared<MplsTe::SegmentRouting::SrNodeInfos>())
	,sr_prefix_infos(std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos>())
	,srigp_area_infos(std::make_shared<MplsTe::SegmentRouting::SrigpAreaInfos>())
{
    sr_node_infos->parent = this;
    children["sr-node-infos"] = sr_node_infos;

    sr_prefix_infos->parent = this;
    children["sr-prefix-infos"] = sr_prefix_infos;

    srigp_area_infos->parent = this;
    children["srigp-area-infos"] = srigp_area_infos;

    yang_name = "segment-routing"; yang_parent_name = "mpls-te";
}

MplsTe::SegmentRouting::~SegmentRouting()
{
}

bool MplsTe::SegmentRouting::has_data() const
{
    return (sr_node_infos !=  nullptr && sr_node_infos->has_data())
	|| (sr_prefix_infos !=  nullptr && sr_prefix_infos->has_data())
	|| (srigp_area_infos !=  nullptr && srigp_area_infos->has_data());
}

bool MplsTe::SegmentRouting::has_operation() const
{
    return is_set(operation)
	|| (sr_node_infos !=  nullptr && sr_node_infos->has_operation())
	|| (sr_prefix_infos !=  nullptr && sr_prefix_infos->has_operation())
	|| (srigp_area_infos !=  nullptr && srigp_area_infos->has_operation());
}

std::string MplsTe::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-node-infos")
    {
        if(sr_node_infos != nullptr)
        {
            children["sr-node-infos"] = sr_node_infos;
        }
        else
        {
            sr_node_infos = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos>();
            sr_node_infos->parent = this;
            children["sr-node-infos"] = sr_node_infos;
        }
        return children.at("sr-node-infos");
    }

    if(child_yang_name == "sr-prefix-infos")
    {
        if(sr_prefix_infos != nullptr)
        {
            children["sr-prefix-infos"] = sr_prefix_infos;
        }
        else
        {
            sr_prefix_infos = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos>();
            sr_prefix_infos->parent = this;
            children["sr-prefix-infos"] = sr_prefix_infos;
        }
        return children.at("sr-prefix-infos");
    }

    if(child_yang_name == "srigp-area-infos")
    {
        if(srigp_area_infos != nullptr)
        {
            children["srigp-area-infos"] = srigp_area_infos;
        }
        else
        {
            srigp_area_infos = std::make_shared<MplsTe::SegmentRouting::SrigpAreaInfos>();
            srigp_area_infos->parent = this;
            children["srigp-area-infos"] = srigp_area_infos;
        }
        return children.at("srigp-area-infos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::get_children()
{
    if(children.find("sr-node-infos") == children.end())
    {
        if(sr_node_infos != nullptr)
        {
            children["sr-node-infos"] = sr_node_infos;
        }
    }

    if(children.find("sr-prefix-infos") == children.end())
    {
        if(sr_prefix_infos != nullptr)
        {
            children["sr-prefix-infos"] = sr_prefix_infos;
        }
    }

    if(children.find("srigp-area-infos") == children.end())
    {
        if(srigp_area_infos != nullptr)
        {
            children["srigp-area-infos"] = srigp_area_infos;
        }
    }

    return children;
}

void MplsTe::SegmentRouting::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfos()
{
    yang_name = "srigp-area-infos"; yang_parent_name = "segment-routing";
}

MplsTe::SegmentRouting::SrigpAreaInfos::~SrigpAreaInfos()
{
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::has_data() const
{
    for (std::size_t index=0; index<srigp_area_info.size(); index++)
    {
        if(srigp_area_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::has_operation() const
{
    for (std::size_t index=0; index<srigp_area_info.size(); index++)
    {
        if(srigp_area_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SegmentRouting::SrigpAreaInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srigp-area-infos";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrigpAreaInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrigpAreaInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srigp-area-info")
    {
        for(auto const & c : srigp_area_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo>();
        c->parent = this;
        srigp_area_info.push_back(std::move(c));
        children[segment_path] = srigp_area_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrigpAreaInfos::get_children()
{
    for (auto const & c : srigp_area_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SegmentRouting::SrigpAreaInfos::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::SrigpAreaInfo()
    :
    area{YType::int32, "area"},
    igp_instance{YType::str, "igp-instance"},
    protocol{YType::enumeration, "protocol"},
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance_xr{YType::str, "igp-instance-xr"},
    igp_type{YType::enumeration, "igp-type"},
    segment_routing_enabled{YType::boolean, "segment-routing-enabled"},
    strict_spf_enabled{YType::boolean, "strict-spf-enabled"}
{
    yang_name = "srigp-area-info"; yang_parent_name = "srigp-area-infos";
}

MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::~SrigpAreaInfo()
{
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::has_data() const
{
    return area.is_set
	|| igp_instance.is_set
	|| protocol.is_set
	|| igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance_xr.is_set
	|| igp_type.is_set
	|| segment_routing_enabled.is_set
	|| strict_spf_enabled.is_set;
}

bool MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(protocol.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_area_format.operation)
	|| is_set(igp_instance_xr.operation)
	|| is_set(igp_type.operation)
	|| is_set(segment_routing_enabled.operation)
	|| is_set(strict_spf_enabled.operation);
}

std::string MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srigp-area-info" <<"[area='" <<area <<"']" <<"[igp-instance='" <<igp_instance <<"']" <<"[protocol='" <<protocol <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/srigp-area-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.operation)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance_xr.is_set || is_set(igp_instance_xr.operation)) leaf_name_data.push_back(igp_instance_xr.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (segment_routing_enabled.is_set || is_set(segment_routing_enabled.operation)) leaf_name_data.push_back(segment_routing_enabled.get_name_leafdata());
    if (strict_spf_enabled.is_set || is_set(strict_spf_enabled.operation)) leaf_name_data.push_back(strict_spf_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrigpAreaInfos::SrigpAreaInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled = value;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled = value;
    }
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfos()
{
    yang_name = "sr-node-infos"; yang_parent_name = "segment-routing";
}

MplsTe::SegmentRouting::SrNodeInfos::~SrNodeInfos()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::has_data() const
{
    for (std::size_t index=0; index<sr_node_info.size(); index++)
    {
        if(sr_node_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SegmentRouting::SrNodeInfos::has_operation() const
{
    for (std::size_t index=0; index<sr_node_info.size(); index++)
    {
        if(sr_node_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-node-infos";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrNodeInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-node-info")
    {
        for(auto const & c : sr_node_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo>();
        c->parent = this;
        sr_node_info.push_back(std::move(c));
        children[segment_path] = sr_node_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrNodeInfos::get_children()
{
    for (auto const & c : sr_node_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo()
    :
    area{YType::int32, "area"},
    igp_instance{YType::str, "igp-instance"},
    igp_node_id{YType::str, "igp-node-id"},
    protocol{YType::enumeration, "protocol"},
    local_node_igp_id{YType::str, "local-node-igp-id"},
    local_node_te_router_id{YType::str, "local-node-te-router-id"},
    topology_node_is_router{YType::boolean, "topology-node-is-router"},
    topology_node_overloaded{YType::boolean, "topology-node-overloaded"}
    	,
    igp_area(std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea>())
	,sr_node_info(std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_>())
{
    igp_area->parent = this;
    children["igp-area"] = igp_area;

    sr_node_info->parent = this;
    children["sr-node-info"] = sr_node_info;

    yang_name = "sr-node-info"; yang_parent_name = "sr-node-infos";
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::~SrNodeInfo()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::has_data() const
{
    for (std::size_t index=0; index<node_link.size(); index++)
    {
        if(node_link[index]->has_data())
            return true;
    }
    return area.is_set
	|| igp_instance.is_set
	|| igp_node_id.is_set
	|| protocol.is_set
	|| local_node_igp_id.is_set
	|| local_node_te_router_id.is_set
	|| topology_node_is_router.is_set
	|| topology_node_overloaded.is_set
	|| (igp_area !=  nullptr && igp_area->has_data())
	|| (sr_node_info !=  nullptr && sr_node_info->has_data());
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::has_operation() const
{
    for (std::size_t index=0; index<node_link.size(); index++)
    {
        if(node_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_node_id.operation)
	|| is_set(protocol.operation)
	|| is_set(local_node_igp_id.operation)
	|| is_set(local_node_te_router_id.operation)
	|| is_set(topology_node_is_router.operation)
	|| is_set(topology_node_overloaded.operation)
	|| (igp_area !=  nullptr && igp_area->has_operation())
	|| (sr_node_info !=  nullptr && sr_node_info->has_operation());
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-node-info" <<"[area='" <<area <<"']" <<"[igp-instance='" <<igp_instance <<"']" <<"[igp-node-id='" <<igp_node_id <<"']" <<"[protocol='" <<protocol <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/sr-node-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_node_id.is_set || is_set(igp_node_id.operation)) leaf_name_data.push_back(igp_node_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (local_node_igp_id.is_set || is_set(local_node_igp_id.operation)) leaf_name_data.push_back(local_node_igp_id.get_name_leafdata());
    if (local_node_te_router_id.is_set || is_set(local_node_te_router_id.operation)) leaf_name_data.push_back(local_node_te_router_id.get_name_leafdata());
    if (topology_node_is_router.is_set || is_set(topology_node_is_router.operation)) leaf_name_data.push_back(topology_node_is_router.get_name_leafdata());
    if (topology_node_overloaded.is_set || is_set(topology_node_overloaded.operation)) leaf_name_data.push_back(topology_node_overloaded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-area")
    {
        if(igp_area != nullptr)
        {
            children["igp-area"] = igp_area;
        }
        else
        {
            igp_area = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea>();
            igp_area->parent = this;
            children["igp-area"] = igp_area;
        }
        return children.at("igp-area");
    }

    if(child_yang_name == "node-link")
    {
        for(auto const & c : node_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink>();
        c->parent = this;
        node_link.push_back(std::move(c));
        children[segment_path] = node_link.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-node-info")
    {
        if(sr_node_info != nullptr)
        {
            children["sr-node-info"] = sr_node_info;
        }
        else
        {
            sr_node_info = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_>();
            sr_node_info->parent = this;
            children["sr-node-info"] = sr_node_info;
        }
        return children.at("sr-node-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::get_children()
{
    if(children.find("igp-area") == children.end())
    {
        if(igp_area != nullptr)
        {
            children["igp-area"] = igp_area;
        }
    }

    for (auto const & c : node_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sr-node-info") == children.end())
    {
        if(sr_node_info != nullptr)
        {
            children["sr-node-info"] = sr_node_info;
        }
    }

    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "local-node-igp-id")
    {
        local_node_igp_id = value;
    }
    if(value_path == "local-node-te-router-id")
    {
        local_node_te_router_id = value;
    }
    if(value_path == "topology-node-is-router")
    {
        topology_node_is_router = value;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded = value;
    }
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::IgpArea()
    :
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance_xr{YType::str, "igp-instance-xr"},
    igp_type{YType::enumeration, "igp-type"},
    segment_routing_enabled{YType::boolean, "segment-routing-enabled"},
    strict_spf_enabled{YType::boolean, "strict-spf-enabled"}
{
    yang_name = "igp-area"; yang_parent_name = "sr-node-info";
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::~IgpArea()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::has_data() const
{
    return igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance_xr.is_set
	|| igp_type.is_set
	|| segment_routing_enabled.is_set
	|| strict_spf_enabled.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_area_format.operation)
	|| is_set(igp_instance_xr.operation)
	|| is_set(igp_type.operation)
	|| is_set(segment_routing_enabled.operation)
	|| is_set(strict_spf_enabled.operation);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpArea' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.operation)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance_xr.is_set || is_set(igp_instance_xr.operation)) leaf_name_data.push_back(igp_instance_xr.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (segment_routing_enabled.is_set || is_set(segment_routing_enabled.operation)) leaf_name_data.push_back(segment_routing_enabled.get_name_leafdata());
    if (strict_spf_enabled.is_set || is_set(strict_spf_enabled.operation)) leaf_name_data.push_back(strict_spf_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::IgpArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled = value;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled = value;
    }
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::SrNodeInfo_()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_size{YType::uint32, "srgb-size"},
    srgb_start{YType::uint32, "srgb-start"}
{
    yang_name = "sr-node-info"; yang_parent_name = "sr-node-info";
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::~SrNodeInfo_()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_size.is_set
	|| srgb_start.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_id.operation)
	|| is_set(segment_id_local_absolute_value.operation)
	|| is_set(srgb_size.operation)
	|| is_set(srgb_start.operation);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-node-info";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrNodeInfo_' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.operation)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.operation)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.operation)) leaf_name_data.push_back(srgb_size.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.operation)) leaf_name_data.push_back(srgb_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::SrNodeInfo_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value = value;
    }
    if(value_path == "srgb-size")
    {
        srgb_size = value;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
    }
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::NodeLink()
    :
    topology_link_extended_affinity_bit{YType::uint32, "topology-link-extended-affinity-bit"},
    topology_link_fragment_id{YType::uint32, "topology-link-fragment-id"},
    topology_link_igp_metric{YType::uint32, "topology-link-igp-metric"},
    topology_link_interface_address{YType::str, "topology-link-interface-address"},
    topology_link_interface_id{YType::uint32, "topology-link-interface-id"},
    topology_link_neighbor_address{YType::str, "topology-link-neighbor-address"},
    topology_link_neighbor_generation{YType::uint32, "topology-link-neighbor-generation"},
    topology_link_neighbor_id{YType::uint32, "topology-link-neighbor-id"},
    topology_link_neighbor_node_id{YType::uint32, "topology-link-neighbor-node-id"},
    topology_link_neighbor_system_id{YType::str, "topology-link-neighbor-system-id"},
    topology_link_te_metric{YType::uint32, "topology-link-te-metric"},
    topology_link_type{YType::enumeration, "topology-link-type"}
{
    yang_name = "node-link"; yang_parent_name = "sr-node-info";
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::~NodeLink()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::has_data() const
{
    for (std::size_t index=0; index<adjacency_sids.size(); index++)
    {
        if(adjacency_sids[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (auto const & leaf : topology_link_extended_affinity_bit.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return topology_link_fragment_id.is_set
	|| topology_link_igp_metric.is_set
	|| topology_link_interface_address.is_set
	|| topology_link_interface_id.is_set
	|| topology_link_neighbor_address.is_set
	|| topology_link_neighbor_generation.is_set
	|| topology_link_neighbor_id.is_set
	|| topology_link_neighbor_node_id.is_set
	|| topology_link_neighbor_system_id.is_set
	|| topology_link_te_metric.is_set
	|| topology_link_type.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sids.size(); index++)
    {
        if(adjacency_sids[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (auto const & leaf : topology_link_extended_affinity_bit.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(topology_link_extended_affinity_bit.operation)
	|| is_set(topology_link_fragment_id.operation)
	|| is_set(topology_link_igp_metric.operation)
	|| is_set(topology_link_interface_address.operation)
	|| is_set(topology_link_interface_id.operation)
	|| is_set(topology_link_neighbor_address.operation)
	|| is_set(topology_link_neighbor_generation.operation)
	|| is_set(topology_link_neighbor_id.operation)
	|| is_set(topology_link_neighbor_node_id.operation)
	|| is_set(topology_link_neighbor_system_id.operation)
	|| is_set(topology_link_te_metric.operation)
	|| is_set(topology_link_type.operation);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-link";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeLink' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_fragment_id.is_set || is_set(topology_link_fragment_id.operation)) leaf_name_data.push_back(topology_link_fragment_id.get_name_leafdata());
    if (topology_link_igp_metric.is_set || is_set(topology_link_igp_metric.operation)) leaf_name_data.push_back(topology_link_igp_metric.get_name_leafdata());
    if (topology_link_interface_address.is_set || is_set(topology_link_interface_address.operation)) leaf_name_data.push_back(topology_link_interface_address.get_name_leafdata());
    if (topology_link_interface_id.is_set || is_set(topology_link_interface_id.operation)) leaf_name_data.push_back(topology_link_interface_id.get_name_leafdata());
    if (topology_link_neighbor_address.is_set || is_set(topology_link_neighbor_address.operation)) leaf_name_data.push_back(topology_link_neighbor_address.get_name_leafdata());
    if (topology_link_neighbor_generation.is_set || is_set(topology_link_neighbor_generation.operation)) leaf_name_data.push_back(topology_link_neighbor_generation.get_name_leafdata());
    if (topology_link_neighbor_id.is_set || is_set(topology_link_neighbor_id.operation)) leaf_name_data.push_back(topology_link_neighbor_id.get_name_leafdata());
    if (topology_link_neighbor_node_id.is_set || is_set(topology_link_neighbor_node_id.operation)) leaf_name_data.push_back(topology_link_neighbor_node_id.get_name_leafdata());
    if (topology_link_neighbor_system_id.is_set || is_set(topology_link_neighbor_system_id.operation)) leaf_name_data.push_back(topology_link_neighbor_system_id.get_name_leafdata());
    if (topology_link_te_metric.is_set || is_set(topology_link_te_metric.operation)) leaf_name_data.push_back(topology_link_te_metric.get_name_leafdata());
    if (topology_link_type.is_set || is_set(topology_link_type.operation)) leaf_name_data.push_back(topology_link_type.get_name_leafdata());

    auto topology_link_extended_affinity_bit_name_datas = topology_link_extended_affinity_bit.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topology_link_extended_affinity_bit_name_datas.begin(), topology_link_extended_affinity_bit_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sids")
    {
        for(auto const & c : adjacency_sids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids>();
        c->parent = this;
        adjacency_sids.push_back(std::move(c));
        children[segment_path] = adjacency_sids.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::get_children()
{
    for (auto const & c : adjacency_sids)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-link-extended-affinity-bit")
    {
        topology_link_extended_affinity_bit.append(value);
    }
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id = value;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric = value;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address = value;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id = value;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address = value;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation = value;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id = value;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id = value;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id = value;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric = value;
    }
    if(value_path == "topology-link-type")
    {
        topology_link_type = value;
    }
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "node-link";
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::AdjacencySids()
    :
    adjacency_sid{YType::uint32, "adjacency-sid"},
    flag_b{YType::boolean, "flag-b"},
    flag_f{YType::boolean, "flag-f"},
    flag_l{YType::boolean, "flag-l"},
    flag_s{YType::boolean, "flag-s"},
    flag_v{YType::boolean, "flag-v"},
    link_type{YType::enumeration, "link-type"},
    local_addr{YType::str, "local-addr"},
    nbr_node_igpid{YType::str, "nbr-node-igpid"},
    nbr_node_te_router_id{YType::str, "nbr-node-te-router-id"},
    remote_addr{YType::str, "remote-addr"}
{
    yang_name = "adjacency-sids"; yang_parent_name = "node-link";
}

MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::~AdjacencySids()
{
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::has_data() const
{
    return adjacency_sid.is_set
	|| flag_b.is_set
	|| flag_f.is_set
	|| flag_l.is_set
	|| flag_s.is_set
	|| flag_v.is_set
	|| link_type.is_set
	|| local_addr.is_set
	|| nbr_node_igpid.is_set
	|| nbr_node_te_router_id.is_set
	|| remote_addr.is_set;
}

bool MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_sid.operation)
	|| is_set(flag_b.operation)
	|| is_set(flag_f.operation)
	|| is_set(flag_l.operation)
	|| is_set(flag_s.operation)
	|| is_set(flag_v.operation)
	|| is_set(link_type.operation)
	|| is_set(local_addr.operation)
	|| is_set(nbr_node_igpid.operation)
	|| is_set(nbr_node_te_router_id.operation)
	|| is_set(remote_addr.operation);
}

std::string MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sids";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySids' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid.is_set || is_set(adjacency_sid.operation)) leaf_name_data.push_back(adjacency_sid.get_name_leafdata());
    if (flag_b.is_set || is_set(flag_b.operation)) leaf_name_data.push_back(flag_b.get_name_leafdata());
    if (flag_f.is_set || is_set(flag_f.operation)) leaf_name_data.push_back(flag_f.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.operation)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_s.is_set || is_set(flag_s.operation)) leaf_name_data.push_back(flag_s.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.operation)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (nbr_node_igpid.is_set || is_set(nbr_node_igpid.operation)) leaf_name_data.push_back(nbr_node_igpid.get_name_leafdata());
    if (nbr_node_te_router_id.is_set || is_set(nbr_node_te_router_id.operation)) leaf_name_data.push_back(nbr_node_te_router_id.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrNodeInfos::SrNodeInfo::NodeLink::AdjacencySids::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid = value;
    }
    if(value_path == "flag-b")
    {
        flag_b = value;
    }
    if(value_path == "flag-f")
    {
        flag_f = value;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
    }
    if(value_path == "flag-s")
    {
        flag_s = value;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid = value;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfos()
{
    yang_name = "sr-prefix-infos"; yang_parent_name = "segment-routing";
}

MplsTe::SegmentRouting::SrPrefixInfos::~SrPrefixInfos()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::has_data() const
{
    for (std::size_t index=0; index<sr_prefix_info.size(); index++)
    {
        if(sr_prefix_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::has_operation() const
{
    for (std::size_t index=0; index<sr_prefix_info.size(); index++)
    {
        if(sr_prefix_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-infos";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrPrefixInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-prefix-info")
    {
        for(auto const & c : sr_prefix_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo>();
        c->parent = this;
        sr_prefix_info.push_back(std::move(c));
        children[segment_path] = sr_prefix_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrPrefixInfos::get_children()
{
    for (auto const & c : sr_prefix_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPrefixInfo()
    :
    area{YType::int32, "area"},
    igp_instance{YType::str, "igp-instance"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    protocol{YType::enumeration, "protocol"},
    flag_e{YType::boolean, "flag-e"},
    flag_l{YType::boolean, "flag-l"},
    flag_n{YType::boolean, "flag-n"},
    flag_p{YType::boolean, "flag-p"},
    flag_r{YType::boolean, "flag-r"},
    flag_v{YType::boolean, "flag-v"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    prefix_sid{YType::uint32, "prefix-sid"},
    prefix_strict_sid{YType::uint32, "prefix-strict-sid"},
    prefix_xr{YType::str, "prefix-xr"},
    strict_flag_e{YType::boolean, "strict-flag-e"},
    strict_flag_l{YType::boolean, "strict-flag-l"},
    strict_flag_p{YType::boolean, "strict-flag-p"},
    strict_flag_v{YType::boolean, "strict-flag-v"}
    	,
    igp_area(std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea>())
{
    igp_area->parent = this;
    children["igp-area"] = igp_area;

    yang_name = "sr-prefix-info"; yang_parent_name = "sr-prefix-infos";
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::~SrPrefixInfo()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::has_data() const
{
    for (std::size_t index=0; index<advertizing_node.size(); index++)
    {
        if(advertizing_node[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_path.size(); index++)
    {
        if(sr_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<strict_advertizing_node.size(); index++)
    {
        if(strict_advertizing_node[index]->has_data())
            return true;
    }
    return area.is_set
	|| igp_instance.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| flag_e.is_set
	|| flag_l.is_set
	|| flag_n.is_set
	|| flag_p.is_set
	|| flag_r.is_set
	|| flag_v.is_set
	|| prefix_length_xr.is_set
	|| prefix_sid.is_set
	|| prefix_strict_sid.is_set
	|| prefix_xr.is_set
	|| strict_flag_e.is_set
	|| strict_flag_l.is_set
	|| strict_flag_p.is_set
	|| strict_flag_v.is_set
	|| (igp_area !=  nullptr && igp_area->has_data());
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::has_operation() const
{
    for (std::size_t index=0; index<advertizing_node.size(); index++)
    {
        if(advertizing_node[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_path.size(); index++)
    {
        if(sr_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<strict_advertizing_node.size(); index++)
    {
        if(strict_advertizing_node[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol.operation)
	|| is_set(flag_e.operation)
	|| is_set(flag_l.operation)
	|| is_set(flag_n.operation)
	|| is_set(flag_p.operation)
	|| is_set(flag_r.operation)
	|| is_set(flag_v.operation)
	|| is_set(prefix_length_xr.operation)
	|| is_set(prefix_sid.operation)
	|| is_set(prefix_strict_sid.operation)
	|| is_set(prefix_xr.operation)
	|| is_set(strict_flag_e.operation)
	|| is_set(strict_flag_l.operation)
	|| is_set(strict_flag_p.operation)
	|| is_set(strict_flag_v.operation)
	|| (igp_area !=  nullptr && igp_area->has_operation());
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-prefix-info" <<"[area='" <<area <<"']" <<"[igp-instance='" <<igp_instance <<"']" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']" <<"[protocol='" <<protocol <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/segment-routing/sr-prefix-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (flag_e.is_set || is_set(flag_e.operation)) leaf_name_data.push_back(flag_e.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.operation)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_n.is_set || is_set(flag_n.operation)) leaf_name_data.push_back(flag_n.get_name_leafdata());
    if (flag_p.is_set || is_set(flag_p.operation)) leaf_name_data.push_back(flag_p.get_name_leafdata());
    if (flag_r.is_set || is_set(flag_r.operation)) leaf_name_data.push_back(flag_r.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.operation)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (prefix_sid.is_set || is_set(prefix_sid.operation)) leaf_name_data.push_back(prefix_sid.get_name_leafdata());
    if (prefix_strict_sid.is_set || is_set(prefix_strict_sid.operation)) leaf_name_data.push_back(prefix_strict_sid.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.operation)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (strict_flag_e.is_set || is_set(strict_flag_e.operation)) leaf_name_data.push_back(strict_flag_e.get_name_leafdata());
    if (strict_flag_l.is_set || is_set(strict_flag_l.operation)) leaf_name_data.push_back(strict_flag_l.get_name_leafdata());
    if (strict_flag_p.is_set || is_set(strict_flag_p.operation)) leaf_name_data.push_back(strict_flag_p.get_name_leafdata());
    if (strict_flag_v.is_set || is_set(strict_flag_v.operation)) leaf_name_data.push_back(strict_flag_v.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertizing-node")
    {
        for(auto const & c : advertizing_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode>();
        c->parent = this;
        advertizing_node.push_back(std::move(c));
        children[segment_path] = advertizing_node.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-area")
    {
        if(igp_area != nullptr)
        {
            children["igp-area"] = igp_area;
        }
        else
        {
            igp_area = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea>();
            igp_area->parent = this;
            children["igp-area"] = igp_area;
        }
        return children.at("igp-area");
    }

    if(child_yang_name == "sr-path")
    {
        for(auto const & c : sr_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath>();
        c->parent = this;
        sr_path.push_back(std::move(c));
        children[segment_path] = sr_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "strict-advertizing-node")
    {
        for(auto const & c : strict_advertizing_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode>();
        c->parent = this;
        strict_advertizing_node.push_back(std::move(c));
        children[segment_path] = strict_advertizing_node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::get_children()
{
    for (auto const & c : advertizing_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("igp-area") == children.end())
    {
        if(igp_area != nullptr)
        {
            children["igp-area"] = igp_area;
        }
    }

    for (auto const & c : sr_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : strict_advertizing_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "flag-e")
    {
        flag_e = value;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
    }
    if(value_path == "flag-n")
    {
        flag_n = value;
    }
    if(value_path == "flag-p")
    {
        flag_p = value;
    }
    if(value_path == "flag-r")
    {
        flag_r = value;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
    if(value_path == "prefix-sid")
    {
        prefix_sid = value;
    }
    if(value_path == "prefix-strict-sid")
    {
        prefix_strict_sid = value;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
    }
    if(value_path == "strict-flag-e")
    {
        strict_flag_e = value;
    }
    if(value_path == "strict-flag-l")
    {
        strict_flag_l = value;
    }
    if(value_path == "strict-flag-p")
    {
        strict_flag_p = value;
    }
    if(value_path == "strict-flag-v")
    {
        strict_flag_v = value;
    }
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::IgpArea()
    :
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance_xr{YType::str, "igp-instance-xr"},
    igp_type{YType::enumeration, "igp-type"},
    segment_routing_enabled{YType::boolean, "segment-routing-enabled"},
    strict_spf_enabled{YType::boolean, "strict-spf-enabled"}
{
    yang_name = "igp-area"; yang_parent_name = "sr-prefix-info";
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::~IgpArea()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::has_data() const
{
    return igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance_xr.is_set
	|| igp_type.is_set
	|| segment_routing_enabled.is_set
	|| strict_spf_enabled.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_area_format.operation)
	|| is_set(igp_instance_xr.operation)
	|| is_set(igp_type.operation)
	|| is_set(segment_routing_enabled.operation)
	|| is_set(strict_spf_enabled.operation);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpArea' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.operation)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance_xr.is_set || is_set(igp_instance_xr.operation)) leaf_name_data.push_back(igp_instance_xr.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (segment_routing_enabled.is_set || is_set(segment_routing_enabled.operation)) leaf_name_data.push_back(segment_routing_enabled.get_name_leafdata());
    if (strict_spf_enabled.is_set || is_set(strict_spf_enabled.operation)) leaf_name_data.push_back(strict_spf_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::IgpArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
    }
    if(value_path == "igp-instance-xr")
    {
        igp_instance_xr = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "segment-routing-enabled")
    {
        segment_routing_enabled = value;
    }
    if(value_path == "strict-spf-enabled")
    {
        strict_spf_enabled = value;
    }
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::SrPath()
    :
    has_backup_path{YType::boolean, "has-backup-path"}
    	,
    backup_path(std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath>())
	,primary_path(std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath>())
{
    backup_path->parent = this;
    children["backup-path"] = backup_path;

    primary_path->parent = this;
    children["primary-path"] = primary_path;

    yang_name = "sr-path"; yang_parent_name = "sr-prefix-info";
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::~SrPath()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::has_data() const
{
    return has_backup_path.is_set
	|| (backup_path !=  nullptr && backup_path->has_data())
	|| (primary_path !=  nullptr && primary_path->has_data());
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::has_operation() const
{
    return is_set(operation)
	|| is_set(has_backup_path.operation)
	|| (backup_path !=  nullptr && backup_path->has_operation())
	|| (primary_path !=  nullptr && primary_path->has_operation());
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-path";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_backup_path.is_set || is_set(has_backup_path.operation)) leaf_name_data.push_back(has_backup_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-path")
    {
        if(backup_path != nullptr)
        {
            children["backup-path"] = backup_path;
        }
        else
        {
            backup_path = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath>();
            backup_path->parent = this;
            children["backup-path"] = backup_path;
        }
        return children.at("backup-path");
    }

    if(child_yang_name == "primary-path")
    {
        if(primary_path != nullptr)
        {
            children["primary-path"] = primary_path;
        }
        else
        {
            primary_path = std::make_shared<MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath>();
            primary_path->parent = this;
            children["primary-path"] = primary_path;
        }
        return children.at("primary-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::get_children()
{
    if(children.find("backup-path") == children.end())
    {
        if(backup_path != nullptr)
        {
            children["backup-path"] = backup_path;
        }
    }

    if(children.find("primary-path") == children.end())
    {
        if(primary_path != nullptr)
        {
            children["primary-path"] = primary_path;
        }
    }

    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-backup-path")
    {
        has_backup_path = value;
    }
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::PrimaryPath()
    :
    backup_path_id{YType::uint32, "backup-path-id"},
    next_hop{YType::str, "next-hop"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_label{YType::uint32, "outgoing-label"},
    outgoing_strict_label{YType::uint32, "outgoing-strict-label"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "primary-path"; yang_parent_name = "sr-path";
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::~PrimaryPath()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::has_data() const
{
    return backup_path_id.is_set
	|| next_hop.is_set
	|| outgoing_interface.is_set
	|| outgoing_label.is_set
	|| outgoing_strict_label.is_set
	|| path_id.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_path_id.operation)
	|| is_set(next_hop.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(outgoing_strict_label.operation)
	|| is_set(path_id.operation);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-path";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryPath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.operation)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (outgoing_strict_label.is_set || is_set(outgoing_strict_label.operation)) leaf_name_data.push_back(outgoing_strict_label.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::PrimaryPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "outgoing-strict-label")
    {
        outgoing_strict_label = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::BackupPath()
    :
    next_hop{YType::str, "next-hop"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_labels_stack{YType::uint32, "outgoing-labels-stack"},
    outgoing_strict_labels_stack{YType::uint32, "outgoing-strict-labels-stack"}
{
    yang_name = "backup-path"; yang_parent_name = "sr-path";
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::~BackupPath()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::has_data() const
{
    for (auto const & leaf : outgoing_labels_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : outgoing_strict_labels_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return next_hop.is_set
	|| outgoing_interface.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::has_operation() const
{
    for (auto const & leaf : outgoing_labels_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : outgoing_strict_labels_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_labels_stack.operation)
	|| is_set(outgoing_strict_labels_stack.operation);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());

    auto outgoing_labels_stack_name_datas = outgoing_labels_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), outgoing_labels_stack_name_datas.begin(), outgoing_labels_stack_name_datas.end());
    auto outgoing_strict_labels_stack_name_datas = outgoing_strict_labels_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), outgoing_strict_labels_stack_name_datas.begin(), outgoing_strict_labels_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::SrPath::BackupPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-labels-stack")
    {
        outgoing_labels_stack.append(value);
    }
    if(value_path == "outgoing-strict-labels-stack")
    {
        outgoing_strict_labels_stack.append(value);
    }
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::AdvertizingNode()
    :
    node_id{YType::str, "node-id"}
{
    yang_name = "advertizing-node"; yang_parent_name = "sr-prefix-info";
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::~AdvertizingNode()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::has_data() const
{
    return node_id.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertizing-node";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvertizingNode' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::AdvertizingNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::StrictAdvertizingNode()
    :
    node_id{YType::str, "node-id"}
{
    yang_name = "strict-advertizing-node"; yang_parent_name = "sr-prefix-info";
}

MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::~StrictAdvertizingNode()
{
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::has_data() const
{
    return node_id.is_set;
}

bool MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation);
}

std::string MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-advertizing-node";

    return path_buffer.str();

}

EntityPath MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StrictAdvertizingNode' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::get_children()
{
    return children;
}

void MplsTe::SegmentRouting::SrPrefixInfos::SrPrefixInfo::StrictAdvertizingNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

MplsTe::FibNextHopRoutes::FibNextHopRoutes()
{
    yang_name = "fib-next-hop-routes"; yang_parent_name = "mpls-te";
}

MplsTe::FibNextHopRoutes::~FibNextHopRoutes()
{
}

bool MplsTe::FibNextHopRoutes::has_data() const
{
    for (std::size_t index=0; index<fib_next_hop_route.size(); index++)
    {
        if(fib_next_hop_route[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::FibNextHopRoutes::has_operation() const
{
    for (std::size_t index=0; index<fib_next_hop_route.size(); index++)
    {
        if(fib_next_hop_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::FibNextHopRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-next-hop-routes";

    return path_buffer.str();

}

EntityPath MplsTe::FibNextHopRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FibNextHopRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fib-next-hop-route")
    {
        for(auto const & c : fib_next_hop_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::FibNextHopRoutes::FibNextHopRoute>();
        c->parent = this;
        fib_next_hop_route.push_back(std::move(c));
        children[segment_path] = fib_next_hop_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FibNextHopRoutes::get_children()
{
    for (auto const & c : fib_next_hop_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::FibNextHopRoutes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::FibNextHopRoutes::FibNextHopRoute::FibNextHopRoute()
    :
    prefix_address{YType::str, "prefix-address"},
    create_time{YType::uint32, "create-time"},
    expire_time{YType::uint32, "expire-time"},
    is_notified{YType::boolean, "is-notified"},
    is_registered{YType::boolean, "is-registered"},
    is_stale{YType::boolean, "is-stale"},
    last_update_time{YType::uint32, "last-update-time"},
    last_used_time{YType::uint32, "last-used-time"},
    prefix_addr{YType::str, "prefix-addr"},
    route_version{YType::uint64, "route-version"}
    	,
    target_address(std::make_shared<MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress>())
{
    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "fib-next-hop-route"; yang_parent_name = "fib-next-hop-routes";
}

MplsTe::FibNextHopRoutes::FibNextHopRoute::~FibNextHopRoute()
{
}

bool MplsTe::FibNextHopRoutes::FibNextHopRoute::has_data() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_data())
            return true;
    }
    return prefix_address.is_set
	|| create_time.is_set
	|| expire_time.is_set
	|| is_notified.is_set
	|| is_registered.is_set
	|| is_stale.is_set
	|| last_update_time.is_set
	|| last_used_time.is_set
	|| prefix_addr.is_set
	|| route_version.is_set
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsTe::FibNextHopRoutes::FibNextHopRoute::has_operation() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix_address.operation)
	|| is_set(create_time.operation)
	|| is_set(expire_time.operation)
	|| is_set(is_notified.operation)
	|| is_set(is_registered.operation)
	|| is_set(is_stale.operation)
	|| is_set(last_update_time.operation)
	|| is_set(last_used_time.operation)
	|| is_set(prefix_addr.operation)
	|| is_set(route_version.operation)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsTe::FibNextHopRoutes::FibNextHopRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-next-hop-route" <<"[prefix-address='" <<prefix_address <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::FibNextHopRoutes::FibNextHopRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/fib-next-hop-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_address.is_set || is_set(prefix_address.operation)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (create_time.is_set || is_set(create_time.operation)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (expire_time.is_set || is_set(expire_time.operation)) leaf_name_data.push_back(expire_time.get_name_leafdata());
    if (is_notified.is_set || is_set(is_notified.operation)) leaf_name_data.push_back(is_notified.get_name_leafdata());
    if (is_registered.is_set || is_set(is_registered.operation)) leaf_name_data.push_back(is_registered.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (last_used_time.is_set || is_set(last_used_time.operation)) leaf_name_data.push_back(last_used_time.get_name_leafdata());
    if (prefix_addr.is_set || is_set(prefix_addr.operation)) leaf_name_data.push_back(prefix_addr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.operation)) leaf_name_data.push_back(route_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FibNextHopRoutes::FibNextHopRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop-path")
    {
        for(auto const & c : next_hop_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath>();
        c->parent = this;
        next_hop_path.push_back(std::move(c));
        children[segment_path] = next_hop_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FibNextHopRoutes::FibNextHopRoute::get_children()
{
    for (auto const & c : next_hop_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void MplsTe::FibNextHopRoutes::FibNextHopRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-address")
    {
        prefix_address = value;
    }
    if(value_path == "create-time")
    {
        create_time = value;
    }
    if(value_path == "expire-time")
    {
        expire_time = value;
    }
    if(value_path == "is-notified")
    {
        is_notified = value;
    }
    if(value_path == "is-registered")
    {
        is_registered = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "last-used-time")
    {
        last_used_time = value;
    }
    if(value_path == "prefix-addr")
    {
        prefix_addr = value;
    }
    if(value_path == "route-version")
    {
        route_version = value;
    }
}

MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::TargetAddress()
    :
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "target-address"; yang_parent_name = "fib-next-hop-route";
}

MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::~TargetAddress()
{
}

bool MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::has_data() const
{
    return ip_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetAddress' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::get_children()
{
    return children;
}

void MplsTe::FibNextHopRoutes::FibNextHopRoute::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::NextHopPath()
    :
    backup_path_id{YType::uint32, "backup-path-id"},
    interface{YType::str, "interface"},
    label_stack{YType::uint32, "label-stack"},
    next_hop_address{YType::str, "next-hop-address"},
    path_id{YType::uint32, "path-id"},
    pure_backup{YType::boolean, "pure-backup"}
{
    yang_name = "next-hop-path"; yang_parent_name = "fib-next-hop-route";
}

MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::~NextHopPath()
{
}

bool MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_path_id.is_set
	|| interface.is_set
	|| next_hop_address.is_set
	|| path_id.is_set
	|| pure_backup.is_set;
}

bool MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_path_id.operation)
	|| is_set(interface.operation)
	|| is_set(label_stack.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(path_id.operation)
	|| is_set(pure_backup.operation);
}

std::string MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-path";

    return path_buffer.str();

}

EntityPath MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopPath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.operation)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (pure_backup.is_set || is_set(pure_backup.operation)) leaf_name_data.push_back(pure_backup.get_name_leafdata());

    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::get_children()
{
    return children;
}

void MplsTe::FibNextHopRoutes::FibNextHopRoute::NextHopPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "pure-backup")
    {
        pure_backup = value;
    }
}

MplsTe::NextHopRoutes::NextHopRoutes()
{
    yang_name = "next-hop-routes"; yang_parent_name = "mpls-te";
}

MplsTe::NextHopRoutes::~NextHopRoutes()
{
}

bool MplsTe::NextHopRoutes::has_data() const
{
    for (std::size_t index=0; index<next_hop_route.size(); index++)
    {
        if(next_hop_route[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::NextHopRoutes::has_operation() const
{
    for (std::size_t index=0; index<next_hop_route.size(); index++)
    {
        if(next_hop_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::NextHopRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-routes";

    return path_buffer.str();

}

EntityPath MplsTe::NextHopRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop-route")
    {
        for(auto const & c : next_hop_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute>();
        c->parent = this;
        next_hop_route.push_back(std::move(c));
        children[segment_path] = next_hop_route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NextHopRoutes::get_children()
{
    for (auto const & c : next_hop_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::NextHopRoutes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::NextHopRoutes::NextHopRoute::NextHopRoute()
    :
    create_time{YType::uint32, "create-time"},
    exact_match{YType::boolean, "exact-match"},
    expire_time{YType::uint32, "expire-time"},
    installed_tunnel_path_num{YType::uint32, "installed-tunnel-path-num"},
    last_used_time{YType::uint32, "last-used-time"},
    next_hop_type{YType::enumeration, "next-hop-type"},
    prefix_address{YType::str, "prefix-address"},
    prefix_address_xr{YType::str, "prefix-address-xr"},
    prefix_length{YType::uint8, "prefix-length"},
    prefix_length_xr{YType::uint32, "prefix-length-xr"}
    	,
    active_route(std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute>())
	,backup_route(std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::BackupRoute>())
{
    active_route->parent = this;
    children["active-route"] = active_route;

    backup_route->parent = this;
    children["backup-route"] = backup_route;

    yang_name = "next-hop-route"; yang_parent_name = "next-hop-routes";
}

MplsTe::NextHopRoutes::NextHopRoute::~NextHopRoute()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::has_data() const
{
    for (std::size_t index=0; index<tunnel_path.size(); index++)
    {
        if(tunnel_path[index]->has_data())
            return true;
    }
    return create_time.is_set
	|| exact_match.is_set
	|| expire_time.is_set
	|| installed_tunnel_path_num.is_set
	|| last_used_time.is_set
	|| next_hop_type.is_set
	|| prefix_address.is_set
	|| prefix_address_xr.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| (active_route !=  nullptr && active_route->has_data())
	|| (backup_route !=  nullptr && backup_route->has_data());
}

bool MplsTe::NextHopRoutes::NextHopRoute::has_operation() const
{
    for (std::size_t index=0; index<tunnel_path.size(); index++)
    {
        if(tunnel_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(create_time.operation)
	|| is_set(exact_match.operation)
	|| is_set(expire_time.operation)
	|| is_set(installed_tunnel_path_num.operation)
	|| is_set(last_used_time.operation)
	|| is_set(next_hop_type.operation)
	|| is_set(prefix_address.operation)
	|| is_set(prefix_address_xr.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| (active_route !=  nullptr && active_route->has_operation())
	|| (backup_route !=  nullptr && backup_route->has_operation());
}

std::string MplsTe::NextHopRoutes::NextHopRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-route";

    return path_buffer.str();

}

EntityPath MplsTe::NextHopRoutes::NextHopRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create_time.is_set || is_set(create_time.operation)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (exact_match.is_set || is_set(exact_match.operation)) leaf_name_data.push_back(exact_match.get_name_leafdata());
    if (expire_time.is_set || is_set(expire_time.operation)) leaf_name_data.push_back(expire_time.get_name_leafdata());
    if (installed_tunnel_path_num.is_set || is_set(installed_tunnel_path_num.operation)) leaf_name_data.push_back(installed_tunnel_path_num.get_name_leafdata());
    if (last_used_time.is_set || is_set(last_used_time.operation)) leaf_name_data.push_back(last_used_time.get_name_leafdata());
    if (next_hop_type.is_set || is_set(next_hop_type.operation)) leaf_name_data.push_back(next_hop_type.get_name_leafdata());
    if (prefix_address.is_set || is_set(prefix_address.operation)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (prefix_address_xr.is_set || is_set(prefix_address_xr.operation)) leaf_name_data.push_back(prefix_address_xr.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-route")
    {
        if(active_route != nullptr)
        {
            children["active-route"] = active_route;
        }
        else
        {
            active_route = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute>();
            active_route->parent = this;
            children["active-route"] = active_route;
        }
        return children.at("active-route");
    }

    if(child_yang_name == "backup-route")
    {
        if(backup_route != nullptr)
        {
            children["backup-route"] = backup_route;
        }
        else
        {
            backup_route = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::BackupRoute>();
            backup_route->parent = this;
            children["backup-route"] = backup_route;
        }
        return children.at("backup-route");
    }

    if(child_yang_name == "tunnel-path")
    {
        for(auto const & c : tunnel_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::TunnelPath>();
        c->parent = this;
        tunnel_path.push_back(std::move(c));
        children[segment_path] = tunnel_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NextHopRoutes::NextHopRoute::get_children()
{
    if(children.find("active-route") == children.end())
    {
        if(active_route != nullptr)
        {
            children["active-route"] = active_route;
        }
    }

    if(children.find("backup-route") == children.end())
    {
        if(backup_route != nullptr)
        {
            children["backup-route"] = backup_route;
        }
    }

    for (auto const & c : tunnel_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "create-time")
    {
        create_time = value;
    }
    if(value_path == "exact-match")
    {
        exact_match = value;
    }
    if(value_path == "expire-time")
    {
        expire_time = value;
    }
    if(value_path == "installed-tunnel-path-num")
    {
        installed_tunnel_path_num = value;
    }
    if(value_path == "last-used-time")
    {
        last_used_time = value;
    }
    if(value_path == "next-hop-type")
    {
        next_hop_type = value;
    }
    if(value_path == "prefix-address")
    {
        prefix_address = value;
    }
    if(value_path == "prefix-address-xr")
    {
        prefix_address_xr = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
}

MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::ActiveRoute()
    :
    is_connected{YType::boolean, "is-connected"},
    is_default{YType::boolean, "is-default"},
    is_populated{YType::boolean, "is-populated"},
    is_registered{YType::boolean, "is-registered"},
    is_stale{YType::boolean, "is-stale"},
    last_update_time{YType::uint32, "last-update-time"},
    route_distance{YType::uint32, "route-distance"},
    route_metric{YType::uint32, "route-metric"},
    route_protocol_name{YType::str, "route-protocol-name"},
    route_type{YType::uint16, "route-type"}
{
    yang_name = "active-route"; yang_parent_name = "next-hop-route";
}

MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::~ActiveRoute()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::has_data() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_data())
            return true;
    }
    return is_connected.is_set
	|| is_default.is_set
	|| is_populated.is_set
	|| is_registered.is_set
	|| is_stale.is_set
	|| last_update_time.is_set
	|| route_distance.is_set
	|| route_metric.is_set
	|| route_protocol_name.is_set
	|| route_type.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::has_operation() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_connected.operation)
	|| is_set(is_default.operation)
	|| is_set(is_populated.operation)
	|| is_set(is_registered.operation)
	|| is_set(is_stale.operation)
	|| is_set(last_update_time.operation)
	|| is_set(route_distance.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_protocol_name.operation)
	|| is_set(route_type.operation);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-route";

    return path_buffer.str();

}

EntityPath MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_populated.is_set || is_set(is_populated.operation)) leaf_name_data.push_back(is_populated.get_name_leafdata());
    if (is_registered.is_set || is_set(is_registered.operation)) leaf_name_data.push_back(is_registered.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (route_distance.is_set || is_set(route_distance.operation)) leaf_name_data.push_back(route_distance.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_protocol_name.is_set || is_set(route_protocol_name.operation)) leaf_name_data.push_back(route_protocol_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop-path")
    {
        for(auto const & c : next_hop_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath>();
        c->parent = this;
        next_hop_path.push_back(std::move(c));
        children[segment_path] = next_hop_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::get_children()
{
    for (auto const & c : next_hop_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
    if(value_path == "is-populated")
    {
        is_populated = value;
    }
    if(value_path == "is-registered")
    {
        is_registered = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "route-distance")
    {
        route_distance = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-protocol-name")
    {
        route_protocol_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::NextHopPath()
    :
    abr_address{YType::str, "abr-address"},
    address{YType::str, "address"},
    interface{YType::str, "interface"}
{
    yang_name = "next-hop-path"; yang_parent_name = "active-route";
}

MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::~NextHopPath()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::has_data() const
{
    return abr_address.is_set
	|| address.is_set
	|| interface.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::has_operation() const
{
    return is_set(operation)
	|| is_set(abr_address.operation)
	|| is_set(address.operation)
	|| is_set(interface.operation);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-path";

    return path_buffer.str();

}

EntityPath MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/active-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_address.is_set || is_set(abr_address.operation)) leaf_name_data.push_back(abr_address.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::get_children()
{
    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::ActiveRoute::NextHopPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abr-address")
    {
        abr_address = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::BackupRoute()
    :
    is_connected{YType::boolean, "is-connected"},
    is_default{YType::boolean, "is-default"},
    is_populated{YType::boolean, "is-populated"},
    is_registered{YType::boolean, "is-registered"},
    is_stale{YType::boolean, "is-stale"},
    last_update_time{YType::uint32, "last-update-time"},
    route_distance{YType::uint32, "route-distance"},
    route_metric{YType::uint32, "route-metric"},
    route_protocol_name{YType::str, "route-protocol-name"},
    route_type{YType::uint16, "route-type"}
{
    yang_name = "backup-route"; yang_parent_name = "next-hop-route";
}

MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::~BackupRoute()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::has_data() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_data())
            return true;
    }
    return is_connected.is_set
	|| is_default.is_set
	|| is_populated.is_set
	|| is_registered.is_set
	|| is_stale.is_set
	|| last_update_time.is_set
	|| route_distance.is_set
	|| route_metric.is_set
	|| route_protocol_name.is_set
	|| route_type.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::has_operation() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_connected.operation)
	|| is_set(is_default.operation)
	|| is_set(is_populated.operation)
	|| is_set(is_registered.operation)
	|| is_set(is_stale.operation)
	|| is_set(last_update_time.operation)
	|| is_set(route_distance.operation)
	|| is_set(route_metric.operation)
	|| is_set(route_protocol_name.operation)
	|| is_set(route_type.operation);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";

    return path_buffer.str();

}

EntityPath MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());
    if (is_populated.is_set || is_set(is_populated.operation)) leaf_name_data.push_back(is_populated.get_name_leafdata());
    if (is_registered.is_set || is_set(is_registered.operation)) leaf_name_data.push_back(is_registered.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.operation)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (route_distance.is_set || is_set(route_distance.operation)) leaf_name_data.push_back(route_distance.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.operation)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_protocol_name.is_set || is_set(route_protocol_name.operation)) leaf_name_data.push_back(route_protocol_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop-path")
    {
        for(auto const & c : next_hop_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath>();
        c->parent = this;
        next_hop_path.push_back(std::move(c));
        children[segment_path] = next_hop_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::get_children()
{
    for (auto const & c : next_hop_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
    if(value_path == "is-populated")
    {
        is_populated = value;
    }
    if(value_path == "is-registered")
    {
        is_registered = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
    }
    if(value_path == "route-distance")
    {
        route_distance = value;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
    }
    if(value_path == "route-protocol-name")
    {
        route_protocol_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::NextHopPath()
    :
    abr_address{YType::str, "abr-address"},
    address{YType::str, "address"},
    interface{YType::str, "interface"}
{
    yang_name = "next-hop-path"; yang_parent_name = "backup-route";
}

MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::~NextHopPath()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::has_data() const
{
    return abr_address.is_set
	|| address.is_set
	|| interface.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::has_operation() const
{
    return is_set(operation)
	|| is_set(abr_address.operation)
	|| is_set(address.operation)
	|| is_set(interface.operation);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-path";

    return path_buffer.str();

}

EntityPath MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/backup-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_address.is_set || is_set(abr_address.operation)) leaf_name_data.push_back(abr_address.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::get_children()
{
    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::BackupRoute::NextHopPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abr-address")
    {
        abr_address = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::TunnelPath()
    :
    install_time{YType::uint32, "install-time"},
    installed_metric{YType::uint32, "installed-metric"},
    interface_handle{YType::str, "interface-handle"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "tunnel-path"; yang_parent_name = "next-hop-route";
}

MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::~TunnelPath()
{
}

bool MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::has_data() const
{
    return install_time.is_set
	|| installed_metric.is_set
	|| interface_handle.is_set
	|| tunnel_id.is_set;
}

bool MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::has_operation() const
{
    return is_set(operation)
	|| is_set(install_time.operation)
	|| is_set(installed_metric.operation)
	|| is_set(interface_handle.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-path";

    return path_buffer.str();

}

EntityPath MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/next-hop-routes/next-hop-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install_time.is_set || is_set(install_time.operation)) leaf_name_data.push_back(install_time.get_name_leafdata());
    if (installed_metric.is_set || is_set(installed_metric.operation)) leaf_name_data.push_back(installed_metric.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::get_children()
{
    return children;
}

void MplsTe::NextHopRoutes::NextHopRoute::TunnelPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "install-time")
    {
        install_time = value;
    }
    if(value_path == "installed-metric")
    {
        installed_metric = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntries()
{
    yang_name = "auto-route-destination-entries"; yang_parent_name = "mpls-te";
}

MplsTe::AutoRouteDestinationEntries::~AutoRouteDestinationEntries()
{
}

bool MplsTe::AutoRouteDestinationEntries::has_data() const
{
    for (std::size_t index=0; index<auto_route_destination_entry.size(); index++)
    {
        if(auto_route_destination_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoRouteDestinationEntries::has_operation() const
{
    for (std::size_t index=0; index<auto_route_destination_entry.size(); index++)
    {
        if(auto_route_destination_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::AutoRouteDestinationEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entries";

    return path_buffer.str();

}

EntityPath MplsTe::AutoRouteDestinationEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoRouteDestinationEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-route-destination-entry")
    {
        for(auto const & c : auto_route_destination_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry>();
        c->parent = this;
        auto_route_destination_entry.push_back(std::move(c));
        children[segment_path] = auto_route_destination_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoRouteDestinationEntries::get_children()
{
    for (auto const & c : auto_route_destination_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AutoRouteDestinationEntries::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::AutoRouteDestinationEntry()
    :
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"}
{
    yang_name = "auto-route-destination-entry"; yang_parent_name = "auto-route-destination-entries";
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::~AutoRouteDestinationEntry()
{
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_data() const
{
    for (std::size_t index=0; index<tunnel_autoroute_dest.size(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| tunnel_id_xr.is_set;
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_operation() const
{
    for (std::size_t index=0; index<tunnel_autoroute_dest.size(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_xr.operation);
}

std::string MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entry" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-route-destination-entries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-autoroute-dest")
    {
        for(auto const & c : tunnel_autoroute_dest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest>();
        c->parent = this;
        tunnel_autoroute_dest.push_back(std::move(c));
        children[segment_path] = tunnel_autoroute_dest.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_children()
{
    for (auto const & c : tunnel_autoroute_dest)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::TunnelAutorouteDest()
    :
    install_time{YType::uint32, "install-time"},
    interface_handle{YType::str, "interface-handle"},
    metric{YType::uint32, "metric"},
    prefix_address{YType::str, "prefix-address"},
    prefix_length{YType::uint32, "prefix-length"}
{
    yang_name = "tunnel-autoroute-dest"; yang_parent_name = "auto-route-destination-entry";
}

MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::~TunnelAutorouteDest()
{
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_data() const
{
    return install_time.is_set
	|| interface_handle.is_set
	|| metric.is_set
	|| prefix_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_operation() const
{
    return is_set(operation)
	|| is_set(install_time.operation)
	|| is_set(interface_handle.operation)
	|| is_set(metric.operation)
	|| is_set(prefix_address.operation)
	|| is_set(prefix_length.operation);
}

std::string MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-autoroute-dest";

    return path_buffer.str();

}

EntityPath MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelAutorouteDest' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install_time.is_set || is_set(install_time.operation)) leaf_name_data.push_back(install_time.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix_address.is_set || is_set(prefix_address.operation)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_children()
{
    return children;
}

void MplsTe::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "install-time")
    {
        install_time = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "prefix-address")
    {
        prefix_address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsTe::TeMib::TeMib()
    :
    scalars(std::make_shared<MplsTe::TeMib::Scalars>())
{
    scalars->parent = this;
    children["scalars"] = scalars;

    yang_name = "te-mib"; yang_parent_name = "mpls-te";
}

MplsTe::TeMib::~TeMib()
{
}

bool MplsTe::TeMib::has_data() const
{
    return (scalars !=  nullptr && scalars->has_data());
}

bool MplsTe::TeMib::has_operation() const
{
    return is_set(operation)
	|| (scalars !=  nullptr && scalars->has_operation());
}

std::string MplsTe::TeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-mib";

    return path_buffer.str();

}

EntityPath MplsTe::TeMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "scalars")
    {
        if(scalars != nullptr)
        {
            children["scalars"] = scalars;
        }
        else
        {
            scalars = std::make_shared<MplsTe::TeMib::Scalars>();
            scalars->parent = this;
            children["scalars"] = scalars;
        }
        return children.at("scalars");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TeMib::get_children()
{
    if(children.find("scalars") == children.end())
    {
        if(scalars != nullptr)
        {
            children["scalars"] = scalars;
        }
    }

    return children;
}

void MplsTe::TeMib::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::TeMib::Scalars::Scalars()
    :
    mpls_tunnel_active{YType::uint32, "mpls-tunnel-active"},
    mpls_tunnel_configured{YType::uint32, "mpls-tunnel-configured"},
    mpls_tunnel_max_hops{YType::uint32, "mpls-tunnel-max-hops"},
    mpls_tunnel_notification_max_rate{YType::uint32, "mpls-tunnel-notification-max-rate"},
    mpls_tunnel_te_dist_proto{YType::uint8, "mpls-tunnel-te-dist-proto"}
{
    yang_name = "scalars"; yang_parent_name = "te-mib";
}

MplsTe::TeMib::Scalars::~Scalars()
{
}

bool MplsTe::TeMib::Scalars::has_data() const
{
    return mpls_tunnel_active.is_set
	|| mpls_tunnel_configured.is_set
	|| mpls_tunnel_max_hops.is_set
	|| mpls_tunnel_notification_max_rate.is_set
	|| mpls_tunnel_te_dist_proto.is_set;
}

bool MplsTe::TeMib::Scalars::has_operation() const
{
    return is_set(operation)
	|| is_set(mpls_tunnel_active.operation)
	|| is_set(mpls_tunnel_configured.operation)
	|| is_set(mpls_tunnel_max_hops.operation)
	|| is_set(mpls_tunnel_notification_max_rate.operation)
	|| is_set(mpls_tunnel_te_dist_proto.operation);
}

std::string MplsTe::TeMib::Scalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scalars";

    return path_buffer.str();

}

EntityPath MplsTe::TeMib::Scalars::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/te-mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls_tunnel_active.is_set || is_set(mpls_tunnel_active.operation)) leaf_name_data.push_back(mpls_tunnel_active.get_name_leafdata());
    if (mpls_tunnel_configured.is_set || is_set(mpls_tunnel_configured.operation)) leaf_name_data.push_back(mpls_tunnel_configured.get_name_leafdata());
    if (mpls_tunnel_max_hops.is_set || is_set(mpls_tunnel_max_hops.operation)) leaf_name_data.push_back(mpls_tunnel_max_hops.get_name_leafdata());
    if (mpls_tunnel_notification_max_rate.is_set || is_set(mpls_tunnel_notification_max_rate.operation)) leaf_name_data.push_back(mpls_tunnel_notification_max_rate.get_name_leafdata());
    if (mpls_tunnel_te_dist_proto.is_set || is_set(mpls_tunnel_te_dist_proto.operation)) leaf_name_data.push_back(mpls_tunnel_te_dist_proto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TeMib::Scalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TeMib::Scalars::get_children()
{
    return children;
}

void MplsTe::TeMib::Scalars::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mpls-tunnel-active")
    {
        mpls_tunnel_active = value;
    }
    if(value_path == "mpls-tunnel-configured")
    {
        mpls_tunnel_configured = value;
    }
    if(value_path == "mpls-tunnel-max-hops")
    {
        mpls_tunnel_max_hops = value;
    }
    if(value_path == "mpls-tunnel-notification-max-rate")
    {
        mpls_tunnel_notification_max_rate = value;
    }
    if(value_path == "mpls-tunnel-te-dist-proto")
    {
        mpls_tunnel_te_dist_proto = value;
    }
}

MplsTe::HardwareOutOfResources::HardwareOutOfResources()
    :
    summary(std::make_shared<MplsTe::HardwareOutOfResources::Summary>())
{
    summary->parent = this;
    children["summary"] = summary;

    yang_name = "hardware-out-of-resources"; yang_parent_name = "mpls-te";
}

MplsTe::HardwareOutOfResources::~HardwareOutOfResources()
{
}

bool MplsTe::HardwareOutOfResources::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTe::HardwareOutOfResources::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::HardwareOutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources";

    return path_buffer.str();

}

EntityPath MplsTe::HardwareOutOfResources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::HardwareOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsTe::HardwareOutOfResources::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::HardwareOutOfResources::get_children()
{
    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsTe::HardwareOutOfResources::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::HardwareOutOfResources::Summary::Summary()
{
    yang_name = "summary"; yang_parent_name = "hardware-out-of-resources";
}

MplsTe::HardwareOutOfResources::Summary::~Summary()
{
}

bool MplsTe::HardwareOutOfResources::Summary::has_data() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.size(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::HardwareOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.size(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::HardwareOutOfResources::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTe::HardwareOutOfResources::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/hardware-out-of-resources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::HardwareOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hardware-out-of-resources-state")
    {
        for(auto const & c : hardware_out_of_resources_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState>();
        c->parent = this;
        hardware_out_of_resources_state.push_back(std::move(c));
        children[segment_path] = hardware_out_of_resources_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::HardwareOutOfResources::Summary::get_children()
{
    for (auto const & c : hardware_out_of_resources_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::HardwareOutOfResources::Summary::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::HardwareOutOfResourcesState()
    :
    accept_reopt{YType::boolean, "accept-reopt"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    node_protection_disable{YType::boolean, "node-protection-disable"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    transition_duration{YType::uint32, "transition-duration"}
    	,
    statistics(std::make_shared<MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "hardware-out-of-resources-state"; yang_parent_name = "summary";
}

MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::~HardwareOutOfResourcesState()
{
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_data() const
{
    return accept_reopt.is_set
	|| available_bw_percentage.is_set
	|| hw_oor_state.is_set
	|| minimum_lsp_bandwidth.is_set
	|| node_protection_disable.is_set
	|| te_metric_penalty.is_set
	|| transition_duration.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_reopt.operation)
	|| is_set(available_bw_percentage.operation)
	|| is_set(hw_oor_state.operation)
	|| is_set(minimum_lsp_bandwidth.operation)
	|| is_set(node_protection_disable.operation)
	|| is_set(te_metric_penalty.operation)
	|| is_set(transition_duration.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources-state";

    return path_buffer.str();

}

EntityPath MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/hardware-out-of-resources/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_reopt.is_set || is_set(accept_reopt.operation)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.operation)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.operation)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.operation)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (node_protection_disable.is_set || is_set(node_protection_disable.operation)) leaf_name_data.push_back(node_protection_disable.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.operation)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.operation)) leaf_name_data.push_back(transition_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
    }
    if(value_path == "node-protection-disable")
    {
        node_protection_disable = value;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
    }
}

MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::Statistics()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{
    yang_name = "statistics"; yang_parent_name = "hardware-out-of-resources-state";
}

MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::~Statistics()
{
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| hw_oor_state.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_ls_ps_number.operation)
	|| is_set(accepted_reopt_ls_ps_number.operation)
	|| is_set(hw_oor_state.operation)
	|| is_set(node_protection_disable_number.operation)
	|| is_set(rejected_ls_ps_number.operation)
	|| is_set(rejected_reopt_ls_ps_number.operation)
	|| is_set(transitions.operation);
}

std::string MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/hardware-out-of-resources/summary/hardware-out-of-resources-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.operation)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.operation)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.operation)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.operation)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.operation)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.operation)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.operation)) leaf_name_data.push_back(transitions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_children()
{
    return children;
}

void MplsTe::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
    }
    if(value_path == "transitions")
    {
        transitions = value;
    }
}

MplsTe::P2PP2MpTunnel::P2PP2MpTunnel()
    :
    nni_tunnels(std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels>())
	,tunnel_heads(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads>())
	,tunnel_remote_briefs(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs>())
	,tunnel_remotes(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes>())
{
    nni_tunnels->parent = this;
    children["nni-tunnels"] = nni_tunnels;

    tunnel_heads->parent = this;
    children["tunnel-heads"] = tunnel_heads;

    tunnel_remote_briefs->parent = this;
    children["tunnel-remote-briefs"] = tunnel_remote_briefs;

    tunnel_remotes->parent = this;
    children["tunnel-remotes"] = tunnel_remotes;

    yang_name = "p2p-p2mp-tunnel"; yang_parent_name = "mpls-te";
}

MplsTe::P2PP2MpTunnel::~P2PP2MpTunnel()
{
}

bool MplsTe::P2PP2MpTunnel::has_data() const
{
    return (nni_tunnels !=  nullptr && nni_tunnels->has_data())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_data())
	|| (tunnel_remote_briefs !=  nullptr && tunnel_remote_briefs->has_data())
	|| (tunnel_remotes !=  nullptr && tunnel_remotes->has_data());
}

bool MplsTe::P2PP2MpTunnel::has_operation() const
{
    return is_set(operation)
	|| (nni_tunnels !=  nullptr && nni_tunnels->has_operation())
	|| (tunnel_heads !=  nullptr && tunnel_heads->has_operation())
	|| (tunnel_remote_briefs !=  nullptr && tunnel_remote_briefs->has_operation())
	|| (tunnel_remotes !=  nullptr && tunnel_remotes->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-p2mp-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nni-tunnels")
    {
        if(nni_tunnels != nullptr)
        {
            children["nni-tunnels"] = nni_tunnels;
        }
        else
        {
            nni_tunnels = std::make_shared<MplsTe::P2PP2MpTunnel::NniTunnels>();
            nni_tunnels->parent = this;
            children["nni-tunnels"] = nni_tunnels;
        }
        return children.at("nni-tunnels");
    }

    if(child_yang_name == "tunnel-heads")
    {
        if(tunnel_heads != nullptr)
        {
            children["tunnel-heads"] = tunnel_heads;
        }
        else
        {
            tunnel_heads = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads>();
            tunnel_heads->parent = this;
            children["tunnel-heads"] = tunnel_heads;
        }
        return children.at("tunnel-heads");
    }

    if(child_yang_name == "tunnel-remote-briefs")
    {
        if(tunnel_remote_briefs != nullptr)
        {
            children["tunnel-remote-briefs"] = tunnel_remote_briefs;
        }
        else
        {
            tunnel_remote_briefs = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs>();
            tunnel_remote_briefs->parent = this;
            children["tunnel-remote-briefs"] = tunnel_remote_briefs;
        }
        return children.at("tunnel-remote-briefs");
    }

    if(child_yang_name == "tunnel-remotes")
    {
        if(tunnel_remotes != nullptr)
        {
            children["tunnel-remotes"] = tunnel_remotes;
        }
        else
        {
            tunnel_remotes = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes>();
            tunnel_remotes->parent = this;
            children["tunnel-remotes"] = tunnel_remotes;
        }
        return children.at("tunnel-remotes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::get_children()
{
    if(children.find("nni-tunnels") == children.end())
    {
        if(nni_tunnels != nullptr)
        {
            children["nni-tunnels"] = nni_tunnels;
        }
    }

    if(children.find("tunnel-heads") == children.end())
    {
        if(tunnel_heads != nullptr)
        {
            children["tunnel-heads"] = tunnel_heads;
        }
    }

    if(children.find("tunnel-remote-briefs") == children.end())
    {
        if(tunnel_remote_briefs != nullptr)
        {
            children["tunnel-remote-briefs"] = tunnel_remote_briefs;
        }
    }

    if(children.find("tunnel-remotes") == children.end())
    {
        if(tunnel_remotes != nullptr)
        {
            children["tunnel-remotes"] = tunnel_remotes;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBriefs()
{
    yang_name = "tunnel-remote-briefs"; yang_parent_name = "p2p-p2mp-tunnel";
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::~TunnelRemoteBriefs()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::has_data() const
{
    for (std::size_t index=0; index<tunnel_remote_brief.size(); index++)
    {
        if(tunnel_remote_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::has_operation() const
{
    for (std::size_t index=0; index<tunnel_remote_brief.size(); index++)
    {
        if(tunnel_remote_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-remote-briefs";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2p-p2mp-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-remote-brief")
    {
        for(auto const & c : tunnel_remote_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief>();
        c->parent = this;
        tunnel_remote_brief.push_back(std::move(c));
        children[segment_path] = tunnel_remote_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::get_children()
{
    for (auto const & c : tunnel_remote_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::TunnelRemoteBrief()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    signaled_name{YType::str, "signaled-name"},
    uptime{YType::uint32, "uptime"}
    	,
    lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec>())
{
    lsp_fec->parent = this;
    children["lsp-fec"] = lsp_fec;

    yang_name = "tunnel-remote-brief"; yang_parent_name = "tunnel-remote-briefs";
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::~TunnelRemoteBrief()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::has_data() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| tunnel_id.is_set
	|| signaled_name.is_set
	|| uptime.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::has_operation() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(signaled_name.operation)
	|| is_set(uptime.operation)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-remote-brief" <<"[ctype='" <<ctype <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2p-p2mp-tunnel/tunnel-remote-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
        else
        {
            lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec>();
            lsp_fec->parent = this;
            children["lsp-fec"] = lsp_fec;
        }
        return children.at("lsp-fec");
    }

    if(child_yang_name == "s2l")
    {
        for(auto const & c : s2l)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L>();
        c->parent = this;
        s2l.push_back(std::move(c));
        children[segment_path] = s2l.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::get_children()
{
    if(children.find("lsp-fec") == children.end())
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
    }

    for (auto const & c : s2l)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::LspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "lsp-fec"; yang_parent_name = "tunnel-remote-brief";
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::~LspFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec";
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::LspFec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2L()
    :
    egress_interface{YType::str, "egress-interface"},
    ingress_interface{YType::str, "ingress-interface"},
    oper_state{YType::boolean, "oper-state"},
    role{YType::enumeration, "role"},
    uptime{YType::uint32, "uptime"}
    	,
    s2l_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec>())
{
    s2l_fec->parent = this;
    children["s2l-fec"] = s2l_fec;

    yang_name = "s2l"; yang_parent_name = "tunnel-remote-brief";
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::~S2L()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::has_data() const
{
    return egress_interface.is_set
	|| ingress_interface.is_set
	|| oper_state.is_set
	|| role.is_set
	|| uptime.is_set
	|| (s2l_fec !=  nullptr && s2l_fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::has_operation() const
{
    return is_set(operation)
	|| is_set(egress_interface.operation)
	|| is_set(ingress_interface.operation)
	|| is_set(oper_state.operation)
	|| is_set(role.operation)
	|| is_set(uptime.operation)
	|| (s2l_fec !=  nullptr && s2l_fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.operation)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (oper_state.is_set || is_set(oper_state.operation)) leaf_name_data.push_back(oper_state.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-fec")
    {
        if(s2l_fec != nullptr)
        {
            children["s2l-fec"] = s2l_fec;
        }
        else
        {
            s2l_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec>();
            s2l_fec->parent = this;
            children["s2l-fec"] = s2l_fec;
        }
        return children.at("s2l-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::get_children()
{
    if(children.find("s2l-fec") == children.end())
    {
        if(s2l_fec != nullptr)
        {
            children["s2l-fec"] = s2l_fec;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
    }
    if(value_path == "oper-state")
    {
        oper_state = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::S2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "s2l-fec"; yang_parent_name = "s2l";
}

MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::~S2LFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-fec";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemoteBriefs::TunnelRemoteBrief::S2L::S2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemotes()
{
    yang_name = "tunnel-remotes"; yang_parent_name = "p2p-p2mp-tunnel";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::~TunnelRemotes()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::has_data() const
{
    for (std::size_t index=0; index<tunnel_remote.size(); index++)
    {
        if(tunnel_remote[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::has_operation() const
{
    for (std::size_t index=0; index<tunnel_remote.size(); index++)
    {
        if(tunnel_remote[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-remotes";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2p-p2mp-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-remote")
    {
        for(auto const & c : tunnel_remote)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote>();
        c->parent = this;
        tunnel_remote.push_back(std::move(c));
        children[segment_path] = tunnel_remote.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::get_children()
{
    for (auto const & c : tunnel_remote)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::TunnelRemote()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    dste_class_index{YType::uint8, "dste-class-index"},
    dste_class_match{YType::boolean, "dste-class-match"},
    frr_active_reason{YType::uint32, "frr-active-reason"},
    is_frr_failed{YType::boolean, "is-frr-failed"},
    is_interface{YType::boolean, "is-interface"},
    is_passive{YType::boolean, "is-passive"},
    last_path_change{YType::uint32, "last-path-change"},
    lsp_bandwidth{YType::uint32, "lsp-bandwidth"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    lsp_hold_priority{YType::uint8, "lsp-hold-priority"},
    lsp_setup_priority{YType::uint8, "lsp-setup-priority"},
    persistent_bytes{YType::uint64, "persistent-bytes"},
    persistent_packets{YType::uint64, "persistent-packets"},
    reoptimize_reason{YType::enumeration, "reoptimize-reason"},
    reoptimize_trigger{YType::enumeration, "reoptimize-trigger"},
    s2_ls_down{YType::uint32, "s2-ls-down"},
    s2_ls_proceeding{YType::uint32, "s2-ls-proceeding"},
    s2_ls_up{YType::uint32, "s2-ls-up"},
    signaled_name{YType::str, "signaled-name"},
    timer_left{YType::uint32, "timer-left"},
    type{YType::enumeration, "type"},
    uptime{YType::uint32, "uptime"}
    	,
    lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec>())
{
    lsp_fec->parent = this;
    children["lsp-fec"] = lsp_fec;

    yang_name = "tunnel-remote"; yang_parent_name = "tunnel-remotes";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::~TunnelRemote()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::has_data() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| tunnel_id.is_set
	|| dste_class_index.is_set
	|| dste_class_match.is_set
	|| frr_active_reason.is_set
	|| is_frr_failed.is_set
	|| is_interface.is_set
	|| is_passive.is_set
	|| last_path_change.is_set
	|| lsp_bandwidth.is_set
	|| lsp_bandwidth_type.is_set
	|| lsp_hold_priority.is_set
	|| lsp_setup_priority.is_set
	|| persistent_bytes.is_set
	|| persistent_packets.is_set
	|| reoptimize_reason.is_set
	|| reoptimize_trigger.is_set
	|| s2_ls_down.is_set
	|| s2_ls_proceeding.is_set
	|| s2_ls_up.is_set
	|| signaled_name.is_set
	|| timer_left.is_set
	|| type.is_set
	|| uptime.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::has_operation() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(dste_class_index.operation)
	|| is_set(dste_class_match.operation)
	|| is_set(frr_active_reason.operation)
	|| is_set(is_frr_failed.operation)
	|| is_set(is_interface.operation)
	|| is_set(is_passive.operation)
	|| is_set(last_path_change.operation)
	|| is_set(lsp_bandwidth.operation)
	|| is_set(lsp_bandwidth_type.operation)
	|| is_set(lsp_hold_priority.operation)
	|| is_set(lsp_setup_priority.operation)
	|| is_set(persistent_bytes.operation)
	|| is_set(persistent_packets.operation)
	|| is_set(reoptimize_reason.operation)
	|| is_set(reoptimize_trigger.operation)
	|| is_set(s2_ls_down.operation)
	|| is_set(s2_ls_proceeding.operation)
	|| is_set(s2_ls_up.operation)
	|| is_set(signaled_name.operation)
	|| is_set(timer_left.operation)
	|| is_set(type.operation)
	|| is_set(uptime.operation)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-remote" <<"[ctype='" <<ctype <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2p-p2mp-tunnel/tunnel-remotes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (dste_class_index.is_set || is_set(dste_class_index.operation)) leaf_name_data.push_back(dste_class_index.get_name_leafdata());
    if (dste_class_match.is_set || is_set(dste_class_match.operation)) leaf_name_data.push_back(dste_class_match.get_name_leafdata());
    if (frr_active_reason.is_set || is_set(frr_active_reason.operation)) leaf_name_data.push_back(frr_active_reason.get_name_leafdata());
    if (is_frr_failed.is_set || is_set(is_frr_failed.operation)) leaf_name_data.push_back(is_frr_failed.get_name_leafdata());
    if (is_interface.is_set || is_set(is_interface.operation)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (is_passive.is_set || is_set(is_passive.operation)) leaf_name_data.push_back(is_passive.get_name_leafdata());
    if (last_path_change.is_set || is_set(last_path_change.operation)) leaf_name_data.push_back(last_path_change.get_name_leafdata());
    if (lsp_bandwidth.is_set || is_set(lsp_bandwidth.operation)) leaf_name_data.push_back(lsp_bandwidth.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.operation)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (lsp_hold_priority.is_set || is_set(lsp_hold_priority.operation)) leaf_name_data.push_back(lsp_hold_priority.get_name_leafdata());
    if (lsp_setup_priority.is_set || is_set(lsp_setup_priority.operation)) leaf_name_data.push_back(lsp_setup_priority.get_name_leafdata());
    if (persistent_bytes.is_set || is_set(persistent_bytes.operation)) leaf_name_data.push_back(persistent_bytes.get_name_leafdata());
    if (persistent_packets.is_set || is_set(persistent_packets.operation)) leaf_name_data.push_back(persistent_packets.get_name_leafdata());
    if (reoptimize_reason.is_set || is_set(reoptimize_reason.operation)) leaf_name_data.push_back(reoptimize_reason.get_name_leafdata());
    if (reoptimize_trigger.is_set || is_set(reoptimize_trigger.operation)) leaf_name_data.push_back(reoptimize_trigger.get_name_leafdata());
    if (s2_ls_down.is_set || is_set(s2_ls_down.operation)) leaf_name_data.push_back(s2_ls_down.get_name_leafdata());
    if (s2_ls_proceeding.is_set || is_set(s2_ls_proceeding.operation)) leaf_name_data.push_back(s2_ls_proceeding.get_name_leafdata());
    if (s2_ls_up.is_set || is_set(s2_ls_up.operation)) leaf_name_data.push_back(s2_ls_up.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (timer_left.is_set || is_set(timer_left.operation)) leaf_name_data.push_back(timer_left.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
        else
        {
            lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec>();
            lsp_fec->parent = this;
            children["lsp-fec"] = lsp_fec;
        }
        return children.at("lsp-fec");
    }

    if(child_yang_name == "s2l")
    {
        for(auto const & c : s2l)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L>();
        c->parent = this;
        s2l.push_back(std::move(c));
        children[segment_path] = s2l.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::get_children()
{
    if(children.find("lsp-fec") == children.end())
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
    }

    for (auto const & c : s2l)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "dste-class-index")
    {
        dste_class_index = value;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match = value;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason = value;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed = value;
    }
    if(value_path == "is-interface")
    {
        is_interface = value;
    }
    if(value_path == "is-passive")
    {
        is_passive = value;
    }
    if(value_path == "last-path-change")
    {
        last_path_change = value;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth = value;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority = value;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority = value;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes = value;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets = value;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason = value;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger = value;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down = value;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding = value;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
    if(value_path == "timer-left")
    {
        timer_left = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::LspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "lsp-fec"; yang_parent_name = "tunnel-remote";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::~LspFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::LspFec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2L()
    :
    abr_auto_discovered{YType::str, "abr-auto-discovered"},
    backup_tunnel_interface{YType::str, "backup-tunnel-interface"},
    downstream_router_id{YType::str, "downstream-router-id"},
    egress_interface{YType::str, "egress-interface"},
    egress_interface_brief{YType::str, "egress-interface-brief"},
    egress_interface_state{YType::enumeration, "egress-interface-state"},
    expanded_ero_affinity_bits{YType::uint32, "expanded-ero-affinity-bits"},
    expanded_ero_affinity_mask{YType::uint32, "expanded-ero-affinity-mask"},
    expanded_ero_area_id{YType::str, "expanded-ero-area-id"},
    expanded_ero_metric{YType::uint32, "expanded-ero-metric"},
    expanded_ero_metric_type{YType::enumeration, "expanded-ero-metric-type"},
    frr_out_tunnel_interface{YType::str, "frr-out-tunnel-interface"},
    incoming_address{YType::str, "incoming-address"},
    ingress_interface{YType::str, "ingress-interface"},
    ingress_interface_brief{YType::str, "ingress-interface-brief"},
    ingress_interface_state{YType::enumeration, "ingress-interface-state"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    is_expanded_ero{YType::boolean, "is-expanded-ero"},
    is_frr_enabled{YType::boolean, "is-frr-enabled"},
    is_node_protected{YType::boolean, "is-node-protected"},
    is_optical{YType::boolean, "is-optical"},
    local_router_id{YType::str, "local-router-id"},
    next_hop_address{YType::str, "next-hop-address"},
    node_hop_count{YType::uint8, "node-hop-count"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    path_reeval_query_mid{YType::uint32, "path-reeval-query-mid"},
    path_rro_enabled{YType::boolean, "path-rro-enabled"},
    path_using_strict_spf{YType::boolean, "path-using-strict-spf"},
    pcalc_area{YType::str, "pcalc-area"},
    previous_hop_address{YType::str, "previous-hop-address"},
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_name{YType::str, "reverse-lsp-name"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"},
    reverse_weight{YType::uint64, "reverse-weight"},
    role{YType::enumeration, "role"},
    s2l_local_label{YType::uint32, "s2l-local-label"},
    s2l_out_label{YType::uint32, "s2l-out-label"},
    s2l_reverse_ero_obj_present{YType::boolean, "s2l-reverse-ero-obj-present"},
    s2l_reverse_lsp_sub_obj{YType::uint8, "s2l-reverse-lsp-sub-obj"},
    s2l_reverse_tspec_obj_present{YType::boolean, "s2l-reverse-tspec-obj-present"},
    signalling_status{YType::enumeration, "signalling-status"},
    time_since_last_preferred_path_exists_send_mid{YType::uint32, "time-since-last-preferred-path-exists-send-mid"},
    time_since_last_preferred_tree_exists_send_mid{YType::uint32, "time-since-last-preferred-tree-exists-send-mid"},
    time_since_last_query_received_mid{YType::uint32, "time-since-last-query-received-mid"},
    upstream_router_id{YType::str, "upstream-router-id"},
    uptime{YType::uint32, "uptime"},
    weight{YType::uint64, "weight"}
    	,
    active_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption>())
	,association(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Association>())
	,diversity_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::DiversityInfo>())
	,flex_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::FlexInfo>())
	,fspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Fspec>())
	,generic_fspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GenericFspec>())
	,generic_tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GenericTspec>())
	,gmpls_labels(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GmplsLabels>())
	,head_end_bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::HeadEndBfdInfo>())
	,in_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro>())
	,incoming_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::IncomingAddressGeneric>())
	,lsp_wrap_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::LspWrapInfo>())
	,next_hop_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::NextHopAddressGeneric>())
	,otn_s2l(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L>())
	,out_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro>())
	,previous_hop_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric>())
	,protection(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec>())
	,reverse_tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec>())
	,s2l_convergence(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence>())
	,s2l_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec>())
	,soft_preemption(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption>())
	,srlg_collection(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection>())
	,tail_end_bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo>())
	,tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec>())
{
    active_path_option->parent = this;
    children["active-path-option"] = active_path_option;

    association->parent = this;
    children["association"] = association;

    diversity_info->parent = this;
    children["diversity-info"] = diversity_info;

    flex_info->parent = this;
    children["flex-info"] = flex_info;

    fspec->parent = this;
    children["fspec"] = fspec;

    generic_fspec->parent = this;
    children["generic-fspec"] = generic_fspec;

    generic_tspec->parent = this;
    children["generic-tspec"] = generic_tspec;

    gmpls_labels->parent = this;
    children["gmpls-labels"] = gmpls_labels;

    head_end_bfd_info->parent = this;
    children["head-end-bfd-info"] = head_end_bfd_info;

    in_xro->parent = this;
    children["in-xro"] = in_xro;

    incoming_address_generic->parent = this;
    children["incoming-address-generic"] = incoming_address_generic;

    lsp_wrap_info->parent = this;
    children["lsp-wrap-info"] = lsp_wrap_info;

    next_hop_address_generic->parent = this;
    children["next-hop-address-generic"] = next_hop_address_generic;

    otn_s2l->parent = this;
    children["otn-s2l"] = otn_s2l;

    out_xro->parent = this;
    children["out-xro"] = out_xro;

    previous_hop_address_generic->parent = this;
    children["previous-hop-address-generic"] = previous_hop_address_generic;

    protection->parent = this;
    children["protection"] = protection;

    reverse_lsp_fec->parent = this;
    children["reverse-lsp-fec"] = reverse_lsp_fec;

    reverse_tspec->parent = this;
    children["reverse-tspec"] = reverse_tspec;

    s2l_convergence->parent = this;
    children["s2l-convergence"] = s2l_convergence;

    s2l_fec->parent = this;
    children["s2l-fec"] = s2l_fec;

    soft_preemption->parent = this;
    children["soft-preemption"] = soft_preemption;

    srlg_collection->parent = this;
    children["srlg-collection"] = srlg_collection;

    tail_end_bfd_info->parent = this;
    children["tail-end-bfd-info"] = tail_end_bfd_info;

    tspec->parent = this;
    children["tspec"] = tspec;

    yang_name = "s2l"; yang_parent_name = "tunnel-remote";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::~S2L()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::has_data() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (auto const & leaf : s2l_reverse_lsp_sub_obj.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return abr_auto_discovered.is_set
	|| backup_tunnel_interface.is_set
	|| downstream_router_id.is_set
	|| egress_interface.is_set
	|| egress_interface_brief.is_set
	|| egress_interface_state.is_set
	|| expanded_ero_affinity_bits.is_set
	|| expanded_ero_affinity_mask.is_set
	|| expanded_ero_area_id.is_set
	|| expanded_ero_metric.is_set
	|| expanded_ero_metric_type.is_set
	|| frr_out_tunnel_interface.is_set
	|| incoming_address.is_set
	|| ingress_interface.is_set
	|| ingress_interface_brief.is_set
	|| ingress_interface_state.is_set
	|| is_bandwidth_protect.is_set
	|| is_expanded_ero.is_set
	|| is_frr_enabled.is_set
	|| is_node_protected.is_set
	|| is_optical.is_set
	|| local_router_id.is_set
	|| next_hop_address.is_set
	|| node_hop_count.is_set
	|| outbound_frr_state.is_set
	|| path_reeval_query_mid.is_set
	|| path_rro_enabled.is_set
	|| path_using_strict_spf.is_set
	|| pcalc_area.is_set
	|| previous_hop_address.is_set
	|| reverse_lsp_connected.is_set
	|| reverse_lsp_name.is_set
	|| reverse_lsp_present.is_set
	|| reverse_weight.is_set
	|| role.is_set
	|| s2l_local_label.is_set
	|| s2l_out_label.is_set
	|| s2l_reverse_ero_obj_present.is_set
	|| s2l_reverse_tspec_obj_present.is_set
	|| signalling_status.is_set
	|| time_since_last_preferred_path_exists_send_mid.is_set
	|| time_since_last_preferred_tree_exists_send_mid.is_set
	|| time_since_last_query_received_mid.is_set
	|| upstream_router_id.is_set
	|| uptime.is_set
	|| weight.is_set
	|| (active_path_option !=  nullptr && active_path_option->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (diversity_info !=  nullptr && diversity_info->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (fspec !=  nullptr && fspec->has_data())
	|| (generic_fspec !=  nullptr && generic_fspec->has_data())
	|| (generic_tspec !=  nullptr && generic_tspec->has_data())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_data())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_data())
	|| (in_xro !=  nullptr && in_xro->has_data())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_data())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_data())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_data())
	|| (otn_s2l !=  nullptr && otn_s2l->has_data())
	|| (out_xro !=  nullptr && out_xro->has_data())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_data())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_data())
	|| (s2l_fec !=  nullptr && s2l_fec->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (srlg_collection !=  nullptr && srlg_collection->has_data())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_data())
	|| (tspec !=  nullptr && tspec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::has_operation() const
{
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (auto const & leaf : s2l_reverse_lsp_sub_obj.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(abr_auto_discovered.operation)
	|| is_set(backup_tunnel_interface.operation)
	|| is_set(downstream_router_id.operation)
	|| is_set(egress_interface.operation)
	|| is_set(egress_interface_brief.operation)
	|| is_set(egress_interface_state.operation)
	|| is_set(expanded_ero_affinity_bits.operation)
	|| is_set(expanded_ero_affinity_mask.operation)
	|| is_set(expanded_ero_area_id.operation)
	|| is_set(expanded_ero_metric.operation)
	|| is_set(expanded_ero_metric_type.operation)
	|| is_set(frr_out_tunnel_interface.operation)
	|| is_set(incoming_address.operation)
	|| is_set(ingress_interface.operation)
	|| is_set(ingress_interface_brief.operation)
	|| is_set(ingress_interface_state.operation)
	|| is_set(is_bandwidth_protect.operation)
	|| is_set(is_expanded_ero.operation)
	|| is_set(is_frr_enabled.operation)
	|| is_set(is_node_protected.operation)
	|| is_set(is_optical.operation)
	|| is_set(local_router_id.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(node_hop_count.operation)
	|| is_set(outbound_frr_state.operation)
	|| is_set(path_reeval_query_mid.operation)
	|| is_set(path_rro_enabled.operation)
	|| is_set(path_using_strict_spf.operation)
	|| is_set(pcalc_area.operation)
	|| is_set(previous_hop_address.operation)
	|| is_set(reverse_lsp_connected.operation)
	|| is_set(reverse_lsp_name.operation)
	|| is_set(reverse_lsp_present.operation)
	|| is_set(reverse_weight.operation)
	|| is_set(role.operation)
	|| is_set(s2l_local_label.operation)
	|| is_set(s2l_out_label.operation)
	|| is_set(s2l_reverse_ero_obj_present.operation)
	|| is_set(s2l_reverse_lsp_sub_obj.operation)
	|| is_set(s2l_reverse_tspec_obj_present.operation)
	|| is_set(signalling_status.operation)
	|| is_set(time_since_last_preferred_path_exists_send_mid.operation)
	|| is_set(time_since_last_preferred_tree_exists_send_mid.operation)
	|| is_set(time_since_last_query_received_mid.operation)
	|| is_set(upstream_router_id.operation)
	|| is_set(uptime.operation)
	|| is_set(weight.operation)
	|| (active_path_option !=  nullptr && active_path_option->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (diversity_info !=  nullptr && diversity_info->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (fspec !=  nullptr && fspec->has_operation())
	|| (generic_fspec !=  nullptr && generic_fspec->has_operation())
	|| (generic_tspec !=  nullptr && generic_tspec->has_operation())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_operation())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_operation())
	|| (in_xro !=  nullptr && in_xro->has_operation())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_operation())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_operation())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_operation())
	|| (otn_s2l !=  nullptr && otn_s2l->has_operation())
	|| (out_xro !=  nullptr && out_xro->has_operation())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_operation())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_operation())
	|| (s2l_fec !=  nullptr && s2l_fec->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (srlg_collection !=  nullptr && srlg_collection->has_operation())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_operation())
	|| (tspec !=  nullptr && tspec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abr_auto_discovered.is_set || is_set(abr_auto_discovered.operation)) leaf_name_data.push_back(abr_auto_discovered.get_name_leafdata());
    if (backup_tunnel_interface.is_set || is_set(backup_tunnel_interface.operation)) leaf_name_data.push_back(backup_tunnel_interface.get_name_leafdata());
    if (downstream_router_id.is_set || is_set(downstream_router_id.operation)) leaf_name_data.push_back(downstream_router_id.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.operation)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (egress_interface_brief.is_set || is_set(egress_interface_brief.operation)) leaf_name_data.push_back(egress_interface_brief.get_name_leafdata());
    if (egress_interface_state.is_set || is_set(egress_interface_state.operation)) leaf_name_data.push_back(egress_interface_state.get_name_leafdata());
    if (expanded_ero_affinity_bits.is_set || is_set(expanded_ero_affinity_bits.operation)) leaf_name_data.push_back(expanded_ero_affinity_bits.get_name_leafdata());
    if (expanded_ero_affinity_mask.is_set || is_set(expanded_ero_affinity_mask.operation)) leaf_name_data.push_back(expanded_ero_affinity_mask.get_name_leafdata());
    if (expanded_ero_area_id.is_set || is_set(expanded_ero_area_id.operation)) leaf_name_data.push_back(expanded_ero_area_id.get_name_leafdata());
    if (expanded_ero_metric.is_set || is_set(expanded_ero_metric.operation)) leaf_name_data.push_back(expanded_ero_metric.get_name_leafdata());
    if (expanded_ero_metric_type.is_set || is_set(expanded_ero_metric_type.operation)) leaf_name_data.push_back(expanded_ero_metric_type.get_name_leafdata());
    if (frr_out_tunnel_interface.is_set || is_set(frr_out_tunnel_interface.operation)) leaf_name_data.push_back(frr_out_tunnel_interface.get_name_leafdata());
    if (incoming_address.is_set || is_set(incoming_address.operation)) leaf_name_data.push_back(incoming_address.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.operation)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (ingress_interface_brief.is_set || is_set(ingress_interface_brief.operation)) leaf_name_data.push_back(ingress_interface_brief.get_name_leafdata());
    if (ingress_interface_state.is_set || is_set(ingress_interface_state.operation)) leaf_name_data.push_back(ingress_interface_state.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.operation)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (is_expanded_ero.is_set || is_set(is_expanded_ero.operation)) leaf_name_data.push_back(is_expanded_ero.get_name_leafdata());
    if (is_frr_enabled.is_set || is_set(is_frr_enabled.operation)) leaf_name_data.push_back(is_frr_enabled.get_name_leafdata());
    if (is_node_protected.is_set || is_set(is_node_protected.operation)) leaf_name_data.push_back(is_node_protected.get_name_leafdata());
    if (is_optical.is_set || is_set(is_optical.operation)) leaf_name_data.push_back(is_optical.get_name_leafdata());
    if (local_router_id.is_set || is_set(local_router_id.operation)) leaf_name_data.push_back(local_router_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.operation)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.operation)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (path_reeval_query_mid.is_set || is_set(path_reeval_query_mid.operation)) leaf_name_data.push_back(path_reeval_query_mid.get_name_leafdata());
    if (path_rro_enabled.is_set || is_set(path_rro_enabled.operation)) leaf_name_data.push_back(path_rro_enabled.get_name_leafdata());
    if (path_using_strict_spf.is_set || is_set(path_using_strict_spf.operation)) leaf_name_data.push_back(path_using_strict_spf.get_name_leafdata());
    if (pcalc_area.is_set || is_set(pcalc_area.operation)) leaf_name_data.push_back(pcalc_area.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.operation)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.operation)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_name.is_set || is_set(reverse_lsp_name.operation)) leaf_name_data.push_back(reverse_lsp_name.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.operation)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());
    if (reverse_weight.is_set || is_set(reverse_weight.operation)) leaf_name_data.push_back(reverse_weight.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (s2l_local_label.is_set || is_set(s2l_local_label.operation)) leaf_name_data.push_back(s2l_local_label.get_name_leafdata());
    if (s2l_out_label.is_set || is_set(s2l_out_label.operation)) leaf_name_data.push_back(s2l_out_label.get_name_leafdata());
    if (s2l_reverse_ero_obj_present.is_set || is_set(s2l_reverse_ero_obj_present.operation)) leaf_name_data.push_back(s2l_reverse_ero_obj_present.get_name_leafdata());
    if (s2l_reverse_tspec_obj_present.is_set || is_set(s2l_reverse_tspec_obj_present.operation)) leaf_name_data.push_back(s2l_reverse_tspec_obj_present.get_name_leafdata());
    if (signalling_status.is_set || is_set(signalling_status.operation)) leaf_name_data.push_back(signalling_status.get_name_leafdata());
    if (time_since_last_preferred_path_exists_send_mid.is_set || is_set(time_since_last_preferred_path_exists_send_mid.operation)) leaf_name_data.push_back(time_since_last_preferred_path_exists_send_mid.get_name_leafdata());
    if (time_since_last_preferred_tree_exists_send_mid.is_set || is_set(time_since_last_preferred_tree_exists_send_mid.operation)) leaf_name_data.push_back(time_since_last_preferred_tree_exists_send_mid.get_name_leafdata());
    if (time_since_last_query_received_mid.is_set || is_set(time_since_last_query_received_mid.operation)) leaf_name_data.push_back(time_since_last_query_received_mid.get_name_leafdata());
    if (upstream_router_id.is_set || is_set(upstream_router_id.operation)) leaf_name_data.push_back(upstream_router_id.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto s2l_reverse_lsp_sub_obj_name_datas = s2l_reverse_lsp_sub_obj.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), s2l_reverse_lsp_sub_obj_name_datas.begin(), s2l_reverse_lsp_sub_obj_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-path-option")
    {
        if(active_path_option != nullptr)
        {
            children["active-path-option"] = active_path_option;
        }
        else
        {
            active_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption>();
            active_path_option->parent = this;
            children["active-path-option"] = active_path_option;
        }
        return children.at("active-path-option");
    }

    if(child_yang_name == "association")
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
        else
        {
            association = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Association>();
            association->parent = this;
            children["association"] = association;
        }
        return children.at("association");
    }

    if(child_yang_name == "diversity-info")
    {
        if(diversity_info != nullptr)
        {
            children["diversity-info"] = diversity_info;
        }
        else
        {
            diversity_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::DiversityInfo>();
            diversity_info->parent = this;
            children["diversity-info"] = diversity_info;
        }
        return children.at("diversity-info");
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info != nullptr)
        {
            children["flex-info"] = flex_info;
        }
        else
        {
            flex_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::FlexInfo>();
            flex_info->parent = this;
            children["flex-info"] = flex_info;
        }
        return children.at("flex-info");
    }

    if(child_yang_name == "fspec")
    {
        if(fspec != nullptr)
        {
            children["fspec"] = fspec;
        }
        else
        {
            fspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Fspec>();
            fspec->parent = this;
            children["fspec"] = fspec;
        }
        return children.at("fspec");
    }

    if(child_yang_name == "generic-fspec")
    {
        if(generic_fspec != nullptr)
        {
            children["generic-fspec"] = generic_fspec;
        }
        else
        {
            generic_fspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GenericFspec>();
            generic_fspec->parent = this;
            children["generic-fspec"] = generic_fspec;
        }
        return children.at("generic-fspec");
    }

    if(child_yang_name == "generic-tspec")
    {
        if(generic_tspec != nullptr)
        {
            children["generic-tspec"] = generic_tspec;
        }
        else
        {
            generic_tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GenericTspec>();
            generic_tspec->parent = this;
            children["generic-tspec"] = generic_tspec;
        }
        return children.at("generic-tspec");
    }

    if(child_yang_name == "gmpls-labels")
    {
        if(gmpls_labels != nullptr)
        {
            children["gmpls-labels"] = gmpls_labels;
        }
        else
        {
            gmpls_labels = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::GmplsLabels>();
            gmpls_labels->parent = this;
            children["gmpls-labels"] = gmpls_labels;
        }
        return children.at("gmpls-labels");
    }

    if(child_yang_name == "head-end-bfd-info")
    {
        if(head_end_bfd_info != nullptr)
        {
            children["head-end-bfd-info"] = head_end_bfd_info;
        }
        else
        {
            head_end_bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::HeadEndBfdInfo>();
            head_end_bfd_info->parent = this;
            children["head-end-bfd-info"] = head_end_bfd_info;
        }
        return children.at("head-end-bfd-info");
    }

    if(child_yang_name == "in-ero")
    {
        for(auto const & c : in_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InEro>();
        c->parent = this;
        in_ero.push_back(std::move(c));
        children[segment_path] = in_ero.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "in-xro")
    {
        if(in_xro != nullptr)
        {
            children["in-xro"] = in_xro;
        }
        else
        {
            in_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro>();
            in_xro->parent = this;
            children["in-xro"] = in_xro;
        }
        return children.at("in-xro");
    }

    if(child_yang_name == "incoming-address-generic")
    {
        if(incoming_address_generic != nullptr)
        {
            children["incoming-address-generic"] = incoming_address_generic;
        }
        else
        {
            incoming_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::IncomingAddressGeneric>();
            incoming_address_generic->parent = this;
            children["incoming-address-generic"] = incoming_address_generic;
        }
        return children.at("incoming-address-generic");
    }

    if(child_yang_name == "lsp-wrap-info")
    {
        if(lsp_wrap_info != nullptr)
        {
            children["lsp-wrap-info"] = lsp_wrap_info;
        }
        else
        {
            lsp_wrap_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::LspWrapInfo>();
            lsp_wrap_info->parent = this;
            children["lsp-wrap-info"] = lsp_wrap_info;
        }
        return children.at("lsp-wrap-info");
    }

    if(child_yang_name == "next-hop-address-generic")
    {
        if(next_hop_address_generic != nullptr)
        {
            children["next-hop-address-generic"] = next_hop_address_generic;
        }
        else
        {
            next_hop_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::NextHopAddressGeneric>();
            next_hop_address_generic->parent = this;
            children["next-hop-address-generic"] = next_hop_address_generic;
        }
        return children.at("next-hop-address-generic");
    }

    if(child_yang_name == "otn-s2l")
    {
        if(otn_s2l != nullptr)
        {
            children["otn-s2l"] = otn_s2l;
        }
        else
        {
            otn_s2l = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OtnS2L>();
            otn_s2l->parent = this;
            children["otn-s2l"] = otn_s2l;
        }
        return children.at("otn-s2l");
    }

    if(child_yang_name == "out-ero")
    {
        for(auto const & c : out_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutEro>();
        c->parent = this;
        out_ero.push_back(std::move(c));
        children[segment_path] = out_ero.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "out-xro")
    {
        if(out_xro != nullptr)
        {
            children["out-xro"] = out_xro;
        }
        else
        {
            out_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro>();
            out_xro->parent = this;
            children["out-xro"] = out_xro;
        }
        return children.at("out-xro");
    }

    if(child_yang_name == "path-affinity-array")
    {
        for(auto const & c : path_affinity_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathAffinityArray>();
        c->parent = this;
        path_affinity_array.push_back(std::move(c));
        children[segment_path] = path_affinity_array.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "path-rro")
    {
        for(auto const & c : path_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PathRro>();
        c->parent = this;
        path_rro.push_back(std::move(c));
        children[segment_path] = path_rro.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "previous-hop-address-generic")
    {
        if(previous_hop_address_generic != nullptr)
        {
            children["previous-hop-address-generic"] = previous_hop_address_generic;
        }
        else
        {
            previous_hop_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::PreviousHopAddressGeneric>();
            previous_hop_address_generic->parent = this;
            children["previous-hop-address-generic"] = previous_hop_address_generic;
        }
        return children.at("previous-hop-address-generic");
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
        else
        {
            protection = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Protection>();
            protection->parent = this;
            children["protection"] = protection;
        }
        return children.at("protection");
    }

    if(child_yang_name == "resv-rro")
    {
        for(auto const & c : resv_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ResvRro>();
        c->parent = this;
        resv_rro.push_back(std::move(c));
        children[segment_path] = resv_rro.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reverse-ero-in")
    {
        for(auto const & c : reverse_ero_in)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseEroIn>();
        c->parent = this;
        reverse_ero_in.push_back(std::move(c));
        children[segment_path] = reverse_ero_in.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec != nullptr)
        {
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
        else
        {
            reverse_lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseLspFec>();
            reverse_lsp_fec->parent = this;
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
        return children.at("reverse-lsp-fec");
    }

    if(child_yang_name == "reverse-tspec")
    {
        if(reverse_tspec != nullptr)
        {
            children["reverse-tspec"] = reverse_tspec;
        }
        else
        {
            reverse_tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ReverseTspec>();
            reverse_tspec->parent = this;
            children["reverse-tspec"] = reverse_tspec;
        }
        return children.at("reverse-tspec");
    }

    if(child_yang_name == "s2l-convergence")
    {
        if(s2l_convergence != nullptr)
        {
            children["s2l-convergence"] = s2l_convergence;
        }
        else
        {
            s2l_convergence = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LConvergence>();
            s2l_convergence->parent = this;
            children["s2l-convergence"] = s2l_convergence;
        }
        return children.at("s2l-convergence");
    }

    if(child_yang_name == "s2l-fec")
    {
        if(s2l_fec != nullptr)
        {
            children["s2l-fec"] = s2l_fec;
        }
        else
        {
            s2l_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec>();
            s2l_fec->parent = this;
            children["s2l-fec"] = s2l_fec;
        }
        return children.at("s2l-fec");
    }

    if(child_yang_name == "s2l-segment-routing-path")
    {
        for(auto const & c : s2l_segment_routing_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LSegmentRoutingPath>();
        c->parent = this;
        s2l_segment_routing_path.push_back(std::move(c));
        children[segment_path] = s2l_segment_routing_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
        else
        {
            soft_preemption = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SoftPreemption>();
            soft_preemption->parent = this;
            children["soft-preemption"] = soft_preemption;
        }
        return children.at("soft-preemption");
    }

    if(child_yang_name == "srlg-collection")
    {
        if(srlg_collection != nullptr)
        {
            children["srlg-collection"] = srlg_collection;
        }
        else
        {
            srlg_collection = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::SrlgCollection>();
            srlg_collection->parent = this;
            children["srlg-collection"] = srlg_collection;
        }
        return children.at("srlg-collection");
    }

    if(child_yang_name == "tail-end-bfd-info")
    {
        if(tail_end_bfd_info != nullptr)
        {
            children["tail-end-bfd-info"] = tail_end_bfd_info;
        }
        else
        {
            tail_end_bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::TailEndBfdInfo>();
            tail_end_bfd_info->parent = this;
            children["tail-end-bfd-info"] = tail_end_bfd_info;
        }
        return children.at("tail-end-bfd-info");
    }

    if(child_yang_name == "tspec")
    {
        if(tspec != nullptr)
        {
            children["tspec"] = tspec;
        }
        else
        {
            tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::Tspec>();
            tspec->parent = this;
            children["tspec"] = tspec;
        }
        return children.at("tspec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::get_children()
{
    if(children.find("active-path-option") == children.end())
    {
        if(active_path_option != nullptr)
        {
            children["active-path-option"] = active_path_option;
        }
    }

    if(children.find("association") == children.end())
    {
        if(association != nullptr)
        {
            children["association"] = association;
        }
    }

    if(children.find("diversity-info") == children.end())
    {
        if(diversity_info != nullptr)
        {
            children["diversity-info"] = diversity_info;
        }
    }

    if(children.find("flex-info") == children.end())
    {
        if(flex_info != nullptr)
        {
            children["flex-info"] = flex_info;
        }
    }

    if(children.find("fspec") == children.end())
    {
        if(fspec != nullptr)
        {
            children["fspec"] = fspec;
        }
    }

    if(children.find("generic-fspec") == children.end())
    {
        if(generic_fspec != nullptr)
        {
            children["generic-fspec"] = generic_fspec;
        }
    }

    if(children.find("generic-tspec") == children.end())
    {
        if(generic_tspec != nullptr)
        {
            children["generic-tspec"] = generic_tspec;
        }
    }

    if(children.find("gmpls-labels") == children.end())
    {
        if(gmpls_labels != nullptr)
        {
            children["gmpls-labels"] = gmpls_labels;
        }
    }

    if(children.find("head-end-bfd-info") == children.end())
    {
        if(head_end_bfd_info != nullptr)
        {
            children["head-end-bfd-info"] = head_end_bfd_info;
        }
    }

    for (auto const & c : in_ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("in-xro") == children.end())
    {
        if(in_xro != nullptr)
        {
            children["in-xro"] = in_xro;
        }
    }

    if(children.find("incoming-address-generic") == children.end())
    {
        if(incoming_address_generic != nullptr)
        {
            children["incoming-address-generic"] = incoming_address_generic;
        }
    }

    if(children.find("lsp-wrap-info") == children.end())
    {
        if(lsp_wrap_info != nullptr)
        {
            children["lsp-wrap-info"] = lsp_wrap_info;
        }
    }

    if(children.find("next-hop-address-generic") == children.end())
    {
        if(next_hop_address_generic != nullptr)
        {
            children["next-hop-address-generic"] = next_hop_address_generic;
        }
    }

    if(children.find("otn-s2l") == children.end())
    {
        if(otn_s2l != nullptr)
        {
            children["otn-s2l"] = otn_s2l;
        }
    }

    for (auto const & c : out_ero)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("out-xro") == children.end())
    {
        if(out_xro != nullptr)
        {
            children["out-xro"] = out_xro;
        }
    }

    for (auto const & c : path_affinity_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : path_rro)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("previous-hop-address-generic") == children.end())
    {
        if(previous_hop_address_generic != nullptr)
        {
            children["previous-hop-address-generic"] = previous_hop_address_generic;
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection;
        }
    }

    for (auto const & c : resv_rro)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reverse_ero_in)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("reverse-lsp-fec") == children.end())
    {
        if(reverse_lsp_fec != nullptr)
        {
            children["reverse-lsp-fec"] = reverse_lsp_fec;
        }
    }

    if(children.find("reverse-tspec") == children.end())
    {
        if(reverse_tspec != nullptr)
        {
            children["reverse-tspec"] = reverse_tspec;
        }
    }

    if(children.find("s2l-convergence") == children.end())
    {
        if(s2l_convergence != nullptr)
        {
            children["s2l-convergence"] = s2l_convergence;
        }
    }

    if(children.find("s2l-fec") == children.end())
    {
        if(s2l_fec != nullptr)
        {
            children["s2l-fec"] = s2l_fec;
        }
    }

    for (auto const & c : s2l_segment_routing_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("soft-preemption") == children.end())
    {
        if(soft_preemption != nullptr)
        {
            children["soft-preemption"] = soft_preemption;
        }
    }

    if(children.find("srlg-collection") == children.end())
    {
        if(srlg_collection != nullptr)
        {
            children["srlg-collection"] = srlg_collection;
        }
    }

    if(children.find("tail-end-bfd-info") == children.end())
    {
        if(tail_end_bfd_info != nullptr)
        {
            children["tail-end-bfd-info"] = tail_end_bfd_info;
        }
    }

    if(children.find("tspec") == children.end())
    {
        if(tspec != nullptr)
        {
            children["tspec"] = tspec;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered = value;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface = value;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id = value;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief = value;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state = value;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits = value;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask = value;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id = value;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric = value;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type = value;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface = value;
    }
    if(value_path == "incoming-address")
    {
        incoming_address = value;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief = value;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state = value;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero = value;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled = value;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected = value;
    }
    if(value_path == "is-optical")
    {
        is_optical = value;
    }
    if(value_path == "local-router-id")
    {
        local_router_id = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid = value;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled = value;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf = value;
    }
    if(value_path == "pcalc-area")
    {
        pcalc_area = value;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name = value;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label = value;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label = value;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present = value;
    }
    if(value_path == "s2l-reverse-lsp-sub-obj")
    {
        s2l_reverse_lsp_sub_obj.append(value);
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present = value;
    }
    if(value_path == "signalling-status")
    {
        signalling_status = value;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid = value;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid = value;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid = value;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::S2LFec()
    :
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{
    yang_name = "s2l-fec"; yang_parent_name = "s2l";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::~S2LFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::has_data() const
{
    return s2l_fec_ctype.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_subgroup_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::has_operation() const
{
    return is_set(operation)
	|| is_set(s2l_fec_ctype.operation)
	|| is_set(s2l_fec_dest.operation)
	|| is_set(s2l_fec_extended_tunnel_id.operation)
	|| is_set(s2l_fec_lsp_id.operation)
	|| is_set(s2l_fec_p2mp_id.operation)
	|| is_set(s2l_fec_source.operation)
	|| is_set(s2l_fec_subgroup_id.operation)
	|| is_set(s2l_fec_subgroup_originator.operation)
	|| is_set(s2l_fec_tunnel_id.operation)
	|| is_set(s2l_fec_vrf.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-fec";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.operation)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.operation)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.operation)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.operation)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.operation)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.operation)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.operation)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.operation)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.operation)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::S2LFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
    }
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::ActivePathOption()
    :
    attribute_set_found{YType::boolean, "attribute-set-found"},
    explicit_path_id{YType::uint16, "explicit-path-id"},
    explicit_path_name{YType::str, "explicit-path-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    has_xro_attribute_set{YType::boolean, "has-xro-attribute-set"},
    holddown_duration{YType::uint16, "holddown-duration"},
    is_disabled{YType::boolean, "is-disabled"},
    is_helddown{YType::boolean, "is-helddown"},
    is_lockdown{YType::boolean, "is-lockdown"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    is_strict_explicit_path{YType::boolean, "is-strict-explicit-path"},
    is_verbatim{YType::boolean, "is-verbatim"},
    option_index{YType::uint32, "option-index"},
    option_index_is_valid{YType::boolean, "option-index-is-valid"},
    path_option_area_id{YType::str, "path-option-area-id"},
    path_option_name{YType::str, "path-option-name"},
    path_option_type{YType::enumeration, "path-option-type"},
    pce_address{YType::str, "pce-address"},
    protected_by_path_option_index{YType::uint32, "protected-by-path-option-index"},
    restored_from_path_option_index{YType::uint32, "restored-from-path-option-index"},
    xro_attribute_set_found{YType::boolean, "xro-attribute-set-found"}
    	,
    attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet>())
	,xro_attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet>())
{
    attribute_set->parent = this;
    children["attribute-set"] = attribute_set;

    xro_attribute_set->parent = this;
    children["xro-attribute-set"] = xro_attribute_set;

    yang_name = "active-path-option"; yang_parent_name = "s2l";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::~ActivePathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_data())
            return true;
    }
    return attribute_set_found.is_set
	|| explicit_path_id.is_set
	|| explicit_path_name.is_set
	|| has_attribute_set.is_set
	|| has_xro_attribute_set.is_set
	|| holddown_duration.is_set
	|| is_disabled.is_set
	|| is_helddown.is_set
	|| is_lockdown.is_set
	|| is_segment_routing.is_set
	|| is_strict_explicit_path.is_set
	|| is_verbatim.is_set
	|| option_index.is_set
	|| option_index_is_valid.is_set
	|| path_option_area_id.is_set
	|| path_option_name.is_set
	|| path_option_type.is_set
	|| pce_address.is_set
	|| protected_by_path_option_index.is_set
	|| restored_from_path_option_index.is_set
	|| xro_attribute_set_found.is_set
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(attribute_set_found.operation)
	|| is_set(explicit_path_id.operation)
	|| is_set(explicit_path_name.operation)
	|| is_set(has_attribute_set.operation)
	|| is_set(has_xro_attribute_set.operation)
	|| is_set(holddown_duration.operation)
	|| is_set(is_disabled.operation)
	|| is_set(is_helddown.operation)
	|| is_set(is_lockdown.operation)
	|| is_set(is_segment_routing.operation)
	|| is_set(is_strict_explicit_path.operation)
	|| is_set(is_verbatim.operation)
	|| is_set(option_index.operation)
	|| is_set(option_index_is_valid.operation)
	|| is_set(path_option_area_id.operation)
	|| is_set(path_option_name.operation)
	|| is_set(path_option_type.operation)
	|| is_set(pce_address.operation)
	|| is_set(protected_by_path_option_index.operation)
	|| is_set(restored_from_path_option_index.operation)
	|| is_set(xro_attribute_set_found.operation)
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-path-option";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActivePathOption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_found.is_set || is_set(attribute_set_found.operation)) leaf_name_data.push_back(attribute_set_found.get_name_leafdata());
    if (explicit_path_id.is_set || is_set(explicit_path_id.operation)) leaf_name_data.push_back(explicit_path_id.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.operation)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.operation)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (has_xro_attribute_set.is_set || is_set(has_xro_attribute_set.operation)) leaf_name_data.push_back(has_xro_attribute_set.get_name_leafdata());
    if (holddown_duration.is_set || is_set(holddown_duration.operation)) leaf_name_data.push_back(holddown_duration.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.operation)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (is_helddown.is_set || is_set(is_helddown.operation)) leaf_name_data.push_back(is_helddown.get_name_leafdata());
    if (is_lockdown.is_set || is_set(is_lockdown.operation)) leaf_name_data.push_back(is_lockdown.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.operation)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (is_strict_explicit_path.is_set || is_set(is_strict_explicit_path.operation)) leaf_name_data.push_back(is_strict_explicit_path.get_name_leafdata());
    if (is_verbatim.is_set || is_set(is_verbatim.operation)) leaf_name_data.push_back(is_verbatim.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.operation)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (option_index_is_valid.is_set || is_set(option_index_is_valid.operation)) leaf_name_data.push_back(option_index_is_valid.get_name_leafdata());
    if (path_option_area_id.is_set || is_set(path_option_area_id.operation)) leaf_name_data.push_back(path_option_area_id.get_name_leafdata());
    if (path_option_name.is_set || is_set(path_option_name.operation)) leaf_name_data.push_back(path_option_name.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.operation)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.operation)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (protected_by_path_option_index.is_set || is_set(protected_by_path_option_index.operation)) leaf_name_data.push_back(protected_by_path_option_index.get_name_leafdata());
    if (restored_from_path_option_index.is_set || is_set(restored_from_path_option_index.operation)) leaf_name_data.push_back(restored_from_path_option_index.get_name_leafdata());
    if (xro_attribute_set_found.is_set || is_set(xro_attribute_set_found.operation)) leaf_name_data.push_back(xro_attribute_set_found.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set")
    {
        if(attribute_set != nullptr)
        {
            children["attribute-set"] = attribute_set;
        }
        else
        {
            attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet>();
            attribute_set->parent = this;
            children["attribute-set"] = attribute_set;
        }
        return children.at("attribute-set");
    }

    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(std::move(c));
        children[segment_path] = path_calculation_error.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "remerge-error")
    {
        for(auto const & c : remerge_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError>();
        c->parent = this;
        remerge_error.push_back(std::move(c));
        children[segment_path] = remerge_error.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "signalling-error")
    {
        for(auto const & c : signalling_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError>();
        c->parent = this;
        signalling_error.push_back(std::move(c));
        children[segment_path] = signalling_error.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set != nullptr)
        {
            children["xro-attribute-set"] = xro_attribute_set;
        }
        else
        {
            xro_attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet>();
            xro_attribute_set->parent = this;
            children["xro-attribute-set"] = xro_attribute_set;
        }
        return children.at("xro-attribute-set");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::get_children()
{
    if(children.find("attribute-set") == children.end())
    {
        if(attribute_set != nullptr)
        {
            children["attribute-set"] = attribute_set;
        }
    }

    for (auto const & c : path_calculation_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : remerge_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : signalling_error)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("xro-attribute-set") == children.end())
    {
        if(xro_attribute_set != nullptr)
        {
            children["xro-attribute-set"] = xro_attribute_set;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-set-found")
    {
        attribute_set_found = value;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id = value;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set = value;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration = value;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
    }
    if(value_path == "is-helddown")
    {
        is_helddown = value;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown = value;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path = value;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim = value;
    }
    if(value_path == "option-index")
    {
        option_index = value;
    }
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid = value;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id = value;
    }
    if(value_path == "path-option-name")
    {
        path_option_name = value;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index = value;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index = value;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;
    children["attribute-set-union"] = attribute_set_union;

    yang_name = "attribute-set"; yang_parent_name = "active-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::~AttributeSet()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_attribute_set_name_crc32.operation)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSet' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.operation)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.operation)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
        else
        {
            attribute_set_union = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>();
            attribute_set_union->parent = this;
            children["attribute-set-union"] = attribute_set_union;
        }
        return children.at("attribute-set-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::get_children()
{
    if(children.find("attribute-set-union") == children.end())
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;
    children["attribute-set-aps-pp"] = attribute_set_aps_pp;

    attribute_set_autobackup->parent = this;
    children["attribute-set-autobackup"] = attribute_set_autobackup;

    attribute_set_automesh->parent = this;
    children["attribute-set-automesh"] = attribute_set_automesh;

    attribute_set_p2mpte->parent = this;
    children["attribute-set-p2mpte"] = attribute_set_p2mpte;

    attribute_set_p2p_te->parent = this;
    children["attribute-set-p2p-te"] = attribute_set_p2p_te;

    attribute_set_path_option->parent = this;
    children["attribute-set-path-option"] = attribute_set_path_option;

    attribute_set_xro->parent = this;
    children["attribute-set-xro"] = attribute_set_xro;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_type.operation)
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetUnion' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.operation)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        else
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
            attribute_set_aps_pp->parent = this;
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        return children.at("attribute-set-aps-pp");
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        else
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
            attribute_set_autobackup->parent = this;
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        return children.at("attribute-set-autobackup");
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        else
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
            attribute_set_automesh->parent = this;
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        return children.at("attribute-set-automesh");
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        else
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
            attribute_set_p2mpte->parent = this;
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        return children.at("attribute-set-p2mpte");
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        else
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
            attribute_set_p2p_te->parent = this;
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        return children.at("attribute-set-p2p-te");
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        else
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
            attribute_set_path_option->parent = this;
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        return children.at("attribute-set-path-option");
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
        else
        {
            attribute_set_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>();
            attribute_set_xro->parent = this;
            children["attribute-set-xro"] = attribute_set_xro;
        }
        return children.at("attribute-set-xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_children()
{
    if(children.find("attribute-set-aps-pp") == children.end())
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
    }

    if(children.find("attribute-set-autobackup") == children.end())
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
    }

    if(children.find("attribute-set-automesh") == children.end())
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
    }

    if(children.find("attribute-set-p2mpte") == children.end())
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
    }

    if(children.find("attribute-set-p2p-te") == children.end())
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
    }

    if(children.find("attribute-set-path-option") == children.end())
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
    }

    if(children.find("attribute-set-xro") == children.end())
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    exclude_list_name{YType::str, "exclude-list-name"},
    generation{YType::uint32, "generation"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    bfd_reverse_path->parent = this;
    children["bfd-reverse-path"] = bfd_reverse_path;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_type.is_set
	|| configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| exclude_list_name.is_set
	|| generation.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(cost_limit.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(exclude_list_name.operation)
	|| is_set(generation.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_bfd_reverse_pat_configured.operation)
	|| is_set(is_cost_limit_configured.operation)
	|| is_set(is_exclude_list_name_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetPathOption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.operation)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.operation)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.operation)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.operation)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.operation)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        else
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
            bfd_reverse_path->parent = this;
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        return children.at("bfd-reverse-path");
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(std::move(c));
        children[segment_path] = version_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("bfd-reverse-path") == children.end())
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
    }

    for (auto const & c : version_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdReversePath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{
    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_type.operation)
	|| is_set(generation.operation)
	|| is_set(is_default.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.operation)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    signalled_name->parent = this;
    children["signalled-name"] = signalled_name;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| is_signalled_name_configured.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signalled_name !=  nullptr && signalled_name->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(is_signalled_name_configured.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signalled_name !=  nullptr && signalled_name->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutobackup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.operation)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(std::move(c));
        children[segment_path] = protected_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
        else
        {
            signalled_name = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
            signalled_name->parent = this;
            children["signalled-name"] = signalled_name;
        }
        return children.at("signalled-name");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    for (auto const & c : protected_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("signalled-name") == children.end())
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(operation)
	|| is_set(is_mp_addresses.operation)
	|| is_set(name.operation)
	|| is_set(protected_interface_type.operation)
	|| is_set(source_type.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalledName' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mp_addresses.is_set || is_set(is_mp_addresses.operation)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.operation)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.operation)) leaf_name_data.push_back(source_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
    }
    if(value_path == "source-type")
    {
        source_type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_interface.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectedInterface' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.operation)) leaf_name_data.push_back(protected_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    bandwidth{YType::uint32, "bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    forward_class{YType::uint32, "forward-class"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    load_share{YType::uint32, "load-share"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| bandwidth.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| forward_class.is_set
	|| frr_bandwidth_protection.is_set
	|| frr_node_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_interface_bw_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| load_share.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| soft_preemption_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(auto_bandwidth_collect.operation)
	|| is_set(auto_route_announce.operation)
	|| is_set(bandwidth.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(forward_class.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(frr_node_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_interface_bw_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(load_share.operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preemption_configured.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutomesh' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.operation)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.operation)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.operation)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.operation)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.operation)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());

    auto mesh_group_id_name_datas = mesh_group_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mesh_group_id_name_datas.begin(), mesh_group_id_name_datas.end());
    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.append(value);
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-automesh";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;
    children["xro"] = xro;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(operation)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro")
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
        else
        {
            xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
            xro->parent = this;
            children["xro"] = xro;
        }
        return children.at("xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children()
{
    if(children.find("xro") == children.end())
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.operation)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(std::move(c));
        children[segment_path] = xro_subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children()
{
    for (auto const & c : xro_subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    children["as-subobject"] = as_subobject;

    ipv4_subobject->parent = this;
    children["ipv4-subobject"] = ipv4_subobject;

    ipv6_subobject->parent = this;
    children["ipv6-subobject"] = ipv6_subobject;

    lsp_subobject->parent = this;
    children["lsp-subobject"] = lsp_subobject;

    srlg_subobject->parent = this;
    children["srlg-subobject"] = srlg_subobject;

    unnumbered_subobject->parent = this;
    children["unnumbered-subobject"] = unnumbered_subobject;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
        else
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
            as_subobject->parent = this;
            children["as-subobject"] = as_subobject;
        }
        return children.at("as-subobject");
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
        else
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
            ipv4_subobject->parent = this;
            children["ipv4-subobject"] = ipv4_subobject;
        }
        return children.at("ipv4-subobject");
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
        else
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
            ipv6_subobject->parent = this;
            children["ipv6-subobject"] = ipv6_subobject;
        }
        return children.at("ipv6-subobject");
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
        else
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
            lsp_subobject->parent = this;
            children["lsp-subobject"] = lsp_subobject;
        }
        return children.at("lsp-subobject");
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
        else
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
            srlg_subobject->parent = this;
            children["srlg-subobject"] = srlg_subobject;
        }
        return children.at("srlg-subobject");
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        else
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
            unnumbered_subobject->parent = this;
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        return children.at("unnumbered-subobject");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children()
{
    if(children.find("as-subobject") == children.end())
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
    }

    if(children.find("ipv4-subobject") == children.end())
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
    }

    if(children.find("ipv6-subobject") == children.end())
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
    }

    if(children.find("lsp-subobject") == children.end())
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
    }

    if(children.find("srlg-subobject") == children.end())
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
    }

    if(children.find("unnumbered-subobject") == children.end())
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(exclusion_type.operation)
	|| is_set(srlg_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.operation)) leaf_name_data.push_back(srlg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;
    children["fec"] = fec;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_node_exception.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(ignore_lsp_id.operation)
	|| is_set(penultimate_node_exception.operation)
	|| is_set(processing_node_exception.operation)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.operation)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.operation)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.operation)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.operation)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
        else
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
            fec->parent = this;
            children["fec"] = fec;
        }
        return children.at("fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children()
{
    if(children.find("fec") == children.end())
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_priority_configured.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2Mpte' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    protection_type{YType::enumeration, "protection-type"},
    restoration_style{YType::enumeration, "restoration-style"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    revert_schedule(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;
    children["revert-schedule"] = revert_schedule;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| protection_mode.is_set
	|| protection_type.is_set
	|| restoration_style.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wait_to_restore_time.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_off_time.operation)
	|| is_set(path_prot_profile_type.operation)
	|| is_set(protection_mode.operation)
	|| is_set(protection_type.operation)
	|| is_set(restoration_style.operation)
	|| is_set(snc_mode.operation)
	|| is_set(tcm_id.operation)
	|| is_set(wait_to_restore_time.operation)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetApsPp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.operation)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.operation)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.operation)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.operation)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.operation)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.operation)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.operation)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
        else
        {
            revert_schedule = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
            revert_schedule->parent = this;
            children["revert-schedule"] = revert_schedule;
        }
        return children.at("revert-schedule");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children()
{
    if(children.find("revert-schedule") == children.end())
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(max_tries.operation)
	|| is_set(schedule_date.operation)
	|| is_set(schedule_frequency.operation)
	|| is_set(schedulename.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertSchedule' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.operation)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.operation)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.operation)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.operation)) leaf_name_data.push_back(schedulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
    }
    if(value_path == "schedulename")
    {
        schedulename = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    prepend_list->parent = this;
    children["prepend-list"] = prepend_list;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_affinity_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_select_configured.is_set
	|| is_path_selection_metric_configured.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| is_prepend_list_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| path_selection_segment_routing_margin.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_path_select_configured.operation)
	|| is_set(is_path_selection_metric_configured.operation)
	|| is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_relative.operation)
	|| is_set(is_path_selection_segment_routing_segment_limit_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(is_prepend_list_configured.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(path_selection_invalidation_action.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(path_selection_segment_routing_adjacency_protection.operation)
	|| is_set(path_selection_segment_routing_margin.operation)
	|| is_set(path_selection_segment_routing_segment_limit.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2PTe' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.operation)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.operation)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.operation)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.operation)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.operation)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.operation)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.operation)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
        else
        {
            prepend_list = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
            prepend_list->parent = this;
            children["prepend-list"] = prepend_list;
        }
        return children.at("prepend-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("prepend-list") == children.end())
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{
    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependList' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(std::move(c));
        children[segment_path] = prepend_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children()
{
    for (auto const & c : prepend_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{
    yang_name = "prepend-entry"; yang_parent_name = "prepend-list";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(next_label.operation)
	|| is_set(type.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.operation)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "next-label")
    {
        next_label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::XroAttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;
    children["attribute-set-union"] = attribute_set_union;

    yang_name = "xro-attribute-set"; yang_parent_name = "active-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::~XroAttributeSet()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_name.operation)
	|| is_set(tunnel_attribute_set_name_crc32.operation)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-attribute-set";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroAttributeSet' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.operation)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.operation)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
        else
        {
            attribute_set_union = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion>();
            attribute_set_union->parent = this;
            children["attribute-set-union"] = attribute_set_union;
        }
        return children.at("attribute-set-union");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::get_children()
{
    if(children.find("attribute-set-union") == children.end())
    {
        if(attribute_set_union != nullptr)
        {
            children["attribute-set-union"] = attribute_set_union;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_aps_pp(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_autobackup(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_p2mpte(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_p2p_te(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
	,attribute_set_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>())
{
    attribute_set_aps_pp->parent = this;
    children["attribute-set-aps-pp"] = attribute_set_aps_pp;

    attribute_set_autobackup->parent = this;
    children["attribute-set-autobackup"] = attribute_set_autobackup;

    attribute_set_automesh->parent = this;
    children["attribute-set-automesh"] = attribute_set_automesh;

    attribute_set_p2mpte->parent = this;
    children["attribute-set-p2mpte"] = attribute_set_p2mpte;

    attribute_set_p2p_te->parent = this;
    children["attribute-set-p2p-te"] = attribute_set_p2p_te;

    attribute_set_path_option->parent = this;
    children["attribute-set-path-option"] = attribute_set_path_option;

    attribute_set_xro->parent = this;
    children["attribute-set-xro"] = attribute_set_xro;

    yang_name = "attribute-set-union"; yang_parent_name = "xro-attribute-set";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_attribute_set_type.operation)
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation())
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetUnion' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.operation)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        else
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp>();
            attribute_set_aps_pp->parent = this;
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
        return children.at("attribute-set-aps-pp");
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        else
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
            attribute_set_autobackup->parent = this;
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
        return children.at("attribute-set-autobackup");
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        else
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
            attribute_set_automesh->parent = this;
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
        return children.at("attribute-set-automesh");
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        else
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
            attribute_set_p2mpte->parent = this;
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
        return children.at("attribute-set-p2mpte");
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        else
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
            attribute_set_p2p_te->parent = this;
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
        return children.at("attribute-set-p2p-te");
    }

    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        else
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption>();
            attribute_set_path_option->parent = this;
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
        return children.at("attribute-set-path-option");
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
        else
        {
            attribute_set_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro>();
            attribute_set_xro->parent = this;
            children["attribute-set-xro"] = attribute_set_xro;
        }
        return children.at("attribute-set-xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::get_children()
{
    if(children.find("attribute-set-aps-pp") == children.end())
    {
        if(attribute_set_aps_pp != nullptr)
        {
            children["attribute-set-aps-pp"] = attribute_set_aps_pp;
        }
    }

    if(children.find("attribute-set-autobackup") == children.end())
    {
        if(attribute_set_autobackup != nullptr)
        {
            children["attribute-set-autobackup"] = attribute_set_autobackup;
        }
    }

    if(children.find("attribute-set-automesh") == children.end())
    {
        if(attribute_set_automesh != nullptr)
        {
            children["attribute-set-automesh"] = attribute_set_automesh;
        }
    }

    if(children.find("attribute-set-p2mpte") == children.end())
    {
        if(attribute_set_p2mpte != nullptr)
        {
            children["attribute-set-p2mpte"] = attribute_set_p2mpte;
        }
    }

    if(children.find("attribute-set-p2p-te") == children.end())
    {
        if(attribute_set_p2p_te != nullptr)
        {
            children["attribute-set-p2p-te"] = attribute_set_p2p_te;
        }
    }

    if(children.find("attribute-set-path-option") == children.end())
    {
        if(attribute_set_path_option != nullptr)
        {
            children["attribute-set-path-option"] = attribute_set_path_option;
        }
    }

    if(children.find("attribute-set-xro") == children.end())
    {
        if(attribute_set_xro != nullptr)
        {
            children["attribute-set-xro"] = attribute_set_xro;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    exclude_list_name{YType::str, "exclude-list-name"},
    generation{YType::uint32, "generation"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    bfd_reverse_path->parent = this;
    children["bfd-reverse-path"] = bfd_reverse_path;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_type.is_set
	|| configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| exclude_list_name.is_set
	|| generation.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(cost_limit.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(exclude_list_name.operation)
	|| is_set(generation.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_bfd_reverse_pat_configured.operation)
	|| is_set(is_cost_limit_configured.operation)
	|| is_set(is_exclude_list_name_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(path_invalidation_action.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetPathOption' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.operation)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.operation)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.operation)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.operation)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.operation)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.operation)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        else
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
            bfd_reverse_path->parent = this;
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
        return children.at("bfd-reverse-path");
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(std::move(c));
        children[segment_path] = version_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("bfd-reverse-path") == children.end())
    {
        if(bfd_reverse_path != nullptr)
        {
            children["bfd-reverse-path"] = bfd_reverse_path;
        }
    }

    for (auto const & c : version_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(operation)
	|| is_set(binding_label.operation)
	|| is_set(path_type.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdReversePath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.operation)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{
    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_type.operation)
	|| is_set(generation.operation)
	|| is_set(is_default.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VersionInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.operation)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.operation)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.operation)) leaf_name_data.push_back(is_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
    }
    if(value_path == "generation")
    {
        generation = value;
    }
    if(value_path == "is-default")
    {
        is_default = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
	,signalled_name(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    signalled_name->parent = this;
    children["signalled-name"] = signalled_name;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| is_signalled_name_configured.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (signalled_name !=  nullptr && signalled_name->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(is_signalled_name_configured.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (signalled_name !=  nullptr && signalled_name->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutobackup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.operation)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(std::move(c));
        children[segment_path] = protected_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "signalled-name")
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
        else
        {
            signalled_name = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
            signalled_name->parent = this;
            children["signalled-name"] = signalled_name;
        }
        return children.at("signalled-name");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    for (auto const & c : protected_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("signalled-name") == children.end())
    {
        if(signalled_name != nullptr)
        {
            children["signalled-name"] = signalled_name;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    is_mp_addresses{YType::boolean, "is-mp-addresses"},
    name{YType::str, "name"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    source_type{YType::enumeration, "source-type"}
{
    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    return is_mp_addresses.is_set
	|| name.is_set
	|| protected_interface_type.is_set
	|| source_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(operation)
	|| is_set(is_mp_addresses.operation)
	|| is_set(name.operation)
	|| is_set(protected_interface_type.operation)
	|| is_set(source_type.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalledName' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mp_addresses.is_set || is_set(is_mp_addresses.operation)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.operation)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.operation)) leaf_name_data.push_back(source_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
    }
    if(value_path == "source-type")
    {
        source_type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{
    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    return protected_interface.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(protected_interface.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtectedInterface' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.operation)) leaf_name_data.push_back(protected_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    bandwidth{YType::uint32, "bandwidth"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    forward_class{YType::uint32, "forward-class"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    load_share{YType::uint32, "load-share"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    policy_class{YType::uint8, "policy-class"},
    policy_class_entry{YType::uint8, "policy-class-entry"},
    record_route{YType::boolean, "record-route"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| bandwidth.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| forward_class.is_set
	|| frr_bandwidth_protection.is_set
	|| frr_node_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_interface_bw_configured.is_set
	|| is_policyclass_configured.is_set
	|| is_priority_configured.is_set
	|| load_share.is_set
	|| policy_class.is_set
	|| record_route.is_set
	|| setup_priority.is_set
	|| soft_preemption_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (auto const & leaf : mesh_group_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : policy_class_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(auto_bandwidth_collect.operation)
	|| is_set(auto_route_announce.operation)
	|| is_set(bandwidth.operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(forward_class.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(frr_node_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_interface_bw_configured.operation)
	|| is_set(is_policyclass_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(load_share.operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(policy_class.operation)
	|| is_set(policy_class_entry.operation)
	|| is_set(record_route.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preemption_configured.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetAutomesh' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.operation)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.operation)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.operation)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.operation)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.operation)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.operation)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.operation)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.operation)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.operation)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());

    auto mesh_group_id_name_datas = mesh_group_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mesh_group_id_name_datas.begin(), mesh_group_id_name_datas.end());
    auto policy_class_entry_name_datas = policy_class_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_entry_name_datas.begin(), policy_class_entry_name_datas.end());
    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "load-share")
    {
        load_share = value;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.append(value);
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
    }
    if(value_path == "policy-class-entry")
    {
        policy_class_entry.append(value);
    }
    if(value_path == "record-route")
    {
        record_route = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-automesh";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;
    children["xro"] = xro;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(operation)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro")
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
        else
        {
            xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
            xro->parent = this;
            children["xro"] = xro;
        }
        return children.at("xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children()
{
    if(children.find("xro") == children.end())
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.operation)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(std::move(c));
        children[segment_path] = xro_subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children()
{
    for (auto const & c : xro_subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    children["as-subobject"] = as_subobject;

    ipv4_subobject->parent = this;
    children["ipv4-subobject"] = ipv4_subobject;

    ipv6_subobject->parent = this;
    children["ipv6-subobject"] = ipv6_subobject;

    lsp_subobject->parent = this;
    children["lsp-subobject"] = lsp_subobject;

    srlg_subobject->parent = this;
    children["srlg-subobject"] = srlg_subobject;

    unnumbered_subobject->parent = this;
    children["unnumbered-subobject"] = unnumbered_subobject;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
        else
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
            as_subobject->parent = this;
            children["as-subobject"] = as_subobject;
        }
        return children.at("as-subobject");
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
        else
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
            ipv4_subobject->parent = this;
            children["ipv4-subobject"] = ipv4_subobject;
        }
        return children.at("ipv4-subobject");
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
        else
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
            ipv6_subobject->parent = this;
            children["ipv6-subobject"] = ipv6_subobject;
        }
        return children.at("ipv6-subobject");
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
        else
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
            lsp_subobject->parent = this;
            children["lsp-subobject"] = lsp_subobject;
        }
        return children.at("lsp-subobject");
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
        else
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
            srlg_subobject->parent = this;
            children["srlg-subobject"] = srlg_subobject;
        }
        return children.at("srlg-subobject");
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        else
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
            unnumbered_subobject->parent = this;
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        return children.at("unnumbered-subobject");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children()
{
    if(children.find("as-subobject") == children.end())
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
    }

    if(children.find("ipv4-subobject") == children.end())
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
    }

    if(children.find("ipv6-subobject") == children.end())
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
    }

    if(children.find("lsp-subobject") == children.end())
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
    }

    if(children.find("srlg-subobject") == children.end())
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
    }

    if(children.find("unnumbered-subobject") == children.end())
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(exclusion_type.operation)
	|| is_set(srlg_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.operation)) leaf_name_data.push_back(srlg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;
    children["fec"] = fec;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_node_exception.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(ignore_lsp_id.operation)
	|| is_set(penultimate_node_exception.operation)
	|| is_set(processing_node_exception.operation)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.operation)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.operation)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.operation)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.operation)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
        else
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
            fec->parent = this;
            children["fec"] = fec;
        }
        return children.at("fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children()
{
    if(children.find("fec") == children.end())
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_priority_configured.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2Mpte' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    protection_type{YType::enumeration, "protection-type"},
    restoration_style{YType::enumeration, "restoration-style"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    revert_schedule(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;
    children["revert-schedule"] = revert_schedule;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| protection_mode.is_set
	|| protection_type.is_set
	|| restoration_style.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wait_to_restore_time.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_off_time.operation)
	|| is_set(path_prot_profile_type.operation)
	|| is_set(protection_mode.operation)
	|| is_set(protection_type.operation)
	|| is_set(restoration_style.operation)
	|| is_set(snc_mode.operation)
	|| is_set(tcm_id.operation)
	|| is_set(wait_to_restore_time.operation)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetApsPp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.operation)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.operation)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.operation)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.operation)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.operation)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.operation)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.operation)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
        else
        {
            revert_schedule = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
            revert_schedule->parent = this;
            children["revert-schedule"] = revert_schedule;
        }
        return children.at("revert-schedule");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children()
{
    if(children.find("revert-schedule") == children.end())
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(max_tries.operation)
	|| is_set(schedule_date.operation)
	|| is_set(schedule_frequency.operation)
	|| is_set(schedulename.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertSchedule' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.operation)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.operation)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.operation)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.operation)) leaf_name_data.push_back(schedulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
    }
    if(value_path == "schedulename")
    {
        schedulename = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    prepend_list->parent = this;
    children["prepend-list"] = prepend_list;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_affinity_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_select_configured.is_set
	|| is_path_selection_metric_configured.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| is_prepend_list_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| path_selection_segment_routing_margin.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_path_select_configured.operation)
	|| is_set(is_path_selection_metric_configured.operation)
	|| is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_relative.operation)
	|| is_set(is_path_selection_segment_routing_segment_limit_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(is_prepend_list_configured.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(path_selection_invalidation_action.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(path_selection_segment_routing_adjacency_protection.operation)
	|| is_set(path_selection_segment_routing_margin.operation)
	|| is_set(path_selection_segment_routing_segment_limit.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2PTe' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.operation)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.operation)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.operation)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.operation)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.operation)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.operation)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.operation)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
        else
        {
            prepend_list = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
            prepend_list->parent = this;
            children["prepend-list"] = prepend_list;
        }
        return children.at("prepend-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("prepend-list") == children.end())
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{
    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependList' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(std::move(c));
        children[segment_path] = prepend_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children()
{
    for (auto const & c : prepend_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{
    yang_name = "prepend-entry"; yang_parent_name = "prepend-list";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(next_label.operation)
	|| is_set(type.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.operation)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "next-label")
    {
        next_label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "path-calculation-error"; yang_parent_name = "active-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_message.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCalculationError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::PathCalculationError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::RemergeError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "remerge-error"; yang_parent_name = "active-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::~RemergeError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_message.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remerge-error";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemergeError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::RemergeError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::SignallingError()
    :
    error{YType::uint8, "error"},
    error_message{YType::str, "error-message"},
    error_node{YType::uint32, "error-node"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    reverse_lsp{YType::boolean, "reverse-lsp"},
    signalling_lsp_id{YType::uint16, "signalling-lsp-id"},
    sub_code{YType::uint16, "sub-code"}
{
    yang_name = "signalling-error"; yang_parent_name = "active-path-option";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::~SignallingError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::has_data() const
{
    return error.is_set
	|| error_message.is_set
	|| error_node.is_set
	|| log_time.is_set
	|| lsp_mode.is_set
	|| reverse_lsp.is_set
	|| signalling_lsp_id.is_set
	|| sub_code.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(error_message.operation)
	|| is_set(error_node.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation)
	|| is_set(reverse_lsp.operation)
	|| is_set(signalling_lsp_id.operation)
	|| is_set(sub_code.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-error";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignallingError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (error_node.is_set || is_set(error_node.operation)) leaf_name_data.push_back(error_node.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (reverse_lsp.is_set || is_set(reverse_lsp.operation)) leaf_name_data.push_back(reverse_lsp.get_name_leafdata());
    if (signalling_lsp_id.is_set || is_set(signalling_lsp_id.operation)) leaf_name_data.push_back(signalling_lsp_id.get_name_leafdata());
    if (sub_code.is_set || is_set(sub_code.operation)) leaf_name_data.push_back(sub_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::ActivePathOption::SignallingError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "error-node")
    {
        error_node = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
    if(value_path == "reverse-lsp")
    {
        reverse_lsp = value;
    }
    if(value_path == "signalling-lsp-id")
    {
        signalling_lsp_id = value;
    }
    if(value_path == "sub-code")
    {
        sub_code = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::OutXro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "out-xro"; yang_parent_name = "s2l";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::~OutXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-xro";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.operation)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(std::move(c));
        children[segment_path] = xro_subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::get_children()
{
    for (auto const & c : xro_subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    children["as-subobject"] = as_subobject;

    ipv4_subobject->parent = this;
    children["ipv4-subobject"] = ipv4_subobject;

    ipv6_subobject->parent = this;
    children["ipv6-subobject"] = ipv6_subobject;

    lsp_subobject->parent = this;
    children["lsp-subobject"] = lsp_subobject;

    srlg_subobject->parent = this;
    children["srlg-subobject"] = srlg_subobject;

    unnumbered_subobject->parent = this;
    children["unnumbered-subobject"] = unnumbered_subobject;

    yang_name = "xro-subobject"; yang_parent_name = "out-xro";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
        else
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject>();
            as_subobject->parent = this;
            children["as-subobject"] = as_subobject;
        }
        return children.at("as-subobject");
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
        else
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject>();
            ipv4_subobject->parent = this;
            children["ipv4-subobject"] = ipv4_subobject;
        }
        return children.at("ipv4-subobject");
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
        else
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject>();
            ipv6_subobject->parent = this;
            children["ipv6-subobject"] = ipv6_subobject;
        }
        return children.at("ipv6-subobject");
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
        else
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject>();
            lsp_subobject->parent = this;
            children["lsp-subobject"] = lsp_subobject;
        }
        return children.at("lsp-subobject");
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
        else
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject>();
            srlg_subobject->parent = this;
            children["srlg-subobject"] = srlg_subobject;
        }
        return children.at("srlg-subobject");
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        else
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject>();
            unnumbered_subobject->parent = this;
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        return children.at("unnumbered-subobject");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::get_children()
{
    if(children.find("as-subobject") == children.end())
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
    }

    if(children.find("ipv4-subobject") == children.end())
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
    }

    if(children.find("ipv6-subobject") == children.end())
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
    }

    if(children.find("lsp-subobject") == children.end())
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
    }

    if(children.find("srlg-subobject") == children.end())
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
    }

    if(children.find("unnumbered-subobject") == children.end())
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(exclusion_type.operation)
	|| is_set(srlg_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.operation)) leaf_name_data.push_back(srlg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;
    children["fec"] = fec;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_node_exception.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(ignore_lsp_id.operation)
	|| is_set(penultimate_node_exception.operation)
	|| is_set(processing_node_exception.operation)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.operation)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.operation)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.operation)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.operation)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
        else
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec>();
            fec->parent = this;
            children["fec"] = fec;
        }
        return children.at("fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::get_children()
{
    if(children.find("fec") == children.end())
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::InXro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "in-xro"; yang_parent_name = "s2l";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::~InXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-xro";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.operation)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(std::move(c));
        children[segment_path] = xro_subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::get_children()
{
    for (auto const & c : xro_subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    children["as-subobject"] = as_subobject;

    ipv4_subobject->parent = this;
    children["ipv4-subobject"] = ipv4_subobject;

    ipv6_subobject->parent = this;
    children["ipv6-subobject"] = ipv6_subobject;

    lsp_subobject->parent = this;
    children["lsp-subobject"] = lsp_subobject;

    srlg_subobject->parent = this;
    children["srlg-subobject"] = srlg_subobject;

    unnumbered_subobject->parent = this;
    children["unnumbered-subobject"] = unnumbered_subobject;

    yang_name = "xro-subobject"; yang_parent_name = "in-xro";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
        else
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject>();
            as_subobject->parent = this;
            children["as-subobject"] = as_subobject;
        }
        return children.at("as-subobject");
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
        else
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject>();
            ipv4_subobject->parent = this;
            children["ipv4-subobject"] = ipv4_subobject;
        }
        return children.at("ipv4-subobject");
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
        else
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject>();
            ipv6_subobject->parent = this;
            children["ipv6-subobject"] = ipv6_subobject;
        }
        return children.at("ipv6-subobject");
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
        else
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::LspSubobject>();
            lsp_subobject->parent = this;
            children["lsp-subobject"] = lsp_subobject;
        }
        return children.at("lsp-subobject");
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
        else
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::SrlgSubobject>();
            srlg_subobject->parent = this;
            children["srlg-subobject"] = srlg_subobject;
        }
        return children.at("srlg-subobject");
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        else
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject>();
            unnumbered_subobject->parent = this;
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        return children.at("unnumbered-subobject");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::get_children()
{
    if(children.find("as-subobject") == children.end())
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
    }

    if(children.find("ipv4-subobject") == children.end())
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
    }

    if(children.find("ipv6-subobject") == children.end())
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
    }

    if(children.find("lsp-subobject") == children.end())
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
    }

    if(children.find("srlg-subobject") == children.end())
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
    }

    if(children.find("unnumbered-subobject") == children.end())
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelRemotes::TunnelRemote::S2L::InXro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

const Enum::YLeaf MplsTeLspModeEnum::mpls_te_lsp_mode_not_set {0, "mpls-te-lsp-mode-not-set"};
const Enum::YLeaf MplsTeLspModeEnum::mpls_te_lsp_mode_current {1, "mpls-te-lsp-mode-current"};
const Enum::YLeaf MplsTeLspModeEnum::mpls_te_lsp_mode_reopt {2, "mpls-te-lsp-mode-reopt"};
const Enum::YLeaf MplsTeLspModeEnum::mpls_te_lsp_mode_clean {3, "mpls-te-lsp-mode-clean"};
const Enum::YLeaf MplsTeLspModeEnum::mpls_te_lsp_mode_standby {4, "mpls-te-lsp-mode-standby"};
const Enum::YLeaf MplsTeLspModeEnum::mpls_te_lsp_mode_pp_clean {5, "mpls-te-lsp-mode-pp-clean"};
const Enum::YLeaf MplsTeLspModeEnum::mpls_te_lsp_mode_restore {6, "mpls-te-lsp-mode-restore"};
const Enum::YLeaf MplsTeLspModeEnum::mpls_te_lsp_mode_reopt_standby {7, "mpls-te-lsp-mode-reopt-standby"};

const Enum::YLeaf MteReoptTriggerEnum::no_trigger {0, "no-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::timer_trigger {1, "timer-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::bandwidth_change_trigger {2, "bandwidth-change-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::auto_bandwidth_overflow_trigger {3, "auto-bandwidth-overflow-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::auto_bandwidth_underflow_trigger {4, "auto-bandwidth-underflow-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::auto_bandwidth_adjustment_trigger {5, "auto-bandwidth-adjustment-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::metric_type_change_trigger {6, "metric-type-change-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::user_trigger {7, "user-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::frr_trigger {8, "frr-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::remerge_error_trigger {9, "remerge-error-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::preferred_path_trigger {10, "preferred-path-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::preferred_tree_trigger {11, "preferred-tree-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::due_to_maximum_metric {12, "due-to-maximum-metric"};
const Enum::YLeaf MteReoptTriggerEnum::path_option_switchover_trigger {13, "path-option-switchover-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::path_protection_switchover_trigger {14, "path-protection-switchover-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::iep_enable_reoptimization_trigger {15, "iep-enable-reoptimization-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::affinity_path_verification_fail_trigger {16, "affinity-path-verification-fail-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::cost_limit_path_verification_fail_trigger {17, "cost-limit-path-verification-fail-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::soft_preemption_trigger {18, "soft-preemption-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::iep_changed {19, "iep-changed"};
const Enum::YLeaf MteReoptTriggerEnum::po_changed {20, "po-changed"};
const Enum::YLeaf MteReoptTriggerEnum::dest_changed {21, "dest-changed"};
const Enum::YLeaf MteReoptTriggerEnum::reopt_try_to_force_it {22, "reopt-try-to-force-it"};
const Enum::YLeaf MteReoptTriggerEnum::topology_change_trigger {23, "topology-change-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::reopt_link_up_event {24, "reopt-link-up-event"};
const Enum::YLeaf MteReoptTriggerEnum::bfd_session_down_trigger {25, "bfd-session-down-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::reverse_assoc_s2l_received_trigger {26, "reverse-assoc-s2l-received-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::gmpls_uni_multilayer_trigger {27, "gmpls-uni-multilayer-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::gmpls_uni_user_trigger {28, "gmpls-uni-user-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::path_selection_tiebreaker_change_trigger {29, "path-selection-tiebreaker-change-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::sr_egress_path_change_trigger {30, "sr-egress-path-change-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::overload_bit_trigger {31, "overload-bit-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::pce_trigger {32, "pce-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::lockout_metric_trigger {33, "lockout-metric-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::bfd_session_config_change_trigger {34, "bfd-session-config-change-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::higher_priority_po_change_trigger {35, "higher-priority-po-change-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::sr_area_spf_support_change_trigger {36, "sr-area-spf-support-change-trigger"};
const Enum::YLeaf MteReoptTriggerEnum::trigger_not_used {37, "trigger-not-used"};

const Enum::YLeaf MplsTpLspBfdStateEnum::down {0, "down"};
const Enum::YLeaf MplsTpLspBfdStateEnum::up {1, "up"};

const Enum::YLeaf FlexLspLockoutOriginationEnum::lockout_origination_none {0, "lockout-origination-none"};
const Enum::YLeaf FlexLspLockoutOriginationEnum::lockout_origination_local {1, "lockout-origination-local"};
const Enum::YLeaf FlexLspLockoutOriginationEnum::lockout_origination_remote {2, "lockout-origination-remote"};

const Enum::YLeaf MplsTeMetricQualifierEnum::metric_default {0, "metric-default"};
const Enum::YLeaf MplsTeMetricQualifierEnum::metric_global {1, "metric-global"};
const Enum::YLeaf MplsTeMetricQualifierEnum::metric_interface {2, "metric-interface"};

const Enum::YLeaf TeSyncStatusShowEnum::master_sync_status_show {0, "master-sync-status-show"};
const Enum::YLeaf TeSyncStatusShowEnum::slave_sync_status_show {1, "slave-sync-status-show"};

const Enum::YLeaf MplsTeTunnelsProcessStatusEnum::not_running {0, "not-running"};
const Enum::YLeaf MplsTeTunnelsProcessStatusEnum::running {1, "running"};
const Enum::YLeaf MplsTeTunnelsProcessStatusEnum::not_registered_with_rsvp {2, "not-registered-with-rsvp"};

const Enum::YLeaf MplsTeUniEnum::none {0, "none"};
const Enum::YLeaf MplsTeUniEnum::xc {1, "xc"};
const Enum::YLeaf MplsTeUniEnum::term {2, "term"};

const Enum::YLeaf TeStatsSigFilterEnum::te_stat_sig_filter_vif {0, "te-stat-sig-filter-vif"};
const Enum::YLeaf TeStatsSigFilterEnum::te_stat_sig_filter_lsp {1, "te-stat-sig-filter-lsp"};

const Enum::YLeaf RsvpMgmtEroSubobjEnum::rsvp_mgmt_ero_type_ipv4 {1, "rsvp-mgmt-ero-type-ipv4"};
const Enum::YLeaf RsvpMgmtEroSubobjEnum::rsvp_mgmt_ero_type_un_num {4, "rsvp-mgmt-ero-type-un-num"};

const Enum::YLeaf CtypeEnum::ctype_null {0, "ctype-null"};
const Enum::YLeaf CtypeEnum::ctype_ipv4 {1, "ctype-ipv4"};
const Enum::YLeaf CtypeEnum::ctype_ipv4_p2p_tunnel {7, "ctype-ipv4-p2p-tunnel"};
const Enum::YLeaf CtypeEnum::ctype_ipv6_p2p_tunnel {8, "ctype-ipv6-p2p-tunnel"};
const Enum::YLeaf CtypeEnum::ctype_ipv4_uni {9, "ctype-ipv4-uni"};
const Enum::YLeaf CtypeEnum::ctype_ipv4_p2mp_tunnel {13, "ctype-ipv4-p2mp-tunnel"};
const Enum::YLeaf CtypeEnum::ctype_ipv6_p2mp_tunnel {14, "ctype-ipv6-p2mp-tunnel"};

const Enum::YLeaf IgpProtocolEnum::none {0, "none"};
const Enum::YLeaf IgpProtocolEnum::isis {1, "isis"};
const Enum::YLeaf IgpProtocolEnum::ospf {2, "ospf"};

const Enum::YLeaf MplsTePathoptionEnum::path_option_unknown {0, "path-option-unknown"};
const Enum::YLeaf MplsTePathoptionEnum::path_option_dynamic {1, "path-option-dynamic"};
const Enum::YLeaf MplsTePathoptionEnum::path_option_explicit_name {2, "path-option-explicit-name"};
const Enum::YLeaf MplsTePathoptionEnum::path_option_explicit_id {3, "path-option-explicit-id"};
const Enum::YLeaf MplsTePathoptionEnum::path_option_pce {4, "path-option-pce"};
const Enum::YLeaf MplsTePathoptionEnum::path_option_no_ero {5, "path-option-no-ero"};
const Enum::YLeaf MplsTePathoptionEnum::path_option_segment_routing {6, "path-option-segment-routing"};

const Enum::YLeaf BandwidthUnitEnumEnum::kilo_bits_per_second {0, "kilo-bits-per-second"};
const Enum::YLeaf BandwidthUnitEnumEnum::kilo_bytes_per_second {1, "kilo-bytes-per-second"};

const Enum::YLeaf MteTunnelAdminStateEnum::tunnel_state_admin_unknown {0, "tunnel-state-admin-unknown"};
const Enum::YLeaf MteTunnelAdminStateEnum::admin_shutdown {1, "admin-shutdown"};
const Enum::YLeaf MteTunnelAdminStateEnum::admin_up {2, "admin-up"};

const Enum::YLeaf TeApsSncModeEnum::snc_mode_not_set {0, "snc-mode-not-set"};
const Enum::YLeaf TeApsSncModeEnum::snc_mode_n {1, "snc-mode-n"};
const Enum::YLeaf TeApsSncModeEnum::snc_mode_i {2, "snc-mode-i"};
const Enum::YLeaf TeApsSncModeEnum::snc_mode_s {3, "snc-mode-s"};

const Enum::YLeaf TeAutobwAppRejEnum::application_allowed {0, "application-allowed"};
const Enum::YLeaf TeAutobwAppRejEnum::auto_bw_disabled {1, "auto-bw-disabled"};
const Enum::YLeaf TeAutobwAppRejEnum::tunnel_is_down {2, "tunnel-is-down"};
const Enum::YLeaf TeAutobwAppRejEnum::tunnel_is_frr {3, "tunnel-is-frr"};
const Enum::YLeaf TeAutobwAppRejEnum::tunnel_is_backup {4, "tunnel-is-backup"};
const Enum::YLeaf TeAutobwAppRejEnum::tunnel_is_lock_down {5, "tunnel-is-lock-down"};

const Enum::YLeaf PceStateEnum::tcp_close {0, "tcp-close"};
const Enum::YLeaf PceStateEnum::tcp_listen {1, "tcp-listen"};
const Enum::YLeaf PceStateEnum::tcp_connect {2, "tcp-connect"};
const Enum::YLeaf PceStateEnum::pcep_closed {3, "pcep-closed"};
const Enum::YLeaf PceStateEnum::pcep_opening {4, "pcep-opening"};
const Enum::YLeaf PceStateEnum::pcep_open {5, "pcep-open"};

const Enum::YLeaf TeSyncNotReadyReasonEnum::idt_in_progress {0, "idt-in-progress"};
const Enum::YLeaf TeSyncNotReadyReasonEnum::standby_not_connected {1, "standby-not-connected"};
const Enum::YLeaf TeSyncNotReadyReasonEnum::collaborator_disconnected {2, "collaborator-disconnected"};
const Enum::YLeaf TeSyncNotReadyReasonEnum::collaborator_timeout {3, "collaborator-timeout"};
const Enum::YLeaf TeSyncNotReadyReasonEnum::unknown {4, "unknown"};

const Enum::YLeaf TeBfdLspSessionStateEnum::bfd_over_lsp_session_state_none {0, "bfd-over-lsp-session-state-none"};
const Enum::YLeaf TeBfdLspSessionStateEnum::bfd_over_lsp_session_state_created {1, "bfd-over-lsp-session-state-created"};
const Enum::YLeaf TeBfdLspSessionStateEnum::bfd_over_lsp_session_state_up {2, "bfd-over-lsp-session-state-up"};
const Enum::YLeaf TeBfdLspSessionStateEnum::bfd_over_lsp_session_state_down {3, "bfd-over-lsp-session-state-down"};
const Enum::YLeaf TeBfdLspSessionStateEnum::bfd_over_lsp_session_state_admin_down {4, "bfd-over-lsp-session-state-admin-down"};
const Enum::YLeaf TeBfdLspSessionStateEnum::bfd_over_lsp_session_state_deleted {5, "bfd-over-lsp-session-state-deleted"};
const Enum::YLeaf TeBfdLspSessionStateEnum::bfd_over_lsp_session_state_create_failed {6, "bfd-over-lsp-session-state-create-failed"};

const Enum::YLeaf MplsTpLspOamStateEnum::none {0, "none"};
const Enum::YLeaf MplsTpLspOamStateEnum::ldi {1, "ldi"};
const Enum::YLeaf MplsTpLspOamStateEnum::lkr {2, "lkr"};
const Enum::YLeaf MplsTpLspOamStateEnum::ais {3, "ais"};

const Enum::YLeaf TePpDiversityEnum::diversity_none {0, "diversity-none"};
const Enum::YLeaf TePpDiversityEnum::link {1, "link"};
const Enum::YLeaf TePpDiversityEnum::node {2, "node"};
const Enum::YLeaf TePpDiversityEnum::node_link {3, "node-link"};
const Enum::YLeaf TePpDiversityEnum::srlg {4, "srlg"};
const Enum::YLeaf TePpDiversityEnum::diversity_user {5, "diversity-user"};
const Enum::YLeaf TePpDiversityEnum::diversity_reverse_ero {6, "diversity-reverse-ero"};

const Enum::YLeaf LinkDirectionEnumEnum::link_direction_up_stream {0, "link-direction-up-stream"};
const Enum::YLeaf LinkDirectionEnumEnum::link_direction_down_stream {1, "link-direction-down-stream"};
const Enum::YLeaf LinkDirectionEnumEnum::link_direction_unknown {2, "link-direction-unknown"};

const Enum::YLeaf MplsTeBackupUsageEnum::backup_not_protecting {0, "backup-not-protecting"};
const Enum::YLeaf MplsTeBackupUsageEnum::backup_protecting {1, "backup-protecting"};

const Enum::YLeaf FloodingTriggerEnum::flooding_reason_unknown {0, "flooding-reason-unknown"};
const Enum::YLeaf FloodingTriggerEnum::link_up {1, "link-up"};
const Enum::YLeaf FloodingTriggerEnum::link_down {2, "link-down"};
const Enum::YLeaf FloodingTriggerEnum::threshold_up {3, "threshold-up"};
const Enum::YLeaf FloodingTriggerEnum::threshold_down {4, "threshold-down"};
const Enum::YLeaf FloodingTriggerEnum::threshold_up_pool1 {5, "threshold-up-pool1"};
const Enum::YLeaf FloodingTriggerEnum::threshold_down_pool1 {6, "threshold-down-pool1"};
const Enum::YLeaf FloodingTriggerEnum::timer_expired {7, "timer-expired"};
const Enum::YLeaf FloodingTriggerEnum::bandwidth_change {8, "bandwidth-change"};
const Enum::YLeaf FloodingTriggerEnum::user {9, "user"};
const Enum::YLeaf FloodingTriggerEnum::rsvp_timeout {10, "rsvp-timeout"};
const Enum::YLeaf FloodingTriggerEnum::rsvp_reconnect {11, "rsvp-reconnect"};
const Enum::YLeaf FloodingTriggerEnum::te_exited {12, "te-exited"};
const Enum::YLeaf FloodingTriggerEnum::srlg_change {13, "srlg-change"};
const Enum::YLeaf FloodingTriggerEnum::hw_oor_green {14, "hw-oor-green"};
const Enum::YLeaf FloodingTriggerEnum::hw_oor_yellow {15, "hw-oor-yellow"};
const Enum::YLeaf FloodingTriggerEnum::hw_oor_red {16, "hw-oor-red"};
const Enum::YLeaf FloodingTriggerEnum::hw_oor_recovery_duration_expired {17, "hw-oor-recovery-duration-expired"};
const Enum::YLeaf FloodingTriggerEnum::lsp_oor_green {18, "lsp-oor-green"};
const Enum::YLeaf FloodingTriggerEnum::lsp_oor_yellow {19, "lsp-oor-yellow"};
const Enum::YLeaf FloodingTriggerEnum::lsp_oor_red {20, "lsp-oor-red"};
const Enum::YLeaf FloodingTriggerEnum::lsp_oor_recovery_duration_expired {21, "lsp-oor-recovery-duration-expired"};
const Enum::YLeaf FloodingTriggerEnum::max_res_bandwidth_threshold_up {22, "max-res-bandwidth-threshold-up"};
const Enum::YLeaf FloodingTriggerEnum::max_res_bandwidth_threshold_down {23, "max-res-bandwidth-threshold-down"};

const Enum::YLeaf MplsTeTunnelStateEnum::state_down {0, "state-down"};
const Enum::YLeaf MplsTeTunnelStateEnum::state_up {1, "state-up"};
const Enum::YLeaf MplsTeTunnelStateEnum::state_down_policy {2, "state-down-policy"};
const Enum::YLeaf MplsTeTunnelStateEnum::state_lockout {3, "state-lockout"};

const Enum::YLeaf MplsTeLspRoleEnum::mpls_te_lsp_role_unknown {0, "mpls-te-lsp-role-unknown"};
const Enum::YLeaf MplsTeLspRoleEnum::mpls_te_lsp_role_head {1, "mpls-te-lsp-role-head"};
const Enum::YLeaf MplsTeLspRoleEnum::mpls_te_lsp_role_transit {2, "mpls-te-lsp-role-transit"};
const Enum::YLeaf MplsTeLspRoleEnum::mpls_te_lsp_role_tail {3, "mpls-te-lsp-role-tail"};

const Enum::YLeaf TeVifBfdEncapModeEnum::ip {0, "ip"};
const Enum::YLeaf TeVifBfdEncapModeEnum::gal {1, "gal"};

const Enum::YLeaf IgpteLibBwModelEnum::rdm {0, "rdm"};
const Enum::YLeaf IgpteLibBwModelEnum::mam {1, "mam"};
const Enum::YLeaf IgpteLibBwModelEnum::not_set {2, "not-set"};

const Enum::YLeaf OcMplsTeMetricEnum::oc_mpls_te_metric_type_igp {0, "oc-mpls-te-metric-type-igp"};
const Enum::YLeaf OcMplsTeMetricEnum::oc_mpls_te_metric_type_te {1, "oc-mpls-te-metric-type-te"};

const Enum::YLeaf MplsTeBackupEnum::backup_static {0, "backup-static"};
const Enum::YLeaf MplsTeBackupEnum::backup_auto {1, "backup-auto"};

const Enum::YLeaf SignalingAgentEnumEnum::no_signaling {0, "no-signaling"};
const Enum::YLeaf SignalingAgentEnumEnum::rsvp_signaling {1, "rsvp-signaling"};

const Enum::YLeaf RrrDsteMigrationModeEnum::rrr_dste_mode_none {0, "rrr-dste-mode-none"};
const Enum::YLeaf RrrDsteMigrationModeEnum::rrr_dste_mode_prestandard {1, "rrr-dste-mode-prestandard"};
const Enum::YLeaf RrrDsteMigrationModeEnum::rrr_dste_mode_standard {3, "rrr-dste-mode-standard"};

const Enum::YLeaf TeXroSubobjEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf TeXroSubobjEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf TeXroSubobjEnum::unnumbered {6, "unnumbered"};
const Enum::YLeaf TeXroSubobjEnum::as {32, "as"};
const Enum::YLeaf TeXroSubobjEnum::srlg {34, "srlg"};
const Enum::YLeaf TeXroSubobjEnum::p2p_lsp {36, "p2p-lsp"};

const Enum::YLeaf MplsProtectionEnum::mpls_protection_type_unprotected {0, "mpls-protection-type-unprotected"};
const Enum::YLeaf MplsProtectionEnum::mpls_protection_type_link {1, "mpls-protection-type-link"};
const Enum::YLeaf MplsProtectionEnum::mpls_protection_type_link_node {2, "mpls-protection-type-link-node"};

const Enum::YLeaf TePathInvalActionEnum::none {0, "none"};
const Enum::YLeaf TePathInvalActionEnum::tear {1, "tear"};
const Enum::YLeaf TePathInvalActionEnum::drop {2, "drop"};

const Enum::YLeaf AdmissionPolicyEnum::reject_all {0, "reject-all"};
const Enum::YLeaf AdmissionPolicyEnum::allow_all {1, "allow-all"};
const Enum::YLeaf AdmissionPolicyEnum::reject_huge {2, "reject-huge"};
const Enum::YLeaf AdmissionPolicyEnum::allow_if_room {3, "allow-if-room"};

const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_unapplicable {0, "mtunnel-fail-reason-unapplicable"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_shutdown {1, "mtunnel-fail-reason-shutdown"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_no_destination {2, "mtunnel-fail-reason-no-destination"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_no_path_option {3, "mtunnel-fail-reason-no-path-option"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_no_source {4, "mtunnel-fail-reason-no-source"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_collaborator_disc {5, "mtunnel-fail-reason-collaborator-disc"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_unmatched_class_type_priority {6, "mtunnel-fail-reason-unmatched-class-type-priority"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_invalid_bidir_cfg {7, "mtunnel-fail-reason-invalid-bidir-cfg"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_po_switchover {8, "mtunnel-fail-reason-po-switchover"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_no_tunnel_id {9, "mtunnel-fail-reason-no-tunnel-id"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_no_link {10, "mtunnel-fail-reason-no-link"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_link_shutdown {11, "mtunnel-fail-reason-link-shutdown"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_link_lmp_down {12, "mtunnel-fail-reason-link-lmp-down"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_source_destination_same {13, "mtunnel-fail-reason-source-destination-same"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_otn_no_odu_level {14, "mtunnel-fail-reason-otn-no-odu-level"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_bidir_assoc_id_missing {15, "mtunnel-fail-reason-bidir-assoc-id-missing"};
const Enum::YLeaf MplsMteTunnelFailReasonEnum::mtunnel_fail_reason_bfdgal_on_unidirectional {16, "mtunnel-fail-reason-bfdgal-on-unidirectional"};

const Enum::YLeaf TeAclEnum::acl_type_unknown {0, "acl-type-unknown"};
const Enum::YLeaf TeAclEnum::acl_type_access_list {1, "acl-type-access-list"};
const Enum::YLeaf TeAclEnum::acl_type_prefix_list {2, "acl-type-prefix-list"};
const Enum::YLeaf TeAclEnum::acl_type_unregistered {3, "acl-type-unregistered"};

const Enum::YLeaf TeSigNameAppendEnum::none {0, "none"};
const Enum::YLeaf TeSigNameAppendEnum::address {1, "address"};
const Enum::YLeaf TeSigNameAppendEnum::name {2, "name"};

const Enum::YLeaf BandwidthTypeEnumEnum::pool0 {0, "pool0"};
const Enum::YLeaf BandwidthTypeEnumEnum::pool1 {1, "pool1"};
const Enum::YLeaf BandwidthTypeEnumEnum::unknown {2, "unknown"};

const Enum::YLeaf TeBfdReversePathEnum::bfd_reverse_path_none {0, "bfd-reverse-path-none"};
const Enum::YLeaf TeBfdReversePathEnum::bfd_reverse_path_binding_label {1, "bfd-reverse-path-binding-label"};

const Enum::YLeaf TeSchFreqEnum::sch_freq_not_set {0, "sch-freq-not-set"};
const Enum::YLeaf TeSchFreqEnum::sch_freq_set_once {1, "sch-freq-set-once"};
const Enum::YLeaf TeSchFreqEnum::sch_freq_set_daily {2, "sch-freq-set-daily"};
const Enum::YLeaf TeSchFreqEnum::sch_freq_set_weekly {3, "sch-freq-set-weekly"};

const Enum::YLeaf MplsTeBwPoolEnum::te_bandwidth_pool0 {0, "te-bandwidth-pool0"};
const Enum::YLeaf MplsTeBwPoolEnum::te_bandwidth_pool1 {1, "te-bandwidth-pool1"};
const Enum::YLeaf MplsTeBwPoolEnum::te_bandwidth_any_pool {2, "te-bandwidth-any-pool"};

const Enum::YLeaf MplsTeMgmtGmplsLabelOriginEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTeMgmtGmplsLabelOriginEnum::uni_c {1, "uni-c"};
const Enum::YLeaf MplsTeMgmtGmplsLabelOriginEnum::uni_n {2, "uni-n"};

const Enum::YLeaf PceSrSidEnum::unknown_segment_id {0, "unknown-segment-id"};
const Enum::YLeaf PceSrSidEnum::ipv4_node_segment_id {1, "ipv4-node-segment-id"};
const Enum::YLeaf PceSrSidEnum::ipv4_adjacency_segment_id {2, "ipv4-adjacency-segment-id"};

const Enum::YLeaf MplsTpTunnelSwitchoverTrigEnum::none {0, "none"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrigEnum::bfd {1, "bfd"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrigEnum::local_lockout {2, "local-lockout"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrigEnum::remote_lockout {3, "remote-lockout"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrigEnum::ais {4, "ais"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrigEnum::ldi {5, "ldi"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrigEnum::lkr {6, "lkr"};
const Enum::YLeaf MplsTpTunnelSwitchoverTrigEnum::link_down {7, "link-down"};

const Enum::YLeaf MplsTeLoadshareEnum::loadshare_equal {0, "loadshare-equal"};
const Enum::YLeaf MplsTeLoadshareEnum::loadshare_bandwidth_based {1, "loadshare-bandwidth-based"};
const Enum::YLeaf MplsTeLoadshareEnum::loadshare_configured {2, "loadshare-configured"};

const Enum::YLeaf MplsTpTunnelActiveLspEnum::working {0, "working"};
const Enum::YLeaf MplsTpTunnelActiveLspEnum::protect {1, "protect"};
const Enum::YLeaf MplsTpTunnelActiveLspEnum::none {2, "none"};

const Enum::YLeaf PceLspAutorouteMetricEnum::none {0, "none"};
const Enum::YLeaf PceLspAutorouteMetricEnum::relative {1, "relative"};
const Enum::YLeaf PceLspAutorouteMetricEnum::absolute {2, "absolute"};

const Enum::YLeaf MplsTeBackupStatusEnum::backup_none {0, "backup-none"};
const Enum::YLeaf MplsTeBackupStatusEnum::backup_unused {1, "backup-unused"};
const Enum::YLeaf MplsTeBackupStatusEnum::backup_next_next_hop {2, "backup-next-next-hop"};
const Enum::YLeaf MplsTeBackupStatusEnum::backup_next_hop {3, "backup-next-hop"};
const Enum::YLeaf MplsTeBackupStatusEnum::backup_next_next_hop_srlg {4, "backup-next-next-hop-srlg"};
const Enum::YLeaf MplsTeBackupStatusEnum::backup_next_hop_srlg {5, "backup-next-hop-srlg"};

const Enum::YLeaf MplsTeMgmtGmplsLabelEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTeMgmtGmplsLabelEnum::fixed_wdm {1, "fixed-wdm"};
const Enum::YLeaf MplsTeMgmtGmplsLabelEnum::fixed_g709otn {2, "fixed-g709otn"};

const Enum::YLeaf TeAutoTunExpPathHopEnum::ipv4_address_type {0, "ipv4-address-type"};
const Enum::YLeaf TeAutoTunExpPathHopEnum::mpls_label_type {1, "mpls-label-type"};
const Enum::YLeaf TeAutoTunExpPathHopEnum::ipv4_and_label_type {2, "ipv4-and-label-type"};

const Enum::YLeaf TeVifBfdEnum::bfd_disabled {0, "bfd-disabled"};
const Enum::YLeaf TeVifBfdEnum::bfd_enabled {1, "bfd-enabled"};
const Enum::YLeaf TeVifBfdEnum::sbfd_enabled {2, "sbfd-enabled"};

const Enum::YLeaf OcMplsTeTunnelEnum::unknown {0, "unknown"};
const Enum::YLeaf OcMplsTeTunnelEnum::p2p {1, "p2p"};
const Enum::YLeaf OcMplsTeTunnelEnum::p2mp {2, "p2mp"};

const Enum::YLeaf MplsTpTunnelStateEnum::admin_down {0, "admin-down"};
const Enum::YLeaf MplsTpTunnelStateEnum::admin_up {1, "admin-up"};
const Enum::YLeaf MplsTpTunnelStateEnum::oper_up {2, "oper-up"};
const Enum::YLeaf MplsTpTunnelStateEnum::oper_down {3, "oper-down"};

const Enum::YLeaf TeHopLimitIgnoreEnum::ignore_unknown {0, "ignore-unknown"};
const Enum::YLeaf TeHopLimitIgnoreEnum::ignore_explicit {1, "ignore-explicit"};
const Enum::YLeaf TeHopLimitIgnoreEnum::ignore_pce {2, "ignore-pce"};

const Enum::YLeaf PceTunnelStateEnum::tunnel_state_none {0, "tunnel-state-none"};
const Enum::YLeaf PceTunnelStateEnum::tunnel_state_admin_down {1, "tunnel-state-admin-down"};
const Enum::YLeaf PceTunnelStateEnum::tunnel_state_down {2, "tunnel-state-down"};
const Enum::YLeaf PceTunnelStateEnum::tunnel_state_up {3, "tunnel-state-up"};

const Enum::YLeaf MplsTeSoftPreemptionResolutionEnum::soft_preemption_resolution_none {0, "soft-preemption-resolution-none"};
const Enum::YLeaf MplsTeSoftPreemptionResolutionEnum::soft_preemption_resolution_pending {1, "soft-preemption-resolution-pending"};
const Enum::YLeaf MplsTeSoftPreemptionResolutionEnum::soft_preemption_resolution_reopt_completed {2, "soft-preemption-resolution-reopt-completed"};
const Enum::YLeaf MplsTeSoftPreemptionResolutionEnum::soft_preemption_resolution_teardown {3, "soft-preemption-resolution-teardown"};
const Enum::YLeaf MplsTeSoftPreemptionResolutionEnum::soft_preemption_resolution_frr_triggered {4, "soft-preemption-resolution-frr-triggered"};
const Enum::YLeaf MplsTeSoftPreemptionResolutionEnum::soft_preemption_resolution_path_protetion_switchover {5, "soft-preemption-resolution-path-protetion-switchover"};

const Enum::YLeaf MplsTeSoftPreemptionStateEnum::soft_preemption_not_pending {0, "soft-preemption-not-pending"};
const Enum::YLeaf MplsTeSoftPreemptionStateEnum::soft_preemption_pending {1, "soft-preemption-pending"};

const Enum::YLeaf GmplsUniMgmtDwdmCsEnum::not_set {0, "not-set"};
const Enum::YLeaf GmplsUniMgmtDwdmCsEnum::dwdm100g_hz {1, "dwdm100g-hz"};
const Enum::YLeaf GmplsUniMgmtDwdmCsEnum::dwdm50g_hz {2, "dwdm50g-hz"};
const Enum::YLeaf GmplsUniMgmtDwdmCsEnum::dwdm25g_hz {3, "dwdm25g-hz"};
const Enum::YLeaf GmplsUniMgmtDwdmCsEnum::dwdm12g_hz {4, "dwdm12g-hz"};

const Enum::YLeaf MplsTeP2MpTimerEnum::lmrib_restart {0, "lmrib-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::lmrib_recovery {1, "lmrib-recovery"};
const Enum::YLeaf MplsTeP2MpTimerEnum::rsvp_restart {2, "rsvp-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::lsd_restart {3, "lsd-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::lsd_recovery {4, "lsd-recovery"};
const Enum::YLeaf MplsTeP2MpTimerEnum::clear_in_progress_bandwidth {5, "clear-in-progress-bandwidth"};
const Enum::YLeaf MplsTeP2MpTimerEnum::rsi_restart {6, "rsi-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::rsi_recovery {7, "rsi-recovery"};
const Enum::YLeaf MplsTeP2MpTimerEnum::ipv4_caps_replay {8, "ipv4-caps-replay"};
const Enum::YLeaf MplsTeP2MpTimerEnum::retry_acl_registration_timer {9, "retry-acl-registration-timer"};
const Enum::YLeaf MplsTeP2MpTimerEnum::mpls_te_exit {10, "mpls-te-exit"};
const Enum::YLeaf MplsTeP2MpTimerEnum::mpls_te_nsr_peer_restart {11, "mpls-te-nsr-peer-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::mpls_te_issu_peer_restart {12, "mpls-te-issu-peer-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::bfd_restart {13, "bfd-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::bfd_recovery {14, "bfd-recovery"};
const Enum::YLeaf MplsTeP2MpTimerEnum::im_oc_restart {15, "im-oc-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::im_oc_recovery {16, "im-oc-recovery"};
const Enum::YLeaf MplsTeP2MpTimerEnum::rib_restart {17, "rib-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::rib_recovery {18, "rib-recovery"};
const Enum::YLeaf MplsTeP2MpTimerEnum::rib_next_hop_route_cleanup {19, "rib-next-hop-route-cleanup"};
const Enum::YLeaf MplsTeP2MpTimerEnum::rsi_srlg_producer_retry {20, "rsi-srlg-producer-retry"};
const Enum::YLeaf MplsTeP2MpTimerEnum::eoc_reg_retry {21, "eoc-reg-retry"};
const Enum::YLeaf MplsTeP2MpTimerEnum::fib_restart {22, "fib-restart"};
const Enum::YLeaf MplsTeP2MpTimerEnum::fib_recovery {23, "fib-recovery"};
const Enum::YLeaf MplsTeP2MpTimerEnum::fib_next_hop_route_cleanup {24, "fib-next-hop-route-cleanup"};
const Enum::YLeaf MplsTeP2MpTimerEnum::fib_next_hop_register_retry {25, "fib-next-hop-register-retry"};
const Enum::YLeaf MplsTeP2MpTimerEnum::tun_backend_scan_retry {26, "tun-backend-scan-retry"};
const Enum::YLeaf MplsTeP2MpTimerEnum::tunnel_checkpoint_list_service {27, "tunnel-checkpoint-list-service"};
const Enum::YLeaf MplsTeP2MpTimerEnum::tunnel_service_binding_sid_allocation_retry {28, "tunnel-service-binding-sid-allocation-retry"};
const Enum::YLeaf MplsTeP2MpTimerEnum::timer_not_used {29, "timer-not-used"};

const Enum::YLeaf TeSrSidEnum::srsid_not_set {0, "srsid-not-set"};
const Enum::YLeaf TeSrSidEnum::srsid_node {1, "srsid-node"};
const Enum::YLeaf TeSrSidEnum::srsid_adj {2, "srsid-adj"};
const Enum::YLeaf TeSrSidEnum::srsid_unknown {3, "srsid-unknown"};

const Enum::YLeaf TeS2LSrPathSelectionEnum::te_s2l_sr_path_selection_any {0, "te-s2l-sr-path-selection-any"};
const Enum::YLeaf TeS2LSrPathSelectionEnum::te_s2l_sr_path_selection_adj_unprotected {1, "te-s2l-sr-path-selection-adj-unprotected"};
const Enum::YLeaf TeS2LSrPathSelectionEnum::te_s2l_sr_path_selection_adj_protected {2, "te-s2l-sr-path-selection-adj-protected"};

const Enum::YLeaf ResourceProviderEnum::resource_provider_none {0, "resource-provider-none"};
const Enum::YLeaf ResourceProviderEnum::packet_switch_capable {1, "packet-switch-capable"};
const Enum::YLeaf ResourceProviderEnum::time_division_multiplex {2, "time-division-multiplex"};
const Enum::YLeaf ResourceProviderEnum::lambda_switch_capable {3, "lambda-switch-capable"};
const Enum::YLeaf ResourceProviderEnum::fiber_switch_capable {4, "fiber-switch-capable"};
const Enum::YLeaf ResourceProviderEnum::g709odu_capable {5, "g709odu-capable"};

const Enum::YLeaf TpMidLspStatusEnum::up {0, "up"};
const Enum::YLeaf TpMidLspStatusEnum::down {1, "down"};

const Enum::YLeaf AutoBackupProtectionEnum::protection_none {0, "protection-none"};
const Enum::YLeaf AutoBackupProtectionEnum::protection_next_hop {1, "protection-next-hop"};
const Enum::YLeaf AutoBackupProtectionEnum::protection_next_next_hop {2, "protection-next-next-hop"};

const Enum::YLeaf MplsTeFrrStateEnum::frr_inactive {0, "frr-inactive"};
const Enum::YLeaf MplsTeFrrStateEnum::frr_active {1, "frr-active"};
const Enum::YLeaf MplsTeFrrStateEnum::frr_ready {2, "frr-ready"};

const Enum::YLeaf MplsTeBfdSessionDownAction1Enum::reopt {0, "reopt"};
const Enum::YLeaf MplsTeBfdSessionDownAction1Enum::re_setup {1, "re-setup"};

const Enum::YLeaf LspOperStatusEnum::mpls_te_lsp_oper_up {0, "mpls-te-lsp-oper-up"};
const Enum::YLeaf LspOperStatusEnum::mpls_te_lsp_oper_down {1, "mpls-te-lsp-oper-down"};

const Enum::YLeaf MplsTeProtocolEnum::mpls_te_signaling_type_unknown {0, "mpls-te-signaling-type-unknown"};
const Enum::YLeaf MplsTeProtocolEnum::mpls_te_signaling_type_rsvp {1, "mpls-te-signaling-type-rsvp"};

const Enum::YLeaf TeOduLevelEnum::te_odu_level_not_set {0, "te-odu-level-not-set"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_one {1, "te-odu-level-one"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_two {2, "te-odu-level-two"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_three {3, "te-odu-level-three"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_four {4, "te-odu-level-four"};
const Enum::YLeaf TeOduLevelEnum::te_odu_zero {10, "te-odu-zero"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_two_e {11, "te-odu-level-two-e"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_flex_cbr {20, "te-odu-level-flex-cbr"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_flex_gfpf_resizeable {21, "te-odu-level-flex-gfpf-resizeable"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_flex_gfpf_non_resizable {22, "te-odu-level-flex-gfpf-non-resizable"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_one_e {23, "te-odu-level-one-e"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_one_f {24, "te-odu-level-one-f"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_two_f {25, "te-odu-level-two-f"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_three_e_one {26, "te-odu-level-three-e-one"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_three_e_two {27, "te-odu-level-three-e-two"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_c_two {38, "te-odu-level-c-two"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_c_three {39, "te-odu-level-c-three"};
const Enum::YLeaf TeOduLevelEnum::te_odu_level_c_four {40, "te-odu-level-c-four"};

const Enum::YLeaf IgpOspfAreaFormatEnum::igp_area_format_number {0, "igp-area-format-number"};
const Enum::YLeaf IgpOspfAreaFormatEnum::igp_area_format_ip_addr {1, "igp-area-format-ip-addr"};

const Enum::YLeaf PceTunPathStateEnum::state_none {0, "state-none"};
const Enum::YLeaf PceTunPathStateEnum::state_pending {1, "state-pending"};
const Enum::YLeaf PceTunPathStateEnum::state_received_path {2, "state-received-path"};
const Enum::YLeaf PceTunPathStateEnum::state_no_peer {3, "state-no-peer"};
const Enum::YLeaf PceTunPathStateEnum::state_pcep_down {4, "state-pcep-down"};
const Enum::YLeaf PceTunPathStateEnum::state_received_no_path {5, "state-received-no-path"};

const Enum::YLeaf AutoBackupSrlgModeEnum::srlg_not_set {0, "srlg-not-set"};
const Enum::YLeaf AutoBackupSrlgModeEnum::srlg_strict {1, "srlg-strict"};
const Enum::YLeaf AutoBackupSrlgModeEnum::srlg_preferred {2, "srlg-preferred"};
const Enum::YLeaf AutoBackupSrlgModeEnum::srlg_weighted {3, "srlg-weighted"};

const Enum::YLeaf TeRevEroRejectReasonsEnum::none {0, "none"};
const Enum::YLeaf TeRevEroRejectReasonsEnum::bad_reverse_ero {1, "bad-reverse-ero"};
const Enum::YLeaf TeRevEroRejectReasonsEnum::tie_rejected {2, "tie-rejected"};
const Enum::YLeaf TeRevEroRejectReasonsEnum::standby_not_required {3, "standby-not-required"};
const Enum::YLeaf TeRevEroRejectReasonsEnum::admin_state {4, "admin-state"};
const Enum::YLeaf TeRevEroRejectReasonsEnum::priority {5, "priority"};
const Enum::YLeaf TeRevEroRejectReasonsEnum::class_type {6, "class-type"};
const Enum::YLeaf TeRevEroRejectReasonsEnum::bad_association {7, "bad-association"};

const Enum::YLeaf TeProtectEnum::protect_type1_plus1_unidir_no_aps {4, "protect-type1-plus1-unidir-no-aps"};
const Enum::YLeaf TeProtectEnum::protect_type1_plus1_unidir_aps {8, "protect-type1-plus1-unidir-aps"};
const Enum::YLeaf TeProtectEnum::protect_type1_plus1_bidir_aps {16, "protect-type1-plus1-bidir-aps"};
const Enum::YLeaf TeProtectEnum::protect_type_not_set {255, "protect-type-not-set"};

const Enum::YLeaf LspAdminStatusEnum::mpls_te_lsp_admin_up {0, "mpls-te-lsp-admin-up"};
const Enum::YLeaf LspAdminStatusEnum::mpls_te_lsp_admin_shutdown {1, "mpls-te-lsp-admin-shutdown"};

const Enum::YLeaf TePathProtProfileEnum::path_prot_profile_type1_plus0 {0, "path-prot-profile-type1-plus0"};
const Enum::YLeaf TePathProtProfileEnum::path_prot_profile_type1_plus_r {1, "path-prot-profile-type1-plus-r"};
const Enum::YLeaf TePathProtProfileEnum::path_prot_profile_type1_plus1 {16, "path-prot-profile-type1-plus1"};
const Enum::YLeaf TePathProtProfileEnum::path_prot_profile_type1_plus1_plus_r {32, "path-prot-profile-type1-plus1-plus-r"};
const Enum::YLeaf TePathProtProfileEnum::path_prot_profile_type_invalid {255, "path-prot-profile-type-invalid"};

const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_no_reason {0, "te-pce-fail-no-reason"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_no_pce {1, "te-pce-fail-no-pce"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_sub_pool {2, "te-pce-fail-sub-pool"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_intra_area {3, "te-pce-fail-intra-area"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_gmpls {4, "te-pce-fail-gmpls"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_pending {5, "te-pce-fail-pending"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_oor {6, "te-pce-fail-oor"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_bidirectional {7, "te-pce-fail-bidirectional"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_no_path {8, "te-pce-fail-no-path"};
const Enum::YLeaf MplsTePceFailReasonsEnum::te_pce_fail_request_timeout {9, "te-pce-fail-request-timeout"};

const Enum::YLeaf MplsTeFrrSharingEnum::sharing_none {0, "sharing-none"};
const Enum::YLeaf MplsTeFrrSharingEnum::sharing_pri_oi_backup_oi_parent {1, "sharing-pri-oi-backup-oi-parent"};
const Enum::YLeaf MplsTeFrrSharingEnum::sharing_pri_oi_parent_backup_oi {2, "sharing-pri-oi-parent-backup-oi"};
const Enum::YLeaf MplsTeFrrSharingEnum::sharing_pri_oi_parent_backup_oi_parent {3, "sharing-pri-oi-parent-backup-oi-parent"};

const Enum::YLeaf TeSrlgCollectRequestEnum::none {0, "none"};
const Enum::YLeaf TeSrlgCollectRequestEnum::mandatory {1, "mandatory"};
const Enum::YLeaf TeSrlgCollectRequestEnum::optional {2, "optional"};

const Enum::YLeaf TeAttributeSetSrPrependEnum::te_attribute_set_sr_prepend_not_set {0, "te-attribute-set-sr-prepend-not-set"};
const Enum::YLeaf TeAttributeSetSrPrependEnum::te_attribute_set_sr_prepend_next_label {1, "te-attribute-set-sr-prepend-next-label"};
const Enum::YLeaf TeAttributeSetSrPrependEnum::te_attribute_set_sr_prepend_bgp_nhop {2, "te-attribute-set-sr-prepend-bgp-nhop"};

const Enum::YLeaf BandwidthStateEnumEnum::bandwidth_held {0, "bandwidth-held"};
const Enum::YLeaf BandwidthStateEnumEnum::bandwidth_reserved {1, "bandwidth-reserved"};
const Enum::YLeaf BandwidthStateEnumEnum::bandwidth_unknown {2, "bandwidth-unknown"};

const Enum::YLeaf TeAffinityTableEnum::affinity_table_mapping {0, "affinity-table-mapping"};
const Enum::YLeaf TeAffinityTableEnum::affinity_table_forward_reference {1, "affinity-table-forward-reference"};
const Enum::YLeaf TeAffinityTableEnum::affinity_table_count {2, "affinity-table-count"};

const Enum::YLeaf MplsTeNodeEnum::router {1, "router"};
const Enum::YLeaf MplsTeNodeEnum::network {2, "network"};

const Enum::YLeaf TeMgmtGenericTspecEnum::te_generic_tspec_type_g709otn {0, "te-generic-tspec-type-g709otn"};

const Enum::YLeaf TePnrRevertOptionsEnum::pnr_optionnot_set {0, "pnr-optionnot-set"};
const Enum::YLeaf TePnrRevertOptionsEnum::pnr_option_revertive {1, "pnr-option-revertive"};
const Enum::YLeaf TePnrRevertOptionsEnum::pnr_option_non_revertive {2, "pnr-option-non-revertive"};

const Enum::YLeaf HwOorStateEnum::oor_green {0, "oor-green"};
const Enum::YLeaf HwOorStateEnum::oor_yellow {1, "oor-yellow"};
const Enum::YLeaf HwOorStateEnum::oor_red {2, "oor-red"};

const Enum::YLeaf MplsTeMetricEnum::metric_not_set {0, "metric-not-set"};
const Enum::YLeaf MplsTeMetricEnum::metric_igp {1, "metric-igp"};
const Enum::YLeaf MplsTeMetricEnum::metric_te {2, "metric-te"};
const Enum::YLeaf MplsTeMetricEnum::metric_delay {3, "metric-delay"};

const Enum::YLeaf TpLinkStateEnum::down {0, "down"};
const Enum::YLeaf TpLinkStateEnum::admin_down {1, "admin-down"};
const Enum::YLeaf TpLinkStateEnum::up {2, "up"};
const Enum::YLeaf TpLinkStateEnum::unknown {3, "unknown"};

const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::no_subcause {0, "no-subcause"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::cleanup_req {1, "cleanup-req"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::invalid_data {2, "invalid-data"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::fsm_inv_ctxt {3, "fsm-inv-ctxt"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::fsm_inv_ctxt_data {4, "fsm-inv-ctxt-data"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::fsm_inv_role {5, "fsm-inv-role"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::ll_failure {6, "ll-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::ll_rel_fail {7, "ll-rel-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::ll_mismatch {8, "ll-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::ll_invalid {9, "ll-invalid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::ll_set_failure {10, "ll-set-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::bad_out_label {11, "bad-out-label"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::sl_err {12, "sl-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::rl_mismatch {13, "rl-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::sl_alloc_err {14, "sl-alloc-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::upstream_downstream_label_mismatch {15, "upstream-downstream-label-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::upstream_label_failure {16, "upstream-label-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::upstream_label_rel_fail {17, "upstream-label-rel-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::upstream_label_mismatch {18, "upstream-label-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::upstream_label_invalid {19, "upstream-label-invalid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::bad_upstream_label {20, "bad-upstream-label"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::ul_set_failure {21, "ul-set-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::gmpls_label_alloc_err {22, "gmpls-label-alloc-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::gmpls_label_clone_err {23, "gmpls-label-clone-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::rw_err {24, "rw-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::up_rw_err {25, "up-rw-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_admit {26, "path-admit"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::bw {27, "bw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::admit_resv {28, "admit-resv"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::rrrm_err {29, "rrrm-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::hardware_out_of_resources {30, "hardware-out-of-resources"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::comp_rid {31, "comp-rid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::comp_lcl_rid {32, "comp-lcl-rid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::comp_up_rid {33, "comp-up-rid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::comp_down_rid {34, "comp-down-rid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::rest_if_hop {35, "rest-if-hop"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::inv_in_if {36, "inv-in-if"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::nh_err {37, "nh-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::inv_in_ero {38, "inv-in-ero"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::out_ero_fail {39, "out-ero-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::frr_bk_asssign {40, "frr-bk-asssign"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::frr_bk_rm {41, "frr-bk-rm"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::frr_bk_send {42, "frr-bk-send"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::frr_needs_del {43, "frr-needs-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::frr_reopt_lsp {44, "frr-reopt-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::rsvp_api_h {45, "rsvp-api-h"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::insane_path {46, "insane-path"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::remerge_chk_fail {47, "remerge-chk-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::remerge_detected {48, "remerge-detected"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::xro {49, "xro"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::resv_bw_set {50, "resv-bw-set"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::resv_prep_fail {51, "resv-prep-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_ch_proc {52, "path-ch-proc"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_ch_frr {53, "path-ch-frr"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_ch_sess_attri_fl {54, "path-ch-sess-attri-fl"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_ch_bw_ch {55, "path-ch-bw-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_err_proc {56, "path-err-proc"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_err {57, "path-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_err_wpsr {58, "path-err-wpsr"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_del {59, "path-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::resv_ch_proc {60, "resv-ch-proc"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::resv_ch_rro {61, "resv-ch-rro"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::resv_del {62, "resv-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::resv_err {63, "resv-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::perr_send_fail {64, "perr-send-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::perr_proc_fail {65, "perr-proc-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::perr_rcv {66, "perr-rcv"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::resv_err_rcv {67, "resv-err-rcv"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::flowspec {68, "flowspec"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::setup_conn_api_fail {69, "setup-conn-api-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_not_replayed {70, "path-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::resv_not_replayed {71, "resv-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::rewrite_not_replayed {72, "rewrite-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::label_not_replayed {73, "label-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::connection_not_ready {74, "connection-not-ready"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::master_did_not_replay {75, "master-did-not-replay"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::head_s2l_has_no_vif {76, "head-s2l-has-no-vif"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::frr_assigned_s2l_has_no_backup {77, "frr-assigned-s2l-has-no-backup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::frr_assigned_s2l_has_down_backup {78, "frr-assigned-s2l-has-down-backup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::out_link_down_and_no_frr {79, "out-link-down-and-no-frr"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::collaborator_timeout_rsvp {80, "collaborator-timeout-rsvp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::collaborator_timeout_lsd {81, "collaborator-timeout-lsd"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::collaborator_timeout_lmrib {82, "collaborator-timeout-lmrib"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::collaborator_timeout_im {83, "collaborator-timeout-im"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::collaborator_timeout_error {84, "collaborator-timeout-error"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::topo_flush {85, "topo-flush"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::area_shut {86, "area-shut"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::active_po_del {87, "active-po-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_verify_failed {88, "path-verify-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::srlg_path_verify_failed {89, "srlg-path-verify-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::affinity_path_verify_failed {90, "affinity-path-verify-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::aff_fail_delayed_tear_timeout_failed {91, "aff-fail-delayed-tear-timeout-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::cost_limit_verify_failed {92, "cost-limit-verify-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::path_setup_timeout {93, "path-setup-timeout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::vif_destroyed {94, "vif-destroyed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::vif_shut {95, "vif-shut"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lsp_shut {96, "lsp-shut"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::gmpls_uni_head {97, "gmpls-uni-head"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::head_resetup {98, "head-resetup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::none_head_resetup {99, "none-head-resetup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dest_disabled {100, "dest-disabled"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::iep_ch_act_po {101, "iep-ch-act-po"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::iep_ch_reopt {102, "iep-ch-reopt"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::iep_ch_standby {103, "iep-ch-standby"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dste_mode_ch {104, "dste-mode-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_del_frr_act {105, "reopt-del-frr-act"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::new_reopt_tear_old {106, "new-reopt-tear-old"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_failed_verify {107, "reopt-failed-verify"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_failed_install {108, "reopt-failed-install"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_failed_rw {109, "reopt-failed-rw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_failed_not_superset {110, "reopt-failed-not-superset"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dclean_at_install_time {111, "dclean-at-install-time"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dclean_at_clean_timer {112, "dclean-at-clean-timer"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dclean_at_reopt_active {113, "dclean-at-reopt-active"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lcl_notif_head {114, "lcl-notif-head"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::in_if_fail {115, "in-if-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::out_if_fail {116, "out-if-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::if_fail_lc_oir {117, "if-fail-lc-oir"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_rid_rm {118, "te-rid-rm"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_rsvp_oos_bkup {119, "te-rsvp-oos-bkup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::in_if_fail_exp_null_cfg_ch {120, "in-if-fail-exp-null-cfg-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::new_curr_lsp_sig {121, "new-curr-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::new_reopt_lsp_sig {122, "new-reopt-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::new_stdby_lsp_sig {123, "new-stdby-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::new_restore_lsp_sig {124, "new-restore-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::new_cl_pp_lsp_sig {125, "new-cl-pp-lsp-sig"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::chkpt_recovery_failed {126, "chkpt-recovery-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::stdby_cr_failed {127, "stdby-cr-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_lsp_rej {128, "reopt-lsp-rej"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_po_sw_failed {129, "reopt-po-sw-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::failed_to_find_path {130, "failed-to-find-path"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::sig_rcv_fail_path_cr_ch {131, "sig-rcv-fail-path-cr-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lsp_db_shut {132, "lsp-db-shut"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_hold_start {133, "reopt-hold-start"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::vif_lspid_mismatch {134, "vif-lspid-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::s2l_has_no_vif {135, "s2l-has-no-vif"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::overload_reopt_timeout {136, "overload-reopt-timeout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::hop_limit_exceeded {137, "hop-limit-exceeded"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lingering_current_lsp {138, "lingering-current-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lingering_standby_lsp {139, "lingering-standby-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lingering_restore_lsp {140, "lingering-restore-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::double_lockout {141, "double-lockout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lockout_no_protection {142, "lockout-no-protection"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lockout_cleanup {143, "lockout-cleanup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_ppsw_lsp_mismatch {144, "te-ppsw-lsp-mismatch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_stdbyup_no_curr_lsp {145, "te-stdbyup-no-curr-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::stdby_failed_rw {146, "stdby-failed-rw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_lsp_tear_ppsw {147, "reopt-lsp-tear-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::delay_pp_lsp_tear_ppsw {148, "delay-pp-lsp-tear-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::stdby_failed_verify {149, "stdby-failed-verify"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::stdby_not_needed_due_to_restore {150, "stdby-not-needed-due-to-restore"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::restore_failed_verify {151, "restore-failed-verify"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::restore_failed_install {152, "restore-failed-install"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::restore_failed_rewrite {153, "restore-failed-rewrite"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_ppsw_cfg_rmvd {154, "te-ppsw-cfg-rmvd"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_ppsw_manual_ppsw {155, "te-ppsw-manual-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_ppsw_bidir_p_chg_ppsw {156, "te-ppsw-bidir-p-chg-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_ppsw_bidir_lockout_ppsw {157, "te-ppsw-bidir-lockout-ppsw"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dclean_at_pp_clean_timer {158, "dclean-at-pp-clean-timer"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reopt_standby_failed {159, "reopt-standby-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::standby_reoptimized {160, "standby-reoptimized"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::standby_reoptimize_aborted {161, "standby-reoptimize-aborted"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_reoptup_no_curr_lsp {162, "te-reoptup-no-curr-lsp"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_reopt_curr_lsp_down {163, "te-reopt-curr-lsp-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_cleanedt_curr_lsp_down {164, "te-cleanedt-curr-lsp-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_delay_lsp_up {165, "te-delay-lsp-up"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::no_route_due_to_affinity {166, "no-route-due-to-affinity"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::no_rib_lkup_bad_ero_gmpls {167, "no-rib-lkup-bad-ero-gmpls"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::cleanup_lingering {168, "cleanup-lingering"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_soft_preemption_timeout {169, "te-s2l-del-sc-soft-preemption-timeout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_soft_preempted_non_current {170, "te-s2l-del-sc-soft-preempted-non-current"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_vif_sync_lsp_del {171, "te-s2l-del-sc-vif-sync-lsp-del"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::rsvp_api_cleanup_req {172, "rsvp-api-cleanup-req"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_frr_wrong_backup {173, "te-s2l-del-sc-frr-wrong-backup"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_bfd_session_create_failed {174, "te-s2l-del-sc-bfd-session-create-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_bfd_session_bringup_timeout {175, "te-s2l-del-sc-bfd-session-bringup-timeout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_bfd_session_down {176, "te-s2l-del-sc-bfd-session-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_bfd_session_not_replayed {177, "te-s2l-del-sc-bfd-session-not-replayed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::te_s2l_del_sc_reopt_p2mp_egress_info_fail {178, "te-s2l-del-sc-reopt-p2mp-egress-info-fail"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::non_curr_frr_lcl_notif_event {179, "non-curr-frr-lcl-notif-event"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::unsupported_encoding {180, "unsupported-encoding"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::unsupported_gpid {181, "unsupported-gpid"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::unsupported_switching_type {182, "unsupported-switching-type"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::upstream_label_change_not_permitted {183, "upstream-label-change-not-permitted"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::encoding_type_change_not_permitted {184, "encoding-type-change-not-permitted"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::aps_protect_info_change_failed {185, "aps-protect-info-change-failed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::incorrect_lsp_type {186, "incorrect-lsp-type"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::local_hop_error {187, "local-hop-error"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::unsupported_gmpls_attributes {188, "unsupported-gmpls-attributes"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::gmpls_uni_reopt_triggered {189, "gmpls-uni-reopt-triggered"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::maximum_acceptable_label_retries {190, "maximum-acceptable-label-retries"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::invalid_direction {191, "invalid-direction"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::invalid_rewrite_context {192, "invalid-rewrite-context"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::invalid_label_context {193, "invalid-label-context"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dwdm_capability_changed {194, "dwdm-capability-changed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dwdm_capability_removed {195, "dwdm-capability-removed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::dwdm_wavelength_removed {196, "dwdm-wavelength-removed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::gmpls_uni_multilayer_restoration {197, "gmpls-uni-multilayer-restoration"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::gmpls_uni_user_triggered_reoptimization {198, "gmpls-uni-user-triggered-reoptimization"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::gmpls_uni_active_path_change_triggered_reopt {199, "gmpls-uni-active-path-change-triggered-reopt"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::passive_match_err {200, "passive-match-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::egress_control_err {201, "egress-control-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::egress_control_map_err {202, "egress-control-map-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::restore_not_needed_for_current {203, "restore-not-needed-for-current"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::restore_not_needed_for_standby {204, "restore-not-needed-for-standby"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::restore_dp_down {205, "restore-dp-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::current_not_needed_dp_down {206, "current-not-needed-dp-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::bad_protct_obj {207, "bad-protct-obj"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_down {208, "optical-link-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_lsp_out_of_sync {209, "optical-link-lsp-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_owner_out_of_sync {210, "optical-link-owner-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_interface_handle_out_of_sync {211, "optical-link-interface-handle-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_hop_out_of_sync {212, "optical-link-hop-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_role_out_of_sync {213, "optical-link-role-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_downstream_router_id_out_of_sync {214, "optical-link-downstream-router-id-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_upstream_router_id_out_of_sync {215, "optical-link-upstream-router-id-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_encoding_type_out_of_sync {216, "optical-link-encoding-type-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_switching_type_out_of_sync {217, "optical-link-switching-type-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::optical_link_gpid_out_of_sync {218, "optical-link-gpid-out-of-sync"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::egress_optical_link_not_found {219, "egress-optical-link-not-found"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::ingress_optical_link_not_found {220, "ingress-optical-link-not-found"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::sync_dest_state {221, "sync-dest-state"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::prot_object_err {222, "prot-object-err"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reverse_s2l_deleted {223, "reverse-s2l-deleted"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::cancel_inprogress_by_slave {224, "cancel-inprogress-by-slave"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::invalid_reverse_ero {225, "invalid-reverse-ero"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reverse_lsp_not_found {226, "reverse-lsp-not-found"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reverse_lsp_not_present {227, "reverse-lsp-not-present"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::associated_vif_down {228, "associated-vif-down"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::vif_sync_processing {229, "vif-sync-processing"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::incoming_interface_lockout {230, "incoming-interface-lockout"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::sr_egress_path_changed {231, "sr-egress-path-changed"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::in_if_fail_imp_null_cfg_ch {232, "in-if-fail-imp-null-cfg-ch"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::reverse_lsp_failure {233, "reverse-lsp-failure"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lsp_wrap_label_error {234, "lsp-wrap-label-error"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::lsp_wrap_rewrite_error {235, "lsp-wrap-rewrite-error"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::transit_lsp_out_of_resources {236, "transit-lsp-out-of-resources"};
const Enum::YLeaf TeP2MpS2LDeletionSubcauseEnum::fsm_sc_must_be_last {237, "fsm-sc-must-be-last"};

const Enum::YLeaf TeProcRoleEnum::unknown {0, "unknown"};
const Enum::YLeaf TeProcRoleEnum::v1_active {1, "v1-active"};
const Enum::YLeaf TeProcRoleEnum::v2_active {2, "v2-active"};
const Enum::YLeaf TeProcRoleEnum::v1_standby {3, "v1-standby"};
const Enum::YLeaf TeProcRoleEnum::v2_standby {4, "v2-standby"};
const Enum::YLeaf TeProcRoleEnum::v1_active_post_big_bang {5, "v1-active-post-big-bang"};
const Enum::YLeaf TeProcRoleEnum::v1_standby_post_big_bang {6, "v1-standby-post-big-bang"};
const Enum::YLeaf TeProcRoleEnum::number_of_role {7, "number-of-role"};

const Enum::YLeaf TeControllerStateEnum::notready {0, "notready"};
const Enum::YLeaf TeControllerStateEnum::admin_down {1, "admin-down"};
const Enum::YLeaf TeControllerStateEnum::down {2, "down"};
const Enum::YLeaf TeControllerStateEnum::shutdown {3, "shutdown"};
const Enum::YLeaf TeControllerStateEnum::error_disabled {4, "error-disabled"};
const Enum::YLeaf TeControllerStateEnum::up {5, "up"};
const Enum::YLeaf TeControllerStateEnum::unknown {6, "unknown"};

const Enum::YLeaf MtePathOptionEnum::none {0, "none"};
const Enum::YLeaf MtePathOptionEnum::dynamic {1, "dynamic"};
const Enum::YLeaf MtePathOptionEnum::explicit_ {2, "explicit"};
const Enum::YLeaf MtePathOptionEnum::no_ero {3, "no-ero"};
const Enum::YLeaf MtePathOptionEnum::segment_routing {4, "segment-routing"};
const Enum::YLeaf MtePathOptionEnum::po_count {5, "po-count"};

const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_none {0, "tunnel-attribute-set-none"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_static {1, "tunnel-attribute-set-static"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_path_option {2, "tunnel-attribute-set-path-option"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_not_used {3, "tunnel-attribute-set-not-used"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_auto_backup {4, "tunnel-attribute-set-auto-backup"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_auto_mesh {5, "tunnel-attribute-set-auto-mesh"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_xro {6, "tunnel-attribute-set-xro"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_p2mpte {7, "tunnel-attribute-set-p2mpte"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_aps_pp {8, "tunnel-attribute-aps-pp"};
const Enum::YLeaf TunnelAttributeSetEnum::tunnel_attribute_set_p2p_te {9, "tunnel-attribute-set-p2p-te"};

const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::no_cause {0, "no-cause"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hpath_cr_err {1, "hpath-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hpath_chg_setup {2, "hpath-chg-setup"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hpath_chg_up_err {3, "hpath-chg-up-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hresv_cr_err {4, "hresv-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hresv_chg_err {5, "hresv-chg-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hresv_chg_err_up {6, "hresv-chg-err-up"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hlbl_avail_err {7, "hlbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hup_lbl_avail_err {8, "hup-lbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hfrr_act_err {9, "hfrr-act-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hbkup_ch_err {10, "hbkup-ch-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hpath_ch_frr_err {11, "hpath-ch-frr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hcleanup {12, "hcleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hlingering_cleanup {13, "hlingering-cleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hpat_err {14, "hpat-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hresv_err {15, "hresv-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hresv_del {16, "hresv-del"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hrw_fail {17, "hrw-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::hup_rw_fail {18, "hup-rw-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::ha_failure {19, "ha-failure"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::rw_del {20, "rw-del"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::up_rw_del {21, "up-rw-del"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mpath_cr {22, "mpath-cr"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mpath_chg_setup_err {23, "mpath-chg-setup-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mpath_chg_up_err {24, "mpath-chg-up-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mresv_cr_err {25, "mresv-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mresv_chg_err {26, "mresv-chg-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mresv_chg_err_up {27, "mresv-chg-err-up"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mlbl_avail_err {28, "mlbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mlbl_rel_err {29, "mlbl-rel-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mup_lbl_avail_err {30, "mup-lbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mup_lbl_rel_err {31, "mup-lbl-rel-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mfrr_act_err {32, "mfrr-act-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mbkup_ch_err {33, "mbkup-ch-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mpath_ch_frr_err {34, "mpath-ch-frr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mresv_del {35, "mresv-del"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mresv_err {36, "mresv-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mpreempt {37, "mpreempt"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mcleanup {38, "mcleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mlingering_cleanup {39, "mlingering-cleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mrw_fail {40, "mrw-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::mup_rw_fail {41, "mup-rw-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::tpath_cr_err {42, "tpath-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::tpath_chg_err {43, "tpath-chg-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::tresv_cr_err {44, "tresv-cr-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::tlbl_avail_err {45, "tlbl-avail-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::tcleanup {46, "tcleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::tlingering_cleanup {47, "tlingering-cleanup"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::lbl_err {48, "lbl-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::qfailure {49, "qfailure"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::rsvp_recovery {50, "rsvp-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::lsd_recovery {51, "lsd-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::lmrib_recovery {52, "lmrib-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::te_restart {53, "te-restart"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::switchover {54, "switchover"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::master_te_recovery {55, "master-te-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::optical_r_mgr_recovery {56, "optical-r-mgr-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::te_exit {57, "te-exit"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::bkup_assign_fail {58, "bkup-assign-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::bfd_fail {59, "bfd-fail"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::bfd_recovery {60, "bfd-recovery"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::lsp_wrap_act_err {61, "lsp-wrap-act-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::lsp_wrap_rw_err {62, "lsp-wrap-rw-err"};
const Enum::YLeaf TeP2MpS2LDeletionCauseEnum::fsm_cause_must_be_last {63, "fsm-cause-must-be-last"};

const Enum::YLeaf TePathSelectionTiebreakerEnum::min_fill {1, "min-fill"};
const Enum::YLeaf TePathSelectionTiebreakerEnum::max_fill {2, "max-fill"};
const Enum::YLeaf TePathSelectionTiebreakerEnum::random {3, "random"};

const Enum::YLeaf MplsTeTunnelAnnounceEnum::announce_type_not_set {0, "announce-type-not-set"};
const Enum::YLeaf MplsTeTunnelAnnounceEnum::autoroute {1, "autoroute"};
const Enum::YLeaf MplsTeTunnelAnnounceEnum::forward_adjacency {2, "forward-adjacency"};

const Enum::YLeaf GmplsUniMgmtWdmGridEnum::not_set {0, "not-set"};
const Enum::YLeaf GmplsUniMgmtWdmGridEnum::dwdm {1, "dwdm"};
const Enum::YLeaf GmplsUniMgmtWdmGridEnum::cwdm {2, "cwdm"};

const Enum::YLeaf MplsTeAfiEnum::ipv4_unicast {0, "ipv4-unicast"};
const Enum::YLeaf MplsTeAfiEnum::ipv4_multicast {1, "ipv4-multicast"};
const Enum::YLeaf MplsTeAfiEnum::ipv6_unicast {2, "ipv6-unicast"};
const Enum::YLeaf MplsTeAfiEnum::ipv6_multicast {3, "ipv6-multicast"};

const Enum::YLeaf IgpSubnetEnum::igp_subnet_type_none {0, "igp-subnet-type-none"};
const Enum::YLeaf IgpSubnetEnum::p2p {1, "p2p"};
const Enum::YLeaf IgpSubnetEnum::broadcast {2, "broadcast"};
const Enum::YLeaf IgpSubnetEnum::non_broadcast_multiaccess {3, "non-broadcast-multiaccess"};
const Enum::YLeaf IgpSubnetEnum::p2mp {4, "p2mp"};
const Enum::YLeaf IgpSubnetEnum::loopback {5, "loopback"};

const Enum::YLeaf MteTunnelOperStateEnum::tunnel_state_oper_unknown {0, "tunnel-state-oper-unknown"};
const Enum::YLeaf MteTunnelOperStateEnum::operational_down {1, "operational-down"};
const Enum::YLeaf MteTunnelOperStateEnum::operational_up {2, "operational-up"};

const Enum::YLeaf BandwidthAccountingCollectionEnum::rsvp_te {0, "rsvp-te"};
const Enum::YLeaf BandwidthAccountingCollectionEnum::segment_routing {1, "segment-routing"};

const Enum::YLeaf TeServTunClientEnum::te_serv_auto_tun_client_invalid {0, "te-serv-auto-tun-client-invalid"};
const Enum::YLeaf TeServTunClientEnum::te_serv_p2mp_tun_client_mvpn {1, "te-serv-p2mp-tun-client-mvpn"};
const Enum::YLeaf TeServTunClientEnum::te_serv_p2mp_tun_client_vpls {2, "te-serv-p2mp-tun-client-vpls"};
const Enum::YLeaf TeServTunClientEnum::te_serv_p2mp_tun_client_mvpn6 {3, "te-serv-p2mp-tun-client-mvpn6"};
const Enum::YLeaf TeServTunClientEnum::te_serv_p2p_tun_client_bgp {4, "te-serv-p2p-tun-client-bgp"};
const Enum::YLeaf TeServTunClientEnum::te_serv_p2p_tun_client_staticv4 {5, "te-serv-p2p-tun-client-staticv4"};
const Enum::YLeaf TeServTunClientEnum::te_serv_p2p_tun_client_staticv6 {6, "te-serv-p2p-tun-client-staticv6"};
const Enum::YLeaf TeServTunClientEnum::te_serv_p2p_tun_client_isis {7, "te-serv-p2p-tun-client-isis"};
const Enum::YLeaf TeServTunClientEnum::te_serv_p2p_tun_client_ospf {8, "te-serv-p2p-tun-client-ospf"};
const Enum::YLeaf TeServTunClientEnum::te_serv_auto_tun_client_count {9, "te-serv-auto-tun-client-count"};

const Enum::YLeaf MplsTePathEnum::not_set {0, "not-set"};
const Enum::YLeaf MplsTePathEnum::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTePathEnum::explicit_name {3, "explicit-name"};
const Enum::YLeaf MplsTePathEnum::explicit_id {4, "explicit-id"};
const Enum::YLeaf MplsTePathEnum::no_ero {5, "no-ero"};
const Enum::YLeaf MplsTePathEnum::segment_routing {6, "segment-routing"};

const Enum::YLeaf TeS2LOutputRwExplicitNullEnum::tes2l_output_rw_exp_null {0, "tes2l-output-rw-exp-null"};
const Enum::YLeaf TeS2LOutputRwExplicitNullEnum::tes2l_output_rw_exp_null_v4 {1, "tes2l-output-rw-exp-null-v4"};
const Enum::YLeaf TeS2LOutputRwExplicitNullEnum::tes2l_output_rw_exp_null_v6 {2, "tes2l-output-rw-exp-null-v6"};

const Enum::YLeaf RsvpMgmtEroSubobjStatusEnum::rsvp_mgmt_ero_status_not_available {0, "rsvp-mgmt-ero-status-not-available"};
const Enum::YLeaf RsvpMgmtEroSubobjStatusEnum::rsvp_mgmt_ero_status_available {1, "rsvp-mgmt-ero-status-available"};
const Enum::YLeaf RsvpMgmtEroSubobjStatusEnum::rsvp_mgmt_ero_status_bw_not_available {2, "rsvp-mgmt-ero-status-bw-not-available"};

const Enum::YLeaf LspOorStateEnum::lsp_oor_green {0, "lsp-oor-green"};
const Enum::YLeaf LspOorStateEnum::lsp_oor_yellow {1, "lsp-oor-yellow"};
const Enum::YLeaf LspOorStateEnum::lsp_oor_red {2, "lsp-oor-red"};

const Enum::YLeaf MplsTeReoptDecisionReasonEnum::decision_reason_none {0, "decision-reason-none"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::not_superset {1, "not-superset"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::superset {2, "superset"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::lsp_frr_active {3, "lsp-frr-active"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::bandwidth_change {4, "bandwidth-change"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::metric_type_change {5, "metric-type-change"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::better_path_option_indexes {6, "better-path-option-indexes"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::inter_area_preferred_path_exists {7, "inter-area-preferred-path-exists"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::inter_area_preferred_tree_exists {8, "inter-area-preferred-tree-exists"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::worse_path_option_indexes {9, "worse-path-option-indexes"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::better_cumulative_metric {10, "better-cumulative-metric"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::worse_cumulative_metric {11, "worse-cumulative-metric"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::identical {12, "identical"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::no_s2_ls {13, "no-s2-ls"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::no_current_lsp {14, "no-current-lsp"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::user_path_option_switchover {15, "user-path-option-switchover"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::better_hops {16, "better-hops"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::worse_hops {17, "worse-hops"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::pce_force {18, "pce-force"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::affinity_changed {19, "affinity-changed"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::cost_limit {20, "cost-limit"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::sig_timeout {21, "sig-timeout"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::not_superset_inst_timer_expired {22, "not-superset-inst-timer-expired"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::path_verifiction_failed {23, "path-verifiction-failed"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::soft_preemption_recovery {24, "soft-preemption-recovery"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::iep_changed {25, "iep-changed"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::po_changed {26, "po-changed"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::dest_changed {27, "dest-changed"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::better_igp_area {28, "better-igp-area"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::worse_igp_area {29, "worse-igp-area"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::better_bandwidth_load_balancing {30, "better-bandwidth-load-balancing"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::worse_bandwidth_load_balancing {31, "worse-bandwidth-load-balancing"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::bfd_session_down {32, "bfd-session-down"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::auto_pcc_reopt {33, "auto-pcc-reopt"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::sr_egress_path_changed {34, "sr-egress-path-changed"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::overload_bit_set {35, "overload-bit-set"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::better_diversity {36, "better-diversity"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::worse_diversity {37, "worse-diversity"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::bfd_session_type_changed {38, "bfd-session-type-changed"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::lsp_drop_mode {39, "lsp-drop-mode"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::strict_spf {40, "strict-spf"};
const Enum::YLeaf MplsTeReoptDecisionReasonEnum::not_used {41, "not-used"};

const Enum::YLeaf TeAutobwAppTriggerEnum::application_none {0, "application-none"};
const Enum::YLeaf TeAutobwAppTriggerEnum::application_periodic {1, "application-periodic"};
const Enum::YLeaf TeAutobwAppTriggerEnum::application_manual {2, "application-manual"};
const Enum::YLeaf TeAutobwAppTriggerEnum::application_overflow {3, "application-overflow"};
const Enum::YLeaf TeAutobwAppTriggerEnum::application_underflow {4, "application-underflow"};

const Enum::YLeaf TeDestinationStateEnum::destination_disabled {0, "destination-disabled"};
const Enum::YLeaf TeDestinationStateEnum::destination_down {1, "destination-down"};
const Enum::YLeaf TeDestinationStateEnum::destination_up {2, "destination-up"};

const Enum::YLeaf MplsTeIepHopEnum::iep_hop_type_unknown {0, "iep-hop-type-unknown"};
const Enum::YLeaf MplsTeIepHopEnum::iep_hop_type_strict_next {1, "iep-hop-type-strict-next"};
const Enum::YLeaf MplsTeIepHopEnum::iep_hop_type_exclude {2, "iep-hop-type-exclude"};
const Enum::YLeaf MplsTeIepHopEnum::iep_hop_type_exclude_node {3, "iep-hop-type-exclude-node"};
const Enum::YLeaf MplsTeIepHopEnum::iep_hop_type_exclude_srlg {4, "iep-hop-type-exclude-srlg"};
const Enum::YLeaf MplsTeIepHopEnum::iep_hop_type_loose_next {5, "iep-hop-type-loose-next"};
const Enum::YLeaf MplsTeIepHopEnum::iep_hop_type_next {6, "iep-hop-type-next"};
const Enum::YLeaf MplsTeIepHopEnum::iep_hop_type_share_srlg {7, "iep-hop-type-share-srlg"};

const Enum::YLeaf TunnelStateEnumEnum::tunnel_state_unknown {0, "tunnel-state-unknown"};
const Enum::YLeaf TunnelStateEnumEnum::new_ {1, "new"};
const Enum::YLeaf TunnelStateEnumEnum::preempting {2, "preempting"};
const Enum::YLeaf TunnelStateEnumEnum::admitting {3, "admitting"};
const Enum::YLeaf TunnelStateEnumEnum::half_admitted {4, "half-admitted"};
const Enum::YLeaf TunnelStateEnumEnum::admitted {5, "admitted"};
const Enum::YLeaf TunnelStateEnumEnum::reservation_admitting {6, "reservation-admitting"};
const Enum::YLeaf TunnelStateEnumEnum::reservation_half_admitted {7, "reservation-half-admitted"};
const Enum::YLeaf TunnelStateEnumEnum::reservation_admitted {8, "reservation-admitted"};

const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::down {0, "down"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::recovering {1, "recovering"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::recovered {2, "recovered"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::connected {3, "connected"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::disabled {4, "disabled"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::proceeding {5, "proceeding"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::wait_bfd_session_up {6, "wait-bfd-session-up"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::wait_sr_segment_path_up {7, "wait-sr-segment-path-up"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::wait_local_label {8, "wait-local-label"};
const Enum::YLeaf MplsTeTunnelsSignalingStatusEnum::wait_local_label_rewrite {9, "wait-local-label-rewrite"};

const Enum::YLeaf TeAddrEnum::not_set {0, "not-set"};
const Enum::YLeaf TeAddrEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf TeAddrEnum::ipv4_unnumbered {2, "ipv4-unnumbered"};

const Enum::YLeaf MplsTeBwLimitEnum::bandwidth_limited {0, "bandwidth-limited"};
const Enum::YLeaf MplsTeBwLimitEnum::bandwidth_unlimited {1, "bandwidth-unlimited"};
const Enum::YLeaf MplsTeBwLimitEnum::bandwidth_none {2, "bandwidth-none"};

const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_null {0, "mpls-lib-c-type-null"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4 {1, "mpls-lib-c-type-ipv4"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4_p2p_tunnel {7, "mpls-lib-c-type-ipv4-p2p-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv6_p2p_tunnel {8, "mpls-lib-c-type-ipv6-p2p-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4_uni {9, "mpls-lib-c-type-ipv4-uni"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4_p2mp_tunnel {13, "mpls-lib-c-type-ipv4-p2mp-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv6_p2mp_tunnel {14, "mpls-lib-c-type-ipv6-p2mp-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv4_tp_tunnel {15, "mpls-lib-c-type-ipv4-tp-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_ipv6_tp_tunnel {16, "mpls-lib-c-type-ipv6-tp-tunnel"};
const Enum::YLeaf MplsLibCEnum::mpls_lib_c_type_p2p_binding_label {17, "mpls-lib-c-type-p2p-binding-label"};

const Enum::YLeaf MplsTeAttrSetEnum::not_used {0, "not-used"};
const Enum::YLeaf MplsTeAttrSetEnum::static_ {1, "static"};
const Enum::YLeaf MplsTeAttrSetEnum::lsp {2, "lsp"};
const Enum::YLeaf MplsTeAttrSetEnum::unassigned {3, "unassigned"};
const Enum::YLeaf MplsTeAttrSetEnum::auto_backup {4, "auto-backup"};
const Enum::YLeaf MplsTeAttrSetEnum::auto_mesh {5, "auto-mesh"};
const Enum::YLeaf MplsTeAttrSetEnum::xro {6, "xro"};
const Enum::YLeaf MplsTeAttrSetEnum::p2mp_te {7, "p2mp-te"};
const Enum::YLeaf MplsTeAttrSetEnum::otn_pp {8, "otn-pp"};
const Enum::YLeaf MplsTeAttrSetEnum::p2p_te {9, "p2p-te"};

const Enum::YLeaf TePceDisjointEnum::none {0, "none"};
const Enum::YLeaf TePceDisjointEnum::link {1, "link"};
const Enum::YLeaf TePceDisjointEnum::node {2, "node"};
const Enum::YLeaf TePceDisjointEnum::srlg {3, "srlg"};

const Enum::YLeaf IgpteAaMetricModeEnum::metric_mode_none {0, "metric-mode-none"};
const Enum::YLeaf IgpteAaMetricModeEnum::relative {1, "relative"};
const Enum::YLeaf IgpteAaMetricModeEnum::absolute {2, "absolute"};
const Enum::YLeaf IgpteAaMetricModeEnum::constant {3, "constant"};

const Enum::YLeaf TeXroExclusionEnum::mandatory {0, "mandatory"};
const Enum::YLeaf TeXroExclusionEnum::best_effort {1, "best-effort"};

const Enum::YLeaf RsvpMgmtRroSubobjEnum::ipv4rro_type {1, "ipv4rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobjEnum::label_rro_type {3, "label-rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobjEnum::unnumbered_rro_type {4, "unnumbered-rro-type"};
const Enum::YLeaf RsvpMgmtRroSubobjEnum::srlg_rro_type {34, "srlg-rro-type"};

const Enum::YLeaf MplsTeLspWrapStateEnum::lsp_wrap_not_ready {0, "lsp-wrap-not-ready"};
const Enum::YLeaf MplsTeLspWrapStateEnum::lsp_wrap_active {1, "lsp-wrap-active"};
const Enum::YLeaf MplsTeLspWrapStateEnum::lsp_wrap_ready {2, "lsp-wrap-ready"};

const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_not_set {0, "mpls-te-lsp-type-not-set"};
const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_p2p {1, "mpls-te-lsp-type-p2p"};
const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_p2mp {2, "mpls-te-lsp-type-p2mp"};
const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_gmpls_ouni {3, "mpls-te-lsp-type-gmpls-ouni"};
const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_gmpls_nni {4, "mpls-te-lsp-type-gmpls-nni"};
const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_p2p_bidir {5, "mpls-te-lsp-type-p2p-bidir"};
const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_gmpls_tp {6, "mpls-te-lsp-type-gmpls-tp"};
const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_gmpls_nni_otn {7, "mpls-te-lsp-type-gmpls-nni-otn"};
const Enum::YLeaf MplsTeLspEnum::mpls_te_lsp_type_segment_routing_p2p {8, "mpls-te-lsp-type-segment-routing-p2p"};

const Enum::YLeaf MplsTeIgpProtocolEnum::none {0, "none"};
const Enum::YLeaf MplsTeIgpProtocolEnum::isis {1, "isis"};
const Enum::YLeaf MplsTeIgpProtocolEnum::ospf {2, "ospf"};

const Enum::YLeaf MplsTeNextHopEnum::egress_resolve {0, "egress-resolve"};
const Enum::YLeaf MplsTeNextHopEnum::autoroute_dest {1, "autoroute-dest"};

const Enum::YLeaf TeTargetAddrEnum::invalid_te_target_type {0, "invalid-te-target-type"};
const Enum::YLeaf TeTargetAddrEnum::te_target_type_ipv4 {1, "te-target-type-ipv4"};
const Enum::YLeaf TeTargetAddrEnum::te_target_type_label {2, "te-target-type-label"};

const Enum::YLeaf TeRestorationStyleEnum::restoration_style_not_set {0, "restoration-style-not-set"};
const Enum::YLeaf TeRestorationStyleEnum::restoration_style_keep_failed_lsp {1, "restoration-style-keep-failed-lsp"};
const Enum::YLeaf TeRestorationStyleEnum::restoration_style_delete_failed_lsp {2, "restoration-style-delete-failed-lsp"};

const Enum::YLeaf MplsTeDsteClassStatusEnum::configured {0, "configured"};
const Enum::YLeaf MplsTeDsteClassStatusEnum::default_ {1, "default"};
const Enum::YLeaf MplsTeDsteClassStatusEnum::unused {2, "unused"};

const Enum::YLeaf MplsTeTunnelRoleEnum::tunnel_unknown {0, "tunnel-unknown"};
const Enum::YLeaf MplsTeTunnelRoleEnum::tunnel_head {1, "tunnel-head"};
const Enum::YLeaf MplsTeTunnelRoleEnum::tunnel_mid {2, "tunnel-mid"};
const Enum::YLeaf MplsTeTunnelRoleEnum::tunnel_tail {3, "tunnel-tail"};

const Enum::YLeaf TeAssociationTieRoleEnum::none {0, "none"};
const Enum::YLeaf TeAssociationTieRoleEnum::master {1, "master"};
const Enum::YLeaf TeAssociationTieRoleEnum::slave {2, "slave"};

const Enum::YLeaf PceLspOperStateEnum::down {0, "down"};
const Enum::YLeaf PceLspOperStateEnum::up {1, "up"};
const Enum::YLeaf PceLspOperStateEnum::active {2, "active"};
const Enum::YLeaf PceLspOperStateEnum::going_down {3, "going-down"};
const Enum::YLeaf PceLspOperStateEnum::going_up {4, "going-up"};

const Enum::YLeaf TeMeshgroupEnum::meshgroup_type_automesh {0, "meshgroup-type-automesh"};
const Enum::YLeaf TeMeshgroupEnum::meshgroup_type_onehop {1, "meshgroup-type-onehop"};

const Enum::YLeaf TeMgmtGenericFspecEnum::te_generic_fspec_type_g709otn {0, "te-generic-fspec-type-g709otn"};

const Enum::YLeaf MplsTeTerminationEnum::none {0, "none"};
const Enum::YLeaf MplsTeTerminationEnum::ether {1, "ether"};

const Enum::YLeaf OcMplsTeLspEnum::oc_mpls_te_lsp_type_not_set {0, "oc-mpls-te-lsp-type-not-set"};
const Enum::YLeaf OcMplsTeLspEnum::oc_mpls_te_lsp_type_p2p {1, "oc-mpls-te-lsp-type-p2p"};
const Enum::YLeaf OcMplsTeLspEnum::oc_mpls_te_lsp_type_p2mp {2, "oc-mpls-te-lsp-type-p2mp"};

const Enum::YLeaf TeOduCapabilityEnum::not_set {0, "not-set"};
const Enum::YLeaf TeOduCapabilityEnum::fixed {1, "fixed"};
const Enum::YLeaf TeOduCapabilityEnum::flex {2, "flex"};

const Enum::YLeaf TeSyncPendingReasonEnum::current_lspoos {0, "current-lspoos"};
const Enum::YLeaf TeSyncPendingReasonEnum::reopt_lspoos {1, "reopt-lspoos"};
const Enum::YLeaf TeSyncPendingReasonEnum::standby_lspoos {2, "standby-lspoos"};
const Enum::YLeaf TeSyncPendingReasonEnum::standby_reopt_lspoos {3, "standby-reopt-lspoos"};
const Enum::YLeaf TeSyncPendingReasonEnum::restore_lspoos {4, "restore-lspoos"};
const Enum::YLeaf TeSyncPendingReasonEnum::invalid_sync_id {5, "invalid-sync-id"};
const Enum::YLeaf TeSyncPendingReasonEnum::null_pointer {6, "null-pointer"};
const Enum::YLeaf TeSyncPendingReasonEnum::pending_flag {7, "pending-flag"};
const Enum::YLeaf TeSyncPendingReasonEnum::del_from_act_flag {8, "del-from-act-flag"};
const Enum::YLeaf TeSyncPendingReasonEnum::oos_from_act_flag {9, "oos-from-act-flag"};
const Enum::YLeaf TeSyncPendingReasonEnum::unknown {10, "unknown"};

const Enum::YLeaf MplsTpLspStateEnum::down {0, "down"};
const Enum::YLeaf MplsTpLspStateEnum::up {1, "up"};
const Enum::YLeaf MplsTpLspStateEnum::active {2, "active"};
const Enum::YLeaf MplsTpLspStateEnum::unknown {3, "unknown"};

const Enum::YLeaf TeXroAttributeEnum::interface {0, "interface"};
const Enum::YLeaf TeXroAttributeEnum::node {1, "node"};
const Enum::YLeaf TeXroAttributeEnum::srl_gs {2, "srl-gs"};


}
}

