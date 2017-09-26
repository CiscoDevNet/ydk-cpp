
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_0.hpp"
#include "openconfig_bgp_1.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_bgp {

Bgp::Bgp()
    :
    global(std::make_shared<Bgp::Global>())
	,neighbors(std::make_shared<Bgp::Neighbors>())
	,peer_groups(std::make_shared<Bgp::PeerGroups>())
{
    global->parent = this;
    neighbors->parent = this;
    peer_groups->parent = this;

    yang_name = "bgp"; yang_parent_name = "openconfig-bgp"; is_top_level_class = true; has_list_ancestor = false;
}

Bgp::~Bgp()
{
}

bool Bgp::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (peer_groups !=  nullptr && peer_groups->has_data());
}

bool Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (peer_groups !=  nullptr && peer_groups->has_operation());
}

std::string Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Global>();
        }
        return global;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Bgp::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "peer-groups")
    {
        if(peer_groups == nullptr)
        {
            peer_groups = std::make_shared<Bgp::PeerGroups>();
        }
        return peer_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(peer_groups != nullptr)
    {
        children["peer-groups"] = peer_groups;
    }

    return children;
}

void Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Bgp::clone_ptr() const
{
    return std::make_shared<Bgp>();
}

std::string Bgp::get_bundle_yang_models_location() const
{
    return ydk_openconfig_models_path;
}

std::string Bgp::get_bundle_name() const
{
    return "openconfig";
}

augment_capabilities_function Bgp::get_augment_capabilities_function() const
{
    return openconfig_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Bgp::get_namespace_identity_lookup() const
{
    return openconfig_namespace_identity_lookup;
}

bool Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "neighbors" || name == "peer-groups")
        return true;
    return false;
}

Bgp::Global::Global()
    :
    afi_safis(std::make_shared<Bgp::Global::AfiSafis>())
	,apply_policy(std::make_shared<Bgp::Global::ApplyPolicy>())
	,confederation(std::make_shared<Bgp::Global::Confederation>())
	,config(std::make_shared<Bgp::Global::Config>())
	,default_route_distance(std::make_shared<Bgp::Global::DefaultRouteDistance>())
	,graceful_restart(std::make_shared<Bgp::Global::GracefulRestart>())
	,route_selection_options(std::make_shared<Bgp::Global::RouteSelectionOptions>())
	,state(std::make_shared<Bgp::Global::State>())
	,use_multiple_paths(std::make_shared<Bgp::Global::UseMultiplePaths>())
{
    afi_safis->parent = this;
    apply_policy->parent = this;
    confederation->parent = this;
    config->parent = this;
    default_route_distance->parent = this;
    graceful_restart->parent = this;
    route_selection_options->parent = this;
    state->parent = this;
    use_multiple_paths->parent = this;

    yang_name = "global"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::~Global()
{
}

bool Bgp::Global::has_data() const
{
    return (afi_safis !=  nullptr && afi_safis->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (default_route_distance !=  nullptr && default_route_distance->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (route_selection_options !=  nullptr && route_selection_options->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data());
}

bool Bgp::Global::has_operation() const
{
    return is_set(yfilter)
	|| (afi_safis !=  nullptr && afi_safis->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (default_route_distance !=  nullptr && default_route_distance->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (route_selection_options !=  nullptr && route_selection_options->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation());
}

std::string Bgp::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<Bgp::Global::AfiSafis>();
        }
        return afi_safis;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<Bgp::Global::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<Bgp::Global::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::Config>();
        }
        return config;
    }

    if(child_yang_name == "default-route-distance")
    {
        if(default_route_distance == nullptr)
        {
            default_route_distance = std::make_shared<Bgp::Global::DefaultRouteDistance>();
        }
        return default_route_distance;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Bgp::Global::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options == nullptr)
        {
            route_selection_options = std::make_shared<Bgp::Global::RouteSelectionOptions>();
        }
        return route_selection_options;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::State>();
        }
        return state;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<Bgp::Global::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(afi_safis != nullptr)
    {
        children["afi-safis"] = afi_safis;
    }

    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    if(confederation != nullptr)
    {
        children["confederation"] = confederation;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(default_route_distance != nullptr)
    {
        children["default-route-distance"] = default_route_distance;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(route_selection_options != nullptr)
    {
        children["route-selection-options"] = route_selection_options;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(use_multiple_paths != nullptr)
    {
        children["use-multiple-paths"] = use_multiple_paths;
    }

    return children;
}

void Bgp::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safis" || name == "apply-policy" || name == "confederation" || name == "config" || name == "default-route-distance" || name == "graceful-restart" || name == "route-selection-options" || name == "state" || name == "use-multiple-paths")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafis()
{

    yang_name = "afi-safis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::AfiSafis::~AfiSafis()
{
}

bool Bgp::Global::AfiSafis::has_data() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Global::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Global::AfiSafis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        for(auto const & c : afi_safi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Global::AfiSafis::AfiSafi>();
        c->parent = this;
        afi_safi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : afi_safi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Global::AfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
    	,
    apply_policy(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy>())
	,config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Config>())
	,graceful_restart(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>())
	,ipv4_labeled_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast>())
	,ipv4_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>())
	,ipv6_labeled_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast>())
	,ipv6_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast>())
	,l2vpn_evpn(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn>())
	,l2vpn_vpls(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls>())
	,l3vpn_ipv4_multicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast>())
	,l3vpn_ipv4_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast>())
	,l3vpn_ipv6_multicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast>())
	,l3vpn_ipv6_unicast(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast>())
	,route_selection_options(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::State>())
	,use_multiple_paths(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths>())
{
    apply_policy->parent = this;
    config->parent = this;
    graceful_restart->parent = this;
    ipv4_labeled_unicast->parent = this;
    ipv4_unicast->parent = this;
    ipv6_labeled_unicast->parent = this;
    ipv6_unicast->parent = this;
    l2vpn_evpn->parent = this;
    l2vpn_vpls->parent = this;
    l3vpn_ipv4_multicast->parent = this;
    l3vpn_ipv4_unicast->parent = this;
    l3vpn_ipv6_multicast->parent = this;
    l3vpn_ipv6_unicast->parent = this;
    route_selection_options->parent = this;
    state->parent = this;
    use_multiple_paths->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::has_data() const
{
    return afi_safi_name.is_set
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_data())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_data())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_data())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_data())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_data())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_data())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_data())
	|| (route_selection_options !=  nullptr && route_selection_options->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_operation())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_operation())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_operation())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_operation())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_operation())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_operation())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_operation())
	|| (route_selection_options !=  nullptr && route_selection_options->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/afi-safis/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi" <<"[afi-safi-name='" <<afi_safi_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Config>();
        }
        return config;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ipv4-labeled-unicast")
    {
        if(ipv4_labeled_unicast == nullptr)
        {
            ipv4_labeled_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast>();
        }
        return ipv4_labeled_unicast;
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-labeled-unicast")
    {
        if(ipv6_labeled_unicast == nullptr)
        {
            ipv6_labeled_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast>();
        }
        return ipv6_labeled_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn == nullptr)
        {
            l2vpn_evpn = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn>();
        }
        return l2vpn_evpn;
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls == nullptr)
        {
            l2vpn_vpls = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls>();
        }
        return l2vpn_vpls;
    }

    if(child_yang_name == "l3vpn-ipv4-multicast")
    {
        if(l3vpn_ipv4_multicast == nullptr)
        {
            l3vpn_ipv4_multicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
        }
        return l3vpn_ipv4_multicast;
    }

    if(child_yang_name == "l3vpn-ipv4-unicast")
    {
        if(l3vpn_ipv4_unicast == nullptr)
        {
            l3vpn_ipv4_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
        }
        return l3vpn_ipv4_unicast;
    }

    if(child_yang_name == "l3vpn-ipv6-multicast")
    {
        if(l3vpn_ipv6_multicast == nullptr)
        {
            l3vpn_ipv6_multicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
        }
        return l3vpn_ipv6_multicast;
    }

    if(child_yang_name == "l3vpn-ipv6-unicast")
    {
        if(l3vpn_ipv6_unicast == nullptr)
        {
            l3vpn_ipv6_unicast = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
        }
        return l3vpn_ipv6_unicast;
    }

    if(child_yang_name == "route-selection-options")
    {
        if(route_selection_options == nullptr)
        {
            route_selection_options = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions>();
        }
        return route_selection_options;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::State>();
        }
        return state;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(ipv4_labeled_unicast != nullptr)
    {
        children["ipv4-labeled-unicast"] = ipv4_labeled_unicast;
    }

    if(ipv4_unicast != nullptr)
    {
        children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_labeled_unicast != nullptr)
    {
        children["ipv6-labeled-unicast"] = ipv6_labeled_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        children["ipv6-unicast"] = ipv6_unicast;
    }

    if(l2vpn_evpn != nullptr)
    {
        children["l2vpn-evpn"] = l2vpn_evpn;
    }

    if(l2vpn_vpls != nullptr)
    {
        children["l2vpn-vpls"] = l2vpn_vpls;
    }

    if(l3vpn_ipv4_multicast != nullptr)
    {
        children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
    }

    if(l3vpn_ipv4_unicast != nullptr)
    {
        children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
    }

    if(l3vpn_ipv6_multicast != nullptr)
    {
        children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
    }

    if(l3vpn_ipv6_unicast != nullptr)
    {
        children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
    }

    if(route_selection_options != nullptr)
    {
        children["route-selection-options"] = route_selection_options;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(use_multiple_paths != nullptr)
    {
        children["use-multiple-paths"] = use_multiple_paths;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "apply-policy" || name == "config" || name == "graceful-restart" || name == "ipv4-labeled-unicast" || name == "ipv4-unicast" || name == "ipv6-labeled-unicast" || name == "ipv6-unicast" || name == "l2vpn-evpn" || name == "l2vpn-vpls" || name == "l3vpn-ipv4-multicast" || name == "l3vpn-ipv4-unicast" || name == "l3vpn-ipv6-multicast" || name == "l3vpn-ipv6-unicast" || name == "route-selection-options" || name == "state" || name == "use-multiple-paths" || name == "afi-safi-name")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::~ApplyPolicy()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::Config()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::has_data() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_export_policy.is_set
	|| default_import_policy.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_export_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(import_policy.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-export-policy" || name == "default-import-policy" || name == "export-policy" || name == "import-policy")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::State()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::has_data() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_export_policy.is_set
	|| default_import_policy.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_export_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(import_policy.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
}

void Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-export-policy" || name == "default-import-policy" || name == "export-policy" || name == "import-policy")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Config::Config()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Config::has_data() const
{
    return afi_safi_name.is_set
	|| enabled.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::~GracefulRestart()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_data() const
{
    return enabled.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_data() const
{
    return enabled.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::Ipv4LabeledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv4-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::~Ipv4LabeledUnicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>())
	,prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>())
{
    config->parent = this;
    prefix_limit->parent = this;
    state->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::~Ipv4Unicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "prefix-limit" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_data() const
{
    return send_default_route.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_data() const
{
    return send_default_route.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv4Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::Ipv6LabeledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv6-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::~Ipv6LabeledUnicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
	,prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    config->parent = this;
    prefix_limit->parent = this;
    state->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "prefix-limit" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_data() const
{
    return send_default_route.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_data() const
{
    return send_default_route.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::Ipv6Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::L2VpnEvpn()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::~L2VpnEvpn()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::L2VpnVpls()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::~L2VpnVpls()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::L3VpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::~L3VpnIpv4Multicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::L3VpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::~L3VpnIpv4Unicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::L3VpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::~L3VpnIpv6Multicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::L3VpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::~L3VpnIpv6Unicast()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-selection-options"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::~RouteSelectionOptions()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::Config()
    :
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    always_compare_med{YType::boolean, "always-compare-med"},
    enable_aigp{YType::boolean, "enable-aigp"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "config"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_data() const
{
    return advertise_inactive_routes.is_set
	|| always_compare_med.is_set
	|| enable_aigp.is_set
	|| external_compare_router_id.is_set
	|| ignore_as_path_length.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-inactive-routes" || name == "always-compare-med" || name == "enable-aigp" || name == "external-compare-router-id" || name == "ignore-as-path-length" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::State()
    :
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    always_compare_med{YType::boolean, "always-compare-med"},
    enable_aigp{YType::boolean, "enable-aigp"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "state"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_data() const
{
    return advertise_inactive_routes.is_set
	|| always_compare_med.is_set
	|| enable_aigp.is_set
	|| external_compare_router_id.is_set
	|| ignore_as_path_length.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::RouteSelectionOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-inactive-routes" || name == "always-compare-med" || name == "enable-aigp" || name == "external-compare-router-id" || name == "ignore-as-path-length" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::State::State()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{

    yang_name = "state"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::State::has_data() const
{
    return afi_safi_name.is_set
	|| enabled.is_set
	|| total_paths.is_set
	|| total_prefixes.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled" || name == "total-paths" || name == "total-prefixes")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>())
	,ebgp(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>())
	,ibgp(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>())
{
    config->parent = this;
    ebgp->parent = this;
    ibgp->parent = this;
    state->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::~UseMultiplePaths()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(ebgp != nullptr)
    {
        children["ebgp"] = ebgp;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "ebgp" || name == "ibgp" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_data() const
{
    return enabled.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>())
	,state(std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_data() const
{
    return maximum_paths.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_data() const
{
    return maximum_paths.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::~State()
{
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_data() const
{
    return enabled.is_set;
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Global::AfiSafis::AfiSafi::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Global::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<Bgp::Global::ApplyPolicy::Config>())
	,state(std::make_shared<Bgp::Global::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::ApplyPolicy::~ApplyPolicy()
{
}

bool Bgp::Global::ApplyPolicy::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::ApplyPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::ApplyPolicy::Config::Config()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::ApplyPolicy::Config::~Config()
{
}

bool Bgp::Global::ApplyPolicy::Config::has_data() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_export_policy.is_set
	|| default_import_policy.is_set;
}

bool Bgp::Global::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_export_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(import_policy.yfilter);
}

std::string Bgp::Global::ApplyPolicy::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/apply-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
}

void Bgp::Global::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
}

bool Bgp::Global::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-export-policy" || name == "default-import-policy" || name == "export-policy" || name == "import-policy")
        return true;
    return false;
}

Bgp::Global::ApplyPolicy::State::State()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::ApplyPolicy::State::~State()
{
}

bool Bgp::Global::ApplyPolicy::State::has_data() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_export_policy.is_set
	|| default_import_policy.is_set;
}

bool Bgp::Global::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_export_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(import_policy.yfilter);
}

std::string Bgp::Global::ApplyPolicy::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/apply-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
}

void Bgp::Global::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
}

bool Bgp::Global::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-export-policy" || name == "default-import-policy" || name == "export-policy" || name == "import-policy")
        return true;
    return false;
}

Bgp::Global::Confederation::Confederation()
    :
    config(std::make_shared<Bgp::Global::Confederation::Config>())
	,state(std::make_shared<Bgp::Global::Confederation::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "confederation"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::Confederation::~Confederation()
{
}

bool Bgp::Global::Confederation::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::Confederation::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::Confederation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::Confederation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::Confederation::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::Confederation::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::Confederation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::Confederation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::Confederation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::Confederation::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    identifier{YType::uint32, "identifier"},
    member_as{YType::uint32, "member-as"}
{

    yang_name = "config"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::Confederation::Config::~Config()
{
}

bool Bgp::Global::Confederation::Config::has_data() const
{
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| identifier.is_set;
}

bool Bgp::Global::Confederation::Config::has_operation() const
{
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(member_as.yfilter);
}

std::string Bgp::Global::Confederation::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/confederation/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::Confederation::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::Confederation::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    auto member_as_name_datas = member_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_as_name_datas.begin(), member_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::Confederation::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::Confederation::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::Confederation::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-as")
    {
        member_as.append(value);
    }
}

void Bgp::Global::Confederation::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "member-as")
    {
        member_as.yfilter = yfilter;
    }
}

bool Bgp::Global::Confederation::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "identifier" || name == "member-as")
        return true;
    return false;
}

Bgp::Global::Confederation::State::State()
    :
    enabled{YType::boolean, "enabled"},
    identifier{YType::uint32, "identifier"},
    member_as{YType::uint32, "member-as"}
{

    yang_name = "state"; yang_parent_name = "confederation"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::Confederation::State::~State()
{
}

bool Bgp::Global::Confederation::State::has_data() const
{
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return enabled.is_set
	|| identifier.is_set;
}

bool Bgp::Global::Confederation::State::has_operation() const
{
    for (auto const & leaf : member_as.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(member_as.yfilter);
}

std::string Bgp::Global::Confederation::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/confederation/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::Confederation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::Confederation::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    auto member_as_name_datas = member_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_as_name_datas.begin(), member_as_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::Confederation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::Confederation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::Confederation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-as")
    {
        member_as.append(value);
    }
}

void Bgp::Global::Confederation::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "member-as")
    {
        member_as.yfilter = yfilter;
    }
}

bool Bgp::Global::Confederation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "identifier" || name == "member-as")
        return true;
    return false;
}

Bgp::Global::Config::Config()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"}
{

    yang_name = "config"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::Config::~Config()
{
}

bool Bgp::Global::Config::has_data() const
{
    return as.is_set
	|| router_id.is_set;
}

bool Bgp::Global::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Bgp::Global::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Bgp::Global::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "router-id")
        return true;
    return false;
}

Bgp::Global::DefaultRouteDistance::DefaultRouteDistance()
    :
    config(std::make_shared<Bgp::Global::DefaultRouteDistance::Config>())
	,state(std::make_shared<Bgp::Global::DefaultRouteDistance::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "default-route-distance"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::DefaultRouteDistance::~DefaultRouteDistance()
{
}

bool Bgp::Global::DefaultRouteDistance::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::DefaultRouteDistance::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::DefaultRouteDistance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::DefaultRouteDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-route-distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::DefaultRouteDistance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::DefaultRouteDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::DefaultRouteDistance::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::DefaultRouteDistance::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::DefaultRouteDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::DefaultRouteDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::DefaultRouteDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::DefaultRouteDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::DefaultRouteDistance::Config::Config()
    :
    external_route_distance{YType::uint8, "external-route-distance"},
    internal_route_distance{YType::uint8, "internal-route-distance"}
{

    yang_name = "config"; yang_parent_name = "default-route-distance"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::DefaultRouteDistance::Config::~Config()
{
}

bool Bgp::Global::DefaultRouteDistance::Config::has_data() const
{
    return external_route_distance.is_set
	|| internal_route_distance.is_set;
}

bool Bgp::Global::DefaultRouteDistance::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_route_distance.yfilter)
	|| ydk::is_set(internal_route_distance.yfilter);
}

std::string Bgp::Global::DefaultRouteDistance::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/default-route-distance/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::DefaultRouteDistance::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::DefaultRouteDistance::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_distance.is_set || is_set(external_route_distance.yfilter)) leaf_name_data.push_back(external_route_distance.get_name_leafdata());
    if (internal_route_distance.is_set || is_set(internal_route_distance.yfilter)) leaf_name_data.push_back(internal_route_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::DefaultRouteDistance::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::DefaultRouteDistance::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::DefaultRouteDistance::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance = value;
        external_route_distance.value_namespace = name_space;
        external_route_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance = value;
        internal_route_distance.value_namespace = name_space;
        internal_route_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::DefaultRouteDistance::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance.yfilter = yfilter;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance.yfilter = yfilter;
    }
}

bool Bgp::Global::DefaultRouteDistance::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route-distance" || name == "internal-route-distance")
        return true;
    return false;
}

Bgp::Global::DefaultRouteDistance::State::State()
    :
    external_route_distance{YType::uint8, "external-route-distance"},
    internal_route_distance{YType::uint8, "internal-route-distance"}
{

    yang_name = "state"; yang_parent_name = "default-route-distance"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::DefaultRouteDistance::State::~State()
{
}

bool Bgp::Global::DefaultRouteDistance::State::has_data() const
{
    return external_route_distance.is_set
	|| internal_route_distance.is_set;
}

bool Bgp::Global::DefaultRouteDistance::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_route_distance.yfilter)
	|| ydk::is_set(internal_route_distance.yfilter);
}

std::string Bgp::Global::DefaultRouteDistance::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/default-route-distance/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::DefaultRouteDistance::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::DefaultRouteDistance::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_route_distance.is_set || is_set(external_route_distance.yfilter)) leaf_name_data.push_back(external_route_distance.get_name_leafdata());
    if (internal_route_distance.is_set || is_set(internal_route_distance.yfilter)) leaf_name_data.push_back(internal_route_distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::DefaultRouteDistance::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::DefaultRouteDistance::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::DefaultRouteDistance::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance = value;
        external_route_distance.value_namespace = name_space;
        external_route_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance = value;
        internal_route_distance.value_namespace = name_space;
        internal_route_distance.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::DefaultRouteDistance::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-route-distance")
    {
        external_route_distance.yfilter = yfilter;
    }
    if(value_path == "internal-route-distance")
    {
        internal_route_distance.yfilter = yfilter;
    }
}

bool Bgp::Global::DefaultRouteDistance::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-route-distance" || name == "internal-route-distance")
        return true;
    return false;
}

Bgp::Global::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Bgp::Global::GracefulRestart::Config>())
	,state(std::make_shared<Bgp::Global::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::GracefulRestart::~GracefulRestart()
{
}

bool Bgp::Global::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"},
    helper_only{YType::boolean, "helper-only"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::GracefulRestart::Config::~Config()
{
}

bool Bgp::Global::GracefulRestart::Config::has_data() const
{
    return enabled.is_set
	|| helper_only.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set;
}

bool Bgp::Global::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(helper_only.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter);
}

std::string Bgp::Global::GracefulRestart::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
        stale_routes_time.value_namespace = name_space;
        stale_routes_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
}

bool Bgp::Global::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "helper-only" || name == "restart-time" || name == "stale-routes-time")
        return true;
    return false;
}

Bgp::Global::GracefulRestart::State::State()
    :
    enabled{YType::boolean, "enabled"},
    helper_only{YType::boolean, "helper-only"},
    restart_time{YType::uint16, "restart-time"},
    stale_routes_time{YType::str, "stale-routes-time"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::GracefulRestart::State::~State()
{
}

bool Bgp::Global::GracefulRestart::State::has_data() const
{
    return enabled.is_set
	|| helper_only.is_set
	|| restart_time.is_set
	|| stale_routes_time.is_set;
}

bool Bgp::Global::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(helper_only.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_routes_time.yfilter);
}

std::string Bgp::Global::GracefulRestart::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (helper_only.is_set || is_set(helper_only.yfilter)) leaf_name_data.push_back(helper_only.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_routes_time.is_set || is_set(stale_routes_time.yfilter)) leaf_name_data.push_back(stale_routes_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "helper-only")
    {
        helper_only = value;
        helper_only.value_namespace = name_space;
        helper_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time = value;
        stale_routes_time.value_namespace = name_space;
        stale_routes_time.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "helper-only")
    {
        helper_only.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-routes-time")
    {
        stale_routes_time.yfilter = yfilter;
    }
}

bool Bgp::Global::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "helper-only" || name == "restart-time" || name == "stale-routes-time")
        return true;
    return false;
}

Bgp::Global::RouteSelectionOptions::RouteSelectionOptions()
    :
    config(std::make_shared<Bgp::Global::RouteSelectionOptions::Config>())
	,state(std::make_shared<Bgp::Global::RouteSelectionOptions::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "route-selection-options"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::RouteSelectionOptions::~RouteSelectionOptions()
{
}

bool Bgp::Global::RouteSelectionOptions::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::RouteSelectionOptions::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::RouteSelectionOptions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::RouteSelectionOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-selection-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::RouteSelectionOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::RouteSelectionOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::RouteSelectionOptions::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::RouteSelectionOptions::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::RouteSelectionOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::RouteSelectionOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::RouteSelectionOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::RouteSelectionOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::RouteSelectionOptions::Config::Config()
    :
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    always_compare_med{YType::boolean, "always-compare-med"},
    enable_aigp{YType::boolean, "enable-aigp"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "config"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::RouteSelectionOptions::Config::~Config()
{
}

bool Bgp::Global::RouteSelectionOptions::Config::has_data() const
{
    return advertise_inactive_routes.is_set
	|| always_compare_med.is_set
	|| enable_aigp.is_set
	|| external_compare_router_id.is_set
	|| ignore_as_path_length.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool Bgp::Global::RouteSelectionOptions::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string Bgp::Global::RouteSelectionOptions::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/route-selection-options/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::RouteSelectionOptions::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::RouteSelectionOptions::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::RouteSelectionOptions::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::RouteSelectionOptions::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::RouteSelectionOptions::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::RouteSelectionOptions::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Global::RouteSelectionOptions::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-inactive-routes" || name == "always-compare-med" || name == "enable-aigp" || name == "external-compare-router-id" || name == "ignore-as-path-length" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

Bgp::Global::RouteSelectionOptions::State::State()
    :
    advertise_inactive_routes{YType::boolean, "advertise-inactive-routes"},
    always_compare_med{YType::boolean, "always-compare-med"},
    enable_aigp{YType::boolean, "enable-aigp"},
    external_compare_router_id{YType::boolean, "external-compare-router-id"},
    ignore_as_path_length{YType::boolean, "ignore-as-path-length"},
    ignore_next_hop_igp_metric{YType::boolean, "ignore-next-hop-igp-metric"}
{

    yang_name = "state"; yang_parent_name = "route-selection-options"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::RouteSelectionOptions::State::~State()
{
}

bool Bgp::Global::RouteSelectionOptions::State::has_data() const
{
    return advertise_inactive_routes.is_set
	|| always_compare_med.is_set
	|| enable_aigp.is_set
	|| external_compare_router_id.is_set
	|| ignore_as_path_length.is_set
	|| ignore_next_hop_igp_metric.is_set;
}

bool Bgp::Global::RouteSelectionOptions::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_inactive_routes.yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(enable_aigp.yfilter)
	|| ydk::is_set(external_compare_router_id.yfilter)
	|| ydk::is_set(ignore_as_path_length.yfilter)
	|| ydk::is_set(ignore_next_hop_igp_metric.yfilter);
}

std::string Bgp::Global::RouteSelectionOptions::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/route-selection-options/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::RouteSelectionOptions::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::RouteSelectionOptions::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_inactive_routes.is_set || is_set(advertise_inactive_routes.yfilter)) leaf_name_data.push_back(advertise_inactive_routes.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (enable_aigp.is_set || is_set(enable_aigp.yfilter)) leaf_name_data.push_back(enable_aigp.get_name_leafdata());
    if (external_compare_router_id.is_set || is_set(external_compare_router_id.yfilter)) leaf_name_data.push_back(external_compare_router_id.get_name_leafdata());
    if (ignore_as_path_length.is_set || is_set(ignore_as_path_length.yfilter)) leaf_name_data.push_back(ignore_as_path_length.get_name_leafdata());
    if (ignore_next_hop_igp_metric.is_set || is_set(ignore_next_hop_igp_metric.yfilter)) leaf_name_data.push_back(ignore_next_hop_igp_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::RouteSelectionOptions::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::RouteSelectionOptions::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::RouteSelectionOptions::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes = value;
        advertise_inactive_routes.value_namespace = name_space;
        advertise_inactive_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp = value;
        enable_aigp.value_namespace = name_space;
        enable_aigp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id = value;
        external_compare_router_id.value_namespace = name_space;
        external_compare_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length = value;
        ignore_as_path_length.value_namespace = name_space;
        ignore_as_path_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric = value;
        ignore_next_hop_igp_metric.value_namespace = name_space;
        ignore_next_hop_igp_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::RouteSelectionOptions::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-inactive-routes")
    {
        advertise_inactive_routes.yfilter = yfilter;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "enable-aigp")
    {
        enable_aigp.yfilter = yfilter;
    }
    if(value_path == "external-compare-router-id")
    {
        external_compare_router_id.yfilter = yfilter;
    }
    if(value_path == "ignore-as-path-length")
    {
        ignore_as_path_length.yfilter = yfilter;
    }
    if(value_path == "ignore-next-hop-igp-metric")
    {
        ignore_next_hop_igp_metric.yfilter = yfilter;
    }
}

bool Bgp::Global::RouteSelectionOptions::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-inactive-routes" || name == "always-compare-med" || name == "enable-aigp" || name == "external-compare-router-id" || name == "ignore-as-path-length" || name == "ignore-next-hop-igp-metric")
        return true;
    return false;
}

Bgp::Global::State::State()
    :
    as{YType::uint32, "as"},
    router_id{YType::str, "router-id"},
    total_paths{YType::uint32, "total-paths"},
    total_prefixes{YType::uint32, "total-prefixes"}
{

    yang_name = "state"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::State::~State()
{
}

bool Bgp::Global::State::has_data() const
{
    return as.is_set
	|| router_id.is_set
	|| total_paths.is_set
	|| total_prefixes.is_set;
}

bool Bgp::Global::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(total_paths.yfilter)
	|| ydk::is_set(total_prefixes.yfilter);
}

std::string Bgp::Global::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.yfilter)) leaf_name_data.push_back(total_paths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
        total_paths.value_namespace = name_space;
        total_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "total-paths")
    {
        total_paths.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
}

bool Bgp::Global::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "router-id" || name == "total-paths" || name == "total-prefixes")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::UseMultiplePaths()
    :
    config(std::make_shared<Bgp::Global::UseMultiplePaths::Config>())
	,ebgp(std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp>())
	,ibgp(std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp>())
	,state(std::make_shared<Bgp::Global::UseMultiplePaths::State>())
{
    config->parent = this;
    ebgp->parent = this;
    ibgp->parent = this;
    state->parent = this;

    yang_name = "use-multiple-paths"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::~UseMultiplePaths()
{
}

bool Bgp::Global::UseMultiplePaths::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (ebgp !=  nullptr && ebgp->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::UseMultiplePaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (ebgp !=  nullptr && ebgp->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::UseMultiplePaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-multiple-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::UseMultiplePaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "ebgp")
    {
        if(ebgp == nullptr)
        {
            ebgp = std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp>();
        }
        return ebgp;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::UseMultiplePaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(ebgp != nullptr)
    {
        children["ebgp"] = ebgp;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::UseMultiplePaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::UseMultiplePaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::UseMultiplePaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "ebgp" || name == "ibgp" || name == "state")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::Config::~Config()
{
}

bool Bgp::Global::UseMultiplePaths::Config::has_data() const
{
    return enabled.is_set;
}

bool Bgp::Global::UseMultiplePaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Global::UseMultiplePaths::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::UseMultiplePaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::UseMultiplePaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Global::UseMultiplePaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::Ebgp::Ebgp()
    :
    config(std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp::Config>())
	,state(std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ebgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::Ebgp::~Ebgp()
{
}

bool Bgp::Global::UseMultiplePaths::Ebgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::UseMultiplePaths::Ebgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::Ebgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ebgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::UseMultiplePaths::Ebgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::Ebgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::UseMultiplePaths::Ebgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::UseMultiplePaths::Ebgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::UseMultiplePaths::Ebgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::Ebgp::Config::Config()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::Ebgp::Config::~Config()
{
}

bool Bgp::Global::UseMultiplePaths::Ebgp::Config::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::Global::UseMultiplePaths::Ebgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/ebgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::Ebgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ebgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::Ebgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::UseMultiplePaths::Ebgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::UseMultiplePaths::Ebgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::Global::UseMultiplePaths::Ebgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::Ebgp::State::State()
    :
    allow_multiple_as{YType::boolean, "allow-multiple-as"},
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ebgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::Ebgp::State::~State()
{
}

bool Bgp::Global::UseMultiplePaths::Ebgp::State::has_data() const
{
    return allow_multiple_as.is_set
	|| maximum_paths.is_set;
}

bool Bgp::Global::UseMultiplePaths::Ebgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_multiple_as.yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/ebgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::Ebgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::Ebgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_multiple_as.is_set || is_set(allow_multiple_as.yfilter)) leaf_name_data.push_back(allow_multiple_as.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ebgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::Ebgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::UseMultiplePaths::Ebgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as = value;
        allow_multiple_as.value_namespace = name_space;
        allow_multiple_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::UseMultiplePaths::Ebgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-multiple-as")
    {
        allow_multiple_as.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::Global::UseMultiplePaths::Ebgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-multiple-as" || name == "maximum-paths")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::Ibgp::Ibgp()
    :
    config(std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp::Config>())
	,state(std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "ibgp"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::Ibgp::~Ibgp()
{
}

bool Bgp::Global::UseMultiplePaths::Ibgp::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Global::UseMultiplePaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Global::UseMultiplePaths::Ibgp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Global::UseMultiplePaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Global::UseMultiplePaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Global::UseMultiplePaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::Ibgp::Config::Config()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "config"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::Ibgp::Config::~Config()
{
}

bool Bgp::Global::UseMultiplePaths::Ibgp::Config::has_data() const
{
    return maximum_paths.is_set;
}

bool Bgp::Global::UseMultiplePaths::Ibgp::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/ibgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::Ibgp::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ibgp::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::Ibgp::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::UseMultiplePaths::Ibgp::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::UseMultiplePaths::Ibgp::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::Global::UseMultiplePaths::Ibgp::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::Ibgp::State::State()
    :
    maximum_paths{YType::uint32, "maximum-paths"}
{

    yang_name = "state"; yang_parent_name = "ibgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::Ibgp::State::~State()
{
}

bool Bgp::Global::UseMultiplePaths::Ibgp::State::has_data() const
{
    return maximum_paths.is_set;
}

bool Bgp::Global::UseMultiplePaths::Ibgp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_paths.yfilter);
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/ibgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::Ibgp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::Ibgp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::Ibgp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::Ibgp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::UseMultiplePaths::Ibgp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::UseMultiplePaths::Ibgp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
}

bool Bgp::Global::UseMultiplePaths::Ibgp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-paths")
        return true;
    return false;
}

Bgp::Global::UseMultiplePaths::State::State()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "state"; yang_parent_name = "use-multiple-paths"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Global::UseMultiplePaths::State::~State()
{
}

bool Bgp::Global::UseMultiplePaths::State::has_data() const
{
    return enabled.is_set;
}

bool Bgp::Global::UseMultiplePaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Global::UseMultiplePaths::State::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/global/use-multiple-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Global::UseMultiplePaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Global::UseMultiplePaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Global::UseMultiplePaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Global::UseMultiplePaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Global::UseMultiplePaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Global::UseMultiplePaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Global::UseMultiplePaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Neighbors::~Neighbors()
{
}

bool Bgp::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
    	,
    add_paths(std::make_shared<Bgp::Neighbors::Neighbor::AddPaths>())
	,afi_safis(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis>())
	,apply_policy(std::make_shared<Bgp::Neighbors::Neighbor::ApplyPolicy>())
	,as_path_options(std::make_shared<Bgp::Neighbors::Neighbor::AsPathOptions>())
	,config(std::make_shared<Bgp::Neighbors::Neighbor::Config>())
	,ebgp_multihop(std::make_shared<Bgp::Neighbors::Neighbor::EbgpMultihop>())
	,error_handling(std::make_shared<Bgp::Neighbors::Neighbor::ErrorHandling>())
	,graceful_restart(std::make_shared<Bgp::Neighbors::Neighbor::GracefulRestart>())
	,logging_options(std::make_shared<Bgp::Neighbors::Neighbor::LoggingOptions>())
	,route_reflector(std::make_shared<Bgp::Neighbors::Neighbor::RouteReflector>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::State>())
	,timers(std::make_shared<Bgp::Neighbors::Neighbor::Timers>())
	,transport(std::make_shared<Bgp::Neighbors::Neighbor::Transport>())
	,use_multiple_paths(std::make_shared<Bgp::Neighbors::Neighbor::UseMultiplePaths>())
{
    add_paths->parent = this;
    afi_safis->parent = this;
    apply_policy->parent = this;
    as_path_options->parent = this;
    config->parent = this;
    ebgp_multihop->parent = this;
    error_handling->parent = this;
    graceful_restart->parent = this;
    logging_options->parent = this;
    route_reflector->parent = this;
    state->parent = this;
    timers->parent = this;
    transport->parent = this;
    use_multiple_paths->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Neighbors::Neighbor::~Neighbor()
{
}

bool Bgp::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| (add_paths !=  nullptr && add_paths->has_data())
	|| (afi_safis !=  nullptr && afi_safis->has_data())
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (as_path_options !=  nullptr && as_path_options->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (error_handling !=  nullptr && error_handling->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (logging_options !=  nullptr && logging_options->has_data())
	|| (route_reflector !=  nullptr && route_reflector->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data());
}

bool Bgp::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| (add_paths !=  nullptr && add_paths->has_operation())
	|| (afi_safis !=  nullptr && afi_safis->has_operation())
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (as_path_options !=  nullptr && as_path_options->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (error_handling !=  nullptr && error_handling->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (logging_options !=  nullptr && logging_options->has_operation())
	|| (route_reflector !=  nullptr && route_reflector->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation());
}

std::string Bgp::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "openconfig-bgp:bgp/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "add-paths")
    {
        if(add_paths == nullptr)
        {
            add_paths = std::make_shared<Bgp::Neighbors::Neighbor::AddPaths>();
        }
        return add_paths;
    }

    if(child_yang_name == "afi-safis")
    {
        if(afi_safis == nullptr)
        {
            afi_safis = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis>();
        }
        return afi_safis;
    }

    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<Bgp::Neighbors::Neighbor::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "as-path-options")
    {
        if(as_path_options == nullptr)
        {
            as_path_options = std::make_shared<Bgp::Neighbors::Neighbor::AsPathOptions>();
        }
        return as_path_options;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::Config>();
        }
        return config;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Bgp::Neighbors::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "error-handling")
    {
        if(error_handling == nullptr)
        {
            error_handling = std::make_shared<Bgp::Neighbors::Neighbor::ErrorHandling>();
        }
        return error_handling;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Bgp::Neighbors::Neighbor::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "logging-options")
    {
        if(logging_options == nullptr)
        {
            logging_options = std::make_shared<Bgp::Neighbors::Neighbor::LoggingOptions>();
        }
        return logging_options;
    }

    if(child_yang_name == "route-reflector")
    {
        if(route_reflector == nullptr)
        {
            route_reflector = std::make_shared<Bgp::Neighbors::Neighbor::RouteReflector>();
        }
        return route_reflector;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::State>();
        }
        return state;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Bgp::Neighbors::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Bgp::Neighbors::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<Bgp::Neighbors::Neighbor::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(add_paths != nullptr)
    {
        children["add-paths"] = add_paths;
    }

    if(afi_safis != nullptr)
    {
        children["afi-safis"] = afi_safis;
    }

    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    if(as_path_options != nullptr)
    {
        children["as-path-options"] = as_path_options;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(error_handling != nullptr)
    {
        children["error-handling"] = error_handling;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(logging_options != nullptr)
    {
        children["logging-options"] = logging_options;
    }

    if(route_reflector != nullptr)
    {
        children["route-reflector"] = route_reflector;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(use_multiple_paths != nullptr)
    {
        children["use-multiple-paths"] = use_multiple_paths;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add-paths" || name == "afi-safis" || name == "apply-policy" || name == "as-path-options" || name == "config" || name == "ebgp-multihop" || name == "error-handling" || name == "graceful-restart" || name == "logging-options" || name == "route-reflector" || name == "state" || name == "timers" || name == "transport" || name == "use-multiple-paths" || name == "neighbor-address")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AddPaths::AddPaths()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AddPaths::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AddPaths::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "add-paths"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AddPaths::~AddPaths()
{
}

bool Bgp::Neighbors::Neighbor::AddPaths::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AddPaths::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AddPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AddPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AddPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AddPaths::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AddPaths::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AddPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AddPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AddPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AddPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AddPaths::Config::Config()
    :
    eligible_prefix_policy{YType::str, "eligible-prefix-policy"},
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"}
{

    yang_name = "config"; yang_parent_name = "add-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AddPaths::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AddPaths::Config::has_data() const
{
    return eligible_prefix_policy.is_set
	|| receive.is_set
	|| send_max.is_set;
}

bool Bgp::Neighbors::Neighbor::AddPaths::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eligible_prefix_policy.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send_max.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AddPaths::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AddPaths::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eligible_prefix_policy.is_set || is_set(eligible_prefix_policy.yfilter)) leaf_name_data.push_back(eligible_prefix_policy.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.yfilter)) leaf_name_data.push_back(send_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AddPaths::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AddPaths::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AddPaths::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy = value;
        eligible_prefix_policy.value_namespace = name_space;
        eligible_prefix_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-max")
    {
        send_max = value;
        send_max.value_namespace = name_space;
        send_max.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AddPaths::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send-max")
    {
        send_max.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AddPaths::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eligible-prefix-policy" || name == "receive" || name == "send-max")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AddPaths::State::State()
    :
    eligible_prefix_policy{YType::str, "eligible-prefix-policy"},
    receive{YType::boolean, "receive"},
    send_max{YType::uint8, "send-max"}
{

    yang_name = "state"; yang_parent_name = "add-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AddPaths::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AddPaths::State::has_data() const
{
    return eligible_prefix_policy.is_set
	|| receive.is_set
	|| send_max.is_set;
}

bool Bgp::Neighbors::Neighbor::AddPaths::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eligible_prefix_policy.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send_max.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AddPaths::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AddPaths::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eligible_prefix_policy.is_set || is_set(eligible_prefix_policy.yfilter)) leaf_name_data.push_back(eligible_prefix_policy.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send_max.is_set || is_set(send_max.yfilter)) leaf_name_data.push_back(send_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AddPaths::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AddPaths::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AddPaths::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy = value;
        eligible_prefix_policy.value_namespace = name_space;
        eligible_prefix_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-max")
    {
        send_max = value;
        send_max.value_namespace = name_space;
        send_max.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AddPaths::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eligible-prefix-policy")
    {
        eligible_prefix_policy.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send-max")
    {
        send_max.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AddPaths::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eligible-prefix-policy" || name == "receive" || name == "send-max")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafis()
{

    yang_name = "afi-safis"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::~AfiSafis()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::has_data() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::has_operation() const
{
    for (std::size_t index=0; index<afi_safi.size(); index++)
    {
        if(afi_safi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "afi-safi")
    {
        for(auto const & c : afi_safi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi>();
        c->parent = this;
        afi_safi.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : afi_safi)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::AfiSafi()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"}
    	,
    apply_policy(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy>())
	,config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config>())
	,graceful_restart(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart>())
	,ipv4_labeled_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast>())
	,ipv4_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast>())
	,ipv6_labeled_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast>())
	,ipv6_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast>())
	,l2vpn_evpn(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn>())
	,l2vpn_vpls(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls>())
	,l3vpn_ipv4_multicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast>())
	,l3vpn_ipv4_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast>())
	,l3vpn_ipv6_multicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast>())
	,l3vpn_ipv6_unicast(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State>())
	,use_multiple_paths(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths>())
{
    apply_policy->parent = this;
    config->parent = this;
    graceful_restart->parent = this;
    ipv4_labeled_unicast->parent = this;
    ipv4_unicast->parent = this;
    ipv6_labeled_unicast->parent = this;
    ipv6_unicast->parent = this;
    l2vpn_evpn->parent = this;
    l2vpn_vpls->parent = this;
    l3vpn_ipv4_multicast->parent = this;
    l3vpn_ipv4_unicast->parent = this;
    l3vpn_ipv6_multicast->parent = this;
    l3vpn_ipv6_unicast->parent = this;
    state->parent = this;
    use_multiple_paths->parent = this;

    yang_name = "afi-safi"; yang_parent_name = "afi-safis"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::~AfiSafi()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::has_data() const
{
    return afi_safi_name.is_set
	|| (apply_policy !=  nullptr && apply_policy->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_data())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_data())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_data())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_data())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_data())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_data())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_data())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_data())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_data())
	|| (state !=  nullptr && state->has_data())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| (apply_policy !=  nullptr && apply_policy->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ipv4_labeled_unicast !=  nullptr && ipv4_labeled_unicast->has_operation())
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation())
	|| (ipv6_labeled_unicast !=  nullptr && ipv6_labeled_unicast->has_operation())
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation())
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_operation())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_operation())
	|| (l3vpn_ipv4_multicast !=  nullptr && l3vpn_ipv4_multicast->has_operation())
	|| (l3vpn_ipv4_unicast !=  nullptr && l3vpn_ipv4_unicast->has_operation())
	|| (l3vpn_ipv6_multicast !=  nullptr && l3vpn_ipv6_multicast->has_operation())
	|| (l3vpn_ipv6_unicast !=  nullptr && l3vpn_ipv6_unicast->has_operation())
	|| (state !=  nullptr && state->has_operation())
	|| (use_multiple_paths !=  nullptr && use_multiple_paths->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afi-safi" <<"[afi-safi-name='" <<afi_safi_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "apply-policy")
    {
        if(apply_policy == nullptr)
        {
            apply_policy = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy>();
        }
        return apply_policy;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config>();
        }
        return config;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ipv4-labeled-unicast")
    {
        if(ipv4_labeled_unicast == nullptr)
        {
            ipv4_labeled_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast>();
        }
        return ipv4_labeled_unicast;
    }

    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    if(child_yang_name == "ipv6-labeled-unicast")
    {
        if(ipv6_labeled_unicast == nullptr)
        {
            ipv6_labeled_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast>();
        }
        return ipv6_labeled_unicast;
    }

    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn == nullptr)
        {
            l2vpn_evpn = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn>();
        }
        return l2vpn_evpn;
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls == nullptr)
        {
            l2vpn_vpls = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls>();
        }
        return l2vpn_vpls;
    }

    if(child_yang_name == "l3vpn-ipv4-multicast")
    {
        if(l3vpn_ipv4_multicast == nullptr)
        {
            l3vpn_ipv4_multicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast>();
        }
        return l3vpn_ipv4_multicast;
    }

    if(child_yang_name == "l3vpn-ipv4-unicast")
    {
        if(l3vpn_ipv4_unicast == nullptr)
        {
            l3vpn_ipv4_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast>();
        }
        return l3vpn_ipv4_unicast;
    }

    if(child_yang_name == "l3vpn-ipv6-multicast")
    {
        if(l3vpn_ipv6_multicast == nullptr)
        {
            l3vpn_ipv6_multicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast>();
        }
        return l3vpn_ipv6_multicast;
    }

    if(child_yang_name == "l3vpn-ipv6-unicast")
    {
        if(l3vpn_ipv6_unicast == nullptr)
        {
            l3vpn_ipv6_unicast = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast>();
        }
        return l3vpn_ipv6_unicast;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::State>();
        }
        return state;
    }

    if(child_yang_name == "use-multiple-paths")
    {
        if(use_multiple_paths == nullptr)
        {
            use_multiple_paths = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::UseMultiplePaths>();
        }
        return use_multiple_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(apply_policy != nullptr)
    {
        children["apply-policy"] = apply_policy;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(ipv4_labeled_unicast != nullptr)
    {
        children["ipv4-labeled-unicast"] = ipv4_labeled_unicast;
    }

    if(ipv4_unicast != nullptr)
    {
        children["ipv4-unicast"] = ipv4_unicast;
    }

    if(ipv6_labeled_unicast != nullptr)
    {
        children["ipv6-labeled-unicast"] = ipv6_labeled_unicast;
    }

    if(ipv6_unicast != nullptr)
    {
        children["ipv6-unicast"] = ipv6_unicast;
    }

    if(l2vpn_evpn != nullptr)
    {
        children["l2vpn-evpn"] = l2vpn_evpn;
    }

    if(l2vpn_vpls != nullptr)
    {
        children["l2vpn-vpls"] = l2vpn_vpls;
    }

    if(l3vpn_ipv4_multicast != nullptr)
    {
        children["l3vpn-ipv4-multicast"] = l3vpn_ipv4_multicast;
    }

    if(l3vpn_ipv4_unicast != nullptr)
    {
        children["l3vpn-ipv4-unicast"] = l3vpn_ipv4_unicast;
    }

    if(l3vpn_ipv6_multicast != nullptr)
    {
        children["l3vpn-ipv6-multicast"] = l3vpn_ipv6_multicast;
    }

    if(l3vpn_ipv6_unicast != nullptr)
    {
        children["l3vpn-ipv6-unicast"] = l3vpn_ipv6_unicast;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    if(use_multiple_paths != nullptr)
    {
        children["use-multiple-paths"] = use_multiple_paths;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "apply-policy" || name == "config" || name == "graceful-restart" || name == "ipv4-labeled-unicast" || name == "ipv4-unicast" || name == "ipv6-labeled-unicast" || name == "ipv6-unicast" || name == "l2vpn-evpn" || name == "l2vpn-vpls" || name == "l3vpn-ipv4-multicast" || name == "l3vpn-ipv4-unicast" || name == "l3vpn-ipv6-multicast" || name == "l3vpn-ipv6-unicast" || name == "state" || name == "use-multiple-paths" || name == "afi-safi-name")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::ApplyPolicy()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "apply-policy"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::~ApplyPolicy()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apply-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::Config()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{

    yang_name = "config"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::has_data() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_export_policy.is_set
	|| default_import_policy.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::has_operation() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_export_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(import_policy.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-export-policy" || name == "default-import-policy" || name == "export-policy" || name == "import-policy")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::State()
    :
    default_export_policy{YType::enumeration, "default-export-policy"},
    default_import_policy{YType::enumeration, "default-import-policy"},
    export_policy{YType::str, "export-policy"},
    import_policy{YType::str, "import-policy"}
{

    yang_name = "state"; yang_parent_name = "apply-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::has_data() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_export_policy.is_set
	|| default_import_policy.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::has_operation() const
{
    for (auto const & leaf : export_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : import_policy.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_export_policy.yfilter)
	|| ydk::is_set(default_import_policy.yfilter)
	|| ydk::is_set(export_policy.yfilter)
	|| ydk::is_set(import_policy.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_export_policy.is_set || is_set(default_export_policy.yfilter)) leaf_name_data.push_back(default_export_policy.get_name_leafdata());
    if (default_import_policy.is_set || is_set(default_import_policy.yfilter)) leaf_name_data.push_back(default_import_policy.get_name_leafdata());

    auto export_policy_name_datas = export_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), export_policy_name_datas.begin(), export_policy_name_datas.end());
    auto import_policy_name_datas = import_policy.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), import_policy_name_datas.begin(), import_policy_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy = value;
        default_export_policy.value_namespace = name_space;
        default_export_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy = value;
        default_import_policy.value_namespace = name_space;
        default_import_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-policy")
    {
        export_policy.append(value);
    }
    if(value_path == "import-policy")
    {
        import_policy.append(value);
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-export-policy")
    {
        default_export_policy.yfilter = yfilter;
    }
    if(value_path == "default-import-policy")
    {
        default_import_policy.yfilter = yfilter;
    }
    if(value_path == "export-policy")
    {
        export_policy.yfilter = yfilter;
    }
    if(value_path == "import-policy")
    {
        import_policy.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::ApplyPolicy::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-export-policy" || name == "default-import-policy" || name == "export-policy" || name == "import-policy")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::Config()
    :
    afi_safi_name{YType::identityref, "afi-safi-name"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::has_data() const
{
    return afi_safi_name.is_set
	|| enabled.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "enabled")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::GracefulRestart()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::~GracefulRestart()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::Config()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "config"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::has_data() const
{
    return enabled.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::State()
    :
    advertised{YType::boolean, "advertised"},
    enabled{YType::boolean, "enabled"},
    received{YType::boolean, "received"}
{

    yang_name = "state"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::has_data() const
{
    return advertised.is_set
	|| enabled.is_set
	|| received.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertised.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(received.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertised.is_set || is_set(advertised.yfilter)) leaf_name_data.push_back(advertised.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertised")
    {
        advertised = value;
        advertised.value_namespace = name_space;
        advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertised")
    {
        advertised.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::GracefulRestart::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertised" || name == "enabled" || name == "received")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::Ipv4LabeledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv4-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::~Ipv4LabeledUnicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Ipv4Unicast()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config>())
	,prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State>())
{
    config->parent = this;
    prefix_limit->parent = this;
    state->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::~Ipv4Unicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "prefix-limit" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_data() const
{
    return send_default_route.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_data() const
{
    return send_default_route.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv4Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::Ipv6LabeledUnicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "ipv6-labeled-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::~Ipv6LabeledUnicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-labeled-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-labeled-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6LabeledUnicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Ipv6Unicast()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>())
	,prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>())
{
    config->parent = this;
    prefix_limit->parent = this;
    state->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::~Ipv6Unicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (prefix_limit !=  nullptr && prefix_limit->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config>();
        }
        return config;
    }

    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "prefix-limit" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::Config()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "config"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_data() const
{
    return send_default_route.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::State()
    :
    send_default_route{YType::boolean, "send-default-route"}
{

    yang_name = "state"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_data() const
{
    return send_default_route.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_default_route.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_default_route.is_set || is_set(send_default_route.yfilter)) leaf_name_data.push_back(send_default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-default-route")
    {
        send_default_route = value;
        send_default_route.value_namespace = name_space;
        send_default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-default-route")
    {
        send_default_route.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::Ipv6Unicast::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-default-route")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::L2VpnEvpn()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::~L2VpnEvpn()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnEvpn::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::L2VpnVpls()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l2vpn-vpls"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::~L2VpnVpls()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l2vpn-vpls"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L2VpnVpls::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::L3VpnIpv4Multicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::~L3VpnIpv4Multicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::L3VpnIpv4Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv4-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::~L3VpnIpv4Unicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv4-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv4Unicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::L3VpnIpv6Multicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-multicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::~L3VpnIpv6Multicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::Config()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "config"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::~Config()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::State()
    :
    max_prefixes{YType::uint32, "max-prefixes"},
    restart_timer{YType::str, "restart-timer"},
    shutdown_threshold_pct{YType::uint8, "shutdown-threshold-pct"}
{

    yang_name = "state"; yang_parent_name = "prefix-limit"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::~State()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_data() const
{
    return max_prefixes.is_set
	|| restart_timer.is_set
	|| shutdown_threshold_pct.is_set;
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefixes.yfilter)
	|| ydk::is_set(restart_timer.yfilter)
	|| ydk::is_set(shutdown_threshold_pct.yfilter);
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefixes.is_set || is_set(max_prefixes.yfilter)) leaf_name_data.push_back(max_prefixes.get_name_leafdata());
    if (restart_timer.is_set || is_set(restart_timer.yfilter)) leaf_name_data.push_back(restart_timer.get_name_leafdata());
    if (shutdown_threshold_pct.is_set || is_set(shutdown_threshold_pct.yfilter)) leaf_name_data.push_back(shutdown_threshold_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes = value;
        max_prefixes.value_namespace = name_space;
        max_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-timer")
    {
        restart_timer = value;
        restart_timer.value_namespace = name_space;
        restart_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct = value;
        shutdown_threshold_pct.value_namespace = name_space;
        shutdown_threshold_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefixes")
    {
        max_prefixes.yfilter = yfilter;
    }
    if(value_path == "restart-timer")
    {
        restart_timer.yfilter = yfilter;
    }
    if(value_path == "shutdown-threshold-pct")
    {
        shutdown_threshold_pct.yfilter = yfilter;
    }
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Multicast::PrefixLimit::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefixes" || name == "restart-timer" || name == "shutdown-threshold-pct")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::L3VpnIpv6Unicast()
    :
    prefix_limit(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>())
{
    prefix_limit->parent = this;

    yang_name = "l3vpn-ipv6-unicast"; yang_parent_name = "afi-safi"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::~L3VpnIpv6Unicast()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_data() const
{
    return (prefix_limit !=  nullptr && prefix_limit->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_limit !=  nullptr && prefix_limit->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn-ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-limit")
    {
        if(prefix_limit == nullptr)
        {
            prefix_limit = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit>();
        }
        return prefix_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_limit != nullptr)
    {
        children["prefix-limit"] = prefix_limit;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-limit")
        return true;
    return false;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::PrefixLimit()
    :
    config(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>())
	,state(std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>())
{
    config->parent = this;
    state->parent = this;

    yang_name = "prefix-limit"; yang_parent_name = "l3vpn-ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::~PrefixLimit()
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (state !=  nullptr && state->has_data());
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (state !=  nullptr && state->has_operation());
}

std::string Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::Config>();
        }
        return config;
    }

    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(state != nullptr)
    {
        children["state"] = state;
    }

    return children;
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Neighbors::Neighbor::AfiSafis::AfiSafi::L3VpnIpv6Unicast::PrefixLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "state")
        return true;
    return false;
}


}
}

